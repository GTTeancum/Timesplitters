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

// Function: propDamage
// Address: 0x271998 - 0x2728cc
void propDamage_0x271998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propDamage_0x271998");
#endif

    switch (ctx->pc) {
        case 0x271998u: goto label_271998;
        case 0x27199cu: goto label_27199c;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719a4u: goto label_2719a4;
        case 0x2719a8u: goto label_2719a8;
        case 0x2719acu: goto label_2719ac;
        case 0x2719b0u: goto label_2719b0;
        case 0x2719b4u: goto label_2719b4;
        case 0x2719b8u: goto label_2719b8;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719c0u: goto label_2719c0;
        case 0x2719c4u: goto label_2719c4;
        case 0x2719c8u: goto label_2719c8;
        case 0x2719ccu: goto label_2719cc;
        case 0x2719d0u: goto label_2719d0;
        case 0x2719d4u: goto label_2719d4;
        case 0x2719d8u: goto label_2719d8;
        case 0x2719dcu: goto label_2719dc;
        case 0x2719e0u: goto label_2719e0;
        case 0x2719e4u: goto label_2719e4;
        case 0x2719e8u: goto label_2719e8;
        case 0x2719ecu: goto label_2719ec;
        case 0x2719f0u: goto label_2719f0;
        case 0x2719f4u: goto label_2719f4;
        case 0x2719f8u: goto label_2719f8;
        case 0x2719fcu: goto label_2719fc;
        case 0x271a00u: goto label_271a00;
        case 0x271a04u: goto label_271a04;
        case 0x271a08u: goto label_271a08;
        case 0x271a0cu: goto label_271a0c;
        case 0x271a10u: goto label_271a10;
        case 0x271a14u: goto label_271a14;
        case 0x271a18u: goto label_271a18;
        case 0x271a1cu: goto label_271a1c;
        case 0x271a20u: goto label_271a20;
        case 0x271a24u: goto label_271a24;
        case 0x271a28u: goto label_271a28;
        case 0x271a2cu: goto label_271a2c;
        case 0x271a30u: goto label_271a30;
        case 0x271a34u: goto label_271a34;
        case 0x271a38u: goto label_271a38;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a40u: goto label_271a40;
        case 0x271a44u: goto label_271a44;
        case 0x271a48u: goto label_271a48;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a50u: goto label_271a50;
        case 0x271a54u: goto label_271a54;
        case 0x271a58u: goto label_271a58;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a60u: goto label_271a60;
        case 0x271a64u: goto label_271a64;
        case 0x271a68u: goto label_271a68;
        case 0x271a6cu: goto label_271a6c;
        case 0x271a70u: goto label_271a70;
        case 0x271a74u: goto label_271a74;
        case 0x271a78u: goto label_271a78;
        case 0x271a7cu: goto label_271a7c;
        case 0x271a80u: goto label_271a80;
        case 0x271a84u: goto label_271a84;
        case 0x271a88u: goto label_271a88;
        case 0x271a8cu: goto label_271a8c;
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271a98u: goto label_271a98;
        case 0x271a9cu: goto label_271a9c;
        case 0x271aa0u: goto label_271aa0;
        case 0x271aa4u: goto label_271aa4;
        case 0x271aa8u: goto label_271aa8;
        case 0x271aacu: goto label_271aac;
        case 0x271ab0u: goto label_271ab0;
        case 0x271ab4u: goto label_271ab4;
        case 0x271ab8u: goto label_271ab8;
        case 0x271abcu: goto label_271abc;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ac4u: goto label_271ac4;
        case 0x271ac8u: goto label_271ac8;
        case 0x271accu: goto label_271acc;
        case 0x271ad0u: goto label_271ad0;
        case 0x271ad4u: goto label_271ad4;
        case 0x271ad8u: goto label_271ad8;
        case 0x271adcu: goto label_271adc;
        case 0x271ae0u: goto label_271ae0;
        case 0x271ae4u: goto label_271ae4;
        case 0x271ae8u: goto label_271ae8;
        case 0x271aecu: goto label_271aec;
        case 0x271af0u: goto label_271af0;
        case 0x271af4u: goto label_271af4;
        case 0x271af8u: goto label_271af8;
        case 0x271afcu: goto label_271afc;
        case 0x271b00u: goto label_271b00;
        case 0x271b04u: goto label_271b04;
        case 0x271b08u: goto label_271b08;
        case 0x271b0cu: goto label_271b0c;
        case 0x271b10u: goto label_271b10;
        case 0x271b14u: goto label_271b14;
        case 0x271b18u: goto label_271b18;
        case 0x271b1cu: goto label_271b1c;
        case 0x271b20u: goto label_271b20;
        case 0x271b24u: goto label_271b24;
        case 0x271b28u: goto label_271b28;
        case 0x271b2cu: goto label_271b2c;
        case 0x271b30u: goto label_271b30;
        case 0x271b34u: goto label_271b34;
        case 0x271b38u: goto label_271b38;
        case 0x271b3cu: goto label_271b3c;
        case 0x271b40u: goto label_271b40;
        case 0x271b44u: goto label_271b44;
        case 0x271b48u: goto label_271b48;
        case 0x271b4cu: goto label_271b4c;
        case 0x271b50u: goto label_271b50;
        case 0x271b54u: goto label_271b54;
        case 0x271b58u: goto label_271b58;
        case 0x271b5cu: goto label_271b5c;
        case 0x271b60u: goto label_271b60;
        case 0x271b64u: goto label_271b64;
        case 0x271b68u: goto label_271b68;
        case 0x271b6cu: goto label_271b6c;
        case 0x271b70u: goto label_271b70;
        case 0x271b74u: goto label_271b74;
        case 0x271b78u: goto label_271b78;
        case 0x271b7cu: goto label_271b7c;
        case 0x271b80u: goto label_271b80;
        case 0x271b84u: goto label_271b84;
        case 0x271b88u: goto label_271b88;
        case 0x271b8cu: goto label_271b8c;
        case 0x271b90u: goto label_271b90;
        case 0x271b94u: goto label_271b94;
        case 0x271b98u: goto label_271b98;
        case 0x271b9cu: goto label_271b9c;
        case 0x271ba0u: goto label_271ba0;
        case 0x271ba4u: goto label_271ba4;
        case 0x271ba8u: goto label_271ba8;
        case 0x271bacu: goto label_271bac;
        case 0x271bb0u: goto label_271bb0;
        case 0x271bb4u: goto label_271bb4;
        case 0x271bb8u: goto label_271bb8;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bc0u: goto label_271bc0;
        case 0x271bc4u: goto label_271bc4;
        case 0x271bc8u: goto label_271bc8;
        case 0x271bccu: goto label_271bcc;
        case 0x271bd0u: goto label_271bd0;
        case 0x271bd4u: goto label_271bd4;
        case 0x271bd8u: goto label_271bd8;
        case 0x271bdcu: goto label_271bdc;
        case 0x271be0u: goto label_271be0;
        case 0x271be4u: goto label_271be4;
        case 0x271be8u: goto label_271be8;
        case 0x271becu: goto label_271bec;
        case 0x271bf0u: goto label_271bf0;
        case 0x271bf4u: goto label_271bf4;
        case 0x271bf8u: goto label_271bf8;
        case 0x271bfcu: goto label_271bfc;
        case 0x271c00u: goto label_271c00;
        case 0x271c04u: goto label_271c04;
        case 0x271c08u: goto label_271c08;
        case 0x271c0cu: goto label_271c0c;
        case 0x271c10u: goto label_271c10;
        case 0x271c14u: goto label_271c14;
        case 0x271c18u: goto label_271c18;
        case 0x271c1cu: goto label_271c1c;
        case 0x271c20u: goto label_271c20;
        case 0x271c24u: goto label_271c24;
        case 0x271c28u: goto label_271c28;
        case 0x271c2cu: goto label_271c2c;
        case 0x271c30u: goto label_271c30;
        case 0x271c34u: goto label_271c34;
        case 0x271c38u: goto label_271c38;
        case 0x271c3cu: goto label_271c3c;
        case 0x271c40u: goto label_271c40;
        case 0x271c44u: goto label_271c44;
        case 0x271c48u: goto label_271c48;
        case 0x271c4cu: goto label_271c4c;
        case 0x271c50u: goto label_271c50;
        case 0x271c54u: goto label_271c54;
        case 0x271c58u: goto label_271c58;
        case 0x271c5cu: goto label_271c5c;
        case 0x271c60u: goto label_271c60;
        case 0x271c64u: goto label_271c64;
        case 0x271c68u: goto label_271c68;
        case 0x271c6cu: goto label_271c6c;
        case 0x271c70u: goto label_271c70;
        case 0x271c74u: goto label_271c74;
        case 0x271c78u: goto label_271c78;
        case 0x271c7cu: goto label_271c7c;
        case 0x271c80u: goto label_271c80;
        case 0x271c84u: goto label_271c84;
        case 0x271c88u: goto label_271c88;
        case 0x271c8cu: goto label_271c8c;
        case 0x271c90u: goto label_271c90;
        case 0x271c94u: goto label_271c94;
        case 0x271c98u: goto label_271c98;
        case 0x271c9cu: goto label_271c9c;
        case 0x271ca0u: goto label_271ca0;
        case 0x271ca4u: goto label_271ca4;
        case 0x271ca8u: goto label_271ca8;
        case 0x271cacu: goto label_271cac;
        case 0x271cb0u: goto label_271cb0;
        case 0x271cb4u: goto label_271cb4;
        case 0x271cb8u: goto label_271cb8;
        case 0x271cbcu: goto label_271cbc;
        case 0x271cc0u: goto label_271cc0;
        case 0x271cc4u: goto label_271cc4;
        case 0x271cc8u: goto label_271cc8;
        case 0x271cccu: goto label_271ccc;
        case 0x271cd0u: goto label_271cd0;
        case 0x271cd4u: goto label_271cd4;
        case 0x271cd8u: goto label_271cd8;
        case 0x271cdcu: goto label_271cdc;
        case 0x271ce0u: goto label_271ce0;
        case 0x271ce4u: goto label_271ce4;
        case 0x271ce8u: goto label_271ce8;
        case 0x271cecu: goto label_271cec;
        case 0x271cf0u: goto label_271cf0;
        case 0x271cf4u: goto label_271cf4;
        case 0x271cf8u: goto label_271cf8;
        case 0x271cfcu: goto label_271cfc;
        case 0x271d00u: goto label_271d00;
        case 0x271d04u: goto label_271d04;
        case 0x271d08u: goto label_271d08;
        case 0x271d0cu: goto label_271d0c;
        case 0x271d10u: goto label_271d10;
        case 0x271d14u: goto label_271d14;
        case 0x271d18u: goto label_271d18;
        case 0x271d1cu: goto label_271d1c;
        case 0x271d20u: goto label_271d20;
        case 0x271d24u: goto label_271d24;
        case 0x271d28u: goto label_271d28;
        case 0x271d2cu: goto label_271d2c;
        case 0x271d30u: goto label_271d30;
        case 0x271d34u: goto label_271d34;
        case 0x271d38u: goto label_271d38;
        case 0x271d3cu: goto label_271d3c;
        case 0x271d40u: goto label_271d40;
        case 0x271d44u: goto label_271d44;
        case 0x271d48u: goto label_271d48;
        case 0x271d4cu: goto label_271d4c;
        case 0x271d50u: goto label_271d50;
        case 0x271d54u: goto label_271d54;
        case 0x271d58u: goto label_271d58;
        case 0x271d5cu: goto label_271d5c;
        case 0x271d60u: goto label_271d60;
        case 0x271d64u: goto label_271d64;
        case 0x271d68u: goto label_271d68;
        case 0x271d6cu: goto label_271d6c;
        case 0x271d70u: goto label_271d70;
        case 0x271d74u: goto label_271d74;
        case 0x271d78u: goto label_271d78;
        case 0x271d7cu: goto label_271d7c;
        case 0x271d80u: goto label_271d80;
        case 0x271d84u: goto label_271d84;
        case 0x271d88u: goto label_271d88;
        case 0x271d8cu: goto label_271d8c;
        case 0x271d90u: goto label_271d90;
        case 0x271d94u: goto label_271d94;
        case 0x271d98u: goto label_271d98;
        case 0x271d9cu: goto label_271d9c;
        case 0x271da0u: goto label_271da0;
        case 0x271da4u: goto label_271da4;
        case 0x271da8u: goto label_271da8;
        case 0x271dacu: goto label_271dac;
        case 0x271db0u: goto label_271db0;
        case 0x271db4u: goto label_271db4;
        case 0x271db8u: goto label_271db8;
        case 0x271dbcu: goto label_271dbc;
        case 0x271dc0u: goto label_271dc0;
        case 0x271dc4u: goto label_271dc4;
        case 0x271dc8u: goto label_271dc8;
        case 0x271dccu: goto label_271dcc;
        case 0x271dd0u: goto label_271dd0;
        case 0x271dd4u: goto label_271dd4;
        case 0x271dd8u: goto label_271dd8;
        case 0x271ddcu: goto label_271ddc;
        case 0x271de0u: goto label_271de0;
        case 0x271de4u: goto label_271de4;
        case 0x271de8u: goto label_271de8;
        case 0x271decu: goto label_271dec;
        case 0x271df0u: goto label_271df0;
        case 0x271df4u: goto label_271df4;
        case 0x271df8u: goto label_271df8;
        case 0x271dfcu: goto label_271dfc;
        case 0x271e00u: goto label_271e00;
        case 0x271e04u: goto label_271e04;
        case 0x271e08u: goto label_271e08;
        case 0x271e0cu: goto label_271e0c;
        case 0x271e10u: goto label_271e10;
        case 0x271e14u: goto label_271e14;
        case 0x271e18u: goto label_271e18;
        case 0x271e1cu: goto label_271e1c;
        case 0x271e20u: goto label_271e20;
        case 0x271e24u: goto label_271e24;
        case 0x271e28u: goto label_271e28;
        case 0x271e2cu: goto label_271e2c;
        case 0x271e30u: goto label_271e30;
        case 0x271e34u: goto label_271e34;
        case 0x271e38u: goto label_271e38;
        case 0x271e3cu: goto label_271e3c;
        case 0x271e40u: goto label_271e40;
        case 0x271e44u: goto label_271e44;
        case 0x271e48u: goto label_271e48;
        case 0x271e4cu: goto label_271e4c;
        case 0x271e50u: goto label_271e50;
        case 0x271e54u: goto label_271e54;
        case 0x271e58u: goto label_271e58;
        case 0x271e5cu: goto label_271e5c;
        case 0x271e60u: goto label_271e60;
        case 0x271e64u: goto label_271e64;
        case 0x271e68u: goto label_271e68;
        case 0x271e6cu: goto label_271e6c;
        case 0x271e70u: goto label_271e70;
        case 0x271e74u: goto label_271e74;
        case 0x271e78u: goto label_271e78;
        case 0x271e7cu: goto label_271e7c;
        case 0x271e80u: goto label_271e80;
        case 0x271e84u: goto label_271e84;
        case 0x271e88u: goto label_271e88;
        case 0x271e8cu: goto label_271e8c;
        case 0x271e90u: goto label_271e90;
        case 0x271e94u: goto label_271e94;
        case 0x271e98u: goto label_271e98;
        case 0x271e9cu: goto label_271e9c;
        case 0x271ea0u: goto label_271ea0;
        case 0x271ea4u: goto label_271ea4;
        case 0x271ea8u: goto label_271ea8;
        case 0x271eacu: goto label_271eac;
        case 0x271eb0u: goto label_271eb0;
        case 0x271eb4u: goto label_271eb4;
        case 0x271eb8u: goto label_271eb8;
        case 0x271ebcu: goto label_271ebc;
        case 0x271ec0u: goto label_271ec0;
        case 0x271ec4u: goto label_271ec4;
        case 0x271ec8u: goto label_271ec8;
        case 0x271eccu: goto label_271ecc;
        case 0x271ed0u: goto label_271ed0;
        case 0x271ed4u: goto label_271ed4;
        case 0x271ed8u: goto label_271ed8;
        case 0x271edcu: goto label_271edc;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ee4u: goto label_271ee4;
        case 0x271ee8u: goto label_271ee8;
        case 0x271eecu: goto label_271eec;
        case 0x271ef0u: goto label_271ef0;
        case 0x271ef4u: goto label_271ef4;
        case 0x271ef8u: goto label_271ef8;
        case 0x271efcu: goto label_271efc;
        case 0x271f00u: goto label_271f00;
        case 0x271f04u: goto label_271f04;
        case 0x271f08u: goto label_271f08;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f10u: goto label_271f10;
        case 0x271f14u: goto label_271f14;
        case 0x271f18u: goto label_271f18;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f20u: goto label_271f20;
        case 0x271f24u: goto label_271f24;
        case 0x271f28u: goto label_271f28;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f30u: goto label_271f30;
        case 0x271f34u: goto label_271f34;
        case 0x271f38u: goto label_271f38;
        case 0x271f3cu: goto label_271f3c;
        case 0x271f40u: goto label_271f40;
        case 0x271f44u: goto label_271f44;
        case 0x271f48u: goto label_271f48;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f50u: goto label_271f50;
        case 0x271f54u: goto label_271f54;
        case 0x271f58u: goto label_271f58;
        case 0x271f5cu: goto label_271f5c;
        case 0x271f60u: goto label_271f60;
        case 0x271f64u: goto label_271f64;
        case 0x271f68u: goto label_271f68;
        case 0x271f6cu: goto label_271f6c;
        case 0x271f70u: goto label_271f70;
        case 0x271f74u: goto label_271f74;
        case 0x271f78u: goto label_271f78;
        case 0x271f7cu: goto label_271f7c;
        case 0x271f80u: goto label_271f80;
        case 0x271f84u: goto label_271f84;
        case 0x271f88u: goto label_271f88;
        case 0x271f8cu: goto label_271f8c;
        case 0x271f90u: goto label_271f90;
        case 0x271f94u: goto label_271f94;
        case 0x271f98u: goto label_271f98;
        case 0x271f9cu: goto label_271f9c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fa4u: goto label_271fa4;
        case 0x271fa8u: goto label_271fa8;
        case 0x271facu: goto label_271fac;
        case 0x271fb0u: goto label_271fb0;
        case 0x271fb4u: goto label_271fb4;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fbcu: goto label_271fbc;
        case 0x271fc0u: goto label_271fc0;
        case 0x271fc4u: goto label_271fc4;
        case 0x271fc8u: goto label_271fc8;
        case 0x271fccu: goto label_271fcc;
        case 0x271fd0u: goto label_271fd0;
        case 0x271fd4u: goto label_271fd4;
        case 0x271fd8u: goto label_271fd8;
        case 0x271fdcu: goto label_271fdc;
        case 0x271fe0u: goto label_271fe0;
        case 0x271fe4u: goto label_271fe4;
        case 0x271fe8u: goto label_271fe8;
        case 0x271fecu: goto label_271fec;
        case 0x271ff0u: goto label_271ff0;
        case 0x271ff4u: goto label_271ff4;
        case 0x271ff8u: goto label_271ff8;
        case 0x271ffcu: goto label_271ffc;
        case 0x272000u: goto label_272000;
        case 0x272004u: goto label_272004;
        case 0x272008u: goto label_272008;
        case 0x27200cu: goto label_27200c;
        case 0x272010u: goto label_272010;
        case 0x272014u: goto label_272014;
        case 0x272018u: goto label_272018;
        case 0x27201cu: goto label_27201c;
        case 0x272020u: goto label_272020;
        case 0x272024u: goto label_272024;
        case 0x272028u: goto label_272028;
        case 0x27202cu: goto label_27202c;
        case 0x272030u: goto label_272030;
        case 0x272034u: goto label_272034;
        case 0x272038u: goto label_272038;
        case 0x27203cu: goto label_27203c;
        case 0x272040u: goto label_272040;
        case 0x272044u: goto label_272044;
        case 0x272048u: goto label_272048;
        case 0x27204cu: goto label_27204c;
        case 0x272050u: goto label_272050;
        case 0x272054u: goto label_272054;
        case 0x272058u: goto label_272058;
        case 0x27205cu: goto label_27205c;
        case 0x272060u: goto label_272060;
        case 0x272064u: goto label_272064;
        case 0x272068u: goto label_272068;
        case 0x27206cu: goto label_27206c;
        case 0x272070u: goto label_272070;
        case 0x272074u: goto label_272074;
        case 0x272078u: goto label_272078;
        case 0x27207cu: goto label_27207c;
        case 0x272080u: goto label_272080;
        case 0x272084u: goto label_272084;
        case 0x272088u: goto label_272088;
        case 0x27208cu: goto label_27208c;
        case 0x272090u: goto label_272090;
        case 0x272094u: goto label_272094;
        case 0x272098u: goto label_272098;
        case 0x27209cu: goto label_27209c;
        case 0x2720a0u: goto label_2720a0;
        case 0x2720a4u: goto label_2720a4;
        case 0x2720a8u: goto label_2720a8;
        case 0x2720acu: goto label_2720ac;
        case 0x2720b0u: goto label_2720b0;
        case 0x2720b4u: goto label_2720b4;
        case 0x2720b8u: goto label_2720b8;
        case 0x2720bcu: goto label_2720bc;
        case 0x2720c0u: goto label_2720c0;
        case 0x2720c4u: goto label_2720c4;
        case 0x2720c8u: goto label_2720c8;
        case 0x2720ccu: goto label_2720cc;
        case 0x2720d0u: goto label_2720d0;
        case 0x2720d4u: goto label_2720d4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720dcu: goto label_2720dc;
        case 0x2720e0u: goto label_2720e0;
        case 0x2720e4u: goto label_2720e4;
        case 0x2720e8u: goto label_2720e8;
        case 0x2720ecu: goto label_2720ec;
        case 0x2720f0u: goto label_2720f0;
        case 0x2720f4u: goto label_2720f4;
        case 0x2720f8u: goto label_2720f8;
        case 0x2720fcu: goto label_2720fc;
        case 0x272100u: goto label_272100;
        case 0x272104u: goto label_272104;
        case 0x272108u: goto label_272108;
        case 0x27210cu: goto label_27210c;
        case 0x272110u: goto label_272110;
        case 0x272114u: goto label_272114;
        case 0x272118u: goto label_272118;
        case 0x27211cu: goto label_27211c;
        case 0x272120u: goto label_272120;
        case 0x272124u: goto label_272124;
        case 0x272128u: goto label_272128;
        case 0x27212cu: goto label_27212c;
        case 0x272130u: goto label_272130;
        case 0x272134u: goto label_272134;
        case 0x272138u: goto label_272138;
        case 0x27213cu: goto label_27213c;
        case 0x272140u: goto label_272140;
        case 0x272144u: goto label_272144;
        case 0x272148u: goto label_272148;
        case 0x27214cu: goto label_27214c;
        case 0x272150u: goto label_272150;
        case 0x272154u: goto label_272154;
        case 0x272158u: goto label_272158;
        case 0x27215cu: goto label_27215c;
        case 0x272160u: goto label_272160;
        case 0x272164u: goto label_272164;
        case 0x272168u: goto label_272168;
        case 0x27216cu: goto label_27216c;
        case 0x272170u: goto label_272170;
        case 0x272174u: goto label_272174;
        case 0x272178u: goto label_272178;
        case 0x27217cu: goto label_27217c;
        case 0x272180u: goto label_272180;
        case 0x272184u: goto label_272184;
        case 0x272188u: goto label_272188;
        case 0x27218cu: goto label_27218c;
        case 0x272190u: goto label_272190;
        case 0x272194u: goto label_272194;
        case 0x272198u: goto label_272198;
        case 0x27219cu: goto label_27219c;
        case 0x2721a0u: goto label_2721a0;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721a8u: goto label_2721a8;
        case 0x2721acu: goto label_2721ac;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b4u: goto label_2721b4;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721c0u: goto label_2721c0;
        case 0x2721c4u: goto label_2721c4;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721ccu: goto label_2721cc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721d4u: goto label_2721d4;
        case 0x2721d8u: goto label_2721d8;
        case 0x2721dcu: goto label_2721dc;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721e4u: goto label_2721e4;
        case 0x2721e8u: goto label_2721e8;
        case 0x2721ecu: goto label_2721ec;
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f4u: goto label_2721f4;
        case 0x2721f8u: goto label_2721f8;
        case 0x2721fcu: goto label_2721fc;
        case 0x272200u: goto label_272200;
        case 0x272204u: goto label_272204;
        case 0x272208u: goto label_272208;
        case 0x27220cu: goto label_27220c;
        case 0x272210u: goto label_272210;
        case 0x272214u: goto label_272214;
        case 0x272218u: goto label_272218;
        case 0x27221cu: goto label_27221c;
        case 0x272220u: goto label_272220;
        case 0x272224u: goto label_272224;
        case 0x272228u: goto label_272228;
        case 0x27222cu: goto label_27222c;
        case 0x272230u: goto label_272230;
        case 0x272234u: goto label_272234;
        case 0x272238u: goto label_272238;
        case 0x27223cu: goto label_27223c;
        case 0x272240u: goto label_272240;
        case 0x272244u: goto label_272244;
        case 0x272248u: goto label_272248;
        case 0x27224cu: goto label_27224c;
        case 0x272250u: goto label_272250;
        case 0x272254u: goto label_272254;
        case 0x272258u: goto label_272258;
        case 0x27225cu: goto label_27225c;
        case 0x272260u: goto label_272260;
        case 0x272264u: goto label_272264;
        case 0x272268u: goto label_272268;
        case 0x27226cu: goto label_27226c;
        case 0x272270u: goto label_272270;
        case 0x272274u: goto label_272274;
        case 0x272278u: goto label_272278;
        case 0x27227cu: goto label_27227c;
        case 0x272280u: goto label_272280;
        case 0x272284u: goto label_272284;
        case 0x272288u: goto label_272288;
        case 0x27228cu: goto label_27228c;
        case 0x272290u: goto label_272290;
        case 0x272294u: goto label_272294;
        case 0x272298u: goto label_272298;
        case 0x27229cu: goto label_27229c;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a4u: goto label_2722a4;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722acu: goto label_2722ac;
        case 0x2722b0u: goto label_2722b0;
        case 0x2722b4u: goto label_2722b4;
        case 0x2722b8u: goto label_2722b8;
        case 0x2722bcu: goto label_2722bc;
        case 0x2722c0u: goto label_2722c0;
        case 0x2722c4u: goto label_2722c4;
        case 0x2722c8u: goto label_2722c8;
        case 0x2722ccu: goto label_2722cc;
        case 0x2722d0u: goto label_2722d0;
        case 0x2722d4u: goto label_2722d4;
        case 0x2722d8u: goto label_2722d8;
        case 0x2722dcu: goto label_2722dc;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722e4u: goto label_2722e4;
        case 0x2722e8u: goto label_2722e8;
        case 0x2722ecu: goto label_2722ec;
        case 0x2722f0u: goto label_2722f0;
        case 0x2722f4u: goto label_2722f4;
        case 0x2722f8u: goto label_2722f8;
        case 0x2722fcu: goto label_2722fc;
        case 0x272300u: goto label_272300;
        case 0x272304u: goto label_272304;
        case 0x272308u: goto label_272308;
        case 0x27230cu: goto label_27230c;
        case 0x272310u: goto label_272310;
        case 0x272314u: goto label_272314;
        case 0x272318u: goto label_272318;
        case 0x27231cu: goto label_27231c;
        case 0x272320u: goto label_272320;
        case 0x272324u: goto label_272324;
        case 0x272328u: goto label_272328;
        case 0x27232cu: goto label_27232c;
        case 0x272330u: goto label_272330;
        case 0x272334u: goto label_272334;
        case 0x272338u: goto label_272338;
        case 0x27233cu: goto label_27233c;
        case 0x272340u: goto label_272340;
        case 0x272344u: goto label_272344;
        case 0x272348u: goto label_272348;
        case 0x27234cu: goto label_27234c;
        case 0x272350u: goto label_272350;
        case 0x272354u: goto label_272354;
        case 0x272358u: goto label_272358;
        case 0x27235cu: goto label_27235c;
        case 0x272360u: goto label_272360;
        case 0x272364u: goto label_272364;
        case 0x272368u: goto label_272368;
        case 0x27236cu: goto label_27236c;
        case 0x272370u: goto label_272370;
        case 0x272374u: goto label_272374;
        case 0x272378u: goto label_272378;
        case 0x27237cu: goto label_27237c;
        case 0x272380u: goto label_272380;
        case 0x272384u: goto label_272384;
        case 0x272388u: goto label_272388;
        case 0x27238cu: goto label_27238c;
        case 0x272390u: goto label_272390;
        case 0x272394u: goto label_272394;
        case 0x272398u: goto label_272398;
        case 0x27239cu: goto label_27239c;
        case 0x2723a0u: goto label_2723a0;
        case 0x2723a4u: goto label_2723a4;
        case 0x2723a8u: goto label_2723a8;
        case 0x2723acu: goto label_2723ac;
        case 0x2723b0u: goto label_2723b0;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723b8u: goto label_2723b8;
        case 0x2723bcu: goto label_2723bc;
        case 0x2723c0u: goto label_2723c0;
        case 0x2723c4u: goto label_2723c4;
        case 0x2723c8u: goto label_2723c8;
        case 0x2723ccu: goto label_2723cc;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723d4u: goto label_2723d4;
        case 0x2723d8u: goto label_2723d8;
        case 0x2723dcu: goto label_2723dc;
        case 0x2723e0u: goto label_2723e0;
        case 0x2723e4u: goto label_2723e4;
        case 0x2723e8u: goto label_2723e8;
        case 0x2723ecu: goto label_2723ec;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723f4u: goto label_2723f4;
        case 0x2723f8u: goto label_2723f8;
        case 0x2723fcu: goto label_2723fc;
        case 0x272400u: goto label_272400;
        case 0x272404u: goto label_272404;
        case 0x272408u: goto label_272408;
        case 0x27240cu: goto label_27240c;
        case 0x272410u: goto label_272410;
        case 0x272414u: goto label_272414;
        case 0x272418u: goto label_272418;
        case 0x27241cu: goto label_27241c;
        case 0x272420u: goto label_272420;
        case 0x272424u: goto label_272424;
        case 0x272428u: goto label_272428;
        case 0x27242cu: goto label_27242c;
        case 0x272430u: goto label_272430;
        case 0x272434u: goto label_272434;
        case 0x272438u: goto label_272438;
        case 0x27243cu: goto label_27243c;
        case 0x272440u: goto label_272440;
        case 0x272444u: goto label_272444;
        case 0x272448u: goto label_272448;
        case 0x27244cu: goto label_27244c;
        case 0x272450u: goto label_272450;
        case 0x272454u: goto label_272454;
        case 0x272458u: goto label_272458;
        case 0x27245cu: goto label_27245c;
        case 0x272460u: goto label_272460;
        case 0x272464u: goto label_272464;
        case 0x272468u: goto label_272468;
        case 0x27246cu: goto label_27246c;
        case 0x272470u: goto label_272470;
        case 0x272474u: goto label_272474;
        case 0x272478u: goto label_272478;
        case 0x27247cu: goto label_27247c;
        case 0x272480u: goto label_272480;
        case 0x272484u: goto label_272484;
        case 0x272488u: goto label_272488;
        case 0x27248cu: goto label_27248c;
        case 0x272490u: goto label_272490;
        case 0x272494u: goto label_272494;
        case 0x272498u: goto label_272498;
        case 0x27249cu: goto label_27249c;
        case 0x2724a0u: goto label_2724a0;
        case 0x2724a4u: goto label_2724a4;
        case 0x2724a8u: goto label_2724a8;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b0u: goto label_2724b0;
        case 0x2724b4u: goto label_2724b4;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724bcu: goto label_2724bc;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724c4u: goto label_2724c4;
        case 0x2724c8u: goto label_2724c8;
        case 0x2724ccu: goto label_2724cc;
        case 0x2724d0u: goto label_2724d0;
        case 0x2724d4u: goto label_2724d4;
        case 0x2724d8u: goto label_2724d8;
        case 0x2724dcu: goto label_2724dc;
        case 0x2724e0u: goto label_2724e0;
        case 0x2724e4u: goto label_2724e4;
        case 0x2724e8u: goto label_2724e8;
        case 0x2724ecu: goto label_2724ec;
        case 0x2724f0u: goto label_2724f0;
        case 0x2724f4u: goto label_2724f4;
        case 0x2724f8u: goto label_2724f8;
        case 0x2724fcu: goto label_2724fc;
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        case 0x272570u: goto label_272570;
        case 0x272574u: goto label_272574;
        case 0x272578u: goto label_272578;
        case 0x27257cu: goto label_27257c;
        case 0x272580u: goto label_272580;
        case 0x272584u: goto label_272584;
        case 0x272588u: goto label_272588;
        case 0x27258cu: goto label_27258c;
        case 0x272590u: goto label_272590;
        case 0x272594u: goto label_272594;
        case 0x272598u: goto label_272598;
        case 0x27259cu: goto label_27259c;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725a4u: goto label_2725a4;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725acu: goto label_2725ac;
        case 0x2725b0u: goto label_2725b0;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725bcu: goto label_2725bc;
        case 0x2725c0u: goto label_2725c0;
        case 0x2725c4u: goto label_2725c4;
        case 0x2725c8u: goto label_2725c8;
        case 0x2725ccu: goto label_2725cc;
        case 0x2725d0u: goto label_2725d0;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725d8u: goto label_2725d8;
        case 0x2725dcu: goto label_2725dc;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725e4u: goto label_2725e4;
        case 0x2725e8u: goto label_2725e8;
        case 0x2725ecu: goto label_2725ec;
        case 0x2725f0u: goto label_2725f0;
        case 0x2725f4u: goto label_2725f4;
        case 0x2725f8u: goto label_2725f8;
        case 0x2725fcu: goto label_2725fc;
        case 0x272600u: goto label_272600;
        case 0x272604u: goto label_272604;
        case 0x272608u: goto label_272608;
        case 0x27260cu: goto label_27260c;
        case 0x272610u: goto label_272610;
        case 0x272614u: goto label_272614;
        case 0x272618u: goto label_272618;
        case 0x27261cu: goto label_27261c;
        case 0x272620u: goto label_272620;
        case 0x272624u: goto label_272624;
        case 0x272628u: goto label_272628;
        case 0x27262cu: goto label_27262c;
        case 0x272630u: goto label_272630;
        case 0x272634u: goto label_272634;
        case 0x272638u: goto label_272638;
        case 0x27263cu: goto label_27263c;
        case 0x272640u: goto label_272640;
        case 0x272644u: goto label_272644;
        case 0x272648u: goto label_272648;
        case 0x27264cu: goto label_27264c;
        case 0x272650u: goto label_272650;
        case 0x272654u: goto label_272654;
        case 0x272658u: goto label_272658;
        case 0x27265cu: goto label_27265c;
        case 0x272660u: goto label_272660;
        case 0x272664u: goto label_272664;
        case 0x272668u: goto label_272668;
        case 0x27266cu: goto label_27266c;
        case 0x272670u: goto label_272670;
        case 0x272674u: goto label_272674;
        case 0x272678u: goto label_272678;
        case 0x27267cu: goto label_27267c;
        case 0x272680u: goto label_272680;
        case 0x272684u: goto label_272684;
        case 0x272688u: goto label_272688;
        case 0x27268cu: goto label_27268c;
        case 0x272690u: goto label_272690;
        case 0x272694u: goto label_272694;
        case 0x272698u: goto label_272698;
        case 0x27269cu: goto label_27269c;
        case 0x2726a0u: goto label_2726a0;
        case 0x2726a4u: goto label_2726a4;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726acu: goto label_2726ac;
        case 0x2726b0u: goto label_2726b0;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726b8u: goto label_2726b8;
        case 0x2726bcu: goto label_2726bc;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726c8u: goto label_2726c8;
        case 0x2726ccu: goto label_2726cc;
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d4u: goto label_2726d4;
        case 0x2726d8u: goto label_2726d8;
        case 0x2726dcu: goto label_2726dc;
        case 0x2726e0u: goto label_2726e0;
        case 0x2726e4u: goto label_2726e4;
        case 0x2726e8u: goto label_2726e8;
        case 0x2726ecu: goto label_2726ec;
        case 0x2726f0u: goto label_2726f0;
        case 0x2726f4u: goto label_2726f4;
        case 0x2726f8u: goto label_2726f8;
        case 0x2726fcu: goto label_2726fc;
        case 0x272700u: goto label_272700;
        case 0x272704u: goto label_272704;
        case 0x272708u: goto label_272708;
        case 0x27270cu: goto label_27270c;
        case 0x272710u: goto label_272710;
        case 0x272714u: goto label_272714;
        case 0x272718u: goto label_272718;
        case 0x27271cu: goto label_27271c;
        case 0x272720u: goto label_272720;
        case 0x272724u: goto label_272724;
        case 0x272728u: goto label_272728;
        case 0x27272cu: goto label_27272c;
        case 0x272730u: goto label_272730;
        case 0x272734u: goto label_272734;
        case 0x272738u: goto label_272738;
        case 0x27273cu: goto label_27273c;
        case 0x272740u: goto label_272740;
        case 0x272744u: goto label_272744;
        case 0x272748u: goto label_272748;
        case 0x27274cu: goto label_27274c;
        case 0x272750u: goto label_272750;
        case 0x272754u: goto label_272754;
        case 0x272758u: goto label_272758;
        case 0x27275cu: goto label_27275c;
        case 0x272760u: goto label_272760;
        case 0x272764u: goto label_272764;
        case 0x272768u: goto label_272768;
        case 0x27276cu: goto label_27276c;
        case 0x272770u: goto label_272770;
        case 0x272774u: goto label_272774;
        case 0x272778u: goto label_272778;
        case 0x27277cu: goto label_27277c;
        case 0x272780u: goto label_272780;
        case 0x272784u: goto label_272784;
        case 0x272788u: goto label_272788;
        case 0x27278cu: goto label_27278c;
        case 0x272790u: goto label_272790;
        case 0x272794u: goto label_272794;
        case 0x272798u: goto label_272798;
        case 0x27279cu: goto label_27279c;
        case 0x2727a0u: goto label_2727a0;
        case 0x2727a4u: goto label_2727a4;
        case 0x2727a8u: goto label_2727a8;
        case 0x2727acu: goto label_2727ac;
        case 0x2727b0u: goto label_2727b0;
        case 0x2727b4u: goto label_2727b4;
        case 0x2727b8u: goto label_2727b8;
        case 0x2727bcu: goto label_2727bc;
        case 0x2727c0u: goto label_2727c0;
        case 0x2727c4u: goto label_2727c4;
        case 0x2727c8u: goto label_2727c8;
        case 0x2727ccu: goto label_2727cc;
        case 0x2727d0u: goto label_2727d0;
        case 0x2727d4u: goto label_2727d4;
        case 0x2727d8u: goto label_2727d8;
        case 0x2727dcu: goto label_2727dc;
        case 0x2727e0u: goto label_2727e0;
        case 0x2727e4u: goto label_2727e4;
        case 0x2727e8u: goto label_2727e8;
        case 0x2727ecu: goto label_2727ec;
        case 0x2727f0u: goto label_2727f0;
        case 0x2727f4u: goto label_2727f4;
        case 0x2727f8u: goto label_2727f8;
        case 0x2727fcu: goto label_2727fc;
        case 0x272800u: goto label_272800;
        case 0x272804u: goto label_272804;
        case 0x272808u: goto label_272808;
        case 0x27280cu: goto label_27280c;
        case 0x272810u: goto label_272810;
        case 0x272814u: goto label_272814;
        case 0x272818u: goto label_272818;
        case 0x27281cu: goto label_27281c;
        case 0x272820u: goto label_272820;
        case 0x272824u: goto label_272824;
        case 0x272828u: goto label_272828;
        case 0x27282cu: goto label_27282c;
        case 0x272830u: goto label_272830;
        case 0x272834u: goto label_272834;
        case 0x272838u: goto label_272838;
        case 0x27283cu: goto label_27283c;
        case 0x272840u: goto label_272840;
        case 0x272844u: goto label_272844;
        case 0x272848u: goto label_272848;
        case 0x27284cu: goto label_27284c;
        case 0x272850u: goto label_272850;
        case 0x272854u: goto label_272854;
        case 0x272858u: goto label_272858;
        case 0x27285cu: goto label_27285c;
        case 0x272860u: goto label_272860;
        case 0x272864u: goto label_272864;
        case 0x272868u: goto label_272868;
        case 0x27286cu: goto label_27286c;
        case 0x272870u: goto label_272870;
        case 0x272874u: goto label_272874;
        case 0x272878u: goto label_272878;
        case 0x27287cu: goto label_27287c;
        case 0x272880u: goto label_272880;
        case 0x272884u: goto label_272884;
        case 0x272888u: goto label_272888;
        case 0x27288cu: goto label_27288c;
        case 0x272890u: goto label_272890;
        case 0x272894u: goto label_272894;
        case 0x272898u: goto label_272898;
        case 0x27289cu: goto label_27289c;
        case 0x2728a0u: goto label_2728a0;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728a8u: goto label_2728a8;
        case 0x2728acu: goto label_2728ac;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b4u: goto label_2728b4;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728bcu: goto label_2728bc;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728c4u: goto label_2728c4;
        case 0x2728c8u: goto label_2728c8;
        default: break;
    }

    ctx->pc = 0x271998u;

label_271998:
    // 0x271998: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x271998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_27199c:
    // 0x27199c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x27199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_2719a0:
    // 0x2719a0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2719a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2719a4:
    // 0x2719a4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2719a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2719a8:
    // 0x2719a8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2719a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_2719ac:
    // 0x2719ac: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2719acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_2719b0:
    // 0x2719b0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2719b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2719b4:
    // 0x2719b4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2719b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_2719b8:
    // 0x2719b8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2719b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2719bc:
    // 0x2719bc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2719bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2719c0:
    // 0x2719c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2719c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2719c4:
    // 0x2719c4: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2719c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2719c8:
    // 0x2719c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2719c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2719cc:
    // 0x2719cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2719ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2719d0:
    // 0x2719d0: 0x4600ae06  mov.s       $f24, $f21
    ctx->pc = 0x2719d0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
label_2719d4:
    // 0x2719d4: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2719d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_2719d8:
    // 0x2719d8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2719d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_2719dc:
    // 0x2719dc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2719dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2719e0:
    // 0x2719e0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2719e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2719e4:
    // 0x2719e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2719e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2719e8:
    // 0x2719e8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2719e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2719ec:
    // 0x2719ec: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2719ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2719f0:
    // 0x2719f0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2719f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2719f4:
    // 0x2719f4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2719f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_2719f8:
    // 0x2719f8: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2719f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_2719fc:
    // 0x2719fc: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x2719fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_271a00:
    // 0x271a00: 0x104003a1  beqz        $v0, . + 4 + (0x3A1 << 2)
label_271a04:
    if (ctx->pc == 0x271A04u) {
        ctx->pc = 0x271A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A00u;
        // 0x271a04: 0xafab001c  sw          $t3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A08u;
        goto label_271a08;
    }
    ctx->pc = 0x271A00u;
    {
        const bool branch_taken_0x271a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A00u;
        // 0x271a04: 0xafab001c  sw          $t3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a00) {
            ctx->pc = 0x272888u;
            goto label_272888;
        }
    }
    ctx->pc = 0x271A08u;
label_271a08:
    // 0x271a08: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_271a0c:
    if (ctx->pc == 0x271A0Cu) {
        ctx->pc = 0x271A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A08u;
        // 0x271a0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A10u;
        goto label_271a10;
    }
    ctx->pc = 0x271A08u;
    {
        const bool branch_taken_0x271a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A08u;
        // 0x271a0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a08) {
            ctx->pc = 0x271A44u;
            goto label_271a44;
        }
    }
    ctx->pc = 0x271A10u;
label_271a10:
    // 0x271a10: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x271a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_271a14:
    // 0x271a14: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_271a18:
    if (ctx->pc == 0x271A18u) {
        ctx->pc = 0x271A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A14u;
        // 0x271a18: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A1Cu;
        goto label_271a1c;
    }
    ctx->pc = 0x271A14u;
    {
        const bool branch_taken_0x271a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x271A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A14u;
        // 0x271a18: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a14) {
            ctx->pc = 0x271A44u;
            goto label_271a44;
        }
    }
    ctx->pc = 0x271A1Cu;
label_271a1c:
    // 0x271a1c: 0x8e440160  lw          $a0, 0x160($s2)
    ctx->pc = 0x271a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_271a20:
    // 0x271a20: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x271a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_271a24:
    // 0x271a24: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_271a28:
    if (ctx->pc == 0x271A28u) {
        ctx->pc = 0x271A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A24u;
        // 0x271a28: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A2Cu;
        goto label_271a2c;
    }
    ctx->pc = 0x271A24u;
    {
        const bool branch_taken_0x271a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x271A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A24u;
        // 0x271a28: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a24) {
            ctx->pc = 0x271A44u;
            goto label_271a44;
        }
    }
    ctx->pc = 0x271A2Cu;
label_271a2c:
    // 0x271a2c: 0x8c830a9c  lw          $v1, 0xA9C($a0)
    ctx->pc = 0x271a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
label_271a30:
    // 0x271a30: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_271a34:
    if (ctx->pc == 0x271A34u) {
        ctx->pc = 0x271A38u;
        goto label_271a38;
    }
    ctx->pc = 0x271A30u;
    {
        const bool branch_taken_0x271a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x271a30) {
            ctx->pc = 0x271A44u;
            goto label_271a44;
        }
    }
    ctx->pc = 0x271A38u;
label_271a38:
    // 0x271a38: 0x8c820aa8  lw          $v0, 0xAA8($a0)
    ctx->pc = 0x271a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2728)));
label_271a3c:
    // 0x271a3c: 0x10400393  beqz        $v0, . + 4 + (0x393 << 2)
label_271a40:
    if (ctx->pc == 0x271A40u) {
        ctx->pc = 0x271A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A3Cu;
        // 0x271a40: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A44u;
        goto label_271a44;
    }
    ctx->pc = 0x271A3Cu;
    {
        const bool branch_taken_0x271a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A3Cu;
        // 0x271a40: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a3c) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x271A44u;
label_271a44:
    // 0x271a44: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_271a48:
    if (ctx->pc == 0x271A48u) {
        ctx->pc = 0x271A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A44u;
        // 0x271a48: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A4Cu;
        goto label_271a4c;
    }
    ctx->pc = 0x271A44u;
    {
        const bool branch_taken_0x271a44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A44u;
        // 0x271a48: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a44) {
            ctx->pc = 0x271A80u;
            goto label_271a80;
        }
    }
    ctx->pc = 0x271A4Cu;
label_271a4c:
    // 0x271a4c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x271a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_271a50:
    // 0x271a50: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_271a54:
    if (ctx->pc == 0x271A54u) {
        ctx->pc = 0x271A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A50u;
        // 0x271a54: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A58u;
        goto label_271a58;
    }
    ctx->pc = 0x271A50u;
    {
        const bool branch_taken_0x271a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x271a50) {
            ctx->pc = 0x271A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271A50u;
            // 0x271a54: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A84u;
            goto label_271a84;
        }
    }
    ctx->pc = 0x271A58u;
label_271a58:
    // 0x271a58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x271a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_271a5c:
    // 0x271a5c: 0x8e620160  lw          $v0, 0x160($s3)
    ctx->pc = 0x271a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_271a60:
    // 0x271a60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271a64:
    // 0x271a64: 0xe4400b74  swc1        $f0, 0xB74($v0)
    ctx->pc = 0x271a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2932), bits); }
label_271a68:
    // 0x271a68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x271a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271a6c:
    // 0x271a6c: 0xe4410b78  swc1        $f1, 0xB78($v0)
    ctx->pc = 0x271a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2936), bits); }
label_271a70:
    // 0x271a70: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x271a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271a74:
    // 0x271a74: 0x6c00002  bltz        $s6, . + 4 + (0x2 << 2)
label_271a78:
    if (ctx->pc == 0x271A78u) {
        ctx->pc = 0x271A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A74u;
        // 0x271a78: 0xe4400b7c  swc1        $f0, 0xB7C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A7Cu;
        goto label_271a7c;
    }
    ctx->pc = 0x271A74u;
    {
        const bool branch_taken_0x271a74 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x271A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A74u;
        // 0x271a78: 0xe4400b7c  swc1        $f0, 0xB7C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a74) {
            ctx->pc = 0x271A80u;
            goto label_271a80;
        }
    }
    ctx->pc = 0x271A7Cu;
label_271a7c:
    // 0x271a7c: 0xac560b80  sw          $s6, 0xB80($v0)
    ctx->pc = 0x271a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2944), GPR_U32(ctx, 22));
label_271a80:
    // 0x271a80: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x271a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_271a84:
    // 0x271a84: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x271a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_271a88:
    // 0x271a88: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_271a8c:
    if (ctx->pc == 0x271A8Cu) {
        ctx->pc = 0x271A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A88u;
        // 0x271a8c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A90u;
        goto label_271a90;
    }
    ctx->pc = 0x271A88u;
    {
        const bool branch_taken_0x271a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271a88) {
            ctx->pc = 0x271A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271A88u;
            // 0x271a8c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271AA4u;
            goto label_271aa4;
        }
    }
    ctx->pc = 0x271A90u;
label_271a90:
    // 0x271a90: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x271a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_271a94:
    // 0x271a94: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x271a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_271a98:
    // 0x271a98: 0x1040037c  beqz        $v0, . + 4 + (0x37C << 2)
label_271a9c:
    if (ctx->pc == 0x271A9Cu) {
        ctx->pc = 0x271A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A98u;
        // 0x271a9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AA0u;
        goto label_271aa0;
    }
    ctx->pc = 0x271A98u;
    {
        const bool branch_taken_0x271a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A98u;
        // 0x271a9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a98) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x271AA0u;
label_271aa0:
    // 0x271aa0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x271aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_271aa4:
    // 0x271aa4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x271aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_271aa8:
    // 0x271aa8: 0x54620360  bnel        $v1, $v0, . + 4 + (0x360 << 2)
label_271aac:
    if (ctx->pc == 0x271AACu) {
        ctx->pc = 0x271AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AA8u;
        // 0x271aac: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AB0u;
        goto label_271ab0;
    }
    ctx->pc = 0x271AA8u;
    {
        const bool branch_taken_0x271aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x271aa8) {
            ctx->pc = 0x271AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271AA8u;
            // 0x271aac: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27282Cu;
            goto label_27282c;
        }
    }
    ctx->pc = 0x271AB0u;
label_271ab0:
    // 0x271ab0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271ab4:
    // 0x271ab4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x271ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_271ab8:
    // 0x271ab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x271ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271abc:
    // 0x271abc: 0x8e540164  lw          $s4, 0x164($s2)
    ctx->pc = 0x271abcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_271ac0:
    // 0x271ac0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_271ac4:
    if (ctx->pc == 0x271AC4u) {
        ctx->pc = 0x271AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AC0u;
        // 0x271ac4: 0x8e550160  lw          $s5, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AC8u;
        goto label_271ac8;
    }
    ctx->pc = 0x271AC0u;
    {
        const bool branch_taken_0x271ac0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AC0u;
        // 0x271ac4: 0x8e550160  lw          $s5, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ac0) {
            ctx->pc = 0x271AD4u;
            goto label_271ad4;
        }
    }
    ctx->pc = 0x271AC8u;
label_271ac8:
    // 0x271ac8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x271ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_271acc:
    // 0x271acc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_271ad0:
    if (ctx->pc == 0x271AD0u) {
        ctx->pc = 0x271AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ACCu;
        // 0x271ad0: 0x8e710160  lw          $s1, 0x160($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AD4u;
        goto label_271ad4;
    }
    ctx->pc = 0x271ACCu;
    {
        const bool branch_taken_0x271acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271acc) {
            ctx->pc = 0x271AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271ACCu;
            // 0x271ad0: 0x8e710160  lw          $s1, 0x160($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271AD4u;
            goto label_271ad4;
        }
    }
    ctx->pc = 0x271AD4u;
label_271ad4:
    // 0x271ad4: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x271ad4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
label_271ad8:
    // 0x271ad8: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x271ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_271adc:
    // 0x271adc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x271adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_271ae0:
    // 0x271ae0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x271ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_271ae4:
    // 0x271ae4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_271ae8:
    if (ctx->pc == 0x271AE8u) {
        ctx->pc = 0x271AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AE4u;
        // 0x271ae8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AECu;
        goto label_271aec;
    }
    ctx->pc = 0x271AE4u;
    {
        const bool branch_taken_0x271ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AE4u;
        // 0x271ae8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ae4) {
            ctx->pc = 0x271B3Cu;
            goto label_271b3c;
        }
    }
    ctx->pc = 0x271AECu;
label_271aec:
    // 0x271aec: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x271aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_271af0:
    // 0x271af0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_271af4:
    if (ctx->pc == 0x271AF4u) {
        ctx->pc = 0x271AF8u;
        goto label_271af8;
    }
    ctx->pc = 0x271AF0u;
    {
        const bool branch_taken_0x271af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271af0) {
            ctx->pc = 0x271B3Cu;
            goto label_271b3c;
        }
    }
    ctx->pc = 0x271AF8u;
label_271af8:
    // 0x271af8: 0xc087c18  jal         func_21F060
label_271afc:
    if (ctx->pc == 0x271AFCu) {
        ctx->pc = 0x271B00u;
        goto label_271b00;
    }
    ctx->pc = 0x271AF8u;
    SET_GPR_U32(ctx, 31, 0x271B00u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x271AF8u, 0x271B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B00u;
label_271b00:
    // 0x271b00: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x271b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271b04:
    // 0x271b04: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_271b08:
    // 0x271b08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x271b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_271b0c:
    // 0x271b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_271b10:
    // 0x271b10: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x271b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271b14:
    // 0x271b14: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_271b18:
    if (ctx->pc == 0x271B18u) {
        ctx->pc = 0x271B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B14u;
        // 0x271b18: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B1Cu;
        goto label_271b1c;
    }
    ctx->pc = 0x271B14u;
    {
        const bool branch_taken_0x271b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B14u;
        // 0x271b18: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b14) {
            ctx->pc = 0x271C30u;
            goto label_271c30;
        }
    }
    ctx->pc = 0x271B1Cu;
label_271b1c:
    // 0x271b1c: 0xc087c18  jal         func_21F060
label_271b20:
    if (ctx->pc == 0x271B20u) {
        ctx->pc = 0x271B24u;
        goto label_271b24;
    }
    ctx->pc = 0x271B1Cu;
    SET_GPR_U32(ctx, 31, 0x271B24u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x271B1Cu, 0x271B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B24u;
label_271b24:
    // 0x271b24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x271b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271b28:
    // 0x271b28: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x271b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_271b2c:
    // 0x271b2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x271b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_271b30:
    // 0x271b30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_271b34:
    // 0x271b34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x271b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271b38:
    // 0x271b38: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x271b38u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_271b3c:
    // 0x271b3c: 0x5220003d  beql        $s1, $zero, . + 4 + (0x3D << 2)
label_271b40:
    if (ctx->pc == 0x271B40u) {
        ctx->pc = 0x271B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B3Cu;
        // 0x271b40: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B44u;
        goto label_271b44;
    }
    ctx->pc = 0x271B3Cu;
    {
        const bool branch_taken_0x271b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x271b3c) {
            ctx->pc = 0x271B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271B3Cu;
            // 0x271b40: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C34u;
            goto label_271c34;
        }
    }
    ctx->pc = 0x271B44u;
label_271b44:
    // 0x271b44: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_271b48:
    if (ctx->pc == 0x271B48u) {
        ctx->pc = 0x271B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B44u;
        // 0x271b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B4Cu;
        goto label_271b4c;
    }
    ctx->pc = 0x271B44u;
    {
        const bool branch_taken_0x271b44 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B44u;
        // 0x271b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b44) {
            ctx->pc = 0x271B58u;
            goto label_271b58;
        }
    }
    ctx->pc = 0x271B4Cu;
label_271b4c:
    // 0x271b4c: 0x56c20039  bnel        $s6, $v0, . + 4 + (0x39 << 2)
label_271b50:
    if (ctx->pc == 0x271B50u) {
        ctx->pc = 0x271B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B4Cu;
        // 0x271b50: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B54u;
        goto label_271b54;
    }
    ctx->pc = 0x271B4Cu;
    {
        const bool branch_taken_0x271b4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x271b4c) {
            ctx->pc = 0x271B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271B4Cu;
            // 0x271b50: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C34u;
            goto label_271c34;
        }
    }
    ctx->pc = 0x271B54u;
label_271b54:
    // 0x271b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271b58:
    // 0x271b58: 0x56c2000d  bnel        $s6, $v0, . + 4 + (0xD << 2)
label_271b5c:
    if (ctx->pc == 0x271B5Cu) {
        ctx->pc = 0x271B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B58u;
        // 0x271b5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B60u;
        goto label_271b60;
    }
    ctx->pc = 0x271B58u;
    {
        const bool branch_taken_0x271b58 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x271b58) {
            ctx->pc = 0x271B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271B58u;
            // 0x271b5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271B90u;
            goto label_271b90;
        }
    }
    ctx->pc = 0x271B60u;
label_271b60:
    // 0x271b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271b64:
    // 0x271b64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_271b68:
    // 0x271b68: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x271b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_271b6c:
    // 0x271b6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271b70:
    // 0x271b70: 0xc088f98  jal         func_223E60
label_271b74:
    if (ctx->pc == 0x271B74u) {
        ctx->pc = 0x271B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B70u;
        // 0x271b74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B78u;
        goto label_271b78;
    }
    ctx->pc = 0x271B70u;
    SET_GPR_U32(ctx, 31, 0x271B78u);
    ctx->pc = 0x271B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B70u;
    // 0x271b74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271B70u, 0x271B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B78u;
label_271b78:
    // 0x271b78: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271b7c:
    // 0x271b7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x271b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_271b80:
    // 0x271b80: 0xc088f98  jal         func_223E60
label_271b84:
    if (ctx->pc == 0x271B84u) {
        ctx->pc = 0x271B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B80u;
        // 0x271b84: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B88u;
        goto label_271b88;
    }
    ctx->pc = 0x271B80u;
    SET_GPR_U32(ctx, 31, 0x271B88u);
    ctx->pc = 0x271B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B80u;
    // 0x271b84: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271B80u, 0x271B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B88u;
label_271b88:
    // 0x271b88: 0x1000001f  b           . + 4 + (0x1F << 2)
label_271b8c:
    if (ctx->pc == 0x271B8Cu) {
        ctx->pc = 0x271B90u;
        goto label_271b90;
    }
    ctx->pc = 0x271B88u;
    {
        const bool branch_taken_0x271b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271b88) {
            ctx->pc = 0x271C08u;
            goto label_271c08;
        }
    }
    ctx->pc = 0x271B90u;
label_271b90:
    // 0x271b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271b94:
    // 0x271b94: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x271b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_271b98:
    // 0x271b98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271b9c:
    // 0x271b9c: 0x8e260104  lw          $a2, 0x104($s1)
    ctx->pc = 0x271b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_271ba0:
    // 0x271ba0: 0xc08906a  jal         func_2241A8
label_271ba4:
    if (ctx->pc == 0x271BA4u) {
        ctx->pc = 0x271BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BA0u;
        // 0x271ba4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BA8u;
        goto label_271ba8;
    }
    ctx->pc = 0x271BA0u;
    SET_GPR_U32(ctx, 31, 0x271BA8u);
    ctx->pc = 0x271BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BA0u;
    // 0x271ba4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2241A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2241A8u, 0x271BA0u, 0x271BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BA8u;
label_271ba8:
    // 0x271ba8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271bac:
    // 0x271bac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_271bb0:
    // 0x271bb0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x271bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271bb4:
    // 0x271bb4: 0xc0890ce  jal         func_224338
label_271bb8:
    if (ctx->pc == 0x271BB8u) {
        ctx->pc = 0x271BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB4u;
        // 0x271bb8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BBCu;
        goto label_271bbc;
    }
    ctx->pc = 0x271BB4u;
    SET_GPR_U32(ctx, 31, 0x271BBCu);
    ctx->pc = 0x271BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BB4u;
    // 0x271bb8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224338u, 0x271BB4u, 0x271BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BBCu;
label_271bbc:
    // 0x271bbc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271bc0:
    // 0x271bc0: 0xc088fba  jal         func_223EE8
label_271bc4:
    if (ctx->pc == 0x271BC4u) {
        ctx->pc = 0x271BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BC0u;
        // 0x271bc4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BC8u;
        goto label_271bc8;
    }
    ctx->pc = 0x271BC0u;
    SET_GPR_U32(ctx, 31, 0x271BC8u);
    ctx->pc = 0x271BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BC0u;
    // 0x271bc4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x271BC0u, 0x271BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BC8u;
label_271bc8:
    // 0x271bc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271bcc:
    // 0x271bcc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271bccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_271bd0:
    // 0x271bd0: 0xc088fba  jal         func_223EE8
label_271bd4:
    if (ctx->pc == 0x271BD4u) {
        ctx->pc = 0x271BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BD0u;
        // 0x271bd4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BD8u;
        goto label_271bd8;
    }
    ctx->pc = 0x271BD0u;
    SET_GPR_U32(ctx, 31, 0x271BD8u);
    ctx->pc = 0x271BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BD0u;
    // 0x271bd4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x271BD0u, 0x271BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BD8u;
label_271bd8:
    // 0x271bd8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x271bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_271bdc:
    // 0x271bdc: 0x0  nop
    ctx->pc = 0x271bdcu;
    // NOP
label_271be0:
    // 0x271be0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_271be4:
    if (ctx->pc == 0x271BE4u) {
        ctx->pc = 0x271BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BE0u;
        // 0x271be4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BE8u;
        goto label_271be8;
    }
    ctx->pc = 0x271BE0u;
    {
        const bool branch_taken_0x271be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BE0u;
        // 0x271be4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271be0) {
            ctx->pc = 0x271BF4u;
            goto label_271bf4;
        }
    }
    ctx->pc = 0x271BE8u;
label_271be8:
    // 0x271be8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271bec:
    // 0x271bec: 0xc088f98  jal         func_223E60
label_271bf0:
    if (ctx->pc == 0x271BF0u) {
        ctx->pc = 0x271BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BECu;
        // 0x271bf0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BF4u;
        goto label_271bf4;
    }
    ctx->pc = 0x271BECu;
    SET_GPR_U32(ctx, 31, 0x271BF4u);
    ctx->pc = 0x271BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BECu;
    // 0x271bf0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271BECu, 0x271BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BF4u;
label_271bf4:
    // 0x271bf4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271bf8:
    // 0x271bf8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x271bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_271bfc:
    // 0x271bfc: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x271bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271c00:
    // 0x271c00: 0xc0890ce  jal         func_224338
label_271c04:
    if (ctx->pc == 0x271C04u) {
        ctx->pc = 0x271C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C00u;
        // 0x271c04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C08u;
        goto label_271c08;
    }
    ctx->pc = 0x271C00u;
    SET_GPR_U32(ctx, 31, 0x271C08u);
    ctx->pc = 0x271C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C00u;
    // 0x271c04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224338u, 0x271C00u, 0x271C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C08u;
label_271c08:
    // 0x271c08: 0x53c0000a  beql        $fp, $zero, . + 4 + (0xA << 2)
label_271c0c:
    if (ctx->pc == 0x271C0Cu) {
        ctx->pc = 0x271C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C08u;
        // 0x271c0c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C10u;
        goto label_271c10;
    }
    ctx->pc = 0x271C08u;
    {
        const bool branch_taken_0x271c08 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c08) {
            ctx->pc = 0x271C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271C08u;
            // 0x271c0c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C34u;
            goto label_271c34;
        }
    }
    ctx->pc = 0x271C10u;
label_271c10:
    // 0x271c10: 0x8fc2009c  lw          $v0, 0x9C($fp)
    ctx->pc = 0x271c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 156)));
label_271c14:
    // 0x271c14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_271c18:
    if (ctx->pc == 0x271C18u) {
        ctx->pc = 0x271C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C14u;
        // 0x271c18: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C1Cu;
        goto label_271c1c;
    }
    ctx->pc = 0x271C14u;
    {
        const bool branch_taken_0x271c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c14) {
            ctx->pc = 0x271C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271C14u;
            // 0x271c18: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C34u;
            goto label_271c34;
        }
    }
    ctx->pc = 0x271C1Cu;
label_271c1c:
    // 0x271c1c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271c20:
    // 0x271c20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271c24:
    // 0x271c24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271c28:
    // 0x271c28: 0xc088f98  jal         func_223E60
label_271c2c:
    if (ctx->pc == 0x271C2Cu) {
        ctx->pc = 0x271C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C28u;
        // 0x271c2c: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C30u;
        goto label_271c30;
    }
    ctx->pc = 0x271C28u;
    SET_GPR_U32(ctx, 31, 0x271C30u);
    ctx->pc = 0x271C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C28u;
    // 0x271c2c: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271C28u, 0x271C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C30u;
label_271c30:
    // 0x271c30: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271c34:
    // 0x271c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271c38:
    // 0x271c38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271c3c:
    // 0x271c3c: 0xc088f98  jal         func_223E60
label_271c40:
    if (ctx->pc == 0x271C40u) {
        ctx->pc = 0x271C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C3Cu;
        // 0x271c40: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C44u;
        goto label_271c44;
    }
    ctx->pc = 0x271C3Cu;
    SET_GPR_U32(ctx, 31, 0x271C44u);
    ctx->pc = 0x271C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C3Cu;
    // 0x271c40: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271C3Cu, 0x271C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C44u;
label_271c44:
    // 0x271c44: 0xc6a10b54  lwc1        $f1, 0xB54($s5)
    ctx->pc = 0x271c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271c48:
    // 0x271c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_271c4c:
    // 0x271c4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x271c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_271c50:
    // 0x271c50: 0x0  nop
    ctx->pc = 0x271c50u;
    // NOP
label_271c54:
    // 0x271c54: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_271c58:
    if (ctx->pc == 0x271C58u) {
        ctx->pc = 0x271C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C54u;
        // 0x271c58: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C5Cu;
        goto label_271c5c;
    }
    ctx->pc = 0x271C54u;
    {
        const bool branch_taken_0x271c54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C54u;
        // 0x271c58: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c54) {
            ctx->pc = 0x271C8Cu;
            goto label_271c8c;
        }
    }
    ctx->pc = 0x271C5Cu;
label_271c5c:
    // 0x271c5c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x271c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_271c60:
    // 0x271c60: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x271c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_271c64:
    // 0x271c64: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x271c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_271c68:
    // 0x271c68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_271c6c:
    if (ctx->pc == 0x271C6Cu) {
        ctx->pc = 0x271C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C68u;
        // 0x271c6c: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C70u;
        goto label_271c70;
    }
    ctx->pc = 0x271C68u;
    {
        const bool branch_taken_0x271c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C68u;
        // 0x271c6c: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c68) {
            ctx->pc = 0x271C8Cu;
            goto label_271c8c;
        }
    }
    ctx->pc = 0x271C70u;
label_271c70:
    // 0x271c70: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x271c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_271c74:
    // 0x271c74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_271c78:
    if (ctx->pc == 0x271C78u) {
        ctx->pc = 0x271C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C74u;
        // 0x271c78: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C7Cu;
        goto label_271c7c;
    }
    ctx->pc = 0x271C74u;
    {
        const bool branch_taken_0x271c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C74u;
        // 0x271c78: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c74) {
            ctx->pc = 0x271C8Cu;
            goto label_271c8c;
        }
    }
    ctx->pc = 0x271C7Cu;
label_271c7c:
    // 0x271c7c: 0xc081546  jal         func_205518
label_271c80:
    if (ctx->pc == 0x271C80u) {
        ctx->pc = 0x271C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C7Cu;
        // 0x271c80: 0x240400d9  addiu       $a0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C84u;
        goto label_271c84;
    }
    ctx->pc = 0x271C7Cu;
    SET_GPR_U32(ctx, 31, 0x271C84u);
    ctx->pc = 0x271C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C7Cu;
    // 0x271c80: 0x240400d9  addiu       $a0, $zero, 0xD9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x271C7Cu, 0x271C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C84u;
label_271c84:
    // 0x271c84: 0x10000301  b           . + 4 + (0x301 << 2)
label_271c88:
    if (ctx->pc == 0x271C88u) {
        ctx->pc = 0x271C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C84u;
        // 0x271c88: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C8Cu;
        goto label_271c8c;
    }
    ctx->pc = 0x271C84u;
    {
        const bool branch_taken_0x271c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C84u;
        // 0x271c88: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c84) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x271C8Cu;
label_271c8c:
    // 0x271c8c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_271c90:
    if (ctx->pc == 0x271C90u) {
        ctx->pc = 0x271C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C8Cu;
        // 0x271c90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C94u;
        goto label_271c94;
    }
    ctx->pc = 0x271C8Cu;
    {
        const bool branch_taken_0x271c8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C8Cu;
        // 0x271c90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c8c) {
            ctx->pc = 0x271CA0u;
            goto label_271ca0;
        }
    }
    ctx->pc = 0x271C94u;
label_271c94:
    // 0x271c94: 0x8e830128  lw          $v1, 0x128($s4)
    ctx->pc = 0x271c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_271c98:
    // 0x271c98: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_271c9c:
    if (ctx->pc == 0x271C9Cu) {
        ctx->pc = 0x271C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C98u;
        // 0x271c9c: 0xaeb30100  sw          $s3, 0x100($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CA0u;
        goto label_271ca0;
    }
    ctx->pc = 0x271C98u;
    {
        const bool branch_taken_0x271c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x271c98) {
            ctx->pc = 0x271C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271C98u;
            // 0x271c9c: 0xaeb30100  sw          $s3, 0x100($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271CA0u;
            goto label_271ca0;
        }
    }
    ctx->pc = 0x271CA0u;
label_271ca0:
    // 0x271ca0: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x271ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_271ca4:
    // 0x271ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_271ca8:
    if (ctx->pc == 0x271CA8u) {
        ctx->pc = 0x271CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CA4u;
        // 0x271ca8: 0x26c2ffff  addiu       $v0, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CACu;
        goto label_271cac;
    }
    ctx->pc = 0x271CA4u;
    {
        const bool branch_taken_0x271ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CA4u;
        // 0x271ca8: 0x26c2ffff  addiu       $v0, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ca4) {
            ctx->pc = 0x271CB8u;
            goto label_271cb8;
        }
    }
    ctx->pc = 0x271CACu;
label_271cac:
    // 0x271cac: 0xc0856d0  jal         func_215B40
label_271cb0:
    if (ctx->pc == 0x271CB0u) {
        ctx->pc = 0x271CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CACu;
        // 0x271cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CB4u;
        goto label_271cb4;
    }
    ctx->pc = 0x271CACu;
    SET_GPR_U32(ctx, 31, 0x271CB4u);
    ctx->pc = 0x271CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CACu;
    // 0x271cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B40u, 0x271CACu, 0x271CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CB4u;
label_271cb4:
    // 0x271cb4: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_271cb8:
    // 0x271cb8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x271cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_271cbc:
    // 0x271cbc: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_271cc0:
    if (ctx->pc == 0x271CC0u) {
        ctx->pc = 0x271CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CBCu;
        // 0x271cc0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CC4u;
        goto label_271cc4;
    }
    ctx->pc = 0x271CBCu;
    {
        const bool branch_taken_0x271cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CBCu;
        // 0x271cc0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cbc) {
            ctx->pc = 0x271F18u;
            goto label_271f18;
        }
    }
    ctx->pc = 0x271CC4u;
label_271cc4:
    // 0x271cc4: 0xc0a1418  jal         func_285060
label_271cc8:
    if (ctx->pc == 0x271CC8u) {
        ctx->pc = 0x271CCCu;
        goto label_271ccc;
    }
    ctx->pc = 0x271CC4u;
    SET_GPR_U32(ctx, 31, 0x271CCCu);
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x271CC4u, 0x271CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CCCu;
label_271ccc:
    // 0x271ccc: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x271cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_271cd0:
    // 0x271cd0: 0x26e6c4a8  addiu       $a2, $s7, -0x3B58
    ctx->pc = 0x271cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_271cd4:
    // 0x271cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_271cd8:
    // 0x271cd8: 0x8cc40050  lw          $a0, 0x50($a2)
    ctx->pc = 0x271cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_271cdc:
    // 0x271cdc: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x271cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_271ce0:
    // 0x271ce0: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x271ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_271ce4:
    // 0x271ce4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x271ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_271ce8:
    // 0x271ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_271cec:
    // 0x271cec: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_271cf0:
    if (ctx->pc == 0x271CF0u) {
        ctx->pc = 0x271CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CECu;
        // 0x271cf0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CF4u;
        goto label_271cf4;
    }
    ctx->pc = 0x271CECu;
    {
        const bool branch_taken_0x271cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CECu;
        // 0x271cf0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cec) {
            ctx->pc = 0x271D6Cu;
            goto label_271d6c;
        }
    }
    ctx->pc = 0x271CF4u;
label_271cf4:
    // 0x271cf4: 0x8cc40044  lw          $a0, 0x44($a2)
    ctx->pc = 0x271cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_271cf8:
    // 0x271cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271cfc:
    // 0x271cfc: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
label_271d00:
    if (ctx->pc == 0x271D00u) {
        ctx->pc = 0x271D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CFCu;
        // 0x271d00: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D04u;
        goto label_271d04;
    }
    ctx->pc = 0x271CFCu;
    {
        const bool branch_taken_0x271cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x271D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CFCu;
        // 0x271d00: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cfc) {
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271D04u;
label_271d04:
    // 0x271d04: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_271d08:
    if (ctx->pc == 0x271D08u) {
        ctx->pc = 0x271D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D04u;
        // 0x271d08: 0x2c420011  sltiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D0Cu;
        goto label_271d0c;
    }
    ctx->pc = 0x271D04u;
    {
        const bool branch_taken_0x271d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D04u;
        // 0x271d08: 0x2c420011  sltiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d04) {
            ctx->pc = 0x271D74u;
            goto label_271d74;
        }
    }
    ctx->pc = 0x271D0Cu;
label_271d0c:
    // 0x271d0c: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x271d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_271d10:
    // 0x271d10: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_271d14:
    if (ctx->pc == 0x271D14u) {
        ctx->pc = 0x271D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D10u;
        // 0x271d14: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D18u;
        goto label_271d18;
    }
    ctx->pc = 0x271D10u;
    {
        const bool branch_taken_0x271d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D10u;
        // 0x271d14: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d10) {
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271D18u;
label_271d18:
    // 0x271d18: 0x16800016  bnez        $s4, . + 4 + (0x16 << 2)
label_271d1c:
    if (ctx->pc == 0x271D1Cu) {
        ctx->pc = 0x271D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D18u;
        // 0x271d1c: 0x2c420011  sltiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D20u;
        goto label_271d20;
    }
    ctx->pc = 0x271D18u;
    {
        const bool branch_taken_0x271d18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D18u;
        // 0x271d1c: 0x2c420011  sltiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d18) {
            ctx->pc = 0x271D74u;
            goto label_271d74;
        }
    }
    ctx->pc = 0x271D20u;
label_271d20:
    // 0x271d20: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x271d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_271d24:
    // 0x271d24: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x271d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_271d28:
    // 0x271d28: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
label_271d2c:
    if (ctx->pc == 0x271D2Cu) {
        ctx->pc = 0x271D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D28u;
        // 0x271d2c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D30u;
        goto label_271d30;
    }
    ctx->pc = 0x271D28u;
    {
        const bool branch_taken_0x271d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x271D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D28u;
        // 0x271d2c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d28) {
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271D30u;
label_271d30:
    // 0x271d30: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_271d34:
    if (ctx->pc == 0x271D34u) {
        ctx->pc = 0x271D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D30u;
        // 0x271d34: 0x2c420011  sltiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D38u;
        goto label_271d38;
    }
    ctx->pc = 0x271D30u;
    {
        const bool branch_taken_0x271d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D30u;
        // 0x271d34: 0x2c420011  sltiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d30) {
            ctx->pc = 0x271D74u;
            goto label_271d74;
        }
    }
    ctx->pc = 0x271D38u;
label_271d38:
    // 0x271d38: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x271d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_271d3c:
    // 0x271d3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_271d40:
    if (ctx->pc == 0x271D40u) {
        ctx->pc = 0x271D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D3Cu;
        // 0x271d40: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D44u;
        goto label_271d44;
    }
    ctx->pc = 0x271D3Cu;
    {
        const bool branch_taken_0x271d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D3Cu;
        // 0x271d40: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d3c) {
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271D44u;
label_271d44:
    // 0x271d44: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x271d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_271d48:
    // 0x271d48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x271d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_271d4c:
    // 0x271d4c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_271d50:
    if (ctx->pc == 0x271D50u) {
        ctx->pc = 0x271D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D4Cu;
        // 0x271d50: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D54u;
        goto label_271d54;
    }
    ctx->pc = 0x271D4Cu;
    {
        const bool branch_taken_0x271d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d4c) {
            ctx->pc = 0x271D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271D4Cu;
            // 0x271d50: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271D6Cu;
            goto label_271d6c;
        }
    }
    ctx->pc = 0x271D54u;
label_271d54:
    // 0x271d54: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x271d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_271d58:
    // 0x271d58: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_271d5c:
    if (ctx->pc == 0x271D5Cu) {
        ctx->pc = 0x271D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D58u;
        // 0x271d5c: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D60u;
        goto label_271d60;
    }
    ctx->pc = 0x271D58u;
    {
        const bool branch_taken_0x271d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x271d58) {
            ctx->pc = 0x271D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271D58u;
            // 0x271d5c: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271D6Cu;
            goto label_271d6c;
        }
    }
    ctx->pc = 0x271D60u;
label_271d60:
    // 0x271d60: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_271d64:
    if (ctx->pc == 0x271D64u) {
        ctx->pc = 0x271D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D60u;
        // 0x271d64: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D68u;
        goto label_271d68;
    }
    ctx->pc = 0x271D60u;
    {
        const bool branch_taken_0x271d60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D60u;
        // 0x271d64: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d60) {
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271D68u;
label_271d68:
    // 0x271d68: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x271d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_271d6c:
    // 0x271d6c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x271d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_271d70:
    // 0x271d70: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x271d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_271d74:
    // 0x271d74: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_271d78:
    if (ctx->pc == 0x271D78u) {
        ctx->pc = 0x271D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D74u;
        // 0x271d78: 0x2e020012  sltiu       $v0, $s0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D7Cu;
        goto label_271d7c;
    }
    ctx->pc = 0x271D74u;
    {
        const bool branch_taken_0x271d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D74u;
        // 0x271d78: 0x2e020012  sltiu       $v0, $s0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d74) {
            ctx->pc = 0x271F18u;
            goto label_271f18;
        }
    }
    ctx->pc = 0x271D7Cu;
label_271d7c:
    // 0x271d7c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_271d80:
    if (ctx->pc == 0x271D80u) {
        ctx->pc = 0x271D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D7Cu;
        // 0x271d80: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D84u;
        goto label_271d84;
    }
    ctx->pc = 0x271D7Cu;
    {
        const bool branch_taken_0x271d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D7Cu;
        // 0x271d80: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d7c) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271D84u;
label_271d84:
    // 0x271d84: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x271d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_271d88:
    // 0x271d88: 0x24427fe0  addiu       $v0, $v0, 0x7FE0
    ctx->pc = 0x271d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32736));
label_271d8c:
    // 0x271d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x271d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_271d90:
    // 0x271d90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_271d94:
    // 0x271d94: 0x800008  jr          $a0
label_271d98:
    if (ctx->pc == 0x271D98u) {
        ctx->pc = 0x271D9Cu;
        goto label_271d9c;
    }
    ctx->pc = 0x271D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271D9Cu: goto label_271d9c;
            case 0x271DA4u: goto label_271da4;
            case 0x271DACu: goto label_271dac;
            case 0x271DB4u: goto label_271db4;
            case 0x271ED8u: goto label_271ed8;
            case 0x271EE8u: goto label_271ee8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271D94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271D9Cu;
label_271d9c:
    // 0x271d9c: 0x10000054  b           . + 4 + (0x54 << 2)
label_271da0:
    if (ctx->pc == 0x271DA0u) {
        ctx->pc = 0x271DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D9Cu;
        // 0x271da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DA4u;
        goto label_271da4;
    }
    ctx->pc = 0x271D9Cu;
    {
        const bool branch_taken_0x271d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D9Cu;
        // 0x271da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d9c) {
            ctx->pc = 0x271EF0u;
            goto label_271ef0;
        }
    }
    ctx->pc = 0x271DA4u;
label_271da4:
    // 0x271da4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_271da8:
    if (ctx->pc == 0x271DA8u) {
        ctx->pc = 0x271DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA4u;
        // 0x271da8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DACu;
        goto label_271dac;
    }
    ctx->pc = 0x271DA4u;
    {
        const bool branch_taken_0x271da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA4u;
        // 0x271da8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271da4) {
            ctx->pc = 0x271EDCu;
            goto label_271edc;
        }
    }
    ctx->pc = 0x271DACu;
label_271dac:
    // 0x271dac: 0x1000004f  b           . + 4 + (0x4F << 2)
label_271db0:
    if (ctx->pc == 0x271DB0u) {
        ctx->pc = 0x271DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DACu;
        // 0x271db0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DB4u;
        goto label_271db4;
    }
    ctx->pc = 0x271DACu;
    {
        const bool branch_taken_0x271dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DACu;
        // 0x271db0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dac) {
            ctx->pc = 0x271EECu;
            goto label_271eec;
        }
    }
    ctx->pc = 0x271DB4u;
label_271db4:
    // 0x271db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_271db8:
    // 0x271db8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x271db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_271dbc:
    // 0x271dbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x271dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_271dc0:
    // 0x271dc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_271dc4:
    if (ctx->pc == 0x271DC4u) {
        ctx->pc = 0x271DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DC0u;
        // 0x271dc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DC8u;
        goto label_271dc8;
    }
    ctx->pc = 0x271DC0u;
    {
        const bool branch_taken_0x271dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DC0u;
        // 0x271dc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dc0) {
            ctx->pc = 0x271DD4u;
            goto label_271dd4;
        }
    }
    ctx->pc = 0x271DC8u;
label_271dc8:
    // 0x271dc8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x271dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_271dcc:
    // 0x271dcc: 0x2442df00  addiu       $v0, $v0, -0x2100
    ctx->pc = 0x271dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
label_271dd0:
    // 0x271dd0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x271dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_271dd4:
    // 0x271dd4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_271dd8:
    // 0x271dd8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x271dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_271ddc:
    // 0x271ddc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_271de0:
    if (ctx->pc == 0x271DE0u) {
        ctx->pc = 0x271DE4u;
        goto label_271de4;
    }
    ctx->pc = 0x271DDCu;
    {
        const bool branch_taken_0x271ddc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ddc) {
            ctx->pc = 0x271E04u;
            goto label_271e04;
        }
    }
    ctx->pc = 0x271DE4u;
label_271de4:
    // 0x271de4: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x271de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_271de8:
    // 0x271de8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_271dec:
    if (ctx->pc == 0x271DECu) {
        ctx->pc = 0x271DF0u;
        goto label_271df0;
    }
    ctx->pc = 0x271DE8u;
    {
        const bool branch_taken_0x271de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271de8) {
            ctx->pc = 0x271E04u;
            goto label_271e04;
        }
    }
    ctx->pc = 0x271DF0u;
label_271df0:
    // 0x271df0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_271df4:
    if (ctx->pc == 0x271DF4u) {
        ctx->pc = 0x271DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DF0u;
        // 0x271df4: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DF8u;
        goto label_271df8;
    }
    ctx->pc = 0x271DF0u;
    {
        const bool branch_taken_0x271df0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DF0u;
        // 0x271df4: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271df0) {
            ctx->pc = 0x271E04u;
            goto label_271e04;
        }
    }
    ctx->pc = 0x271DF8u;
label_271df8:
    // 0x271df8: 0xc09ad4e  jal         func_26B538
label_271dfc:
    if (ctx->pc == 0x271DFCu) {
        ctx->pc = 0x271DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DF8u;
        // 0x271dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E00u;
        goto label_271e00;
    }
    ctx->pc = 0x271DF8u;
    SET_GPR_U32(ctx, 31, 0x271E00u);
    ctx->pc = 0x271DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DF8u;
    // 0x271dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B538u, 0x271DF8u, 0x271E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E00u;
label_271e00:
    // 0x271e00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x271e00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271e04:
    // 0x271e04: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_271e08:
    if (ctx->pc == 0x271E08u) {
        ctx->pc = 0x271E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E04u;
        // 0x271e08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E0Cu;
        goto label_271e0c;
    }
    ctx->pc = 0x271E04u;
    {
        const bool branch_taken_0x271e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E04u;
        // 0x271e08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e04) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271E0Cu;
label_271e0c:
    // 0x271e0c: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x271e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_271e10:
    // 0x271e10: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_271e14:
    // 0x271e14: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_271e18:
    if (ctx->pc == 0x271E18u) {
        ctx->pc = 0x271E1Cu;
        goto label_271e1c;
    }
    ctx->pc = 0x271E14u;
    {
        const bool branch_taken_0x271e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x271e14) {
            ctx->pc = 0x271E64u;
            goto label_271e64;
        }
    }
    ctx->pc = 0x271E1Cu;
label_271e1c:
    // 0x271e1c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_271e20:
    if (ctx->pc == 0x271E20u) {
        ctx->pc = 0x271E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E1Cu;
        // 0x271e20: 0xae400208  sw          $zero, 0x208($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E24u;
        goto label_271e24;
    }
    ctx->pc = 0x271E1Cu;
    {
        const bool branch_taken_0x271e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E1Cu;
        // 0x271e20: 0xae400208  sw          $zero, 0x208($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e1c) {
            ctx->pc = 0x271E98u;
            goto label_271e98;
        }
    }
    ctx->pc = 0x271E24u;
label_271e24:
    // 0x271e24: 0xc0882f2  jal         func_220BC8
label_271e28:
    if (ctx->pc == 0x271E28u) {
        ctx->pc = 0x271E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E24u;
        // 0x271e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E2Cu;
        goto label_271e2c;
    }
    ctx->pc = 0x271E24u;
    SET_GPR_U32(ctx, 31, 0x271E2Cu);
    ctx->pc = 0x271E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E24u;
    // 0x271e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BC8u, 0x271E24u, 0x271E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E2Cu;
label_271e2c:
    // 0x271e2c: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x271e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_271e30:
    // 0x271e30: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x271e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_271e34:
    // 0x271e34: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x271e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_271e38:
    // 0x271e38: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_271e3c:
    if (ctx->pc == 0x271E3Cu) {
        ctx->pc = 0x271E40u;
        goto label_271e40;
    }
    ctx->pc = 0x271E38u;
    {
        const bool branch_taken_0x271e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x271e38) {
            ctx->pc = 0x271E64u;
            goto label_271e64;
        }
    }
    ctx->pc = 0x271E40u;
label_271e40:
    // 0x271e40: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_271e44:
    if (ctx->pc == 0x271E44u) {
        ctx->pc = 0x271E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E40u;
        // 0x271e44: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E48u;
        goto label_271e48;
    }
    ctx->pc = 0x271E40u;
    {
        const bool branch_taken_0x271e40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E40u;
        // 0x271e44: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e40) {
            ctx->pc = 0x271E64u;
            goto label_271e64;
        }
    }
    ctx->pc = 0x271E48u;
label_271e48:
    // 0x271e48: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x271e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_271e4c:
    // 0x271e4c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_271e50:
    if (ctx->pc == 0x271E50u) {
        ctx->pc = 0x271E54u;
        goto label_271e54;
    }
    ctx->pc = 0x271E4Cu;
    {
        const bool branch_taken_0x271e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x271e4c) {
            ctx->pc = 0x271E64u;
            goto label_271e64;
        }
    }
    ctx->pc = 0x271E54u;
label_271e54:
    // 0x271e54: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_271e58:
    // 0x271e58: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x271e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_271e5c:
    // 0x271e5c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x271e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_271e60:
    // 0x271e60: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x271e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_271e64:
    // 0x271e64: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_271e68:
    if (ctx->pc == 0x271E68u) {
        ctx->pc = 0x271E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E64u;
        // 0x271e68: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E6Cu;
        goto label_271e6c;
    }
    ctx->pc = 0x271E64u;
    {
        const bool branch_taken_0x271e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E64u;
        // 0x271e68: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e64) {
            ctx->pc = 0x271E98u;
            goto label_271e98;
        }
    }
    ctx->pc = 0x271E6Cu;
label_271e6c:
    // 0x271e6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271e70:
    // 0x271e70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_271e74:
    // 0x271e74: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271e78:
    // 0x271e78: 0xc088f98  jal         func_223E60
label_271e7c:
    if (ctx->pc == 0x271E7Cu) {
        ctx->pc = 0x271E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E78u;
        // 0x271e7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E80u;
        goto label_271e80;
    }
    ctx->pc = 0x271E78u;
    SET_GPR_U32(ctx, 31, 0x271E80u);
    ctx->pc = 0x271E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E78u;
    // 0x271e7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271E78u, 0x271E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E80u;
label_271e80:
    // 0x271e80: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x271e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_271e84:
    // 0x271e84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_271e88:
    if (ctx->pc == 0x271E88u) {
        ctx->pc = 0x271E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E84u;
        // 0x271e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E8Cu;
        goto label_271e8c;
    }
    ctx->pc = 0x271E84u;
    {
        const bool branch_taken_0x271e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E84u;
        // 0x271e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e84) {
            ctx->pc = 0x271E98u;
            goto label_271e98;
        }
    }
    ctx->pc = 0x271E8Cu;
label_271e8c:
    // 0x271e8c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271e90:
    // 0x271e90: 0xc088f98  jal         func_223E60
label_271e94:
    if (ctx->pc == 0x271E94u) {
        ctx->pc = 0x271E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E90u;
        // 0x271e94: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E98u;
        goto label_271e98;
    }
    ctx->pc = 0x271E90u;
    SET_GPR_U32(ctx, 31, 0x271E98u);
    ctx->pc = 0x271E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E90u;
    // 0x271e94: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271E90u, 0x271E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E98u;
label_271e98:
    // 0x271e98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271e9c:
    // 0x271e9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_271ea0:
    // 0x271ea0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x271ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_271ea4:
    // 0x271ea4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271ea8:
    // 0x271ea8: 0xc088f98  jal         func_223E60
label_271eac:
    if (ctx->pc == 0x271EACu) {
        ctx->pc = 0x271EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EA8u;
        // 0x271eac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EB0u;
        goto label_271eb0;
    }
    ctx->pc = 0x271EA8u;
    SET_GPR_U32(ctx, 31, 0x271EB0u);
    ctx->pc = 0x271EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271EA8u;
    // 0x271eac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271EA8u, 0x271EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271EB0u;
label_271eb0:
    // 0x271eb0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_271eb4:
    if (ctx->pc == 0x271EB4u) {
        ctx->pc = 0x271EB8u;
        goto label_271eb8;
    }
    ctx->pc = 0x271EB0u;
    {
        const bool branch_taken_0x271eb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x271eb0) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271EB8u;
label_271eb8:
    // 0x271eb8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x271eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_271ebc:
    // 0x271ebc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_271ec0:
    if (ctx->pc == 0x271EC0u) {
        ctx->pc = 0x271EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EBCu;
        // 0x271ec0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EC4u;
        goto label_271ec4;
    }
    ctx->pc = 0x271EBCu;
    {
        const bool branch_taken_0x271ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EBCu;
        // 0x271ec0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ebc) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271EC4u;
label_271ec4:
    // 0x271ec4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_271ec8:
    // 0x271ec8: 0xc088f98  jal         func_223E60
label_271ecc:
    if (ctx->pc == 0x271ECCu) {
        ctx->pc = 0x271ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EC8u;
        // 0x271ecc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271ED0u;
        goto label_271ed0;
    }
    ctx->pc = 0x271EC8u;
    SET_GPR_U32(ctx, 31, 0x271ED0u);
    ctx->pc = 0x271ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271EC8u;
    // 0x271ecc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271EC8u, 0x271ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271ED0u;
label_271ed0:
    // 0x271ed0: 0x10000008  b           . + 4 + (0x8 << 2)
label_271ed4:
    if (ctx->pc == 0x271ED4u) {
        ctx->pc = 0x271ED8u;
        goto label_271ed8;
    }
    ctx->pc = 0x271ED0u;
    {
        const bool branch_taken_0x271ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ed0) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271ED8u;
label_271ed8:
    // 0x271ed8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x271ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_271edc:
    // 0x271edc: 0xc7978538  lwc1        $f23, -0x7AC8($gp)
    ctx->pc = 0x271edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_271ee0:
    // 0x271ee0: 0x10000004  b           . + 4 + (0x4 << 2)
label_271ee4:
    if (ctx->pc == 0x271EE4u) {
        ctx->pc = 0x271EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EE0u;
        // 0x271ee4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EE8u;
        goto label_271ee8;
    }
    ctx->pc = 0x271EE0u;
    {
        const bool branch_taken_0x271ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EE0u;
        // 0x271ee4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ee0) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271EE8u;
label_271ee8:
    // 0x271ee8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x271ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_271eec:
    // 0x271eec: 0xc797853c  lwc1        $f23, -0x7AC4($gp)
    ctx->pc = 0x271eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_271ef0:
    // 0x271ef0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x271ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_271ef4:
    // 0x271ef4: 0x53c00009  beql        $fp, $zero, . + 4 + (0x9 << 2)
label_271ef8:
    if (ctx->pc == 0x271EF8u) {
        ctx->pc = 0x271EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EF4u;
        // 0x271ef8: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EFCu;
        goto label_271efc;
    }
    ctx->pc = 0x271EF4u;
    {
        const bool branch_taken_0x271ef4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ef4) {
            ctx->pc = 0x271EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271EF4u;
            // 0x271ef8: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271F1Cu;
            goto label_271f1c;
        }
    }
    ctx->pc = 0x271EFCu;
label_271efc:
    // 0x271efc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_271f00:
    if (ctx->pc == 0x271F00u) {
        ctx->pc = 0x271F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EFCu;
        // 0x271f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F04u;
        goto label_271f04;
    }
    ctx->pc = 0x271EFCu;
    {
        const bool branch_taken_0x271efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EFCu;
        // 0x271f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271efc) {
            ctx->pc = 0x271F18u;
            goto label_271f18;
        }
    }
    ctx->pc = 0x271F04u;
label_271f04:
    // 0x271f04: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
label_271f08:
    if (ctx->pc == 0x271F08u) {
        ctx->pc = 0x271F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F04u;
        // 0x271f08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F0Cu;
        goto label_271f0c;
    }
    ctx->pc = 0x271F04u;
    {
        const bool branch_taken_0x271f04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x271F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F04u;
        // 0x271f08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f04) {
            ctx->pc = 0x271F18u;
            goto label_271f18;
        }
    }
    ctx->pc = 0x271F0Cu;
label_271f0c:
    // 0x271f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271f10:
    // 0x271f10: 0xc08846a  jal         func_2211A8
label_271f14:
    if (ctx->pc == 0x271F14u) {
        ctx->pc = 0x271F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F10u;
        // 0x271f14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F18u;
        goto label_271f18;
    }
    ctx->pc = 0x271F10u;
    SET_GPR_U32(ctx, 31, 0x271F18u);
    ctx->pc = 0x271F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F10u;
    // 0x271f14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2211A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A8u, 0x271F10u, 0x271F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F18u;
label_271f18:
    // 0x271f18: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x271f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271f1c:
    // 0x271f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_271f20:
    // 0x271f20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_271f24:
    // 0x271f24: 0x0  nop
    ctx->pc = 0x271f24u;
    // NOP
label_271f28:
    // 0x271f28: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_271f2c:
    if (ctx->pc == 0x271F2Cu) {
        ctx->pc = 0x271F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F28u;
        // 0x271f2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F30u;
        goto label_271f30;
    }
    ctx->pc = 0x271F28u;
    {
        const bool branch_taken_0x271f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F28u;
        // 0x271f2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f28) {
            ctx->pc = 0x271F78u;
            goto label_271f78;
        }
    }
    ctx->pc = 0x271F30u;
label_271f30:
    // 0x271f30: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x271f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_271f34:
    // 0x271f34: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x271f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_271f38:
    // 0x271f38: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
label_271f3c:
    if (ctx->pc == 0x271F3Cu) {
        ctx->pc = 0x271F40u;
        goto label_271f40;
    }
    ctx->pc = 0x271F38u;
    {
        const bool branch_taken_0x271f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x271f38) {
            ctx->pc = 0x271F78u;
            goto label_271f78;
        }
    }
    ctx->pc = 0x271F40u;
label_271f40:
    // 0x271f40: 0x13c00252  beqz        $fp, . + 4 + (0x252 << 2)
label_271f44:
    if (ctx->pc == 0x271F44u) {
        ctx->pc = 0x271F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F40u;
        // 0x271f44: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F48u;
        goto label_271f48;
    }
    ctx->pc = 0x271F40u;
    {
        const bool branch_taken_0x271f40 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F40u;
        // 0x271f44: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f40) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x271F48u;
label_271f48:
    // 0x271f48: 0x12200251  beqz        $s1, . + 4 + (0x251 << 2)
label_271f4c:
    if (ctx->pc == 0x271F4Cu) {
        ctx->pc = 0x271F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F48u;
        // 0x271f4c: 0xdfbe00b0  ld          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F50u;
        goto label_271f50;
    }
    ctx->pc = 0x271F48u;
    {
        const bool branch_taken_0x271f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F48u;
        // 0x271f4c: 0xdfbe00b0  ld          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f48) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x271F50u;
label_271f50:
    // 0x271f50: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x271f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_271f54:
    // 0x271f54: 0x1040024f  beqz        $v0, . + 4 + (0x24F << 2)
label_271f58:
    if (ctx->pc == 0x271F58u) {
        ctx->pc = 0x271F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F54u;
        // 0x271f58: 0xdfb700a0  ld          $s7, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F5Cu;
        goto label_271f5c;
    }
    ctx->pc = 0x271F54u;
    {
        const bool branch_taken_0x271f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F54u;
        // 0x271f58: 0xdfb700a0  ld          $s7, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f54) {
            ctx->pc = 0x272894u;
            goto label_272894;
        }
    }
    ctx->pc = 0x271F5Cu;
label_271f5c:
    // 0x271f5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x271f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271f60:
    // 0x271f60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_271f64:
    // 0x271f64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271f68:
    // 0x271f68: 0xc088f98  jal         func_223E60
label_271f6c:
    if (ctx->pc == 0x271F6Cu) {
        ctx->pc = 0x271F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F68u;
        // 0x271f6c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F70u;
        goto label_271f70;
    }
    ctx->pc = 0x271F68u;
    SET_GPR_U32(ctx, 31, 0x271F70u);
    ctx->pc = 0x271F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F68u;
    // 0x271f6c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x271F68u, 0x271F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F70u;
label_271f70:
    // 0x271f70: 0x10000246  b           . + 4 + (0x246 << 2)
label_271f74:
    if (ctx->pc == 0x271F74u) {
        ctx->pc = 0x271F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F70u;
        // 0x271f74: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F78u;
        goto label_271f78;
    }
    ctx->pc = 0x271F70u;
    {
        const bool branch_taken_0x271f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F70u;
        // 0x271f74: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f70) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x271F78u;
label_271f78:
    // 0x271f78: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
label_271f7c:
    if (ctx->pc == 0x271F7Cu) {
        ctx->pc = 0x271F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F78u;
        // 0x271f7c: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F80u;
        goto label_271f80;
    }
    ctx->pc = 0x271F78u;
    {
        const bool branch_taken_0x271f78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F78u;
        // 0x271f7c: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f78) {
            ctx->pc = 0x271FD0u;
            goto label_271fd0;
        }
    }
    ctx->pc = 0x271F80u;
label_271f80:
    // 0x271f80: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_271f84:
    // 0x271f84: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x271f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_271f88:
    // 0x271f88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x271f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_271f8c:
    // 0x271f8c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_271f90:
    if (ctx->pc == 0x271F90u) {
        ctx->pc = 0x271F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F8Cu;
        // 0x271f90: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F94u;
        goto label_271f94;
    }
    ctx->pc = 0x271F8Cu;
    {
        const bool branch_taken_0x271f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F8Cu;
        // 0x271f90: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f8c) {
            ctx->pc = 0x271FD0u;
            goto label_271fd0;
        }
    }
    ctx->pc = 0x271F94u;
label_271f94:
    // 0x271f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_271f98:
    // 0x271f98: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_271f9c:
    if (ctx->pc == 0x271F9Cu) {
        ctx->pc = 0x271F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F98u;
        // 0x271f9c: 0x8f829ce8  lw          $v0, -0x6318($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FA0u;
        goto label_271fa0;
    }
    ctx->pc = 0x271F98u;
    {
        const bool branch_taken_0x271f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F98u;
        // 0x271f9c: 0x8f829ce8  lw          $v0, -0x6318($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f98) {
            ctx->pc = 0x271FD4u;
            goto label_271fd4;
        }
    }
    ctx->pc = 0x271FA0u;
label_271fa0:
    // 0x271fa0: 0xc0a252c  jal         func_2894B0
label_271fa4:
    if (ctx->pc == 0x271FA4u) {
        ctx->pc = 0x271FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA0u;
        // 0x271fa4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FA8u;
        goto label_271fa8;
    }
    ctx->pc = 0x271FA0u;
    SET_GPR_U32(ctx, 31, 0x271FA8u);
    ctx->pc = 0x271FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271FA0u;
    // 0x271fa4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2894B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2894B0u, 0x271FA0u, 0x271FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FA8u;
label_271fa8:
    // 0x271fa8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_271fac:
    if (ctx->pc == 0x271FACu) {
        ctx->pc = 0x271FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA8u;
        // 0x271fac: 0x8f829ce8  lw          $v0, -0x6318($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FB0u;
        goto label_271fb0;
    }
    ctx->pc = 0x271FA8u;
    {
        const bool branch_taken_0x271fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA8u;
        // 0x271fac: 0x8f829ce8  lw          $v0, -0x6318($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fa8) {
            ctx->pc = 0x271FD4u;
            goto label_271fd4;
        }
    }
    ctx->pc = 0x271FB0u;
label_271fb0:
    // 0x271fb0: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x271fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_271fb4:
    // 0x271fb4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x271fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_271fb8:
    // 0x271fb8: 0x2463df10  addiu       $v1, $v1, -0x20F0
    ctx->pc = 0x271fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958864));
label_271fbc:
    // 0x271fbc: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x271fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_271fc0:
    // 0x271fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_271fc4:
    // 0x271fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_271fc8:
    // 0x271fc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271fcc:
    // 0x271fcc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x271fccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_271fd0:
    // 0x271fd0: 0x8f829ce8  lw          $v0, -0x6318($gp)
    ctx->pc = 0x271fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
label_271fd4:
    // 0x271fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_271fd8:
    if (ctx->pc == 0x271FD8u) {
        ctx->pc = 0x271FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FD4u;
        // 0x271fd8: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FDCu;
        goto label_271fdc;
    }
    ctx->pc = 0x271FD4u;
    {
        const bool branch_taken_0x271fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FD4u;
        // 0x271fd8: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fd4) {
            ctx->pc = 0x271FECu;
            goto label_271fec;
        }
    }
    ctx->pc = 0x271FDCu;
label_271fdc:
    // 0x271fdc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_271fe0:
    if (ctx->pc == 0x271FE0u) {
        ctx->pc = 0x271FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FDCu;
        // 0x271fe0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FE4u;
        goto label_271fe4;
    }
    ctx->pc = 0x271FDCu;
    {
        const bool branch_taken_0x271fdc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FDCu;
        // 0x271fe0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fdc) {
            ctx->pc = 0x271FF0u;
            goto label_271ff0;
        }
    }
    ctx->pc = 0x271FE4u;
label_271fe4:
    // 0x271fe4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x271fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_271fe8:
    // 0x271fe8: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x271fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_271fec:
    // 0x271fec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_271ff0:
    // 0x271ff0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x271ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_271ff4:
    // 0x271ff4: 0x14430069  bne         $v0, $v1, . + 4 + (0x69 << 2)
label_271ff8:
    if (ctx->pc == 0x271FF8u) {
        ctx->pc = 0x271FFCu;
        goto label_271ffc;
    }
    ctx->pc = 0x271FF4u;
    {
        const bool branch_taken_0x271ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x271ff4) {
            ctx->pc = 0x27219Cu;
            goto label_27219c;
        }
    }
    ctx->pc = 0x271FFCu;
label_271ffc:
    // 0x271ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_272000:
    // 0x272000: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x272000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_272004:
    // 0x272004: 0x46004a06  mov.s       $f8, $f9
    ctx->pc = 0x272004u;
    ctx->f[8] = FPU_MOV_S(ctx->f[9]);
label_272008:
    // 0x272008: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
label_27200c:
    if (ctx->pc == 0x27200Cu) {
        ctx->pc = 0x27200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272008u;
        // 0x27200c: 0x460049c6  mov.s       $f7, $f9 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272010u;
        goto label_272010;
    }
    ctx->pc = 0x272008u;
    {
        const bool branch_taken_0x272008 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272008u;
        // 0x27200c: 0x460049c6  mov.s       $f7, $f9 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272008) {
            ctx->pc = 0x272148u;
            goto label_272148;
        }
    }
    ctx->pc = 0x272010u;
label_272010:
    // 0x272010: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x272010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_272014:
    // 0x272014: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_272018:
    if (ctx->pc == 0x272018u) {
        ctx->pc = 0x272018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272014u;
        // 0x272018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27201Cu;
        goto label_27201c;
    }
    ctx->pc = 0x272014u;
    {
        const bool branch_taken_0x272014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272014u;
        // 0x272018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272014) {
            ctx->pc = 0x272020u;
            goto label_272020;
        }
    }
    ctx->pc = 0x27201Cu;
label_27201c:
    // 0x27201c: 0xc7888540  lwc1        $f8, -0x7AC0($gp)
    ctx->pc = 0x27201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_272020:
    // 0x272020: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_272024:
    if (ctx->pc == 0x272024u) {
        ctx->pc = 0x272024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272020u;
        // 0x272024: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272028u;
        goto label_272028;
    }
    ctx->pc = 0x272020u;
    {
        const bool branch_taken_0x272020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272020u;
        // 0x272024: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272020) {
            ctx->pc = 0x27202Cu;
            goto label_27202c;
        }
    }
    ctx->pc = 0x272028u;
label_272028:
    // 0x272028: 0xc7888544  lwc1        $f8, -0x7ABC($gp)
    ctx->pc = 0x272028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_27202c:
    // 0x27202c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_272030:
    if (ctx->pc == 0x272030u) {
        ctx->pc = 0x272030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27202Cu;
        // 0x272030: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272034u;
        goto label_272034;
    }
    ctx->pc = 0x27202Cu;
    {
        const bool branch_taken_0x27202c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27202Cu;
        // 0x272030: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27202c) {
            ctx->pc = 0x272038u;
            goto label_272038;
        }
    }
    ctx->pc = 0x272034u;
label_272034:
    // 0x272034: 0xc7888548  lwc1        $f8, -0x7AB8($gp)
    ctx->pc = 0x272034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_272038:
    // 0x272038: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x272038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_27203c:
    // 0x27203c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27203cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272040:
    // 0x272040: 0x0  nop
    ctx->pc = 0x272040u;
    // NOP
label_272044:
    // 0x272044: 0x0  nop
    ctx->pc = 0x272044u;
    // NOP
label_272048:
    // 0x272048: 0x460009c3  div.s       $f7, $f1, $f0
    ctx->pc = 0x272048u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[7] = ctx->f[1] / ctx->f[0];
label_27204c:
    // 0x27204c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_272050:
    if (ctx->pc == 0x272050u) {
        ctx->pc = 0x272050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27204Cu;
        // 0x272050: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272054u;
        goto label_272054;
    }
    ctx->pc = 0x27204Cu;
    {
        const bool branch_taken_0x27204c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27204Cu;
        // 0x272050: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27204c) {
            ctx->pc = 0x27206Cu;
            goto label_27206c;
        }
    }
    ctx->pc = 0x272054u;
label_272054:
    // 0x272054: 0xc780854c  lwc1        $f0, -0x7AB4($gp)
    ctx->pc = 0x272054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272058:
    // 0x272058: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x272058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27205c:
    // 0x27205c: 0x0  nop
    ctx->pc = 0x27205cu;
    // NOP
label_272060:
    // 0x272060: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_272064:
    if (ctx->pc == 0x272064u) {
        ctx->pc = 0x272064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272060u;
        // 0x272064: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272068u;
        goto label_272068;
    }
    ctx->pc = 0x272060u;
    {
        const bool branch_taken_0x272060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272060) {
            ctx->pc = 0x272064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272060u;
            // 0x272064: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
            ctx->f[7] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27206Cu;
            goto label_27206c;
        }
    }
    ctx->pc = 0x272068u;
label_272068:
    // 0x272068: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x272068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_27206c:
    // 0x27206c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272070:
    // 0x272070: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x272070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_272074:
    // 0x272074: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_272078:
    if (ctx->pc == 0x272078u) {
        ctx->pc = 0x272078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272074u;
        // 0x272078: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27207Cu;
        goto label_27207c;
    }
    ctx->pc = 0x272074u;
    {
        const bool branch_taken_0x272074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x272078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272074u;
        // 0x272078: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272074) {
            ctx->pc = 0x272094u;
            goto label_272094;
        }
    }
    ctx->pc = 0x27207Cu;
label_27207c:
    // 0x27207c: 0xc7808550  lwc1        $f0, -0x7AB0($gp)
    ctx->pc = 0x27207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272080:
    // 0x272080: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x272080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272084:
    // 0x272084: 0x0  nop
    ctx->pc = 0x272084u;
    // NOP
label_272088:
    // 0x272088: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_27208c:
    if (ctx->pc == 0x27208Cu) {
        ctx->pc = 0x27208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272088u;
        // 0x27208c: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272090u;
        goto label_272090;
    }
    ctx->pc = 0x272088u;
    {
        const bool branch_taken_0x272088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272088) {
            ctx->pc = 0x27208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272088u;
            // 0x27208c: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
            ctx->f[7] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272094u;
            goto label_272094;
        }
    }
    ctx->pc = 0x272090u;
label_272090:
    // 0x272090: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x272090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_272094:
    // 0x272094: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x272094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272098:
    // 0x272098: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x272098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_27209c:
    // 0x27209c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_2720a0:
    if (ctx->pc == 0x2720A0u) {
        ctx->pc = 0x2720A4u;
        goto label_2720a4;
    }
    ctx->pc = 0x27209Cu;
    {
        const bool branch_taken_0x27209c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27209c) {
            ctx->pc = 0x2720B8u;
            goto label_2720b8;
        }
    }
    ctx->pc = 0x2720A4u;
label_2720a4:
    // 0x2720a4: 0xc7808554  lwc1        $f0, -0x7AAC($gp)
    ctx->pc = 0x2720a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2720a8:
    // 0x2720a8: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2720a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2720ac:
    // 0x2720ac: 0x0  nop
    ctx->pc = 0x2720acu;
    // NOP
label_2720b0:
    // 0x2720b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2720b4:
    if (ctx->pc == 0x2720B4u) {
        ctx->pc = 0x2720B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720B0u;
        // 0x2720b4: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720B8u;
        goto label_2720b8;
    }
    ctx->pc = 0x2720B0u;
    {
        const bool branch_taken_0x2720b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2720b0) {
            ctx->pc = 0x2720B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2720B0u;
            // 0x2720b4: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
            ctx->f[7] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2720B8u;
            goto label_2720b8;
        }
    }
    ctx->pc = 0x2720B8u;
label_2720b8:
    // 0x2720b8: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_2720bc:
    if (ctx->pc == 0x2720BCu) {
        ctx->pc = 0x2720C0u;
        goto label_2720c0;
    }
    ctx->pc = 0x2720B8u;
    {
        const bool branch_taken_0x2720b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2720b8) {
            ctx->pc = 0x272140u;
            goto label_272140;
        }
    }
    ctx->pc = 0x2720C0u;
label_2720c0:
    // 0x2720c0: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x2720c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_2720c4:
    // 0x2720c4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2720c8:
    if (ctx->pc == 0x2720C8u) {
        ctx->pc = 0x2720CCu;
        goto label_2720cc;
    }
    ctx->pc = 0x2720C4u;
    {
        const bool branch_taken_0x2720c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720c4) {
            ctx->pc = 0x272140u;
            goto label_272140;
        }
    }
    ctx->pc = 0x2720CCu;
label_2720cc:
    // 0x2720cc: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x2720ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2720d0:
    // 0x2720d0: 0xc6440034  lwc1        $f4, 0x34($s2)
    ctx->pc = 0x2720d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2720d4:
    // 0x2720d4: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2720d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2720d8:
    // 0x2720d8: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x2720d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2720dc:
    // 0x2720dc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2720dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2720e0:
    // 0x2720e0: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x2720e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2720e4:
    // 0x2720e4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2720e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_2720e8:
    // 0x2720e8: 0xc6450038  lwc1        $f5, 0x38($s2)
    ctx->pc = 0x2720e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2720ec:
    // 0x2720ec: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2720ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2720f0:
    // 0x2720f0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2720f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2720f4:
    // 0x2720f4: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x2720f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2720f8:
    // 0x2720f8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2720f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2720fc:
    // 0x2720fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2720fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_272100:
    // 0x272100: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x272100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_272104:
    // 0x272104: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x272104u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_272108:
    // 0x272108: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x272108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27210c:
    // 0x27210c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x27210cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_272110:
    // 0x272110: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x272110u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_272114:
    // 0x272114: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x272114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272118:
    // 0x272118: 0x0  nop
    ctx->pc = 0x272118u;
    // NOP
label_27211c:
    // 0x27211c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_272120:
    if (ctx->pc == 0x272120u) {
        ctx->pc = 0x272120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27211Cu;
        // 0x272120: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272124u;
        goto label_272124;
    }
    ctx->pc = 0x27211Cu;
    {
        const bool branch_taken_0x27211c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27211Cu;
        // 0x272120: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27211c) {
            ctx->pc = 0x272140u;
            goto label_272140;
        }
    }
    ctx->pc = 0x272124u;
label_272124:
    // 0x272124: 0x46033001  sub.s       $f0, $f6, $f3
    ctx->pc = 0x272124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_272128:
    // 0x272128: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x272128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_27212c:
    // 0x27212c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27212cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_272130:
    // 0x272130: 0x0  nop
    ctx->pc = 0x272130u;
    // NOP
label_272134:
    // 0x272134: 0x0  nop
    ctx->pc = 0x272134u;
    // NOP
label_272138:
    // 0x272138: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x272138u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_27213c:
    // 0x27213c: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x27213cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_272140:
    // 0x272140: 0x56800014  bnel        $s4, $zero, . + 4 + (0x14 << 2)
label_272144:
    if (ctx->pc == 0x272144u) {
        ctx->pc = 0x272144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272140u;
        // 0x272144: 0x46074002  mul.s       $f0, $f8, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272148u;
        goto label_272148;
    }
    ctx->pc = 0x272140u;
    {
        const bool branch_taken_0x272140 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x272140) {
            ctx->pc = 0x272144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272140u;
            // 0x272144: 0x46074002  mul.s       $f0, $f8, $f7 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272194u;
            goto label_272194;
        }
    }
    ctx->pc = 0x272148u;
label_272148:
    // 0x272148: 0x52600012  beql        $s3, $zero, . + 4 + (0x12 << 2)
label_27214c:
    if (ctx->pc == 0x27214Cu) {
        ctx->pc = 0x27214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272148u;
        // 0x27214c: 0x46074002  mul.s       $f0, $f8, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272150u;
        goto label_272150;
    }
    ctx->pc = 0x272148u;
    {
        const bool branch_taken_0x272148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x272148) {
            ctx->pc = 0x27214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272148u;
            // 0x27214c: 0x46074002  mul.s       $f0, $f8, $f7 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272194u;
            goto label_272194;
        }
    }
    ctx->pc = 0x272150u;
label_272150:
    // 0x272150: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x272150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_272154:
    // 0x272154: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_272158:
    if (ctx->pc == 0x272158u) {
        ctx->pc = 0x272158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272154u;
        // 0x272158: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27215Cu;
        goto label_27215c;
    }
    ctx->pc = 0x272154u;
    {
        const bool branch_taken_0x272154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272154u;
        // 0x272158: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272154) {
            ctx->pc = 0x272190u;
            goto label_272190;
        }
    }
    ctx->pc = 0x27215Cu;
label_27215c:
    // 0x27215c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x27215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_272160:
    // 0x272160: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_272164:
    if (ctx->pc == 0x272164u) {
        ctx->pc = 0x272164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272160u;
        // 0x272164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272168u;
        goto label_272168;
    }
    ctx->pc = 0x272160u;
    {
        const bool branch_taken_0x272160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272160u;
        // 0x272164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272160) {
            ctx->pc = 0x272170u;
            goto label_272170;
        }
    }
    ctx->pc = 0x272168u;
label_272168:
    // 0x272168: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x272168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_27216c:
    // 0x27216c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x27216cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_272170:
    // 0x272170: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_272174:
    if (ctx->pc == 0x272174u) {
        ctx->pc = 0x272174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272170u;
        // 0x272174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272178u;
        goto label_272178;
    }
    ctx->pc = 0x272170u;
    {
        const bool branch_taken_0x272170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272170u;
        // 0x272174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272170) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x272178u;
label_272178:
    // 0x272178: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x272178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_27217c:
    // 0x27217c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x27217cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_272180:
    // 0x272180: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_272184:
    if (ctx->pc == 0x272184u) {
        ctx->pc = 0x272184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272180u;
        // 0x272184: 0x46074002  mul.s       $f0, $f8, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272188u;
        goto label_272188;
    }
    ctx->pc = 0x272180u;
    {
        const bool branch_taken_0x272180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272180) {
            ctx->pc = 0x272184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272180u;
            // 0x272184: 0x46074002  mul.s       $f0, $f8, $f7 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272194u;
            goto label_272194;
        }
    }
    ctx->pc = 0x272188u;
label_272188:
    // 0x272188: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x272188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_27218c:
    // 0x27218c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x27218cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_272190:
    // 0x272190: 0x46074002  mul.s       $f0, $f8, $f7
    ctx->pc = 0x272190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_272194:
    // 0x272194: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x272194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_272198:
    // 0x272198: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x272198u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27219c:
    // 0x27219c: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_2721a0:
    if (ctx->pc == 0x2721A0u) {
        ctx->pc = 0x2721A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27219Cu;
        // 0x2721a0: 0x4617ad42  mul.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721A4u;
        goto label_2721a4;
    }
    ctx->pc = 0x27219Cu;
    {
        const bool branch_taken_0x27219c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27219Cu;
        // 0x2721a0: 0x4617ad42  mul.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27219c) {
            ctx->pc = 0x2721F8u;
            goto label_2721f8;
        }
    }
    ctx->pc = 0x2721A4u;
label_2721a4:
    // 0x2721a4: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x2721a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_2721a8:
    // 0x2721a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2721a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2721ac:
    // 0x2721ac: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2721acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2721b0:
    // 0x2721b0: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_2721b4:
    if (ctx->pc == 0x2721B4u) {
        ctx->pc = 0x2721B8u;
        goto label_2721b8;
    }
    ctx->pc = 0x2721B0u;
    {
        const bool branch_taken_0x2721b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2721b0) {
            ctx->pc = 0x2721F8u;
            goto label_2721f8;
        }
    }
    ctx->pc = 0x2721B8u;
label_2721b8:
    // 0x2721b8: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2721b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2721bc:
    // 0x2721bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2721bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2721c0:
    // 0x2721c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2721c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2721c4:
    // 0x2721c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2721c8:
    if (ctx->pc == 0x2721C8u) {
        ctx->pc = 0x2721C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721C4u;
        // 0x2721c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721CCu;
        goto label_2721cc;
    }
    ctx->pc = 0x2721C4u;
    {
        const bool branch_taken_0x2721c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2721C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721C4u;
        // 0x2721c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721c4) {
            ctx->pc = 0x2721D0u;
            goto label_2721d0;
        }
    }
    ctx->pc = 0x2721CCu;
label_2721cc:
    // 0x2721cc: 0xc7808558  lwc1        $f0, -0x7AA8($gp)
    ctx->pc = 0x2721ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721d0:
    // 0x2721d0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2721d4:
    if (ctx->pc == 0x2721D4u) {
        ctx->pc = 0x2721D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721D0u;
        // 0x2721d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721D8u;
        goto label_2721d8;
    }
    ctx->pc = 0x2721D0u;
    {
        const bool branch_taken_0x2721d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2721D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721D0u;
        // 0x2721d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721d0) {
            ctx->pc = 0x2721DCu;
            goto label_2721dc;
        }
    }
    ctx->pc = 0x2721D8u;
label_2721d8:
    // 0x2721d8: 0xc780855c  lwc1        $f0, -0x7AA4($gp)
    ctx->pc = 0x2721d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721dc:
    // 0x2721dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2721e0:
    if (ctx->pc == 0x2721E0u) {
        ctx->pc = 0x2721E4u;
        goto label_2721e4;
    }
    ctx->pc = 0x2721DCu;
    {
        const bool branch_taken_0x2721dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2721dc) {
            ctx->pc = 0x2721E8u;
            goto label_2721e8;
        }
    }
    ctx->pc = 0x2721E4u;
label_2721e4:
    // 0x2721e4: 0xc7808560  lwc1        $f0, -0x7AA0($gp)
    ctx->pc = 0x2721e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721e8:
    // 0x2721e8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2721e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2721ec:
    // 0x2721ec: 0x0  nop
    ctx->pc = 0x2721ecu;
    // NOP
label_2721f0:
    // 0x2721f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2721f4:
    if (ctx->pc == 0x2721F4u) {
        ctx->pc = 0x2721F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721F0u;
        // 0x2721f4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721F8u;
        goto label_2721f8;
    }
    ctx->pc = 0x2721F0u;
    {
        const bool branch_taken_0x2721f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2721f0) {
            ctx->pc = 0x2721F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2721F0u;
            // 0x2721f4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2721F8u;
            goto label_2721f8;
        }
    }
    ctx->pc = 0x2721F8u;
label_2721f8:
    // 0x2721f8: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
label_2721fc:
    if (ctx->pc == 0x2721FCu) {
        ctx->pc = 0x2721FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721F8u;
        // 0x2721fc: 0xc6a2000c  lwc1        $f2, 0xC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272200u;
        goto label_272200;
    }
    ctx->pc = 0x2721F8u;
    {
        const bool branch_taken_0x2721f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2721f8) {
            ctx->pc = 0x2721FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2721F8u;
            // 0x2721fc: 0xc6a2000c  lwc1        $f2, 0xC($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272264u;
            goto label_272264;
        }
    }
    ctx->pc = 0x272200u;
label_272200:
    // 0x272200: 0x12350017  beq         $s1, $s5, . + 4 + (0x17 << 2)
label_272204:
    if (ctx->pc == 0x272204u) {
        ctx->pc = 0x272204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272200u;
        // 0x272204: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272208u;
        goto label_272208;
    }
    ctx->pc = 0x272200u;
    {
        const bool branch_taken_0x272200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x272204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272200u;
        // 0x272204: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272200) {
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x272208u;
label_272208:
    // 0x272208: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x272208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_27220c:
    // 0x27220c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x27220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_272210:
    // 0x272210: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_272214:
    if (ctx->pc == 0x272214u) {
        ctx->pc = 0x272214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272210u;
        // 0x272214: 0xc6a2000c  lwc1        $f2, 0xC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272218u;
        goto label_272218;
    }
    ctx->pc = 0x272210u;
    {
        const bool branch_taken_0x272210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272210) {
            ctx->pc = 0x272214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272210u;
            // 0x272214: 0xc6a2000c  lwc1        $f2, 0xC($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272264u;
            goto label_272264;
        }
    }
    ctx->pc = 0x272218u;
label_272218:
    // 0x272218: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x272218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_27221c:
    // 0x27221c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x27221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_272220:
    // 0x272220: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_272224:
    if (ctx->pc == 0x272224u) {
        ctx->pc = 0x272224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272220u;
        // 0x272224: 0xc6a2000c  lwc1        $f2, 0xC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272228u;
        goto label_272228;
    }
    ctx->pc = 0x272220u;
    {
        const bool branch_taken_0x272220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272220) {
            ctx->pc = 0x272224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272220u;
            // 0x272224: 0xc6a2000c  lwc1        $f2, 0xC($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272264u;
            goto label_272264;
        }
    }
    ctx->pc = 0x272228u;
label_272228:
    // 0x272228: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x272228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_27222c:
    // 0x27222c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_272230:
    if (ctx->pc == 0x272230u) {
        ctx->pc = 0x272234u;
        goto label_272234;
    }
    ctx->pc = 0x27222Cu;
    {
        const bool branch_taken_0x27222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27222c) {
            ctx->pc = 0x272238u;
            goto label_272238;
        }
    }
    ctx->pc = 0x272234u;
label_272234:
    // 0x272234: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x272234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_272238:
    // 0x272238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x272238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27223c:
    // 0x27223c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27223cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_272240:
    // 0x272240: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x272240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_272244:
    // 0x272244: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272248:
    // 0x272248: 0xc088f98  jal         func_223E60
label_27224c:
    if (ctx->pc == 0x27224Cu) {
        ctx->pc = 0x27224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272248u;
        // 0x27224c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272250u;
        goto label_272250;
    }
    ctx->pc = 0x272248u;
    SET_GPR_U32(ctx, 31, 0x272250u);
    ctx->pc = 0x27224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272248u;
    // 0x27224c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x272248u, 0x272250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272250u;
label_272250:
    // 0x272250: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x272250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_272254:
    // 0x272254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x272254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_272258:
    // 0x272258: 0xc088f98  jal         func_223E60
label_27225c:
    if (ctx->pc == 0x27225Cu) {
        ctx->pc = 0x27225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272258u;
        // 0x27225c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272260u;
        goto label_272260;
    }
    ctx->pc = 0x272258u;
    SET_GPR_U32(ctx, 31, 0x272260u);
    ctx->pc = 0x27225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272258u;
    // 0x27225c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x272258u, 0x272260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272260u;
label_272260:
    // 0x272260: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x272260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272264:
    // 0x272264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272268:
    // 0x272268: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x272268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27226c:
    // 0x27226c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_272270:
    if (ctx->pc == 0x272270u) {
        ctx->pc = 0x272274u;
        goto label_272274;
    }
    ctx->pc = 0x27226Cu;
    {
        const bool branch_taken_0x27226c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27226c) {
            ctx->pc = 0x272298u;
            goto label_272298;
        }
    }
    ctx->pc = 0x272274u;
label_272274:
    // 0x272274: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x272274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272278:
    // 0x272278: 0x0  nop
    ctx->pc = 0x272278u;
    // NOP
label_27227c:
    // 0x27227c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_272280:
    if (ctx->pc == 0x272280u) {
        ctx->pc = 0x272280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27227Cu;
        // 0x272280: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272284u;
        goto label_272284;
    }
    ctx->pc = 0x27227Cu;
    {
        const bool branch_taken_0x27227c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27227Cu;
        // 0x272280: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27227c) {
            ctx->pc = 0x272288u;
            goto label_272288;
        }
    }
    ctx->pc = 0x272284u;
label_272284:
    // 0x272284: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x272284u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_272288:
    // 0x272288: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x272288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27228c:
    // 0x27228c: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x27228cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_272290:
    // 0x272290: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x272290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_272294:
    // 0x272294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272298:
    // 0x272298: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x272298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27229c:
    // 0x27229c: 0x0  nop
    ctx->pc = 0x27229cu;
    // NOP
label_2722a0:
    // 0x2722a0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_2722a4:
    if (ctx->pc == 0x2722A4u) {
        ctx->pc = 0x2722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722A0u;
        // 0x2722a4: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722A8u;
        goto label_2722a8;
    }
    ctx->pc = 0x2722A0u;
    {
        const bool branch_taken_0x2722a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2722a0) {
            ctx->pc = 0x2722A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722A0u;
            // 0x2722a4: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2722E0u;
            goto label_2722e0;
        }
    }
    ctx->pc = 0x2722A8u;
label_2722a8:
    // 0x2722a8: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_2722ac:
    if (ctx->pc == 0x2722ACu) {
        ctx->pc = 0x2722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722A8u;
        // 0x2722ac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722B0u;
        goto label_2722b0;
    }
    ctx->pc = 0x2722A8u;
    {
        const bool branch_taken_0x2722a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722A8u;
        // 0x2722ac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722a8) {
            ctx->pc = 0x2722DCu;
            goto label_2722dc;
        }
    }
    ctx->pc = 0x2722B0u;
label_2722b0:
    // 0x2722b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2722b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2722b4:
    // 0x2722b4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2722b8:
    if (ctx->pc == 0x2722B8u) {
        ctx->pc = 0x2722B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722B4u;
        // 0x2722b8: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722BCu;
        goto label_2722bc;
    }
    ctx->pc = 0x2722B4u;
    {
        const bool branch_taken_0x2722b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2722b4) {
            ctx->pc = 0x2722B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722B4u;
            // 0x2722b8: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2722E0u;
            goto label_2722e0;
        }
    }
    ctx->pc = 0x2722BCu;
label_2722bc:
    // 0x2722bc: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2722bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_2722c0:
    // 0x2722c0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2722c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2722c4:
    // 0x2722c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2722c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2722c8:
    // 0x2722c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2722cc:
    if (ctx->pc == 0x2722CCu) {
        ctx->pc = 0x2722CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722C8u;
        // 0x2722cc: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722D0u;
        goto label_2722d0;
    }
    ctx->pc = 0x2722C8u;
    {
        const bool branch_taken_0x2722c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722c8) {
            ctx->pc = 0x2722CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722C8u;
            // 0x2722cc: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2722E0u;
            goto label_2722e0;
        }
    }
    ctx->pc = 0x2722D0u;
label_2722d0:
    // 0x2722d0: 0xc6550208  lwc1        $f21, 0x208($s2)
    ctx->pc = 0x2722d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2722d4:
    // 0x2722d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2722d8:
    if (ctx->pc == 0x2722D8u) {
        ctx->pc = 0x2722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722D4u;
        // 0x2722d8: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722DCu;
        goto label_2722dc;
    }
    ctx->pc = 0x2722D4u;
    {
        const bool branch_taken_0x2722d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722D4u;
        // 0x2722d8: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722d4) {
            ctx->pc = 0x2722E0u;
            goto label_2722e0;
        }
    }
    ctx->pc = 0x2722DCu;
label_2722dc:
    // 0x2722dc: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x2722dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2722e0:
    // 0x2722e0: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x2722e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_2722e4:
    // 0x2722e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2722e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2722e8:
    // 0x2722e8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2722e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2722ec:
    // 0x2722ec: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_2722f0:
    if (ctx->pc == 0x2722F0u) {
        ctx->pc = 0x2722F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722ECu;
        // 0x2722f0: 0x46150801  sub.s       $f0, $f1, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722F4u;
        goto label_2722f4;
    }
    ctx->pc = 0x2722ECu;
    {
        const bool branch_taken_0x2722ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2722ec) {
            ctx->pc = 0x2722F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722ECu;
            // 0x2722f0: 0x46150801  sub.s       $f0, $f1, $f21 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272310u;
            goto label_272310;
        }
    }
    ctx->pc = 0x2722F4u;
label_2722f4:
    // 0x2722f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2722f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2722f8:
    // 0x2722f8: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x2722f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8208)));
label_2722fc:
    // 0x2722fc: 0x56430004  bnel        $s2, $v1, . + 4 + (0x4 << 2)
label_272300:
    if (ctx->pc == 0x272300u) {
        ctx->pc = 0x272300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722FCu;
        // 0x272300: 0x46150801  sub.s       $f0, $f1, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272304u;
        goto label_272304;
    }
    ctx->pc = 0x2722FCu;
    {
        const bool branch_taken_0x2722fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2722fc) {
            ctx->pc = 0x272300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722FCu;
            // 0x272300: 0x46150801  sub.s       $f0, $f1, $f21 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272310u;
            goto label_272310;
        }
    }
    ctx->pc = 0x272304u;
label_272304:
    // 0x272304: 0xc7808564  lwc1        $f0, -0x7A9C($gp)
    ctx->pc = 0x272304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272308:
    // 0x272308: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x272308u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27230c:
    // 0x27230c: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x27230cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_272310:
    // 0x272310: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x272310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_272314:
    // 0x272314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272318:
    // 0x272318: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x272318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27231c:
    // 0x27231c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_272320:
    if (ctx->pc == 0x272320u) {
        ctx->pc = 0x272320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27231Cu;
        // 0x272320: 0xe6400208  swc1        $f0, 0x208($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272324u;
        goto label_272324;
    }
    ctx->pc = 0x27231Cu;
    {
        const bool branch_taken_0x27231c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x272320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27231Cu;
        // 0x272320: 0xe6400208  swc1        $f0, 0x208($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27231c) {
            ctx->pc = 0x272344u;
            goto label_272344;
        }
    }
    ctx->pc = 0x272324u;
label_272324:
    // 0x272324: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x272324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_272328:
    // 0x272328: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x272328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27232c:
    // 0x27232c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x27232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_272330:
    // 0x272330: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_272334:
    if (ctx->pc == 0x272334u) {
        ctx->pc = 0x272334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272330u;
        // 0x272334: 0xc6400208  lwc1        $f0, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272338u;
        goto label_272338;
    }
    ctx->pc = 0x272330u;
    {
        const bool branch_taken_0x272330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x272330) {
            ctx->pc = 0x272334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272330u;
            // 0x272334: 0xc6400208  lwc1        $f0, 0x208($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272348u;
            goto label_272348;
        }
    }
    ctx->pc = 0x272338u;
label_272338:
    // 0x272338: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x272338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_27233c:
    // 0x27233c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_272340:
    if (ctx->pc == 0x272340u) {
        ctx->pc = 0x272340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27233Cu;
        // 0x272340: 0xae400208  sw          $zero, 0x208($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272344u;
        goto label_272344;
    }
    ctx->pc = 0x27233Cu;
    {
        const bool branch_taken_0x27233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27233c) {
            ctx->pc = 0x272340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27233Cu;
            // 0x272340: 0xae400208  sw          $zero, 0x208($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272344u;
            goto label_272344;
        }
    }
    ctx->pc = 0x272344u;
label_272344:
    // 0x272344: 0xc6400208  lwc1        $f0, 0x208($s2)
    ctx->pc = 0x272344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272348:
    // 0x272348: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x272348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27234c:
    // 0x27234c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27234cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272350:
    // 0x272350: 0x0  nop
    ctx->pc = 0x272350u;
    // NOP
label_272354:
    // 0x272354: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_272358:
    if (ctx->pc == 0x272358u) {
        ctx->pc = 0x272358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272354u;
        // 0x272358: 0xe6410208  swc1        $f1, 0x208($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27235Cu;
        goto label_27235c;
    }
    ctx->pc = 0x272354u;
    {
        const bool branch_taken_0x272354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272354) {
            ctx->pc = 0x272358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272354u;
            // 0x272358: 0xe6410208  swc1        $f1, 0x208($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27235Cu;
            goto label_27235c;
        }
    }
    ctx->pc = 0x27235Cu;
label_27235c:
    // 0x27235c: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
label_272360:
    if (ctx->pc == 0x272360u) {
        ctx->pc = 0x272360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27235Cu;
        // 0x272360: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272364u;
        goto label_272364;
    }
    ctx->pc = 0x27235Cu;
    {
        const bool branch_taken_0x27235c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x272360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27235Cu;
        // 0x272360: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27235c) {
            ctx->pc = 0x272450u;
            goto label_272450;
        }
    }
    ctx->pc = 0x272364u;
label_272364:
    // 0x272364: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_272368:
    // 0x272368: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
label_27236c:
    // 0x27236c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27236cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272370:
    // 0x272370: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_272374:
    // 0x272374: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x272374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_272378:
    // 0x272378: 0x24a5f838  addiu       $a1, $a1, -0x7C8
    ctx->pc = 0x272378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965304));
label_27237c:
    // 0x27237c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x27237cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_272380:
    // 0x272380: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x272380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_272384:
    // 0x272384: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x272384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_272388:
    // 0x272388: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x272388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27238c:
    // 0x27238c: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x27238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_272390:
    // 0x272390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_272394:
    // 0x272394: 0xac82010c  sw          $v0, 0x10C($a0)
    ctx->pc = 0x272394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 2));
label_272398:
    // 0x272398: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x272398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27239c:
    // 0x27239c: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x27239cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2723a0:
    // 0x2723a0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2723a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2723a4:
    // 0x2723a4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2723a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2723a8:
    // 0x2723a8: 0x28420259  slti        $v0, $v0, 0x259
    ctx->pc = 0x2723a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)601) ? 1 : 0);
label_2723ac:
    // 0x2723ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2723b0:
    if (ctx->pc == 0x2723B0u) {
        ctx->pc = 0x2723B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723ACu;
        // 0x2723b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2723B4u;
        goto label_2723b4;
    }
    ctx->pc = 0x2723ACu;
    {
        const bool branch_taken_0x2723ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2723B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723ACu;
        // 0x2723b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723ac) {
            ctx->pc = 0x2723C0u;
            goto label_2723c0;
        }
    }
    ctx->pc = 0x2723B4u;
label_2723b4:
    // 0x2723b4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2723b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2723b8:
    // 0x2723b8: 0xac62010c  sw          $v0, 0x10C($v1)
    ctx->pc = 0x2723b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 2));
label_2723bc:
    // 0x2723bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2723bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2723c0:
    // 0x2723c0: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
label_2723c4:
    if (ctx->pc == 0x2723C4u) {
        ctx->pc = 0x2723C8u;
        goto label_2723c8;
    }
    ctx->pc = 0x2723C0u;
    {
        const bool branch_taken_0x2723c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2723c0) {
            ctx->pc = 0x272404u;
            goto label_272404;
        }
    }
    ctx->pc = 0x2723C8u;
label_2723c8:
    // 0x2723c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2723c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2723cc:
    // 0x2723cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2723ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2723d0:
    // 0x2723d0: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2723d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2723d4:
    // 0x2723d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2723d8:
    if (ctx->pc == 0x2723D8u) {
        ctx->pc = 0x2723DCu;
        goto label_2723dc;
    }
    ctx->pc = 0x2723D4u;
    {
        const bool branch_taken_0x2723d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2723d4) {
            ctx->pc = 0x2723ECu;
            goto label_2723ec;
        }
    }
    ctx->pc = 0x2723DCu;
label_2723dc:
    // 0x2723dc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2723e0:
    // 0x2723e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2723e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2723e4:
    // 0x2723e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2723e8:
    if (ctx->pc == 0x2723E8u) {
        ctx->pc = 0x2723E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723E4u;
        // 0x2723e8: 0x4600c002  mul.s       $f0, $f24, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2723ECu;
        goto label_2723ec;
    }
    ctx->pc = 0x2723E4u;
    {
        const bool branch_taken_0x2723e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723E4u;
        // 0x2723e8: 0x4600c002  mul.s       $f0, $f24, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723e4) {
            ctx->pc = 0x2723F4u;
            goto label_2723f4;
        }
    }
    ctx->pc = 0x2723ECu;
label_2723ec:
    // 0x2723ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2723ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2723f0:
    // 0x2723f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2723f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2723f4:
    // 0x2723f4: 0xe68006f0  swc1        $f0, 0x6F0($s4)
    ctx->pc = 0x2723f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1776), bits); }
label_2723f8:
    // 0x2723f8: 0xc7808568  lwc1        $f0, -0x7A98($gp)
    ctx->pc = 0x2723f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2723fc:
    // 0x2723fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_272400:
    if (ctx->pc == 0x272400u) {
        ctx->pc = 0x272400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723FCu;
        // 0x272400: 0xe68006f4  swc1        $f0, 0x6F4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1780), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272404u;
        goto label_272404;
    }
    ctx->pc = 0x2723FCu;
    {
        const bool branch_taken_0x2723fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723FCu;
        // 0x272400: 0xe68006f4  swc1        $f0, 0x6F4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1780), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723fc) {
            ctx->pc = 0x272450u;
            goto label_272450;
        }
    }
    ctx->pc = 0x272404u;
label_272404:
    // 0x272404: 0xc0a252c  jal         func_2894B0
label_272408:
    if (ctx->pc == 0x272408u) {
        ctx->pc = 0x272408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272404u;
        // 0x272408: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27240Cu;
        goto label_27240c;
    }
    ctx->pc = 0x272404u;
    SET_GPR_U32(ctx, 31, 0x27240Cu);
    ctx->pc = 0x272408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272404u;
    // 0x272408: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2894B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2894B0u, 0x272404u, 0x27240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27240Cu;
label_27240c:
    // 0x27240c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_272410:
    if (ctx->pc == 0x272410u) {
        ctx->pc = 0x272410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27240Cu;
        // 0x272410: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272414u;
        goto label_272414;
    }
    ctx->pc = 0x27240Cu;
    {
        const bool branch_taken_0x27240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27240Cu;
        // 0x272410: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27240c) {
            ctx->pc = 0x272430u;
            goto label_272430;
        }
    }
    ctx->pc = 0x272414u;
label_272414:
    // 0x272414: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x272414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_272418:
    // 0x272418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27241c:
    // 0x27241c: 0xc781856c  lwc1        $f1, -0x7A94($gp)
    ctx->pc = 0x27241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272420:
    // 0x272420: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x272420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_272424:
    // 0x272424: 0xe68106f4  swc1        $f1, 0x6F4($s4)
    ctx->pc = 0x272424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1780), bits); }
label_272428:
    // 0x272428: 0x10000009  b           . + 4 + (0x9 << 2)
label_27242c:
    if (ctx->pc == 0x27242Cu) {
        ctx->pc = 0x27242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272428u;
        // 0x27242c: 0xe68006f0  swc1        $f0, 0x6F0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272430u;
        goto label_272430;
    }
    ctx->pc = 0x272428u;
    {
        const bool branch_taken_0x272428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272428u;
        // 0x27242c: 0xe68006f0  swc1        $f0, 0x6F0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1776), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272428) {
            ctx->pc = 0x272450u;
            goto label_272450;
        }
    }
    ctx->pc = 0x272430u;
label_272430:
    // 0x272430: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x272430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_272434:
    // 0x272434: 0x24425ea0  addiu       $v0, $v0, 0x5EA0
    ctx->pc = 0x272434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24224));
label_272438:
    // 0x272438: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x272438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27243c:
    // 0x27243c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272440:
    // 0x272440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_272444:
    // 0x272444: 0xe68006f0  swc1        $f0, 0x6F0($s4)
    ctx->pc = 0x272444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1776), bits); }
label_272448:
    // 0x272448: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x272448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27244c:
    // 0x27244c: 0xe68106f4  swc1        $f1, 0x6F4($s4)
    ctx->pc = 0x27244cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1780), bits); }
label_272450:
    // 0x272450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272454:
    // 0x272454: 0x56c20008  bnel        $s6, $v0, . + 4 + (0x8 << 2)
label_272458:
    if (ctx->pc == 0x272458u) {
        ctx->pc = 0x272458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272454u;
        // 0x272458: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27245Cu;
        goto label_27245c;
    }
    ctx->pc = 0x272454u;
    {
        const bool branch_taken_0x272454 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x272454) {
            ctx->pc = 0x272458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272454u;
            // 0x272458: 0xc6410208  lwc1        $f1, 0x208($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272478u;
            goto label_272478;
        }
    }
    ctx->pc = 0x27245Cu;
label_27245c:
    // 0x27245c: 0xc0ada34  jal         func_2B68D0
label_272460:
    if (ctx->pc == 0x272460u) {
        ctx->pc = 0x272464u;
        goto label_272464;
    }
    ctx->pc = 0x27245Cu;
    SET_GPR_U32(ctx, 31, 0x272464u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27245Cu, 0x272464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272464u;
label_272464:
    // 0x272464: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x272464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_272468:
    // 0x272468: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x272468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27246c:
    // 0x27246c: 0xc081546  jal         func_205518
label_272470:
    if (ctx->pc == 0x272470u) {
        ctx->pc = 0x272470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27246Cu;
        // 0x272470: 0x244400cf  addiu       $a0, $v0, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 207));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272474u;
        goto label_272474;
    }
    ctx->pc = 0x27246Cu;
    SET_GPR_U32(ctx, 31, 0x272474u);
    ctx->pc = 0x272470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27246Cu;
    // 0x272470: 0x244400cf  addiu       $a0, $v0, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x27246Cu, 0x272474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272474u;
label_272474:
    // 0x272474: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x272474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272478:
    // 0x272478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27247c:
    // 0x27247c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27247cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272480:
    // 0x272480: 0x0  nop
    ctx->pc = 0x272480u;
    // NOP
label_272484:
    // 0x272484: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_272488:
    if (ctx->pc == 0x272488u) {
        ctx->pc = 0x272488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272484u;
        // 0x272488: 0x8f859da8  lw          $a1, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27248Cu;
        goto label_27248c;
    }
    ctx->pc = 0x272484u;
    {
        const bool branch_taken_0x272484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272484u;
        // 0x272488: 0x8f859da8  lw          $a1, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272484) {
            ctx->pc = 0x272524u;
            goto label_272524;
        }
    }
    ctx->pc = 0x27248Cu;
label_27248c:
    // 0x27248c: 0x8f82a364  lw          $v0, -0x5C9C($gp)
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943588)));
label_272490:
    // 0x272490: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x272490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_272494:
    // 0x272494: 0x2842003d  slti        $v0, $v0, 0x3D
    ctx->pc = 0x272494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_272498:
    // 0x272498: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_27249c:
    if (ctx->pc == 0x27249Cu) {
        ctx->pc = 0x27249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272498u;
        // 0x27249c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724A0u;
        goto label_2724a0;
    }
    ctx->pc = 0x272498u;
    {
        const bool branch_taken_0x272498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272498u;
        // 0x27249c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272498) {
            ctx->pc = 0x2725BCu;
            goto label_2725bc;
        }
    }
    ctx->pc = 0x2724A0u;
label_2724a0:
    // 0x2724a0: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x2724a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_2724a4:
    // 0x2724a4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2724a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2724a8:
    // 0x2724a8: 0xaf85a364  sw          $a1, -0x5C9C($gp)
    ctx->pc = 0x2724a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943588), GPR_U32(ctx, 5));
label_2724ac:
    // 0x2724ac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2724acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2724b0:
    // 0x2724b0: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x2724b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
label_2724b4:
    // 0x2724b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2724b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2724b8:
    // 0x2724b8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2724b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2724bc:
    // 0x2724bc: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x2724bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2724c0:
    // 0x2724c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2724c4:
    if (ctx->pc == 0x2724C4u) {
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724C8u;
        goto label_2724c8;
    }
    ctx->pc = 0x2724C0u;
    {
        const bool branch_taken_0x2724c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724c0) {
            ctx->pc = 0x2724E8u;
            goto label_2724e8;
        }
    }
    ctx->pc = 0x2724C8u;
label_2724c8:
    // 0x2724c8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2724c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2724cc:
    // 0x2724cc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2724ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2724d0:
    // 0x2724d0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2724d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2724d4:
    // 0x2724d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2724d8:
    if (ctx->pc == 0x2724D8u) {
        ctx->pc = 0x2724D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724D4u;
        // 0x2724d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724DCu;
        goto label_2724dc;
    }
    ctx->pc = 0x2724D4u;
    {
        const bool branch_taken_0x2724d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724D4u;
        // 0x2724d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724d4) {
            ctx->pc = 0x2724E8u;
            goto label_2724e8;
        }
    }
    ctx->pc = 0x2724DCu;
label_2724dc:
    // 0x2724dc: 0x2a020012  slti        $v0, $s0, 0x12
    ctx->pc = 0x2724dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
label_2724e0:
    // 0x2724e0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_2724e4:
    if (ctx->pc == 0x2724E4u) {
        ctx->pc = 0x2724E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724E0u;
        // 0x2724e4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724E8u;
        goto label_2724e8;
    }
    ctx->pc = 0x2724E0u;
    {
        const bool branch_taken_0x2724e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2724e0) {
            ctx->pc = 0x2724E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2724E0u;
            // 0x2724e4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2724D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2724d0;
        }
    }
    ctx->pc = 0x2724E8u;
label_2724e8:
    // 0x2724e8: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
label_2724ec:
    if (ctx->pc == 0x2724ECu) {
        ctx->pc = 0x2724F0u;
        goto label_2724f0;
    }
    ctx->pc = 0x2724E8u;
    {
        const bool branch_taken_0x2724e8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2724e8) {
            ctx->pc = 0x2725B8u;
            goto label_2725b8;
        }
    }
    ctx->pc = 0x2724F0u;
label_2724f0:
    // 0x2724f0: 0xc0ada34  jal         func_2B68D0
label_2724f4:
    if (ctx->pc == 0x2724F4u) {
        ctx->pc = 0x2724F8u;
        goto label_2724f8;
    }
    ctx->pc = 0x2724F0u;
    SET_GPR_U32(ctx, 31, 0x2724F8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2724F0u, 0x2724F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724F8u;
label_2724f8:
    // 0x2724f8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2724f8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2724fc:
    // 0x2724fc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_272500:
    if (ctx->pc == 0x272500u) {
        ctx->pc = 0x272500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724FCu;
        // 0x272500: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272504u;
        goto label_272504;
    }
    ctx->pc = 0x2724FCu;
    {
        const bool branch_taken_0x2724fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2724fc) {
            ctx->pc = 0x272500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2724FCu;
            // 0x272500: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272504u;
            goto label_272504;
        }
    }
    ctx->pc = 0x272504u;
label_272504:
    // 0x272504: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x272504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_272508:
    // 0x272508: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x272508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27250c:
    // 0x27250c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27250cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272510:
    // 0x272510: 0x1810  mfhi        $v1
    ctx->pc = 0x272510u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_272514:
    // 0x272514: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x272514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_272518:
    // 0x272518: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x272518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_27251c:
    // 0x27251c: 0x10000023  b           . + 4 + (0x23 << 2)
label_272520:
    if (ctx->pc == 0x272520u) {
        ctx->pc = 0x272520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27251Cu;
        // 0x272520: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272524u;
        goto label_272524;
    }
    ctx->pc = 0x27251Cu;
    {
        const bool branch_taken_0x27251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27251Cu;
        // 0x272520: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27251c) {
            ctx->pc = 0x2725ACu;
            goto label_2725ac;
        }
    }
    ctx->pc = 0x272524u;
label_272524:
    // 0x272524: 0x86a20004  lh          $v0, 0x4($s5)
    ctx->pc = 0x272524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_272528:
    // 0x272528: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x272528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_27252c:
    // 0x27252c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x27252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_272530:
    // 0x272530: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x272530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_272534:
    // 0x272534: 0x246350e0  addiu       $v1, $v1, 0x50E0
    ctx->pc = 0x272534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20704));
label_272538:
    // 0x272538: 0xaf85a364  sw          $a1, -0x5C9C($gp)
    ctx->pc = 0x272538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943588), GPR_U32(ctx, 5));
label_27253c:
    // 0x27253c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272540:
    // 0x272540: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x272540u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_272544:
    // 0x272544: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x272544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_272548:
    // 0x272548: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27254c:
    if (ctx->pc == 0x27254Cu) {
        ctx->pc = 0x27254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272548u;
        // 0x27254c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272550u;
        goto label_272550;
    }
    ctx->pc = 0x272548u;
    {
        const bool branch_taken_0x272548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272548u;
        // 0x27254c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272548) {
            ctx->pc = 0x272574u;
            goto label_272574;
        }
    }
    ctx->pc = 0x272550u;
label_272550:
    // 0x272550: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x272550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_272554:
    // 0x272554: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x272554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_272558:
    // 0x272558: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x272558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_27255c:
    // 0x27255c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_272560:
    // 0x272560: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_272564:
    // 0x272564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_272568:
    if (ctx->pc == 0x272568u) {
        ctx->pc = 0x272568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272564u;
        // 0x272568: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27256Cu;
        goto label_27256c;
    }
    ctx->pc = 0x272564u;
    {
        const bool branch_taken_0x272564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272564u;
        // 0x272568: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272564) {
            ctx->pc = 0x272574u;
            goto label_272574;
        }
    }
    ctx->pc = 0x27256Cu;
label_27256c:
    // 0x27256c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_272570:
    if (ctx->pc == 0x272570u) {
        ctx->pc = 0x272570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27256Cu;
        // 0x272570: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272574u;
        goto label_272574;
    }
    ctx->pc = 0x27256Cu;
    {
        const bool branch_taken_0x27256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27256c) {
            ctx->pc = 0x272570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27256Cu;
            // 0x272570: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272558;
        }
    }
    ctx->pc = 0x272574u;
label_272574:
    // 0x272574: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
label_272578:
    if (ctx->pc == 0x272578u) {
        ctx->pc = 0x27257Cu;
        goto label_27257c;
    }
    ctx->pc = 0x272574u;
    {
        const bool branch_taken_0x272574 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x272574) {
            ctx->pc = 0x2725B8u;
            goto label_2725b8;
        }
    }
    ctx->pc = 0x27257Cu;
label_27257c:
    // 0x27257c: 0xc0ada34  jal         func_2B68D0
label_272580:
    if (ctx->pc == 0x272580u) {
        ctx->pc = 0x272584u;
        goto label_272584;
    }
    ctx->pc = 0x27257Cu;
    SET_GPR_U32(ctx, 31, 0x272584u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27257Cu, 0x272584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272584u;
label_272584:
    // 0x272584: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x272584u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_272588:
    // 0x272588: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_27258c:
    if (ctx->pc == 0x27258Cu) {
        ctx->pc = 0x27258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272588u;
        // 0x27258c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272590u;
        goto label_272590;
    }
    ctx->pc = 0x272588u;
    {
        const bool branch_taken_0x272588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x272588) {
            ctx->pc = 0x27258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272588u;
            // 0x27258c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272590u;
            goto label_272590;
        }
    }
    ctx->pc = 0x272590u;
label_272590:
    // 0x272590: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x272590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_272594:
    // 0x272594: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x272594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_272598:
    // 0x272598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27259c:
    // 0x27259c: 0x1810  mfhi        $v1
    ctx->pc = 0x27259cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2725a0:
    // 0x2725a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2725a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2725a4:
    // 0x2725a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2725a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2725a8:
    // 0x2725a8: 0x84640024  lh          $a0, 0x24($v1)
    ctx->pc = 0x2725a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
label_2725ac:
    // 0x2725ac: 0xc081602  jal         func_205808
label_2725b0:
    if (ctx->pc == 0x2725B0u) {
        ctx->pc = 0x2725B4u;
        goto label_2725b4;
    }
    ctx->pc = 0x2725ACu;
    SET_GPR_U32(ctx, 31, 0x2725B4u);
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x2725ACu, 0x2725B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725B4u;
label_2725b4:
    // 0x2725b4: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x2725b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2725b8:
    // 0x2725b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2725b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2725bc:
    // 0x2725bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2725bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2725c0:
    // 0x2725c0: 0x0  nop
    ctx->pc = 0x2725c0u;
    // NOP
label_2725c4:
    // 0x2725c4: 0x4502007d  bc1fl       . + 4 + (0x7D << 2)
label_2725c8:
    if (ctx->pc == 0x2725C8u) {
        ctx->pc = 0x2725C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725C4u;
        // 0x2725c8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725CCu;
        goto label_2725cc;
    }
    ctx->pc = 0x2725C4u;
    {
        const bool branch_taken_0x2725c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2725c4) {
            ctx->pc = 0x2725C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2725C4u;
            // 0x2725c8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2727BCu;
            goto label_2727bc;
        }
    }
    ctx->pc = 0x2725CCu;
label_2725cc:
    // 0x2725cc: 0x12600069  beqz        $s3, . + 4 + (0x69 << 2)
label_2725d0:
    if (ctx->pc == 0x2725D0u) {
        ctx->pc = 0x2725D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725CCu;
        // 0x2725d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725D4u;
        goto label_2725d4;
    }
    ctx->pc = 0x2725CCu;
    {
        const bool branch_taken_0x2725cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725CCu;
        // 0x2725d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725cc) {
            ctx->pc = 0x272774u;
            goto label_272774;
        }
    }
    ctx->pc = 0x2725D4u;
label_2725d4:
    // 0x2725d4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2725d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2725d8:
    // 0x2725d8: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
label_2725dc:
    if (ctx->pc == 0x2725DCu) {
        ctx->pc = 0x2725E0u;
        goto label_2725e0;
    }
    ctx->pc = 0x2725D8u;
    {
        const bool branch_taken_0x2725d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2725d8) {
            ctx->pc = 0x272760u;
            goto label_272760;
        }
    }
    ctx->pc = 0x2725E0u;
label_2725e0:
    // 0x2725e0: 0x8e710160  lw          $s1, 0x160($s3)
    ctx->pc = 0x2725e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_2725e4:
    // 0x2725e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2725e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2725e8:
    // 0x2725e8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2725e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2725ec:
    // 0x2725ec: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x2725ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_2725f0:
    // 0x2725f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2725f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2725f4:
    // 0x2725f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2725f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2725f8:
    // 0x2725f8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2725f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2725fc:
    // 0x2725fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_272600:
    // 0x272600: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_272604:
    if (ctx->pc == 0x272604u) {
        ctx->pc = 0x272604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272600u;
        // 0x272604: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272608u;
        goto label_272608;
    }
    ctx->pc = 0x272600u;
    {
        const bool branch_taken_0x272600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x272604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272600u;
        // 0x272604: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272600) {
            ctx->pc = 0x272658u;
            goto label_272658;
        }
    }
    ctx->pc = 0x272608u;
label_272608:
    // 0x272608: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x272608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_27260c:
    // 0x27260c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27260cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_272610:
    // 0x272610: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_272614:
    // 0x272614: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_272618:
    if (ctx->pc == 0x272618u) {
        ctx->pc = 0x27261Cu;
        goto label_27261c;
    }
    ctx->pc = 0x272614u;
    {
        const bool branch_taken_0x272614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x272614) {
            ctx->pc = 0x27262Cu;
            goto label_27262c;
        }
    }
    ctx->pc = 0x27261Cu;
label_27261c:
    // 0x27261c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_272620:
    // 0x272620: 0xc0ac3dc  jal         func_2B0F70
label_272624:
    if (ctx->pc == 0x272624u) {
        ctx->pc = 0x272624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272620u;
        // 0x272624: 0x240500b8  addiu       $a1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272628u;
        goto label_272628;
    }
    ctx->pc = 0x272620u;
    SET_GPR_U32(ctx, 31, 0x272628u);
    ctx->pc = 0x272624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272620u;
    // 0x272624: 0x240500b8  addiu       $a1, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F70u, 0x272620u, 0x272628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272628u;
label_272628:
    // 0x272628: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x272628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_27262c:
    // 0x27262c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_272630:
    if (ctx->pc == 0x272630u) {
        ctx->pc = 0x272630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27262Cu;
        // 0x272630: 0x26f0c4a8  addiu       $s0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272634u;
        goto label_272634;
    }
    ctx->pc = 0x27262Cu;
    {
        const bool branch_taken_0x27262c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x272630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27262Cu;
        // 0x272630: 0x26f0c4a8  addiu       $s0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27262c) {
            ctx->pc = 0x27265Cu;
            goto label_27265c;
        }
    }
    ctx->pc = 0x272634u;
label_272634:
    // 0x272634: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x272634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_272638:
    // 0x272638: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x272638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27263c:
    // 0x27263c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_272640:
    if (ctx->pc == 0x272640u) {
        ctx->pc = 0x272640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27263Cu;
        // 0x272640: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272644u;
        goto label_272644;
    }
    ctx->pc = 0x27263Cu;
    {
        const bool branch_taken_0x27263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27263Cu;
        // 0x272640: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27263c) {
            ctx->pc = 0x272660u;
            goto label_272660;
        }
    }
    ctx->pc = 0x272644u;
label_272644:
    // 0x272644: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x272644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_272648:
    // 0x272648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x272648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27264c:
    // 0x27264c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27264cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272650:
    // 0x272650: 0xc088f98  jal         func_223E60
label_272654:
    if (ctx->pc == 0x272654u) {
        ctx->pc = 0x272654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272650u;
        // 0x272654: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272658u;
        goto label_272658;
    }
    ctx->pc = 0x272650u;
    SET_GPR_U32(ctx, 31, 0x272658u);
    ctx->pc = 0x272654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272650u;
    // 0x272654: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x272650u, 0x272658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272658u;
label_272658:
    // 0x272658: 0x26f0c4a8  addiu       $s0, $s7, -0x3B58
    ctx->pc = 0x272658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_27265c:
    // 0x27265c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_272660:
    // 0x272660: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272664:
    // 0x272664: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
label_272668:
    if (ctx->pc == 0x272668u) {
        ctx->pc = 0x27266Cu;
        goto label_27266c;
    }
    ctx->pc = 0x272664u;
    {
        const bool branch_taken_0x272664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x272664) {
            ctx->pc = 0x272760u;
            goto label_272760;
        }
    }
    ctx->pc = 0x27266Cu;
label_27266c:
    // 0x27266c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x27266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_272670:
    // 0x272670: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x272670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_272674:
    // 0x272674: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_272678:
    if (ctx->pc == 0x272678u) {
        ctx->pc = 0x27267Cu;
        goto label_27267c;
    }
    ctx->pc = 0x272674u;
    {
        const bool branch_taken_0x272674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272674) {
            ctx->pc = 0x272760u;
            goto label_272760;
        }
    }
    ctx->pc = 0x27267Cu;
label_27267c:
    // 0x27267c: 0xc0a241e  jal         func_289078
label_272680:
    if (ctx->pc == 0x272680u) {
        ctx->pc = 0x272680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27267Cu;
        // 0x272680: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272684u;
        goto label_272684;
    }
    ctx->pc = 0x27267Cu;
    SET_GPR_U32(ctx, 31, 0x272684u);
    ctx->pc = 0x272680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27267Cu;
    // 0x272680: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x27267Cu, 0x272684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272684u;
label_272684:
    // 0x272684: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x272684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_272688:
    // 0x272688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27268c:
    // 0x27268c: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
label_272690:
    if (ctx->pc == 0x272690u) {
        ctx->pc = 0x272694u;
        goto label_272694;
    }
    ctx->pc = 0x27268Cu;
    {
        const bool branch_taken_0x27268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27268c) {
            ctx->pc = 0x272760u;
            goto label_272760;
        }
    }
    ctx->pc = 0x272694u;
label_272694:
    // 0x272694: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x272694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_272698:
    // 0x272698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x272698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27269c:
    // 0x27269c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2726a0:
    if (ctx->pc == 0x2726A0u) {
        ctx->pc = 0x2726A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27269Cu;
        // 0x2726a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2726A4u;
        goto label_2726a4;
    }
    ctx->pc = 0x27269Cu;
    {
        const bool branch_taken_0x27269c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27269Cu;
        // 0x2726a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27269c) {
            ctx->pc = 0x2726F8u;
            goto label_2726f8;
        }
    }
    ctx->pc = 0x2726A4u;
label_2726a4:
    // 0x2726a4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2726a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2726a8:
    // 0x2726a8: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2726a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_2726ac:
    // 0x2726ac: 0x2442c378  addiu       $v0, $v0, -0x3C88
    ctx->pc = 0x2726acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951800));
label_2726b0:
    // 0x2726b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2726b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2726b4:
    // 0x2726b4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2726b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_2726b8:
    // 0x2726b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2726b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2726bc:
    // 0x2726bc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2726bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
label_2726c0:
    // 0x2726c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2726c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2726c4:
    // 0x2726c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2726c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2726c8:
    // 0x2726c8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2726c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2726cc:
    // 0x2726cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2726ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_2726d0:
    // 0x2726d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2726d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2726d4:
    // 0x2726d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2726d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2726d8:
    // 0x2726d8: 0x24847fc8  addiu       $a0, $a0, 0x7FC8
    ctx->pc = 0x2726d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32712));
label_2726dc:
    // 0x2726dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2726dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2726e0:
    // 0x2726e0: 0x8c671208  lw          $a3, 0x1208($v1)
    ctx->pc = 0x2726e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
label_2726e4:
    // 0x2726e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2726e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2726e8:
    // 0x2726e8: 0xc0ad21a  jal         func_2B4868
label_2726ec:
    if (ctx->pc == 0x2726ECu) {
        ctx->pc = 0x2726ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726E8u;
        // 0x2726ec: 0x8c661204  lw          $a2, 0x1204($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2726F0u;
        goto label_2726f0;
    }
    ctx->pc = 0x2726E8u;
    SET_GPR_U32(ctx, 31, 0x2726F0u);
    ctx->pc = 0x2726ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2726E8u;
    // 0x2726ec: 0x8c661204  lw          $a2, 0x1204($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2726E8u, 0x2726F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726F0u;
label_2726f0:
    // 0x2726f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2726f4:
    if (ctx->pc == 0x2726F4u) {
        ctx->pc = 0x2726F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726F0u;
        // 0x2726f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2726F8u;
        goto label_2726f8;
    }
    ctx->pc = 0x2726F0u;
    {
        const bool branch_taken_0x2726f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726F0u;
        // 0x2726f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726f0) {
            ctx->pc = 0x272728u;
            goto label_272728;
        }
    }
    ctx->pc = 0x2726F8u;
label_2726f8:
    // 0x2726f8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2726f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_2726fc:
    // 0x2726fc: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_272700:
    // 0x272700: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x272700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
label_272704:
    // 0x272704: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x272704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_272708:
    // 0x272708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x272708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27270c:
    // 0x27270c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x27270cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_272710:
    // 0x272710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272714:
    // 0x272714: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
label_272718:
    // 0x272718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x272718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27271c:
    // 0x27271c: 0xc0ad21a  jal         func_2B4868
label_272720:
    if (ctx->pc == 0x272720u) {
        ctx->pc = 0x272720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27271Cu;
        // 0x272720: 0x8c46120c  lw          $a2, 0x120C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272724u;
        goto label_272724;
    }
    ctx->pc = 0x27271Cu;
    SET_GPR_U32(ctx, 31, 0x272724u);
    ctx->pc = 0x272720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27271Cu;
    // 0x272720: 0x8c46120c  lw          $a2, 0x120C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x27271Cu, 0x272724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272724u;
label_272724:
    // 0x272724: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272728:
    // 0x272728: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x272728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_27272c:
    // 0x27272c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_272730:
    if (ctx->pc == 0x272730u) {
        ctx->pc = 0x272730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27272Cu;
        // 0x272730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272734u;
        goto label_272734;
    }
    ctx->pc = 0x27272Cu;
    {
        const bool branch_taken_0x27272c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27272Cu;
        // 0x272730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27272c) {
            ctx->pc = 0x272754u;
            goto label_272754;
        }
    }
    ctx->pc = 0x272734u;
label_272734:
    // 0x272734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272738:
    // 0x272738: 0xc0ac264  jal         func_2B0990
label_27273c:
    if (ctx->pc == 0x27273Cu) {
        ctx->pc = 0x27273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272738u;
        // 0x27273c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272740u;
        goto label_272740;
    }
    ctx->pc = 0x272738u;
    SET_GPR_U32(ctx, 31, 0x272740u);
    ctx->pc = 0x27273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272738u;
    // 0x27273c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x272738u, 0x272740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272740u;
label_272740:
    // 0x272740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x272740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_272744:
    // 0x272744: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x272744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_272748:
    // 0x272748: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x272748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27274c:
    // 0x27274c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_272750:
    if (ctx->pc == 0x272750u) {
        ctx->pc = 0x272750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27274Cu;
        // 0x272750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272754u;
        goto label_272754;
    }
    ctx->pc = 0x27274Cu;
    {
        const bool branch_taken_0x27274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27274Cu;
        // 0x272750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27274c) {
            ctx->pc = 0x272738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272738;
        }
    }
    ctx->pc = 0x272754u;
label_272754:
    // 0x272754: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x272754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_272758:
    // 0x272758: 0xc081546  jal         func_205518
label_27275c:
    if (ctx->pc == 0x27275Cu) {
        ctx->pc = 0x27275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272758u;
        // 0x27275c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272760u;
        goto label_272760;
    }
    ctx->pc = 0x272758u;
    SET_GPR_U32(ctx, 31, 0x272760u);
    ctx->pc = 0x27275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272758u;
    // 0x27275c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x272758u, 0x272760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272760u;
label_272760:
    // 0x272760: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_272764:
    if (ctx->pc == 0x272764u) {
        ctx->pc = 0x272764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272760u;
        // 0x272764: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272768u;
        goto label_272768;
    }
    ctx->pc = 0x272760u;
    {
        const bool branch_taken_0x272760 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x272764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272760u;
        // 0x272764: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272760) {
            ctx->pc = 0x272774u;
            goto label_272774;
        }
    }
    ctx->pc = 0x272768u;
label_272768:
    // 0x272768: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x272768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27276c:
    // 0x27276c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_272770:
    if (ctx->pc == 0x272770u) {
        ctx->pc = 0x272774u;
        goto label_272774;
    }
    ctx->pc = 0x27276Cu;
    {
        const bool branch_taken_0x27276c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27276c) {
            ctx->pc = 0x272790u;
            goto label_272790;
        }
    }
    ctx->pc = 0x272774u;
label_272774:
    // 0x272774: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x272774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_272778:
    // 0x272778: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x272778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_27277c:
    // 0x27277c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27277cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_272780:
    // 0x272780: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x272780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_272784:
    // 0x272784: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x272784u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_272788:
    // 0x272788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x272788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27278c:
    // 0x27278c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x27278cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_272790:
    // 0x272790: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_272794:
    if (ctx->pc == 0x272794u) {
        ctx->pc = 0x272794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272790u;
        // 0x272794: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272798u;
        goto label_272798;
    }
    ctx->pc = 0x272790u;
    {
        const bool branch_taken_0x272790 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x272794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272790u;
        // 0x272794: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272790) {
            ctx->pc = 0x2727F4u;
            goto label_2727f4;
        }
    }
    ctx->pc = 0x272798u;
label_272798:
    // 0x272798: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27279c:
    // 0x27279c: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x27279cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2727a0:
    // 0x2727a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2727a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2727a4:
    // 0x2727a4: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2727a8:
    // 0x2727a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2727a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2727ac:
    // 0x2727ac: 0xc0a0122  jal         func_280488
label_2727b0:
    if (ctx->pc == 0x2727B0u) {
        ctx->pc = 0x2727B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727ACu;
        // 0x2727b0: 0x8faa001c  lw          $t2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727B4u;
        goto label_2727b4;
    }
    ctx->pc = 0x2727ACu;
    SET_GPR_U32(ctx, 31, 0x2727B4u);
    ctx->pc = 0x2727B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727ACu;
    // 0x2727b0: 0x8faa001c  lw          $t2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280488u, 0x2727ACu, 0x2727B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727B4u;
label_2727b4:
    // 0x2727b4: 0x10000035  b           . + 4 + (0x35 << 2)
label_2727b8:
    if (ctx->pc == 0x2727B8u) {
        ctx->pc = 0x2727B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727B4u;
        // 0x2727b8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727BCu;
        goto label_2727bc;
    }
    ctx->pc = 0x2727B4u;
    {
        const bool branch_taken_0x2727b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727B4u;
        // 0x2727b8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727b4) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x2727BCu;
label_2727bc:
    // 0x2727bc: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2727bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2727c0:
    // 0x2727c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2727c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2727c4:
    // 0x2727c4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2727c8:
    if (ctx->pc == 0x2727C8u) {
        ctx->pc = 0x2727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727C4u;
        // 0x2727c8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727CCu;
        goto label_2727cc;
    }
    ctx->pc = 0x2727C4u;
    {
        const bool branch_taken_0x2727c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727C4u;
        // 0x2727c8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727c4) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x2727CCu;
label_2727cc:
    // 0x2727cc: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
label_2727d0:
    if (ctx->pc == 0x2727D0u) {
        ctx->pc = 0x2727D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727CCu;
        // 0x2727d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727D4u;
        goto label_2727d4;
    }
    ctx->pc = 0x2727CCu;
    {
        const bool branch_taken_0x2727cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727CCu;
        // 0x2727d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727cc) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x2727D4u;
label_2727d4:
    // 0x2727d4: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x2727d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_2727d8:
    // 0x2727d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2727d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2727dc:
    // 0x2727dc: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
label_2727e0:
    if (ctx->pc == 0x2727E0u) {
        ctx->pc = 0x2727E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727DCu;
        // 0x2727e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727E4u;
        goto label_2727e4;
    }
    ctx->pc = 0x2727DCu;
    {
        const bool branch_taken_0x2727dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2727E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727DCu;
        // 0x2727e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727dc) {
            ctx->pc = 0x27281Cu;
            goto label_27281c;
        }
    }
    ctx->pc = 0x2727E4u;
label_2727e4:
    // 0x2727e4: 0xc7808570  lwc1        $f0, -0x7A90($gp)
    ctx->pc = 0x2727e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2727e8:
    // 0x2727e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2727e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2727ec:
    // 0x2727ec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2727f0:
    if (ctx->pc == 0x2727F0u) {
        ctx->pc = 0x2727F4u;
        goto label_2727f4;
    }
    ctx->pc = 0x2727ECu;
    {
        const bool branch_taken_0x2727ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2727ec) {
            ctx->pc = 0x27281Cu;
            goto label_27281c;
        }
    }
    ctx->pc = 0x2727F4u;
label_2727f4:
    // 0x2727f4: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2727f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2727f8:
    // 0x2727f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2727f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2727fc:
    // 0x2727fc: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x2727fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_272800:
    // 0x272800: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x272800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272804:
    // 0x272804: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x272804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_272808:
    // 0x272808: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x272808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27280c:
    // 0x27280c: 0xc0b1b72  jal         func_2C6DC8
label_272810:
    if (ctx->pc == 0x272810u) {
        ctx->pc = 0x272810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27280Cu;
        // 0x272810: 0x8faa001c  lw          $t2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272814u;
        goto label_272814;
    }
    ctx->pc = 0x27280Cu;
    SET_GPR_U32(ctx, 31, 0x272814u);
    ctx->pc = 0x272810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27280Cu;
    // 0x272810: 0x8faa001c  lw          $t2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6DC8u, 0x27280Cu, 0x272814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272814u;
label_272814:
    // 0x272814: 0x1000001d  b           . + 4 + (0x1D << 2)
label_272818:
    if (ctx->pc == 0x272818u) {
        ctx->pc = 0x272818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272814u;
        // 0x272818: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27281Cu;
        goto label_27281c;
    }
    ctx->pc = 0x272814u;
    {
        const bool branch_taken_0x272814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272814u;
        // 0x272818: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272814) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x27281Cu;
label_27281c:
    // 0x27281c: 0xc0b1c00  jal         func_2C7000
label_272820:
    if (ctx->pc == 0x272820u) {
        ctx->pc = 0x272820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27281Cu;
        // 0x272820: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272824u;
        goto label_272824;
    }
    ctx->pc = 0x27281Cu;
    SET_GPR_U32(ctx, 31, 0x272824u);
    ctx->pc = 0x272820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27281Cu;
    // 0x272820: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7000u, 0x27281Cu, 0x272824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272824u;
label_272824:
    // 0x272824: 0x10000019  b           . + 4 + (0x19 << 2)
label_272828:
    if (ctx->pc == 0x272828u) {
        ctx->pc = 0x272828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272824u;
        // 0x272828: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27282Cu;
        goto label_27282c;
    }
    ctx->pc = 0x272824u;
    {
        const bool branch_taken_0x272824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272824u;
        // 0x272828: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272824) {
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x27282Cu;
label_27282c:
    // 0x27282c: 0x2442ff37  addiu       $v0, $v0, -0xC9
    ctx->pc = 0x27282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967095));
label_272830:
    // 0x272830: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x272830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_272834:
    // 0x272834: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_272838:
    if (ctx->pc == 0x272838u) {
        ctx->pc = 0x272838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272834u;
        // 0x272838: 0x2643018c  addiu       $v1, $s2, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27283Cu;
        goto label_27283c;
    }
    ctx->pc = 0x272834u;
    {
        const bool branch_taken_0x272834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272834u;
        // 0x272838: 0x2643018c  addiu       $v1, $s2, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272834) {
            ctx->pc = 0x272854u;
            goto label_272854;
        }
    }
    ctx->pc = 0x27283Cu;
label_27283c:
    // 0x27283c: 0xc7808574  lwc1        $f0, -0x7A8C($gp)
    ctx->pc = 0x27283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272840:
    // 0x272840: 0xc6410214  lwc1        $f1, 0x214($s2)
    ctx->pc = 0x272840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272844:
    // 0x272844: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x272844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_272848:
    // 0x272848: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x272848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27284c:
    // 0x27284c: 0x10000004  b           . + 4 + (0x4 << 2)
label_272850:
    if (ctx->pc == 0x272850u) {
        ctx->pc = 0x272850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27284Cu;
        // 0x272850: 0xe6410214  swc1        $f1, 0x214($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272854u;
        goto label_272854;
    }
    ctx->pc = 0x27284Cu;
    {
        const bool branch_taken_0x27284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27284Cu;
        // 0x272850: 0xe6410214  swc1        $f1, 0x214($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27284c) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272854u;
label_272854:
    // 0x272854: 0xc6400214  lwc1        $f0, 0x214($s2)
    ctx->pc = 0x272854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272858:
    // 0x272858: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x272858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_27285c:
    // 0x27285c: 0xe6400214  swc1        $f0, 0x214($s2)
    ctx->pc = 0x27285cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
label_272860:
    // 0x272860: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x272860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_272864:
    // 0x272864: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_272868:
    if (ctx->pc == 0x272868u) {
        ctx->pc = 0x272868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272864u;
        // 0x272868: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27286Cu;
        goto label_27286c;
    }
    ctx->pc = 0x272864u;
    {
        const bool branch_taken_0x272864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272864u;
        // 0x272868: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272864) {
            ctx->pc = 0x272888u;
            goto label_272888;
        }
    }
    ctx->pc = 0x27286Cu;
label_27286c:
    // 0x27286c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272870:
    // 0x272870: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x272870u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_272874:
    // 0x272874: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272878:
    // 0x272878: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x272878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27287c:
    // 0x27287c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27287cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_272880:
    // 0x272880: 0x40f809  jalr        $v0
label_272884:
    if (ctx->pc == 0x272884u) {
        ctx->pc = 0x272884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272880u;
        // 0x272884: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272888u;
        goto label_272888;
    }
    ctx->pc = 0x272880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272888u);
        ctx->pc = 0x272884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272880u;
        // 0x272884: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272880u, 0x272888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272888u;
label_272888:
    // 0x272888: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x272888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_27288c:
    // 0x27288c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x27288cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_272890:
    // 0x272890: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x272890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_272894:
    // 0x272894: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x272894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_272898:
    // 0x272898: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x272898u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_27289c:
    // 0x27289c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x27289cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2728a0:
    // 0x2728a0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2728a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2728a4:
    // 0x2728a4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2728a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2728a8:
    // 0x2728a8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2728a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2728ac:
    // 0x2728ac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2728acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2728b0:
    // 0x2728b0: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2728b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2728b4:
    // 0x2728b4: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2728b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2728b8:
    // 0x2728b8: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2728b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2728bc:
    // 0x2728bc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2728bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2728c0:
    // 0x2728c0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2728c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2728c4:
    // 0x2728c4: 0x3e00008  jr          $ra
label_2728c8:
    if (ctx->pc == 0x2728C8u) {
        ctx->pc = 0x2728C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728C4u;
        // 0x2728c8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728CCu;
        goto label_fallthrough_0x2728c4;
    }
    ctx->pc = 0x2728C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2728C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728C4u;
        // 0x2728c8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2728C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2728c4:
    ctx->pc = 0x2728CCu;
}
