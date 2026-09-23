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

// Function: bulletTick
// Address: 0x28a8e8 - 0x28d000
void bulletTick_0x28a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletTick_0x28a8e8");
#endif

    switch (ctx->pc) {
        case 0x28a8e8u: goto label_28a8e8;
        case 0x28a8ecu: goto label_28a8ec;
        case 0x28a8f0u: goto label_28a8f0;
        case 0x28a8f4u: goto label_28a8f4;
        case 0x28a8f8u: goto label_28a8f8;
        case 0x28a8fcu: goto label_28a8fc;
        case 0x28a900u: goto label_28a900;
        case 0x28a904u: goto label_28a904;
        case 0x28a908u: goto label_28a908;
        case 0x28a90cu: goto label_28a90c;
        case 0x28a910u: goto label_28a910;
        case 0x28a914u: goto label_28a914;
        case 0x28a918u: goto label_28a918;
        case 0x28a91cu: goto label_28a91c;
        case 0x28a920u: goto label_28a920;
        case 0x28a924u: goto label_28a924;
        case 0x28a928u: goto label_28a928;
        case 0x28a92cu: goto label_28a92c;
        case 0x28a930u: goto label_28a930;
        case 0x28a934u: goto label_28a934;
        case 0x28a938u: goto label_28a938;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a940u: goto label_28a940;
        case 0x28a944u: goto label_28a944;
        case 0x28a948u: goto label_28a948;
        case 0x28a94cu: goto label_28a94c;
        case 0x28a950u: goto label_28a950;
        case 0x28a954u: goto label_28a954;
        case 0x28a958u: goto label_28a958;
        case 0x28a95cu: goto label_28a95c;
        case 0x28a960u: goto label_28a960;
        case 0x28a964u: goto label_28a964;
        case 0x28a968u: goto label_28a968;
        case 0x28a96cu: goto label_28a96c;
        case 0x28a970u: goto label_28a970;
        case 0x28a974u: goto label_28a974;
        case 0x28a978u: goto label_28a978;
        case 0x28a97cu: goto label_28a97c;
        case 0x28a980u: goto label_28a980;
        case 0x28a984u: goto label_28a984;
        case 0x28a988u: goto label_28a988;
        case 0x28a98cu: goto label_28a98c;
        case 0x28a990u: goto label_28a990;
        case 0x28a994u: goto label_28a994;
        case 0x28a998u: goto label_28a998;
        case 0x28a99cu: goto label_28a99c;
        case 0x28a9a0u: goto label_28a9a0;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9a8u: goto label_28a9a8;
        case 0x28a9acu: goto label_28a9ac;
        case 0x28a9b0u: goto label_28a9b0;
        case 0x28a9b4u: goto label_28a9b4;
        case 0x28a9b8u: goto label_28a9b8;
        case 0x28a9bcu: goto label_28a9bc;
        case 0x28a9c0u: goto label_28a9c0;
        case 0x28a9c4u: goto label_28a9c4;
        case 0x28a9c8u: goto label_28a9c8;
        case 0x28a9ccu: goto label_28a9cc;
        case 0x28a9d0u: goto label_28a9d0;
        case 0x28a9d4u: goto label_28a9d4;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9dcu: goto label_28a9dc;
        case 0x28a9e0u: goto label_28a9e0;
        case 0x28a9e4u: goto label_28a9e4;
        case 0x28a9e8u: goto label_28a9e8;
        case 0x28a9ecu: goto label_28a9ec;
        case 0x28a9f0u: goto label_28a9f0;
        case 0x28a9f4u: goto label_28a9f4;
        case 0x28a9f8u: goto label_28a9f8;
        case 0x28a9fcu: goto label_28a9fc;
        case 0x28aa00u: goto label_28aa00;
        case 0x28aa04u: goto label_28aa04;
        case 0x28aa08u: goto label_28aa08;
        case 0x28aa0cu: goto label_28aa0c;
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa14u: goto label_28aa14;
        case 0x28aa18u: goto label_28aa18;
        case 0x28aa1cu: goto label_28aa1c;
        case 0x28aa20u: goto label_28aa20;
        case 0x28aa24u: goto label_28aa24;
        case 0x28aa28u: goto label_28aa28;
        case 0x28aa2cu: goto label_28aa2c;
        case 0x28aa30u: goto label_28aa30;
        case 0x28aa34u: goto label_28aa34;
        case 0x28aa38u: goto label_28aa38;
        case 0x28aa3cu: goto label_28aa3c;
        case 0x28aa40u: goto label_28aa40;
        case 0x28aa44u: goto label_28aa44;
        case 0x28aa48u: goto label_28aa48;
        case 0x28aa4cu: goto label_28aa4c;
        case 0x28aa50u: goto label_28aa50;
        case 0x28aa54u: goto label_28aa54;
        case 0x28aa58u: goto label_28aa58;
        case 0x28aa5cu: goto label_28aa5c;
        case 0x28aa60u: goto label_28aa60;
        case 0x28aa64u: goto label_28aa64;
        case 0x28aa68u: goto label_28aa68;
        case 0x28aa6cu: goto label_28aa6c;
        case 0x28aa70u: goto label_28aa70;
        case 0x28aa74u: goto label_28aa74;
        case 0x28aa78u: goto label_28aa78;
        case 0x28aa7cu: goto label_28aa7c;
        case 0x28aa80u: goto label_28aa80;
        case 0x28aa84u: goto label_28aa84;
        case 0x28aa88u: goto label_28aa88;
        case 0x28aa8cu: goto label_28aa8c;
        case 0x28aa90u: goto label_28aa90;
        case 0x28aa94u: goto label_28aa94;
        case 0x28aa98u: goto label_28aa98;
        case 0x28aa9cu: goto label_28aa9c;
        case 0x28aaa0u: goto label_28aaa0;
        case 0x28aaa4u: goto label_28aaa4;
        case 0x28aaa8u: goto label_28aaa8;
        case 0x28aaacu: goto label_28aaac;
        case 0x28aab0u: goto label_28aab0;
        case 0x28aab4u: goto label_28aab4;
        case 0x28aab8u: goto label_28aab8;
        case 0x28aabcu: goto label_28aabc;
        case 0x28aac0u: goto label_28aac0;
        case 0x28aac4u: goto label_28aac4;
        case 0x28aac8u: goto label_28aac8;
        case 0x28aaccu: goto label_28aacc;
        case 0x28aad0u: goto label_28aad0;
        case 0x28aad4u: goto label_28aad4;
        case 0x28aad8u: goto label_28aad8;
        case 0x28aadcu: goto label_28aadc;
        case 0x28aae0u: goto label_28aae0;
        case 0x28aae4u: goto label_28aae4;
        case 0x28aae8u: goto label_28aae8;
        case 0x28aaecu: goto label_28aaec;
        case 0x28aaf0u: goto label_28aaf0;
        case 0x28aaf4u: goto label_28aaf4;
        case 0x28aaf8u: goto label_28aaf8;
        case 0x28aafcu: goto label_28aafc;
        case 0x28ab00u: goto label_28ab00;
        case 0x28ab04u: goto label_28ab04;
        case 0x28ab08u: goto label_28ab08;
        case 0x28ab0cu: goto label_28ab0c;
        case 0x28ab10u: goto label_28ab10;
        case 0x28ab14u: goto label_28ab14;
        case 0x28ab18u: goto label_28ab18;
        case 0x28ab1cu: goto label_28ab1c;
        case 0x28ab20u: goto label_28ab20;
        case 0x28ab24u: goto label_28ab24;
        case 0x28ab28u: goto label_28ab28;
        case 0x28ab2cu: goto label_28ab2c;
        case 0x28ab30u: goto label_28ab30;
        case 0x28ab34u: goto label_28ab34;
        case 0x28ab38u: goto label_28ab38;
        case 0x28ab3cu: goto label_28ab3c;
        case 0x28ab40u: goto label_28ab40;
        case 0x28ab44u: goto label_28ab44;
        case 0x28ab48u: goto label_28ab48;
        case 0x28ab4cu: goto label_28ab4c;
        case 0x28ab50u: goto label_28ab50;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ab58u: goto label_28ab58;
        case 0x28ab5cu: goto label_28ab5c;
        case 0x28ab60u: goto label_28ab60;
        case 0x28ab64u: goto label_28ab64;
        case 0x28ab68u: goto label_28ab68;
        case 0x28ab6cu: goto label_28ab6c;
        case 0x28ab70u: goto label_28ab70;
        case 0x28ab74u: goto label_28ab74;
        case 0x28ab78u: goto label_28ab78;
        case 0x28ab7cu: goto label_28ab7c;
        case 0x28ab80u: goto label_28ab80;
        case 0x28ab84u: goto label_28ab84;
        case 0x28ab88u: goto label_28ab88;
        case 0x28ab8cu: goto label_28ab8c;
        case 0x28ab90u: goto label_28ab90;
        case 0x28ab94u: goto label_28ab94;
        case 0x28ab98u: goto label_28ab98;
        case 0x28ab9cu: goto label_28ab9c;
        case 0x28aba0u: goto label_28aba0;
        case 0x28aba4u: goto label_28aba4;
        case 0x28aba8u: goto label_28aba8;
        case 0x28abacu: goto label_28abac;
        case 0x28abb0u: goto label_28abb0;
        case 0x28abb4u: goto label_28abb4;
        case 0x28abb8u: goto label_28abb8;
        case 0x28abbcu: goto label_28abbc;
        case 0x28abc0u: goto label_28abc0;
        case 0x28abc4u: goto label_28abc4;
        case 0x28abc8u: goto label_28abc8;
        case 0x28abccu: goto label_28abcc;
        case 0x28abd0u: goto label_28abd0;
        case 0x28abd4u: goto label_28abd4;
        case 0x28abd8u: goto label_28abd8;
        case 0x28abdcu: goto label_28abdc;
        case 0x28abe0u: goto label_28abe0;
        case 0x28abe4u: goto label_28abe4;
        case 0x28abe8u: goto label_28abe8;
        case 0x28abecu: goto label_28abec;
        case 0x28abf0u: goto label_28abf0;
        case 0x28abf4u: goto label_28abf4;
        case 0x28abf8u: goto label_28abf8;
        case 0x28abfcu: goto label_28abfc;
        case 0x28ac00u: goto label_28ac00;
        case 0x28ac04u: goto label_28ac04;
        case 0x28ac08u: goto label_28ac08;
        case 0x28ac0cu: goto label_28ac0c;
        case 0x28ac10u: goto label_28ac10;
        case 0x28ac14u: goto label_28ac14;
        case 0x28ac18u: goto label_28ac18;
        case 0x28ac1cu: goto label_28ac1c;
        case 0x28ac20u: goto label_28ac20;
        case 0x28ac24u: goto label_28ac24;
        case 0x28ac28u: goto label_28ac28;
        case 0x28ac2cu: goto label_28ac2c;
        case 0x28ac30u: goto label_28ac30;
        case 0x28ac34u: goto label_28ac34;
        case 0x28ac38u: goto label_28ac38;
        case 0x28ac3cu: goto label_28ac3c;
        case 0x28ac40u: goto label_28ac40;
        case 0x28ac44u: goto label_28ac44;
        case 0x28ac48u: goto label_28ac48;
        case 0x28ac4cu: goto label_28ac4c;
        case 0x28ac50u: goto label_28ac50;
        case 0x28ac54u: goto label_28ac54;
        case 0x28ac58u: goto label_28ac58;
        case 0x28ac5cu: goto label_28ac5c;
        case 0x28ac60u: goto label_28ac60;
        case 0x28ac64u: goto label_28ac64;
        case 0x28ac68u: goto label_28ac68;
        case 0x28ac6cu: goto label_28ac6c;
        case 0x28ac70u: goto label_28ac70;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac78u: goto label_28ac78;
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad74u: goto label_28ad74;
        case 0x28ad78u: goto label_28ad78;
        case 0x28ad7cu: goto label_28ad7c;
        case 0x28ad80u: goto label_28ad80;
        case 0x28ad84u: goto label_28ad84;
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad8cu: goto label_28ad8c;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28ada0u: goto label_28ada0;
        case 0x28ada4u: goto label_28ada4;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adacu: goto label_28adac;
        case 0x28adb0u: goto label_28adb0;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adb8u: goto label_28adb8;
        case 0x28adbcu: goto label_28adbc;
        case 0x28adc0u: goto label_28adc0;
        case 0x28adc4u: goto label_28adc4;
        case 0x28adc8u: goto label_28adc8;
        case 0x28adccu: goto label_28adcc;
        case 0x28add0u: goto label_28add0;
        case 0x28add4u: goto label_28add4;
        case 0x28add8u: goto label_28add8;
        case 0x28addcu: goto label_28addc;
        case 0x28ade0u: goto label_28ade0;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ade8u: goto label_28ade8;
        case 0x28adecu: goto label_28adec;
        case 0x28adf0u: goto label_28adf0;
        case 0x28adf4u: goto label_28adf4;
        case 0x28adf8u: goto label_28adf8;
        case 0x28adfcu: goto label_28adfc;
        case 0x28ae00u: goto label_28ae00;
        case 0x28ae04u: goto label_28ae04;
        case 0x28ae08u: goto label_28ae08;
        case 0x28ae0cu: goto label_28ae0c;
        case 0x28ae10u: goto label_28ae10;
        case 0x28ae14u: goto label_28ae14;
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae1cu: goto label_28ae1c;
        case 0x28ae20u: goto label_28ae20;
        case 0x28ae24u: goto label_28ae24;
        case 0x28ae28u: goto label_28ae28;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae38u: goto label_28ae38;
        case 0x28ae3cu: goto label_28ae3c;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae44u: goto label_28ae44;
        case 0x28ae48u: goto label_28ae48;
        case 0x28ae4cu: goto label_28ae4c;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae54u: goto label_28ae54;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae60u: goto label_28ae60;
        case 0x28ae64u: goto label_28ae64;
        case 0x28ae68u: goto label_28ae68;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae74u: goto label_28ae74;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae80u: goto label_28ae80;
        case 0x28ae84u: goto label_28ae84;
        case 0x28ae88u: goto label_28ae88;
        case 0x28ae8cu: goto label_28ae8c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28ae94u: goto label_28ae94;
        case 0x28ae98u: goto label_28ae98;
        case 0x28ae9cu: goto label_28ae9c;
        case 0x28aea0u: goto label_28aea0;
        case 0x28aea4u: goto label_28aea4;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aeacu: goto label_28aeac;
        case 0x28aeb0u: goto label_28aeb0;
        case 0x28aeb4u: goto label_28aeb4;
        case 0x28aeb8u: goto label_28aeb8;
        case 0x28aebcu: goto label_28aebc;
        case 0x28aec0u: goto label_28aec0;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aec8u: goto label_28aec8;
        case 0x28aeccu: goto label_28aecc;
        case 0x28aed0u: goto label_28aed0;
        case 0x28aed4u: goto label_28aed4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aee0u: goto label_28aee0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aee8u: goto label_28aee8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28aef0u: goto label_28aef0;
        case 0x28aef4u: goto label_28aef4;
        case 0x28aef8u: goto label_28aef8;
        case 0x28aefcu: goto label_28aefc;
        case 0x28af00u: goto label_28af00;
        case 0x28af04u: goto label_28af04;
        case 0x28af08u: goto label_28af08;
        case 0x28af0cu: goto label_28af0c;
        case 0x28af10u: goto label_28af10;
        case 0x28af14u: goto label_28af14;
        case 0x28af18u: goto label_28af18;
        case 0x28af1cu: goto label_28af1c;
        case 0x28af20u: goto label_28af20;
        case 0x28af24u: goto label_28af24;
        case 0x28af28u: goto label_28af28;
        case 0x28af2cu: goto label_28af2c;
        case 0x28af30u: goto label_28af30;
        case 0x28af34u: goto label_28af34;
        case 0x28af38u: goto label_28af38;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af40u: goto label_28af40;
        case 0x28af44u: goto label_28af44;
        case 0x28af48u: goto label_28af48;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af50u: goto label_28af50;
        case 0x28af54u: goto label_28af54;
        case 0x28af58u: goto label_28af58;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af60u: goto label_28af60;
        case 0x28af64u: goto label_28af64;
        case 0x28af68u: goto label_28af68;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af70u: goto label_28af70;
        case 0x28af74u: goto label_28af74;
        case 0x28af78u: goto label_28af78;
        case 0x28af7cu: goto label_28af7c;
        case 0x28af80u: goto label_28af80;
        case 0x28af84u: goto label_28af84;
        case 0x28af88u: goto label_28af88;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af90u: goto label_28af90;
        case 0x28af94u: goto label_28af94;
        case 0x28af98u: goto label_28af98;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa0u: goto label_28afa0;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afa8u: goto label_28afa8;
        case 0x28afacu: goto label_28afac;
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0c0u: goto label_28b0c0;
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0c8u: goto label_28b0c8;
        case 0x28b0ccu: goto label_28b0cc;
        case 0x28b0d0u: goto label_28b0d0;
        case 0x28b0d4u: goto label_28b0d4;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b0dcu: goto label_28b0dc;
        case 0x28b0e0u: goto label_28b0e0;
        case 0x28b0e4u: goto label_28b0e4;
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b0ecu: goto label_28b0ec;
        case 0x28b0f0u: goto label_28b0f0;
        case 0x28b0f4u: goto label_28b0f4;
        case 0x28b0f8u: goto label_28b0f8;
        case 0x28b0fcu: goto label_28b0fc;
        case 0x28b100u: goto label_28b100;
        case 0x28b104u: goto label_28b104;
        case 0x28b108u: goto label_28b108;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b110u: goto label_28b110;
        case 0x28b114u: goto label_28b114;
        case 0x28b118u: goto label_28b118;
        case 0x28b11cu: goto label_28b11c;
        case 0x28b120u: goto label_28b120;
        case 0x28b124u: goto label_28b124;
        case 0x28b128u: goto label_28b128;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b130u: goto label_28b130;
        case 0x28b134u: goto label_28b134;
        case 0x28b138u: goto label_28b138;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b140u: goto label_28b140;
        case 0x28b144u: goto label_28b144;
        case 0x28b148u: goto label_28b148;
        case 0x28b14cu: goto label_28b14c;
        case 0x28b150u: goto label_28b150;
        case 0x28b154u: goto label_28b154;
        case 0x28b158u: goto label_28b158;
        case 0x28b15cu: goto label_28b15c;
        case 0x28b160u: goto label_28b160;
        case 0x28b164u: goto label_28b164;
        case 0x28b168u: goto label_28b168;
        case 0x28b16cu: goto label_28b16c;
        case 0x28b170u: goto label_28b170;
        case 0x28b174u: goto label_28b174;
        case 0x28b178u: goto label_28b178;
        case 0x28b17cu: goto label_28b17c;
        case 0x28b180u: goto label_28b180;
        case 0x28b184u: goto label_28b184;
        case 0x28b188u: goto label_28b188;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b190u: goto label_28b190;
        case 0x28b194u: goto label_28b194;
        case 0x28b198u: goto label_28b198;
        case 0x28b19cu: goto label_28b19c;
        case 0x28b1a0u: goto label_28b1a0;
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1bcu: goto label_28b1bc;
        case 0x28b1c0u: goto label_28b1c0;
        case 0x28b1c4u: goto label_28b1c4;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d0u: goto label_28b1d0;
        case 0x28b1d4u: goto label_28b1d4;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        case 0x28b3e0u: goto label_28b3e0;
        case 0x28b3e4u: goto label_28b3e4;
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3ecu: goto label_28b3ec;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b3f4u: goto label_28b3f4;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b3fcu: goto label_28b3fc;
        case 0x28b400u: goto label_28b400;
        case 0x28b404u: goto label_28b404;
        case 0x28b408u: goto label_28b408;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b410u: goto label_28b410;
        case 0x28b414u: goto label_28b414;
        case 0x28b418u: goto label_28b418;
        case 0x28b41cu: goto label_28b41c;
        case 0x28b420u: goto label_28b420;
        case 0x28b424u: goto label_28b424;
        case 0x28b428u: goto label_28b428;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b430u: goto label_28b430;
        case 0x28b434u: goto label_28b434;
        case 0x28b438u: goto label_28b438;
        case 0x28b43cu: goto label_28b43c;
        case 0x28b440u: goto label_28b440;
        case 0x28b444u: goto label_28b444;
        case 0x28b448u: goto label_28b448;
        case 0x28b44cu: goto label_28b44c;
        case 0x28b450u: goto label_28b450;
        case 0x28b454u: goto label_28b454;
        case 0x28b458u: goto label_28b458;
        case 0x28b45cu: goto label_28b45c;
        case 0x28b460u: goto label_28b460;
        case 0x28b464u: goto label_28b464;
        case 0x28b468u: goto label_28b468;
        case 0x28b46cu: goto label_28b46c;
        case 0x28b470u: goto label_28b470;
        case 0x28b474u: goto label_28b474;
        case 0x28b478u: goto label_28b478;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b480u: goto label_28b480;
        case 0x28b484u: goto label_28b484;
        case 0x28b488u: goto label_28b488;
        case 0x28b48cu: goto label_28b48c;
        case 0x28b490u: goto label_28b490;
        case 0x28b494u: goto label_28b494;
        case 0x28b498u: goto label_28b498;
        case 0x28b49cu: goto label_28b49c;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4a4u: goto label_28b4a4;
        case 0x28b4a8u: goto label_28b4a8;
        case 0x28b4acu: goto label_28b4ac;
        case 0x28b4b0u: goto label_28b4b0;
        case 0x28b4b4u: goto label_28b4b4;
        case 0x28b4b8u: goto label_28b4b8;
        case 0x28b4bcu: goto label_28b4bc;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4c4u: goto label_28b4c4;
        case 0x28b4c8u: goto label_28b4c8;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b4d4u: goto label_28b4d4;
        case 0x28b4d8u: goto label_28b4d8;
        case 0x28b4dcu: goto label_28b4dc;
        case 0x28b4e0u: goto label_28b4e0;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4e8u: goto label_28b4e8;
        case 0x28b4ecu: goto label_28b4ec;
        case 0x28b4f0u: goto label_28b4f0;
        case 0x28b4f4u: goto label_28b4f4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b4fcu: goto label_28b4fc;
        case 0x28b500u: goto label_28b500;
        case 0x28b504u: goto label_28b504;
        case 0x28b508u: goto label_28b508;
        case 0x28b50cu: goto label_28b50c;
        case 0x28b510u: goto label_28b510;
        case 0x28b514u: goto label_28b514;
        case 0x28b518u: goto label_28b518;
        case 0x28b51cu: goto label_28b51c;
        case 0x28b520u: goto label_28b520;
        case 0x28b524u: goto label_28b524;
        case 0x28b528u: goto label_28b528;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b530u: goto label_28b530;
        case 0x28b534u: goto label_28b534;
        case 0x28b538u: goto label_28b538;
        case 0x28b53cu: goto label_28b53c;
        case 0x28b540u: goto label_28b540;
        case 0x28b544u: goto label_28b544;
        case 0x28b548u: goto label_28b548;
        case 0x28b54cu: goto label_28b54c;
        case 0x28b550u: goto label_28b550;
        case 0x28b554u: goto label_28b554;
        case 0x28b558u: goto label_28b558;
        case 0x28b55cu: goto label_28b55c;
        case 0x28b560u: goto label_28b560;
        case 0x28b564u: goto label_28b564;
        case 0x28b568u: goto label_28b568;
        case 0x28b56cu: goto label_28b56c;
        case 0x28b570u: goto label_28b570;
        case 0x28b574u: goto label_28b574;
        case 0x28b578u: goto label_28b578;
        case 0x28b57cu: goto label_28b57c;
        case 0x28b580u: goto label_28b580;
        case 0x28b584u: goto label_28b584;
        case 0x28b588u: goto label_28b588;
        case 0x28b58cu: goto label_28b58c;
        case 0x28b590u: goto label_28b590;
        case 0x28b594u: goto label_28b594;
        case 0x28b598u: goto label_28b598;
        case 0x28b59cu: goto label_28b59c;
        case 0x28b5a0u: goto label_28b5a0;
        case 0x28b5a4u: goto label_28b5a4;
        case 0x28b5a8u: goto label_28b5a8;
        case 0x28b5acu: goto label_28b5ac;
        case 0x28b5b0u: goto label_28b5b0;
        case 0x28b5b4u: goto label_28b5b4;
        case 0x28b5b8u: goto label_28b5b8;
        case 0x28b5bcu: goto label_28b5bc;
        case 0x28b5c0u: goto label_28b5c0;
        case 0x28b5c4u: goto label_28b5c4;
        case 0x28b5c8u: goto label_28b5c8;
        case 0x28b5ccu: goto label_28b5cc;
        case 0x28b5d0u: goto label_28b5d0;
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b5d8u: goto label_28b5d8;
        case 0x28b5dcu: goto label_28b5dc;
        case 0x28b5e0u: goto label_28b5e0;
        case 0x28b5e4u: goto label_28b5e4;
        case 0x28b5e8u: goto label_28b5e8;
        case 0x28b5ecu: goto label_28b5ec;
        case 0x28b5f0u: goto label_28b5f0;
        case 0x28b5f4u: goto label_28b5f4;
        case 0x28b5f8u: goto label_28b5f8;
        case 0x28b5fcu: goto label_28b5fc;
        case 0x28b600u: goto label_28b600;
        case 0x28b604u: goto label_28b604;
        case 0x28b608u: goto label_28b608;
        case 0x28b60cu: goto label_28b60c;
        case 0x28b610u: goto label_28b610;
        case 0x28b614u: goto label_28b614;
        case 0x28b618u: goto label_28b618;
        case 0x28b61cu: goto label_28b61c;
        case 0x28b620u: goto label_28b620;
        case 0x28b624u: goto label_28b624;
        case 0x28b628u: goto label_28b628;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b630u: goto label_28b630;
        case 0x28b634u: goto label_28b634;
        case 0x28b638u: goto label_28b638;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b640u: goto label_28b640;
        case 0x28b644u: goto label_28b644;
        case 0x28b648u: goto label_28b648;
        case 0x28b64cu: goto label_28b64c;
        case 0x28b650u: goto label_28b650;
        case 0x28b654u: goto label_28b654;
        case 0x28b658u: goto label_28b658;
        case 0x28b65cu: goto label_28b65c;
        case 0x28b660u: goto label_28b660;
        case 0x28b664u: goto label_28b664;
        case 0x28b668u: goto label_28b668;
        case 0x28b66cu: goto label_28b66c;
        case 0x28b670u: goto label_28b670;
        case 0x28b674u: goto label_28b674;
        case 0x28b678u: goto label_28b678;
        case 0x28b67cu: goto label_28b67c;
        case 0x28b680u: goto label_28b680;
        case 0x28b684u: goto label_28b684;
        case 0x28b688u: goto label_28b688;
        case 0x28b68cu: goto label_28b68c;
        case 0x28b690u: goto label_28b690;
        case 0x28b694u: goto label_28b694;
        case 0x28b698u: goto label_28b698;
        case 0x28b69cu: goto label_28b69c;
        case 0x28b6a0u: goto label_28b6a0;
        case 0x28b6a4u: goto label_28b6a4;
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b0u: goto label_28b6b0;
        case 0x28b6b4u: goto label_28b6b4;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6bcu: goto label_28b6bc;
        case 0x28b6c0u: goto label_28b6c0;
        case 0x28b6c4u: goto label_28b6c4;
        case 0x28b6c8u: goto label_28b6c8;
        case 0x28b6ccu: goto label_28b6cc;
        case 0x28b6d0u: goto label_28b6d0;
        case 0x28b6d4u: goto label_28b6d4;
        case 0x28b6d8u: goto label_28b6d8;
        case 0x28b6dcu: goto label_28b6dc;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b6e4u: goto label_28b6e4;
        case 0x28b6e8u: goto label_28b6e8;
        case 0x28b6ecu: goto label_28b6ec;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b6f4u: goto label_28b6f4;
        case 0x28b6f8u: goto label_28b6f8;
        case 0x28b6fcu: goto label_28b6fc;
        case 0x28b700u: goto label_28b700;
        case 0x28b704u: goto label_28b704;
        case 0x28b708u: goto label_28b708;
        case 0x28b70cu: goto label_28b70c;
        case 0x28b710u: goto label_28b710;
        case 0x28b714u: goto label_28b714;
        case 0x28b718u: goto label_28b718;
        case 0x28b71cu: goto label_28b71c;
        case 0x28b720u: goto label_28b720;
        case 0x28b724u: goto label_28b724;
        case 0x28b728u: goto label_28b728;
        case 0x28b72cu: goto label_28b72c;
        case 0x28b730u: goto label_28b730;
        case 0x28b734u: goto label_28b734;
        case 0x28b738u: goto label_28b738;
        case 0x28b73cu: goto label_28b73c;
        case 0x28b740u: goto label_28b740;
        case 0x28b744u: goto label_28b744;
        case 0x28b748u: goto label_28b748;
        case 0x28b74cu: goto label_28b74c;
        case 0x28b750u: goto label_28b750;
        case 0x28b754u: goto label_28b754;
        case 0x28b758u: goto label_28b758;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b760u: goto label_28b760;
        case 0x28b764u: goto label_28b764;
        case 0x28b768u: goto label_28b768;
        case 0x28b76cu: goto label_28b76c;
        case 0x28b770u: goto label_28b770;
        case 0x28b774u: goto label_28b774;
        case 0x28b778u: goto label_28b778;
        case 0x28b77cu: goto label_28b77c;
        case 0x28b780u: goto label_28b780;
        case 0x28b784u: goto label_28b784;
        case 0x28b788u: goto label_28b788;
        case 0x28b78cu: goto label_28b78c;
        case 0x28b790u: goto label_28b790;
        case 0x28b794u: goto label_28b794;
        case 0x28b798u: goto label_28b798;
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7a0u: goto label_28b7a0;
        case 0x28b7a4u: goto label_28b7a4;
        case 0x28b7a8u: goto label_28b7a8;
        case 0x28b7acu: goto label_28b7ac;
        case 0x28b7b0u: goto label_28b7b0;
        case 0x28b7b4u: goto label_28b7b4;
        case 0x28b7b8u: goto label_28b7b8;
        case 0x28b7bcu: goto label_28b7bc;
        case 0x28b7c0u: goto label_28b7c0;
        case 0x28b7c4u: goto label_28b7c4;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7ccu: goto label_28b7cc;
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b7d4u: goto label_28b7d4;
        case 0x28b7d8u: goto label_28b7d8;
        case 0x28b7dcu: goto label_28b7dc;
        case 0x28b7e0u: goto label_28b7e0;
        case 0x28b7e4u: goto label_28b7e4;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b7ecu: goto label_28b7ec;
        case 0x28b7f0u: goto label_28b7f0;
        case 0x28b7f4u: goto label_28b7f4;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b7fcu: goto label_28b7fc;
        case 0x28b800u: goto label_28b800;
        case 0x28b804u: goto label_28b804;
        case 0x28b808u: goto label_28b808;
        case 0x28b80cu: goto label_28b80c;
        case 0x28b810u: goto label_28b810;
        case 0x28b814u: goto label_28b814;
        case 0x28b818u: goto label_28b818;
        case 0x28b81cu: goto label_28b81c;
        case 0x28b820u: goto label_28b820;
        case 0x28b824u: goto label_28b824;
        case 0x28b828u: goto label_28b828;
        case 0x28b82cu: goto label_28b82c;
        case 0x28b830u: goto label_28b830;
        case 0x28b834u: goto label_28b834;
        case 0x28b838u: goto label_28b838;
        case 0x28b83cu: goto label_28b83c;
        case 0x28b840u: goto label_28b840;
        case 0x28b844u: goto label_28b844;
        case 0x28b848u: goto label_28b848;
        case 0x28b84cu: goto label_28b84c;
        case 0x28b850u: goto label_28b850;
        case 0x28b854u: goto label_28b854;
        case 0x28b858u: goto label_28b858;
        case 0x28b85cu: goto label_28b85c;
        case 0x28b860u: goto label_28b860;
        case 0x28b864u: goto label_28b864;
        case 0x28b868u: goto label_28b868;
        case 0x28b86cu: goto label_28b86c;
        case 0x28b870u: goto label_28b870;
        case 0x28b874u: goto label_28b874;
        case 0x28b878u: goto label_28b878;
        case 0x28b87cu: goto label_28b87c;
        case 0x28b880u: goto label_28b880;
        case 0x28b884u: goto label_28b884;
        case 0x28b888u: goto label_28b888;
        case 0x28b88cu: goto label_28b88c;
        case 0x28b890u: goto label_28b890;
        case 0x28b894u: goto label_28b894;
        case 0x28b898u: goto label_28b898;
        case 0x28b89cu: goto label_28b89c;
        case 0x28b8a0u: goto label_28b8a0;
        case 0x28b8a4u: goto label_28b8a4;
        case 0x28b8a8u: goto label_28b8a8;
        case 0x28b8acu: goto label_28b8ac;
        case 0x28b8b0u: goto label_28b8b0;
        case 0x28b8b4u: goto label_28b8b4;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8bcu: goto label_28b8bc;
        case 0x28b8c0u: goto label_28b8c0;
        case 0x28b8c4u: goto label_28b8c4;
        case 0x28b8c8u: goto label_28b8c8;
        case 0x28b8ccu: goto label_28b8cc;
        case 0x28b8d0u: goto label_28b8d0;
        case 0x28b8d4u: goto label_28b8d4;
        case 0x28b8d8u: goto label_28b8d8;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8e0u: goto label_28b8e0;
        case 0x28b8e4u: goto label_28b8e4;
        case 0x28b8e8u: goto label_28b8e8;
        case 0x28b8ecu: goto label_28b8ec;
        case 0x28b8f0u: goto label_28b8f0;
        case 0x28b8f4u: goto label_28b8f4;
        case 0x28b8f8u: goto label_28b8f8;
        case 0x28b8fcu: goto label_28b8fc;
        case 0x28b900u: goto label_28b900;
        case 0x28b904u: goto label_28b904;
        case 0x28b908u: goto label_28b908;
        case 0x28b90cu: goto label_28b90c;
        case 0x28b910u: goto label_28b910;
        case 0x28b914u: goto label_28b914;
        case 0x28b918u: goto label_28b918;
        case 0x28b91cu: goto label_28b91c;
        case 0x28b920u: goto label_28b920;
        case 0x28b924u: goto label_28b924;
        case 0x28b928u: goto label_28b928;
        case 0x28b92cu: goto label_28b92c;
        case 0x28b930u: goto label_28b930;
        case 0x28b934u: goto label_28b934;
        case 0x28b938u: goto label_28b938;
        case 0x28b93cu: goto label_28b93c;
        case 0x28b940u: goto label_28b940;
        case 0x28b944u: goto label_28b944;
        case 0x28b948u: goto label_28b948;
        case 0x28b94cu: goto label_28b94c;
        case 0x28b950u: goto label_28b950;
        case 0x28b954u: goto label_28b954;
        case 0x28b958u: goto label_28b958;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b960u: goto label_28b960;
        case 0x28b964u: goto label_28b964;
        case 0x28b968u: goto label_28b968;
        case 0x28b96cu: goto label_28b96c;
        case 0x28b970u: goto label_28b970;
        case 0x28b974u: goto label_28b974;
        case 0x28b978u: goto label_28b978;
        case 0x28b97cu: goto label_28b97c;
        case 0x28b980u: goto label_28b980;
        case 0x28b984u: goto label_28b984;
        case 0x28b988u: goto label_28b988;
        case 0x28b98cu: goto label_28b98c;
        case 0x28b990u: goto label_28b990;
        case 0x28b994u: goto label_28b994;
        case 0x28b998u: goto label_28b998;
        case 0x28b99cu: goto label_28b99c;
        case 0x28b9a0u: goto label_28b9a0;
        case 0x28b9a4u: goto label_28b9a4;
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9acu: goto label_28b9ac;
        case 0x28b9b0u: goto label_28b9b0;
        case 0x28b9b4u: goto label_28b9b4;
        case 0x28b9b8u: goto label_28b9b8;
        case 0x28b9bcu: goto label_28b9bc;
        case 0x28b9c0u: goto label_28b9c0;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9c8u: goto label_28b9c8;
        case 0x28b9ccu: goto label_28b9cc;
        case 0x28b9d0u: goto label_28b9d0;
        case 0x28b9d4u: goto label_28b9d4;
        case 0x28b9d8u: goto label_28b9d8;
        case 0x28b9dcu: goto label_28b9dc;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9e4u: goto label_28b9e4;
        case 0x28b9e8u: goto label_28b9e8;
        case 0x28b9ecu: goto label_28b9ec;
        case 0x28b9f0u: goto label_28b9f0;
        case 0x28b9f4u: goto label_28b9f4;
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba00u: goto label_28ba00;
        case 0x28ba04u: goto label_28ba04;
        case 0x28ba08u: goto label_28ba08;
        case 0x28ba0cu: goto label_28ba0c;
        case 0x28ba10u: goto label_28ba10;
        case 0x28ba14u: goto label_28ba14;
        case 0x28ba18u: goto label_28ba18;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba20u: goto label_28ba20;
        case 0x28ba24u: goto label_28ba24;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba2cu: goto label_28ba2c;
        case 0x28ba30u: goto label_28ba30;
        case 0x28ba34u: goto label_28ba34;
        case 0x28ba38u: goto label_28ba38;
        case 0x28ba3cu: goto label_28ba3c;
        case 0x28ba40u: goto label_28ba40;
        case 0x28ba44u: goto label_28ba44;
        case 0x28ba48u: goto label_28ba48;
        case 0x28ba4cu: goto label_28ba4c;
        case 0x28ba50u: goto label_28ba50;
        case 0x28ba54u: goto label_28ba54;
        case 0x28ba58u: goto label_28ba58;
        case 0x28ba5cu: goto label_28ba5c;
        case 0x28ba60u: goto label_28ba60;
        case 0x28ba64u: goto label_28ba64;
        case 0x28ba68u: goto label_28ba68;
        case 0x28ba6cu: goto label_28ba6c;
        case 0x28ba70u: goto label_28ba70;
        case 0x28ba74u: goto label_28ba74;
        case 0x28ba78u: goto label_28ba78;
        case 0x28ba7cu: goto label_28ba7c;
        case 0x28ba80u: goto label_28ba80;
        case 0x28ba84u: goto label_28ba84;
        case 0x28ba88u: goto label_28ba88;
        case 0x28ba8cu: goto label_28ba8c;
        case 0x28ba90u: goto label_28ba90;
        case 0x28ba94u: goto label_28ba94;
        case 0x28ba98u: goto label_28ba98;
        case 0x28ba9cu: goto label_28ba9c;
        case 0x28baa0u: goto label_28baa0;
        case 0x28baa4u: goto label_28baa4;
        case 0x28baa8u: goto label_28baa8;
        case 0x28baacu: goto label_28baac;
        case 0x28bab0u: goto label_28bab0;
        case 0x28bab4u: goto label_28bab4;
        case 0x28bab8u: goto label_28bab8;
        case 0x28babcu: goto label_28babc;
        case 0x28bac0u: goto label_28bac0;
        case 0x28bac4u: goto label_28bac4;
        case 0x28bac8u: goto label_28bac8;
        case 0x28baccu: goto label_28bacc;
        case 0x28bad0u: goto label_28bad0;
        case 0x28bad4u: goto label_28bad4;
        case 0x28bad8u: goto label_28bad8;
        case 0x28badcu: goto label_28badc;
        case 0x28bae0u: goto label_28bae0;
        case 0x28bae4u: goto label_28bae4;
        case 0x28bae8u: goto label_28bae8;
        case 0x28baecu: goto label_28baec;
        case 0x28baf0u: goto label_28baf0;
        case 0x28baf4u: goto label_28baf4;
        case 0x28baf8u: goto label_28baf8;
        case 0x28bafcu: goto label_28bafc;
        case 0x28bb00u: goto label_28bb00;
        case 0x28bb04u: goto label_28bb04;
        case 0x28bb08u: goto label_28bb08;
        case 0x28bb0cu: goto label_28bb0c;
        case 0x28bb10u: goto label_28bb10;
        case 0x28bb14u: goto label_28bb14;
        case 0x28bb18u: goto label_28bb18;
        case 0x28bb1cu: goto label_28bb1c;
        case 0x28bb20u: goto label_28bb20;
        case 0x28bb24u: goto label_28bb24;
        case 0x28bb28u: goto label_28bb28;
        case 0x28bb2cu: goto label_28bb2c;
        case 0x28bb30u: goto label_28bb30;
        case 0x28bb34u: goto label_28bb34;
        case 0x28bb38u: goto label_28bb38;
        case 0x28bb3cu: goto label_28bb3c;
        case 0x28bb40u: goto label_28bb40;
        case 0x28bb44u: goto label_28bb44;
        case 0x28bb48u: goto label_28bb48;
        case 0x28bb4cu: goto label_28bb4c;
        case 0x28bb50u: goto label_28bb50;
        case 0x28bb54u: goto label_28bb54;
        case 0x28bb58u: goto label_28bb58;
        case 0x28bb5cu: goto label_28bb5c;
        case 0x28bb60u: goto label_28bb60;
        case 0x28bb64u: goto label_28bb64;
        case 0x28bb68u: goto label_28bb68;
        case 0x28bb6cu: goto label_28bb6c;
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb74u: goto label_28bb74;
        case 0x28bb78u: goto label_28bb78;
        case 0x28bb7cu: goto label_28bb7c;
        case 0x28bb80u: goto label_28bb80;
        case 0x28bb84u: goto label_28bb84;
        case 0x28bb88u: goto label_28bb88;
        case 0x28bb8cu: goto label_28bb8c;
        case 0x28bb90u: goto label_28bb90;
        case 0x28bb94u: goto label_28bb94;
        case 0x28bb98u: goto label_28bb98;
        case 0x28bb9cu: goto label_28bb9c;
        case 0x28bba0u: goto label_28bba0;
        case 0x28bba4u: goto label_28bba4;
        case 0x28bba8u: goto label_28bba8;
        case 0x28bbacu: goto label_28bbac;
        case 0x28bbb0u: goto label_28bbb0;
        case 0x28bbb4u: goto label_28bbb4;
        case 0x28bbb8u: goto label_28bbb8;
        case 0x28bbbcu: goto label_28bbbc;
        case 0x28bbc0u: goto label_28bbc0;
        case 0x28bbc4u: goto label_28bbc4;
        case 0x28bbc8u: goto label_28bbc8;
        case 0x28bbccu: goto label_28bbcc;
        case 0x28bbd0u: goto label_28bbd0;
        case 0x28bbd4u: goto label_28bbd4;
        case 0x28bbd8u: goto label_28bbd8;
        case 0x28bbdcu: goto label_28bbdc;
        case 0x28bbe0u: goto label_28bbe0;
        case 0x28bbe4u: goto label_28bbe4;
        case 0x28bbe8u: goto label_28bbe8;
        case 0x28bbecu: goto label_28bbec;
        case 0x28bbf0u: goto label_28bbf0;
        case 0x28bbf4u: goto label_28bbf4;
        case 0x28bbf8u: goto label_28bbf8;
        case 0x28bbfcu: goto label_28bbfc;
        case 0x28bc00u: goto label_28bc00;
        case 0x28bc04u: goto label_28bc04;
        case 0x28bc08u: goto label_28bc08;
        case 0x28bc0cu: goto label_28bc0c;
        case 0x28bc10u: goto label_28bc10;
        case 0x28bc14u: goto label_28bc14;
        case 0x28bc18u: goto label_28bc18;
        case 0x28bc1cu: goto label_28bc1c;
        case 0x28bc20u: goto label_28bc20;
        case 0x28bc24u: goto label_28bc24;
        case 0x28bc28u: goto label_28bc28;
        case 0x28bc2cu: goto label_28bc2c;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc34u: goto label_28bc34;
        case 0x28bc38u: goto label_28bc38;
        case 0x28bc3cu: goto label_28bc3c;
        case 0x28bc40u: goto label_28bc40;
        case 0x28bc44u: goto label_28bc44;
        case 0x28bc48u: goto label_28bc48;
        case 0x28bc4cu: goto label_28bc4c;
        case 0x28bc50u: goto label_28bc50;
        case 0x28bc54u: goto label_28bc54;
        case 0x28bc58u: goto label_28bc58;
        case 0x28bc5cu: goto label_28bc5c;
        case 0x28bc60u: goto label_28bc60;
        case 0x28bc64u: goto label_28bc64;
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc6cu: goto label_28bc6c;
        case 0x28bc70u: goto label_28bc70;
        case 0x28bc74u: goto label_28bc74;
        case 0x28bc78u: goto label_28bc78;
        case 0x28bc7cu: goto label_28bc7c;
        case 0x28bc80u: goto label_28bc80;
        case 0x28bc84u: goto label_28bc84;
        case 0x28bc88u: goto label_28bc88;
        case 0x28bc8cu: goto label_28bc8c;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bc94u: goto label_28bc94;
        case 0x28bc98u: goto label_28bc98;
        case 0x28bc9cu: goto label_28bc9c;
        case 0x28bca0u: goto label_28bca0;
        case 0x28bca4u: goto label_28bca4;
        case 0x28bca8u: goto label_28bca8;
        case 0x28bcacu: goto label_28bcac;
        case 0x28bcb0u: goto label_28bcb0;
        case 0x28bcb4u: goto label_28bcb4;
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bcc0u: goto label_28bcc0;
        case 0x28bcc4u: goto label_28bcc4;
        case 0x28bcc8u: goto label_28bcc8;
        case 0x28bcccu: goto label_28bccc;
        case 0x28bcd0u: goto label_28bcd0;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcd8u: goto label_28bcd8;
        case 0x28bcdcu: goto label_28bcdc;
        case 0x28bce0u: goto label_28bce0;
        case 0x28bce4u: goto label_28bce4;
        case 0x28bce8u: goto label_28bce8;
        case 0x28bcecu: goto label_28bcec;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bcf4u: goto label_28bcf4;
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bcfcu: goto label_28bcfc;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd04u: goto label_28bd04;
        case 0x28bd08u: goto label_28bd08;
        case 0x28bd0cu: goto label_28bd0c;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd14u: goto label_28bd14;
        case 0x28bd18u: goto label_28bd18;
        case 0x28bd1cu: goto label_28bd1c;
        case 0x28bd20u: goto label_28bd20;
        case 0x28bd24u: goto label_28bd24;
        case 0x28bd28u: goto label_28bd28;
        case 0x28bd2cu: goto label_28bd2c;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd3cu: goto label_28bd3c;
        case 0x28bd40u: goto label_28bd40;
        case 0x28bd44u: goto label_28bd44;
        case 0x28bd48u: goto label_28bd48;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bea8u: goto label_28bea8;
        case 0x28beacu: goto label_28beac;
        case 0x28beb0u: goto label_28beb0;
        case 0x28beb4u: goto label_28beb4;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bebcu: goto label_28bebc;
        case 0x28bec0u: goto label_28bec0;
        case 0x28bec4u: goto label_28bec4;
        case 0x28bec8u: goto label_28bec8;
        case 0x28beccu: goto label_28becc;
        case 0x28bed0u: goto label_28bed0;
        case 0x28bed4u: goto label_28bed4;
        case 0x28bed8u: goto label_28bed8;
        case 0x28bedcu: goto label_28bedc;
        case 0x28bee0u: goto label_28bee0;
        case 0x28bee4u: goto label_28bee4;
        case 0x28bee8u: goto label_28bee8;
        case 0x28beecu: goto label_28beec;
        case 0x28bef0u: goto label_28bef0;
        case 0x28bef4u: goto label_28bef4;
        case 0x28bef8u: goto label_28bef8;
        case 0x28befcu: goto label_28befc;
        case 0x28bf00u: goto label_28bf00;
        case 0x28bf04u: goto label_28bf04;
        case 0x28bf08u: goto label_28bf08;
        case 0x28bf0cu: goto label_28bf0c;
        case 0x28bf10u: goto label_28bf10;
        case 0x28bf14u: goto label_28bf14;
        case 0x28bf18u: goto label_28bf18;
        case 0x28bf1cu: goto label_28bf1c;
        case 0x28bf20u: goto label_28bf20;
        case 0x28bf24u: goto label_28bf24;
        case 0x28bf28u: goto label_28bf28;
        case 0x28bf2cu: goto label_28bf2c;
        case 0x28bf30u: goto label_28bf30;
        case 0x28bf34u: goto label_28bf34;
        case 0x28bf38u: goto label_28bf38;
        case 0x28bf3cu: goto label_28bf3c;
        case 0x28bf40u: goto label_28bf40;
        case 0x28bf44u: goto label_28bf44;
        case 0x28bf48u: goto label_28bf48;
        case 0x28bf4cu: goto label_28bf4c;
        case 0x28bf50u: goto label_28bf50;
        case 0x28bf54u: goto label_28bf54;
        case 0x28bf58u: goto label_28bf58;
        case 0x28bf5cu: goto label_28bf5c;
        case 0x28bf60u: goto label_28bf60;
        case 0x28bf64u: goto label_28bf64;
        case 0x28bf68u: goto label_28bf68;
        case 0x28bf6cu: goto label_28bf6c;
        case 0x28bf70u: goto label_28bf70;
        case 0x28bf74u: goto label_28bf74;
        case 0x28bf78u: goto label_28bf78;
        case 0x28bf7cu: goto label_28bf7c;
        case 0x28bf80u: goto label_28bf80;
        case 0x28bf84u: goto label_28bf84;
        case 0x28bf88u: goto label_28bf88;
        case 0x28bf8cu: goto label_28bf8c;
        case 0x28bf90u: goto label_28bf90;
        case 0x28bf94u: goto label_28bf94;
        case 0x28bf98u: goto label_28bf98;
        case 0x28bf9cu: goto label_28bf9c;
        case 0x28bfa0u: goto label_28bfa0;
        case 0x28bfa4u: goto label_28bfa4;
        case 0x28bfa8u: goto label_28bfa8;
        case 0x28bfacu: goto label_28bfac;
        case 0x28bfb0u: goto label_28bfb0;
        case 0x28bfb4u: goto label_28bfb4;
        case 0x28bfb8u: goto label_28bfb8;
        case 0x28bfbcu: goto label_28bfbc;
        case 0x28bfc0u: goto label_28bfc0;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bfc8u: goto label_28bfc8;
        case 0x28bfccu: goto label_28bfcc;
        case 0x28bfd0u: goto label_28bfd0;
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28bfdcu: goto label_28bfdc;
        case 0x28bfe0u: goto label_28bfe0;
        case 0x28bfe4u: goto label_28bfe4;
        case 0x28bfe8u: goto label_28bfe8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28bff0u: goto label_28bff0;
        case 0x28bff4u: goto label_28bff4;
        case 0x28bff8u: goto label_28bff8;
        case 0x28bffcu: goto label_28bffc;
        case 0x28c000u: goto label_28c000;
        case 0x28c004u: goto label_28c004;
        case 0x28c008u: goto label_28c008;
        case 0x28c00cu: goto label_28c00c;
        case 0x28c010u: goto label_28c010;
        case 0x28c014u: goto label_28c014;
        case 0x28c018u: goto label_28c018;
        case 0x28c01cu: goto label_28c01c;
        case 0x28c020u: goto label_28c020;
        case 0x28c024u: goto label_28c024;
        case 0x28c028u: goto label_28c028;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c030u: goto label_28c030;
        case 0x28c034u: goto label_28c034;
        case 0x28c038u: goto label_28c038;
        case 0x28c03cu: goto label_28c03c;
        case 0x28c040u: goto label_28c040;
        case 0x28c044u: goto label_28c044;
        case 0x28c048u: goto label_28c048;
        case 0x28c04cu: goto label_28c04c;
        case 0x28c050u: goto label_28c050;
        case 0x28c054u: goto label_28c054;
        case 0x28c058u: goto label_28c058;
        case 0x28c05cu: goto label_28c05c;
        case 0x28c060u: goto label_28c060;
        case 0x28c064u: goto label_28c064;
        case 0x28c068u: goto label_28c068;
        case 0x28c06cu: goto label_28c06c;
        case 0x28c070u: goto label_28c070;
        case 0x28c074u: goto label_28c074;
        case 0x28c078u: goto label_28c078;
        case 0x28c07cu: goto label_28c07c;
        case 0x28c080u: goto label_28c080;
        case 0x28c084u: goto label_28c084;
        case 0x28c088u: goto label_28c088;
        case 0x28c08cu: goto label_28c08c;
        case 0x28c090u: goto label_28c090;
        case 0x28c094u: goto label_28c094;
        case 0x28c098u: goto label_28c098;
        case 0x28c09cu: goto label_28c09c;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0acu: goto label_28c0ac;
        case 0x28c0b0u: goto label_28c0b0;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0b8u: goto label_28c0b8;
        case 0x28c0bcu: goto label_28c0bc;
        case 0x28c0c0u: goto label_28c0c0;
        case 0x28c0c4u: goto label_28c0c4;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0ccu: goto label_28c0cc;
        case 0x28c0d0u: goto label_28c0d0;
        case 0x28c0d4u: goto label_28c0d4;
        case 0x28c0d8u: goto label_28c0d8;
        case 0x28c0dcu: goto label_28c0dc;
        case 0x28c0e0u: goto label_28c0e0;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c0ecu: goto label_28c0ec;
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c0f4u: goto label_28c0f4;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c0fcu: goto label_28c0fc;
        case 0x28c100u: goto label_28c100;
        case 0x28c104u: goto label_28c104;
        case 0x28c108u: goto label_28c108;
        case 0x28c10cu: goto label_28c10c;
        case 0x28c110u: goto label_28c110;
        case 0x28c114u: goto label_28c114;
        case 0x28c118u: goto label_28c118;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c120u: goto label_28c120;
        case 0x28c124u: goto label_28c124;
        case 0x28c128u: goto label_28c128;
        case 0x28c12cu: goto label_28c12c;
        case 0x28c130u: goto label_28c130;
        case 0x28c134u: goto label_28c134;
        case 0x28c138u: goto label_28c138;
        case 0x28c13cu: goto label_28c13c;
        case 0x28c140u: goto label_28c140;
        case 0x28c144u: goto label_28c144;
        case 0x28c148u: goto label_28c148;
        case 0x28c14cu: goto label_28c14c;
        case 0x28c150u: goto label_28c150;
        case 0x28c154u: goto label_28c154;
        case 0x28c158u: goto label_28c158;
        case 0x28c15cu: goto label_28c15c;
        case 0x28c160u: goto label_28c160;
        case 0x28c164u: goto label_28c164;
        case 0x28c168u: goto label_28c168;
        case 0x28c16cu: goto label_28c16c;
        case 0x28c170u: goto label_28c170;
        case 0x28c174u: goto label_28c174;
        case 0x28c178u: goto label_28c178;
        case 0x28c17cu: goto label_28c17c;
        case 0x28c180u: goto label_28c180;
        case 0x28c184u: goto label_28c184;
        case 0x28c188u: goto label_28c188;
        case 0x28c18cu: goto label_28c18c;
        case 0x28c190u: goto label_28c190;
        case 0x28c194u: goto label_28c194;
        case 0x28c198u: goto label_28c198;
        case 0x28c19cu: goto label_28c19c;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c1c8u: goto label_28c1c8;
        case 0x28c1ccu: goto label_28c1cc;
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        case 0x28c428u: goto label_28c428;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c430u: goto label_28c430;
        case 0x28c434u: goto label_28c434;
        case 0x28c438u: goto label_28c438;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c440u: goto label_28c440;
        case 0x28c444u: goto label_28c444;
        case 0x28c448u: goto label_28c448;
        case 0x28c44cu: goto label_28c44c;
        case 0x28c450u: goto label_28c450;
        case 0x28c454u: goto label_28c454;
        case 0x28c458u: goto label_28c458;
        case 0x28c45cu: goto label_28c45c;
        case 0x28c460u: goto label_28c460;
        case 0x28c464u: goto label_28c464;
        case 0x28c468u: goto label_28c468;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c470u: goto label_28c470;
        case 0x28c474u: goto label_28c474;
        case 0x28c478u: goto label_28c478;
        case 0x28c47cu: goto label_28c47c;
        case 0x28c480u: goto label_28c480;
        case 0x28c484u: goto label_28c484;
        case 0x28c488u: goto label_28c488;
        case 0x28c48cu: goto label_28c48c;
        case 0x28c490u: goto label_28c490;
        case 0x28c494u: goto label_28c494;
        case 0x28c498u: goto label_28c498;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4a0u: goto label_28c4a0;
        case 0x28c4a4u: goto label_28c4a4;
        case 0x28c4a8u: goto label_28c4a8;
        case 0x28c4acu: goto label_28c4ac;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c4b4u: goto label_28c4b4;
        case 0x28c4b8u: goto label_28c4b8;
        case 0x28c4bcu: goto label_28c4bc;
        case 0x28c4c0u: goto label_28c4c0;
        case 0x28c4c4u: goto label_28c4c4;
        case 0x28c4c8u: goto label_28c4c8;
        case 0x28c4ccu: goto label_28c4cc;
        case 0x28c4d0u: goto label_28c4d0;
        case 0x28c4d4u: goto label_28c4d4;
        case 0x28c4d8u: goto label_28c4d8;
        case 0x28c4dcu: goto label_28c4dc;
        case 0x28c4e0u: goto label_28c4e0;
        case 0x28c4e4u: goto label_28c4e4;
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c4ecu: goto label_28c4ec;
        case 0x28c4f0u: goto label_28c4f0;
        case 0x28c4f4u: goto label_28c4f4;
        case 0x28c4f8u: goto label_28c4f8;
        case 0x28c4fcu: goto label_28c4fc;
        case 0x28c500u: goto label_28c500;
        case 0x28c504u: goto label_28c504;
        case 0x28c508u: goto label_28c508;
        case 0x28c50cu: goto label_28c50c;
        case 0x28c510u: goto label_28c510;
        case 0x28c514u: goto label_28c514;
        case 0x28c518u: goto label_28c518;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c520u: goto label_28c520;
        case 0x28c524u: goto label_28c524;
        case 0x28c528u: goto label_28c528;
        case 0x28c52cu: goto label_28c52c;
        case 0x28c530u: goto label_28c530;
        case 0x28c534u: goto label_28c534;
        case 0x28c538u: goto label_28c538;
        case 0x28c53cu: goto label_28c53c;
        case 0x28c540u: goto label_28c540;
        case 0x28c544u: goto label_28c544;
        case 0x28c548u: goto label_28c548;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6a4u: goto label_28c6a4;
        case 0x28c6a8u: goto label_28c6a8;
        case 0x28c6acu: goto label_28c6ac;
        case 0x28c6b0u: goto label_28c6b0;
        case 0x28c6b4u: goto label_28c6b4;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6bcu: goto label_28c6bc;
        case 0x28c6c0u: goto label_28c6c0;
        case 0x28c6c4u: goto label_28c6c4;
        case 0x28c6c8u: goto label_28c6c8;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6d0u: goto label_28c6d0;
        case 0x28c6d4u: goto label_28c6d4;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c6e0u: goto label_28c6e0;
        case 0x28c6e4u: goto label_28c6e4;
        case 0x28c6e8u: goto label_28c6e8;
        case 0x28c6ecu: goto label_28c6ec;
        case 0x28c6f0u: goto label_28c6f0;
        case 0x28c6f4u: goto label_28c6f4;
        case 0x28c6f8u: goto label_28c6f8;
        case 0x28c6fcu: goto label_28c6fc;
        case 0x28c700u: goto label_28c700;
        case 0x28c704u: goto label_28c704;
        case 0x28c708u: goto label_28c708;
        case 0x28c70cu: goto label_28c70c;
        case 0x28c710u: goto label_28c710;
        case 0x28c714u: goto label_28c714;
        case 0x28c718u: goto label_28c718;
        case 0x28c71cu: goto label_28c71c;
        case 0x28c720u: goto label_28c720;
        case 0x28c724u: goto label_28c724;
        case 0x28c728u: goto label_28c728;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c730u: goto label_28c730;
        case 0x28c734u: goto label_28c734;
        case 0x28c738u: goto label_28c738;
        case 0x28c73cu: goto label_28c73c;
        case 0x28c740u: goto label_28c740;
        case 0x28c744u: goto label_28c744;
        case 0x28c748u: goto label_28c748;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c750u: goto label_28c750;
        case 0x28c754u: goto label_28c754;
        case 0x28c758u: goto label_28c758;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c760u: goto label_28c760;
        case 0x28c764u: goto label_28c764;
        case 0x28c768u: goto label_28c768;
        case 0x28c76cu: goto label_28c76c;
        case 0x28c770u: goto label_28c770;
        case 0x28c774u: goto label_28c774;
        case 0x28c778u: goto label_28c778;
        case 0x28c77cu: goto label_28c77c;
        case 0x28c780u: goto label_28c780;
        case 0x28c784u: goto label_28c784;
        case 0x28c788u: goto label_28c788;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c790u: goto label_28c790;
        case 0x28c794u: goto label_28c794;
        case 0x28c798u: goto label_28c798;
        case 0x28c79cu: goto label_28c79c;
        case 0x28c7a0u: goto label_28c7a0;
        case 0x28c7a4u: goto label_28c7a4;
        case 0x28c7a8u: goto label_28c7a8;
        case 0x28c7acu: goto label_28c7ac;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7b4u: goto label_28c7b4;
        case 0x28c7b8u: goto label_28c7b8;
        case 0x28c7bcu: goto label_28c7bc;
        case 0x28c7c0u: goto label_28c7c0;
        case 0x28c7c4u: goto label_28c7c4;
        case 0x28c7c8u: goto label_28c7c8;
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c7d0u: goto label_28c7d0;
        case 0x28c7d4u: goto label_28c7d4;
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7dcu: goto label_28c7dc;
        case 0x28c7e0u: goto label_28c7e0;
        case 0x28c7e4u: goto label_28c7e4;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c7ecu: goto label_28c7ec;
        case 0x28c7f0u: goto label_28c7f0;
        case 0x28c7f4u: goto label_28c7f4;
        case 0x28c7f8u: goto label_28c7f8;
        case 0x28c7fcu: goto label_28c7fc;
        case 0x28c800u: goto label_28c800;
        case 0x28c804u: goto label_28c804;
        case 0x28c808u: goto label_28c808;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c810u: goto label_28c810;
        case 0x28c814u: goto label_28c814;
        case 0x28c818u: goto label_28c818;
        case 0x28c81cu: goto label_28c81c;
        case 0x28c820u: goto label_28c820;
        case 0x28c824u: goto label_28c824;
        case 0x28c828u: goto label_28c828;
        case 0x28c82cu: goto label_28c82c;
        case 0x28c830u: goto label_28c830;
        case 0x28c834u: goto label_28c834;
        case 0x28c838u: goto label_28c838;
        case 0x28c83cu: goto label_28c83c;
        case 0x28c840u: goto label_28c840;
        case 0x28c844u: goto label_28c844;
        case 0x28c848u: goto label_28c848;
        case 0x28c84cu: goto label_28c84c;
        case 0x28c850u: goto label_28c850;
        case 0x28c854u: goto label_28c854;
        case 0x28c858u: goto label_28c858;
        case 0x28c85cu: goto label_28c85c;
        case 0x28c860u: goto label_28c860;
        case 0x28c864u: goto label_28c864;
        case 0x28c868u: goto label_28c868;
        case 0x28c86cu: goto label_28c86c;
        case 0x28c870u: goto label_28c870;
        case 0x28c874u: goto label_28c874;
        case 0x28c878u: goto label_28c878;
        case 0x28c87cu: goto label_28c87c;
        case 0x28c880u: goto label_28c880;
        case 0x28c884u: goto label_28c884;
        case 0x28c888u: goto label_28c888;
        case 0x28c88cu: goto label_28c88c;
        case 0x28c890u: goto label_28c890;
        case 0x28c894u: goto label_28c894;
        case 0x28c898u: goto label_28c898;
        case 0x28c89cu: goto label_28c89c;
        case 0x28c8a0u: goto label_28c8a0;
        case 0x28c8a4u: goto label_28c8a4;
        case 0x28c8a8u: goto label_28c8a8;
        case 0x28c8acu: goto label_28c8ac;
        case 0x28c8b0u: goto label_28c8b0;
        case 0x28c8b4u: goto label_28c8b4;
        case 0x28c8b8u: goto label_28c8b8;
        case 0x28c8bcu: goto label_28c8bc;
        case 0x28c8c0u: goto label_28c8c0;
        case 0x28c8c4u: goto label_28c8c4;
        case 0x28c8c8u: goto label_28c8c8;
        case 0x28c8ccu: goto label_28c8cc;
        case 0x28c8d0u: goto label_28c8d0;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8d8u: goto label_28c8d8;
        case 0x28c8dcu: goto label_28c8dc;
        case 0x28c8e0u: goto label_28c8e0;
        case 0x28c8e4u: goto label_28c8e4;
        case 0x28c8e8u: goto label_28c8e8;
        case 0x28c8ecu: goto label_28c8ec;
        case 0x28c8f0u: goto label_28c8f0;
        case 0x28c8f4u: goto label_28c8f4;
        case 0x28c8f8u: goto label_28c8f8;
        case 0x28c8fcu: goto label_28c8fc;
        case 0x28c900u: goto label_28c900;
        case 0x28c904u: goto label_28c904;
        case 0x28c908u: goto label_28c908;
        case 0x28c90cu: goto label_28c90c;
        case 0x28c910u: goto label_28c910;
        case 0x28c914u: goto label_28c914;
        case 0x28c918u: goto label_28c918;
        case 0x28c91cu: goto label_28c91c;
        case 0x28c920u: goto label_28c920;
        case 0x28c924u: goto label_28c924;
        case 0x28c928u: goto label_28c928;
        case 0x28c92cu: goto label_28c92c;
        case 0x28c930u: goto label_28c930;
        case 0x28c934u: goto label_28c934;
        case 0x28c938u: goto label_28c938;
        case 0x28c93cu: goto label_28c93c;
        case 0x28c940u: goto label_28c940;
        case 0x28c944u: goto label_28c944;
        case 0x28c948u: goto label_28c948;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c950u: goto label_28c950;
        case 0x28c954u: goto label_28c954;
        case 0x28c958u: goto label_28c958;
        case 0x28c95cu: goto label_28c95c;
        case 0x28c960u: goto label_28c960;
        case 0x28c964u: goto label_28c964;
        case 0x28c968u: goto label_28c968;
        case 0x28c96cu: goto label_28c96c;
        case 0x28c970u: goto label_28c970;
        case 0x28c974u: goto label_28c974;
        case 0x28c978u: goto label_28c978;
        case 0x28c97cu: goto label_28c97c;
        case 0x28c980u: goto label_28c980;
        case 0x28c984u: goto label_28c984;
        case 0x28c988u: goto label_28c988;
        case 0x28c98cu: goto label_28c98c;
        case 0x28c990u: goto label_28c990;
        case 0x28c994u: goto label_28c994;
        case 0x28c998u: goto label_28c998;
        case 0x28c99cu: goto label_28c99c;
        case 0x28c9a0u: goto label_28c9a0;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28c9a8u: goto label_28c9a8;
        case 0x28c9acu: goto label_28c9ac;
        case 0x28c9b0u: goto label_28c9b0;
        case 0x28c9b4u: goto label_28c9b4;
        case 0x28c9b8u: goto label_28c9b8;
        case 0x28c9bcu: goto label_28c9bc;
        case 0x28c9c0u: goto label_28c9c0;
        case 0x28c9c4u: goto label_28c9c4;
        case 0x28c9c8u: goto label_28c9c8;
        case 0x28c9ccu: goto label_28c9cc;
        case 0x28c9d0u: goto label_28c9d0;
        case 0x28c9d4u: goto label_28c9d4;
        case 0x28c9d8u: goto label_28c9d8;
        case 0x28c9dcu: goto label_28c9dc;
        case 0x28c9e0u: goto label_28c9e0;
        case 0x28c9e4u: goto label_28c9e4;
        case 0x28c9e8u: goto label_28c9e8;
        case 0x28c9ecu: goto label_28c9ec;
        case 0x28c9f0u: goto label_28c9f0;
        case 0x28c9f4u: goto label_28c9f4;
        case 0x28c9f8u: goto label_28c9f8;
        case 0x28c9fcu: goto label_28c9fc;
        case 0x28ca00u: goto label_28ca00;
        case 0x28ca04u: goto label_28ca04;
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca0cu: goto label_28ca0c;
        case 0x28ca10u: goto label_28ca10;
        case 0x28ca14u: goto label_28ca14;
        case 0x28ca18u: goto label_28ca18;
        case 0x28ca1cu: goto label_28ca1c;
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca24u: goto label_28ca24;
        case 0x28ca28u: goto label_28ca28;
        case 0x28ca2cu: goto label_28ca2c;
        case 0x28ca30u: goto label_28ca30;
        case 0x28ca34u: goto label_28ca34;
        case 0x28ca38u: goto label_28ca38;
        case 0x28ca3cu: goto label_28ca3c;
        case 0x28ca40u: goto label_28ca40;
        case 0x28ca44u: goto label_28ca44;
        case 0x28ca48u: goto label_28ca48;
        case 0x28ca4cu: goto label_28ca4c;
        case 0x28ca50u: goto label_28ca50;
        case 0x28ca54u: goto label_28ca54;
        case 0x28ca58u: goto label_28ca58;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca60u: goto label_28ca60;
        case 0x28ca64u: goto label_28ca64;
        case 0x28ca68u: goto label_28ca68;
        case 0x28ca6cu: goto label_28ca6c;
        case 0x28ca70u: goto label_28ca70;
        case 0x28ca74u: goto label_28ca74;
        case 0x28ca78u: goto label_28ca78;
        case 0x28ca7cu: goto label_28ca7c;
        case 0x28ca80u: goto label_28ca80;
        case 0x28ca84u: goto label_28ca84;
        case 0x28ca88u: goto label_28ca88;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28ca90u: goto label_28ca90;
        case 0x28ca94u: goto label_28ca94;
        case 0x28ca98u: goto label_28ca98;
        case 0x28ca9cu: goto label_28ca9c;
        case 0x28caa0u: goto label_28caa0;
        case 0x28caa4u: goto label_28caa4;
        case 0x28caa8u: goto label_28caa8;
        case 0x28caacu: goto label_28caac;
        case 0x28cab0u: goto label_28cab0;
        case 0x28cab4u: goto label_28cab4;
        case 0x28cab8u: goto label_28cab8;
        case 0x28cabcu: goto label_28cabc;
        case 0x28cac0u: goto label_28cac0;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cac8u: goto label_28cac8;
        case 0x28caccu: goto label_28cacc;
        case 0x28cad0u: goto label_28cad0;
        case 0x28cad4u: goto label_28cad4;
        case 0x28cad8u: goto label_28cad8;
        case 0x28cadcu: goto label_28cadc;
        case 0x28cae0u: goto label_28cae0;
        case 0x28cae4u: goto label_28cae4;
        case 0x28cae8u: goto label_28cae8;
        case 0x28caecu: goto label_28caec;
        case 0x28caf0u: goto label_28caf0;
        case 0x28caf4u: goto label_28caf4;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cafcu: goto label_28cafc;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb04u: goto label_28cb04;
        case 0x28cb08u: goto label_28cb08;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb10u: goto label_28cb10;
        case 0x28cb14u: goto label_28cb14;
        case 0x28cb18u: goto label_28cb18;
        case 0x28cb1cu: goto label_28cb1c;
        case 0x28cb20u: goto label_28cb20;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb2cu: goto label_28cb2c;
        case 0x28cb30u: goto label_28cb30;
        case 0x28cb34u: goto label_28cb34;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cb40u: goto label_28cb40;
        case 0x28cb44u: goto label_28cb44;
        case 0x28cb48u: goto label_28cb48;
        case 0x28cb4cu: goto label_28cb4c;
        case 0x28cb50u: goto label_28cb50;
        case 0x28cb54u: goto label_28cb54;
        case 0x28cb58u: goto label_28cb58;
        case 0x28cb5cu: goto label_28cb5c;
        case 0x28cb60u: goto label_28cb60;
        case 0x28cb64u: goto label_28cb64;
        case 0x28cb68u: goto label_28cb68;
        case 0x28cb6cu: goto label_28cb6c;
        case 0x28cb70u: goto label_28cb70;
        case 0x28cb74u: goto label_28cb74;
        case 0x28cb78u: goto label_28cb78;
        case 0x28cb7cu: goto label_28cb7c;
        case 0x28cb80u: goto label_28cb80;
        case 0x28cb84u: goto label_28cb84;
        case 0x28cb88u: goto label_28cb88;
        case 0x28cb8cu: goto label_28cb8c;
        case 0x28cb90u: goto label_28cb90;
        case 0x28cb94u: goto label_28cb94;
        case 0x28cb98u: goto label_28cb98;
        case 0x28cb9cu: goto label_28cb9c;
        case 0x28cba0u: goto label_28cba0;
        case 0x28cba4u: goto label_28cba4;
        case 0x28cba8u: goto label_28cba8;
        case 0x28cbacu: goto label_28cbac;
        case 0x28cbb0u: goto label_28cbb0;
        case 0x28cbb4u: goto label_28cbb4;
        case 0x28cbb8u: goto label_28cbb8;
        case 0x28cbbcu: goto label_28cbbc;
        case 0x28cbc0u: goto label_28cbc0;
        case 0x28cbc4u: goto label_28cbc4;
        case 0x28cbc8u: goto label_28cbc8;
        case 0x28cbccu: goto label_28cbcc;
        case 0x28cbd0u: goto label_28cbd0;
        case 0x28cbd4u: goto label_28cbd4;
        case 0x28cbd8u: goto label_28cbd8;
        case 0x28cbdcu: goto label_28cbdc;
        case 0x28cbe0u: goto label_28cbe0;
        case 0x28cbe4u: goto label_28cbe4;
        case 0x28cbe8u: goto label_28cbe8;
        case 0x28cbecu: goto label_28cbec;
        case 0x28cbf0u: goto label_28cbf0;
        case 0x28cbf4u: goto label_28cbf4;
        case 0x28cbf8u: goto label_28cbf8;
        case 0x28cbfcu: goto label_28cbfc;
        case 0x28cc00u: goto label_28cc00;
        case 0x28cc04u: goto label_28cc04;
        case 0x28cc08u: goto label_28cc08;
        case 0x28cc0cu: goto label_28cc0c;
        case 0x28cc10u: goto label_28cc10;
        case 0x28cc14u: goto label_28cc14;
        case 0x28cc18u: goto label_28cc18;
        case 0x28cc1cu: goto label_28cc1c;
        case 0x28cc20u: goto label_28cc20;
        case 0x28cc24u: goto label_28cc24;
        case 0x28cc28u: goto label_28cc28;
        case 0x28cc2cu: goto label_28cc2c;
        case 0x28cc30u: goto label_28cc30;
        case 0x28cc34u: goto label_28cc34;
        case 0x28cc38u: goto label_28cc38;
        case 0x28cc3cu: goto label_28cc3c;
        case 0x28cc40u: goto label_28cc40;
        case 0x28cc44u: goto label_28cc44;
        case 0x28cc48u: goto label_28cc48;
        case 0x28cc4cu: goto label_28cc4c;
        case 0x28cc50u: goto label_28cc50;
        case 0x28cc54u: goto label_28cc54;
        case 0x28cc58u: goto label_28cc58;
        case 0x28cc5cu: goto label_28cc5c;
        case 0x28cc60u: goto label_28cc60;
        case 0x28cc64u: goto label_28cc64;
        case 0x28cc68u: goto label_28cc68;
        case 0x28cc6cu: goto label_28cc6c;
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc78u: goto label_28cc78;
        case 0x28cc7cu: goto label_28cc7c;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cc88u: goto label_28cc88;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cc90u: goto label_28cc90;
        case 0x28cc94u: goto label_28cc94;
        case 0x28cc98u: goto label_28cc98;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28cca0u: goto label_28cca0;
        case 0x28cca4u: goto label_28cca4;
        case 0x28cca8u: goto label_28cca8;
        case 0x28ccacu: goto label_28ccac;
        case 0x28ccb0u: goto label_28ccb0;
        case 0x28ccb4u: goto label_28ccb4;
        case 0x28ccb8u: goto label_28ccb8;
        case 0x28ccbcu: goto label_28ccbc;
        case 0x28ccc0u: goto label_28ccc0;
        case 0x28ccc4u: goto label_28ccc4;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccccu: goto label_28cccc;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28ccd4u: goto label_28ccd4;
        case 0x28ccd8u: goto label_28ccd8;
        case 0x28ccdcu: goto label_28ccdc;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cce4u: goto label_28cce4;
        case 0x28cce8u: goto label_28cce8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28ccf0u: goto label_28ccf0;
        case 0x28ccf4u: goto label_28ccf4;
        case 0x28ccf8u: goto label_28ccf8;
        case 0x28ccfcu: goto label_28ccfc;
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd04u: goto label_28cd04;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cd0cu: goto label_28cd0c;
        case 0x28cd10u: goto label_28cd10;
        case 0x28cd14u: goto label_28cd14;
        case 0x28cd18u: goto label_28cd18;
        case 0x28cd1cu: goto label_28cd1c;
        case 0x28cd20u: goto label_28cd20;
        case 0x28cd24u: goto label_28cd24;
        case 0x28cd28u: goto label_28cd28;
        case 0x28cd2cu: goto label_28cd2c;
        case 0x28cd30u: goto label_28cd30;
        case 0x28cd34u: goto label_28cd34;
        case 0x28cd38u: goto label_28cd38;
        case 0x28cd3cu: goto label_28cd3c;
        case 0x28cd40u: goto label_28cd40;
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd48u: goto label_28cd48;
        case 0x28cd4cu: goto label_28cd4c;
        case 0x28cd50u: goto label_28cd50;
        case 0x28cd54u: goto label_28cd54;
        case 0x28cd58u: goto label_28cd58;
        case 0x28cd5cu: goto label_28cd5c;
        case 0x28cd60u: goto label_28cd60;
        case 0x28cd64u: goto label_28cd64;
        case 0x28cd68u: goto label_28cd68;
        case 0x28cd6cu: goto label_28cd6c;
        case 0x28cd70u: goto label_28cd70;
        case 0x28cd74u: goto label_28cd74;
        case 0x28cd78u: goto label_28cd78;
        case 0x28cd7cu: goto label_28cd7c;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cd84u: goto label_28cd84;
        case 0x28cd88u: goto label_28cd88;
        case 0x28cd8cu: goto label_28cd8c;
        case 0x28cd90u: goto label_28cd90;
        case 0x28cd94u: goto label_28cd94;
        case 0x28cd98u: goto label_28cd98;
        case 0x28cd9cu: goto label_28cd9c;
        case 0x28cda0u: goto label_28cda0;
        case 0x28cda4u: goto label_28cda4;
        case 0x28cda8u: goto label_28cda8;
        case 0x28cdacu: goto label_28cdac;
        case 0x28cdb0u: goto label_28cdb0;
        case 0x28cdb4u: goto label_28cdb4;
        case 0x28cdb8u: goto label_28cdb8;
        case 0x28cdbcu: goto label_28cdbc;
        case 0x28cdc0u: goto label_28cdc0;
        case 0x28cdc4u: goto label_28cdc4;
        case 0x28cdc8u: goto label_28cdc8;
        case 0x28cdccu: goto label_28cdcc;
        case 0x28cdd0u: goto label_28cdd0;
        case 0x28cdd4u: goto label_28cdd4;
        case 0x28cdd8u: goto label_28cdd8;
        case 0x28cddcu: goto label_28cddc;
        case 0x28cde0u: goto label_28cde0;
        case 0x28cde4u: goto label_28cde4;
        case 0x28cde8u: goto label_28cde8;
        case 0x28cdecu: goto label_28cdec;
        case 0x28cdf0u: goto label_28cdf0;
        case 0x28cdf4u: goto label_28cdf4;
        case 0x28cdf8u: goto label_28cdf8;
        case 0x28cdfcu: goto label_28cdfc;
        case 0x28ce00u: goto label_28ce00;
        case 0x28ce04u: goto label_28ce04;
        case 0x28ce08u: goto label_28ce08;
        case 0x28ce0cu: goto label_28ce0c;
        case 0x28ce10u: goto label_28ce10;
        case 0x28ce14u: goto label_28ce14;
        case 0x28ce18u: goto label_28ce18;
        case 0x28ce1cu: goto label_28ce1c;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce24u: goto label_28ce24;
        case 0x28ce28u: goto label_28ce28;
        case 0x28ce2cu: goto label_28ce2c;
        case 0x28ce30u: goto label_28ce30;
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce38u: goto label_28ce38;
        case 0x28ce3cu: goto label_28ce3c;
        case 0x28ce40u: goto label_28ce40;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce4cu: goto label_28ce4c;
        case 0x28ce50u: goto label_28ce50;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce5cu: goto label_28ce5c;
        case 0x28ce60u: goto label_28ce60;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce68u: goto label_28ce68;
        case 0x28ce6cu: goto label_28ce6c;
        case 0x28ce70u: goto label_28ce70;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce78u: goto label_28ce78;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce80u: goto label_28ce80;
        case 0x28ce84u: goto label_28ce84;
        case 0x28ce88u: goto label_28ce88;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28ce90u: goto label_28ce90;
        case 0x28ce94u: goto label_28ce94;
        case 0x28ce98u: goto label_28ce98;
        case 0x28ce9cu: goto label_28ce9c;
        case 0x28cea0u: goto label_28cea0;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cea8u: goto label_28cea8;
        case 0x28ceacu: goto label_28ceac;
        case 0x28ceb0u: goto label_28ceb0;
        case 0x28ceb4u: goto label_28ceb4;
        case 0x28ceb8u: goto label_28ceb8;
        case 0x28cebcu: goto label_28cebc;
        case 0x28cec0u: goto label_28cec0;
        case 0x28cec4u: goto label_28cec4;
        case 0x28cec8u: goto label_28cec8;
        case 0x28ceccu: goto label_28cecc;
        case 0x28ced0u: goto label_28ced0;
        case 0x28ced4u: goto label_28ced4;
        case 0x28ced8u: goto label_28ced8;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cee0u: goto label_28cee0;
        case 0x28cee4u: goto label_28cee4;
        case 0x28cee8u: goto label_28cee8;
        case 0x28ceecu: goto label_28ceec;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cef4u: goto label_28cef4;
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        default: break;
    }

    ctx->pc = 0x28a8e8u;

label_28a8e8:
    // 0x28a8e8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x28a8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_28a8ec:
    // 0x28a8ec: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28a8f0:
    // 0x28a8f0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x28a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28a8f4:
    // 0x28a8f4: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x28a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_28a8f8:
    // 0x28a8f8: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x28a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_28a8fc:
    // 0x28a8fc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x28a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_28a900:
    // 0x28a900: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x28a900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_28a904:
    // 0x28a904: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28a908:
    // 0x28a908: 0x27a300dc  addiu       $v1, $sp, 0xDC
    ctx->pc = 0x28a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_28a90c:
    // 0x28a90c: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x28a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
label_28a910:
    // 0x28a910: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x28a910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_28a914:
    // 0x28a914: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x28a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_28a918:
    // 0x28a918: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x28a918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_28a91c:
    // 0x28a91c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_28a920:
    // 0x28a920: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x28a920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28a924:
    // 0x28a924: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x28a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
label_28a928:
    // 0x28a928: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x28a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
label_28a92c:
    // 0x28a92c: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x28a92cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28a930:
    // 0x28a930: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x28a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
label_28a934:
    // 0x28a934: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28a934u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a938:
    // 0x28a938: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x28a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_28a93c:
    // 0x28a93c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x28a93cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28a940:
    // 0x28a940: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x28a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
label_28a944:
    // 0x28a944: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x28a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_28a948:
    // 0x28a948: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x28a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
label_28a94c:
    // 0x28a94c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x28a94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
label_28a950:
    // 0x28a950: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x28a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
label_28a954:
    // 0x28a954: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x28a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
label_28a958:
    // 0x28a958: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x28a958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_28a95c:
    // 0x28a95c: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x28a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28a960:
    // 0x28a960: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x28a960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_28a964:
    // 0x28a964: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28a964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_28a968:
    // 0x28a968: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x28a968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_28a96c:
    // 0x28a96c: 0x24020114  addiu       $v0, $zero, 0x114
    ctx->pc = 0x28a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_28a970:
    // 0x28a970: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x28a970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28a974:
    // 0x28a974: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_28a978:
    // 0x28a978: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28a97c:
    // 0x28a97c: 0x10c0098f  beqz        $a2, . + 4 + (0x98F << 2)
label_28a980:
    if (ctx->pc == 0x28A980u) {
        ctx->pc = 0x28A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A97Cu;
        // 0x28a980: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A984u;
        goto label_28a984;
    }
    ctx->pc = 0x28A97Cu;
    {
        const bool branch_taken_0x28a97c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A97Cu;
        // 0x28a980: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a97c) {
            ctx->pc = 0x28CFBCu;
            goto label_28cfbc;
        }
    }
    ctx->pc = 0x28A984u;
label_28a984:
    // 0x28a984: 0x8e45006c  lw          $a1, 0x6C($s2)
    ctx->pc = 0x28a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28a988:
    // 0x28a988: 0x4a00026  bltz        $a1, . + 4 + (0x26 << 2)
label_28a98c:
    if (ctx->pc == 0x28A98Cu) {
        ctx->pc = 0x28A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A988u;
        // 0x28a98c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A990u;
        goto label_28a990;
    }
    ctx->pc = 0x28A988u;
    {
        const bool branch_taken_0x28a988 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x28A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A988u;
        // 0x28a98c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a988) {
            ctx->pc = 0x28AA24u;
            goto label_28aa24;
        }
    }
    ctx->pc = 0x28A990u;
label_28a990:
    // 0x28a990: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_28a994:
    // 0x28a994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a998:
    // 0x28a998: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28a99c:
    if (ctx->pc == 0x28A99Cu) {
        ctx->pc = 0x28A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A998u;
        // 0x28a99c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9A0u;
        goto label_28a9a0;
    }
    ctx->pc = 0x28A998u;
    {
        const bool branch_taken_0x28a998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A998u;
        // 0x28a99c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a998) {
            ctx->pc = 0x28A9A8u;
            goto label_28a9a8;
        }
    }
    ctx->pc = 0x28A9A0u;
label_28a9a0:
    // 0x28a9a0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_28a9a4:
    if (ctx->pc == 0x28A9A4u) {
        ctx->pc = 0x28A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9A0u;
        // 0x28a9a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9A8u;
        goto label_28a9a8;
    }
    ctx->pc = 0x28A9A0u;
    {
        const bool branch_taken_0x28a9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9A0u;
        // 0x28a9a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9a0) {
            ctx->pc = 0x28A9ECu;
            goto label_28a9ec;
        }
    }
    ctx->pc = 0x28A9A8u;
label_28a9a8:
    // 0x28a9a8: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_28a9ac:
    // 0x28a9ac: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x28a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_28a9b0:
    // 0x28a9b0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x28a9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28a9b4:
    // 0x28a9b4: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x28a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a9b8:
    // 0x28a9b8: 0xc78089fc  lwc1        $f0, -0x7604($gp)
    ctx->pc = 0x28a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a9bc:
    // 0x28a9bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28a9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a9c0:
    // 0x28a9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28a9c4:
    // 0x28a9c4: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x28a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_28a9c8:
    // 0x28a9c8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_28a9cc:
    if (ctx->pc == 0x28A9CCu) {
        ctx->pc = 0x28A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C8u;
        // 0x28a9cc: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9D0u;
        goto label_28a9d0;
    }
    ctx->pc = 0x28A9C8u;
    {
        const bool branch_taken_0x28a9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C8u;
        // 0x28a9cc: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9c8) {
            ctx->pc = 0x28AA24u;
            goto label_28aa24;
        }
    }
    ctx->pc = 0x28A9D0u;
label_28a9d0:
    // 0x28a9d0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x28a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_28a9d4:
    // 0x28a9d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_28a9d8:
    // 0x28a9d8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x28a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28a9dc:
    // 0x28a9dc: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x28a9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_28a9e0:
    // 0x28a9e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28a9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28a9e4:
    // 0x28a9e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_28a9e8:
    if (ctx->pc == 0x28A9E8u) {
        ctx->pc = 0x28A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9E4u;
        // 0x28a9e8: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9ECu;
        goto label_28a9ec;
    }
    ctx->pc = 0x28A9E4u;
    {
        const bool branch_taken_0x28a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9E4u;
        // 0x28a9e8: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9e4) {
            ctx->pc = 0x28AA20u;
            goto label_28aa20;
        }
    }
    ctx->pc = 0x28A9ECu;
label_28a9ec:
    // 0x28a9ec: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_28a9f0:
    if (ctx->pc == 0x28A9F0u) {
        ctx->pc = 0x28A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ECu;
        // 0x28a9f0: 0xc6410030  lwc1        $f1, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9F4u;
        goto label_28a9f4;
    }
    ctx->pc = 0x28A9ECu;
    {
        const bool branch_taken_0x28a9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a9ec) {
            ctx->pc = 0x28A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A9ECu;
            // 0x28a9f0: 0xc6410030  lwc1        $f1, 0x30($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AA28u;
            goto label_28aa28;
        }
    }
    ctx->pc = 0x28A9F4u;
label_28a9f4:
    // 0x28a9f4: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x28a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_28a9f8:
    // 0x28a9f8: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x28a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_28a9fc:
    // 0x28a9fc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x28a9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28aa00:
    // 0x28aa00: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x28aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_28aa04:
    // 0x28aa04: 0x3484ffdf  ori         $a0, $a0, 0xFFDF
    ctx->pc = 0x28aa04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65503);
label_28aa08:
    // 0x28aa08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28aa0c:
    // 0x28aa0c: 0x8c630bcc  lw          $v1, 0xBCC($v1)
    ctx->pc = 0x28aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
label_28aa10:
    // 0x28aa10: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_28aa14:
    // 0x28aa14: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_28aa18:
    // 0x28aa18: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x28aa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_28aa1c:
    // 0x28aa1c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x28aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_28aa20:
    // 0x28aa20: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28aa24:
    // 0x28aa24: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x28aa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28aa28:
    // 0x28aa28: 0x24c3fffe  addiu       $v1, $a2, -0x2
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_28aa2c:
    // 0x28aa2c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_28aa30:
    // 0x28aa30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28aa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28aa34:
    // 0x28aa34: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x28aa34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_28aa38:
    // 0x28aa38: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28aa38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28aa3c:
    // 0x28aa3c: 0x0  nop
    ctx->pc = 0x28aa3cu;
    // NOP
label_28aa40:
    // 0x28aa40: 0x0  nop
    ctx->pc = 0x28aa40u;
    // NOP
label_28aa44:
    // 0x28aa44: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x28aa44u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_28aa48:
    // 0x28aa48: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28aa48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28aa4c:
    // 0x28aa4c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28aa50:
    // 0x28aa50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28aa50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_28aa54:
    // 0x28aa54: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28aa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28aa58:
    // 0x28aa58: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28aa5c:
    // 0x28aa5c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28aa5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28aa60:
    // 0x28aa60: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28aa60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28aa64:
    // 0x28aa64: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x28aa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28aa68:
    // 0x28aa68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28aa68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28aa6c:
    // 0x28aa6c: 0x10400949  beqz        $v0, . + 4 + (0x949 << 2)
label_28aa70:
    if (ctx->pc == 0x28AA70u) {
        ctx->pc = 0x28AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA6Cu;
        // 0x28aa70: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA74u;
        goto label_28aa74;
    }
    ctx->pc = 0x28AA6Cu;
    {
        const bool branch_taken_0x28aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA6Cu;
        // 0x28aa70: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa6c) {
            ctx->pc = 0x28CF94u;
            goto label_28cf94;
        }
    }
    ctx->pc = 0x28AA74u;
label_28aa74:
    // 0x28aa74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28aa78:
    // 0x28aa78: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_28aa7c:
    // 0x28aa7c: 0x24838a90  addiu       $v1, $a0, -0x7570
    ctx->pc = 0x28aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937232));
label_28aa80:
    // 0x28aa80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28aa84:
    // 0x28aa84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28aa88:
    // 0x28aa88: 0x800008  jr          $a0
label_28aa8c:
    if (ctx->pc == 0x28AA8Cu) {
        ctx->pc = 0x28AA90u;
        goto label_28aa90;
    }
    ctx->pc = 0x28AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28AA90u;
label_28aa90:
    // 0x28aa90: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28aa94:
    // 0x28aa94: 0x18400940  blez        $v0, . + 4 + (0x940 << 2)
label_28aa98:
    if (ctx->pc == 0x28AA98u) {
        ctx->pc = 0x28AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA94u;
        // 0x28aa98: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA9Cu;
        goto label_28aa9c;
    }
    ctx->pc = 0x28AA94u;
    {
        const bool branch_taken_0x28aa94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA94u;
        // 0x28aa98: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa94) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28AA9Cu;
label_28aa9c:
    // 0x28aa9c: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x28aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28aaa0:
    // 0x28aaa0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28aaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_28aaa4:
    // 0x28aaa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28aaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28aaa8:
    // 0x28aaa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28aaa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28aaac:
    // 0x28aaac: 0x0  nop
    ctx->pc = 0x28aaacu;
    // NOP
label_28aab0:
    // 0x28aab0: 0x450101d5  bc1t        . + 4 + (0x1D5 << 2)
label_28aab4:
    if (ctx->pc == 0x28AAB4u) {
        ctx->pc = 0x28AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAB0u;
        // 0x28aab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAB8u;
        goto label_28aab8;
    }
    ctx->pc = 0x28AAB0u;
    {
        const bool branch_taken_0x28aab0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAB0u;
        // 0x28aab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aab0) {
            ctx->pc = 0x28B208u;
            goto label_28b208;
        }
    }
    ctx->pc = 0x28AAB8u;
label_28aab8:
    // 0x28aab8: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x28aab8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28aabc:
    // 0x28aabc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28aabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28aac0:
    // 0x28aac0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28aac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28aac4:
    // 0x28aac4: 0xc0a274c  jal         func_289D30
label_28aac8:
    if (ctx->pc == 0x28AAC8u) {
        ctx->pc = 0x28AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAC4u;
        // 0x28aac8: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AACCu;
        goto label_28aacc;
    }
    ctx->pc = 0x28AAC4u;
    SET_GPR_U32(ctx, 31, 0x28AACCu);
    ctx->pc = 0x28AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAC4u;
    // 0x28aac8: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D30u, 0x28AAC4u, 0x28AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AACCu;
label_28aacc:
    // 0x28aacc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28aad0:
    // 0x28aad0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28aad4:
    if (ctx->pc == 0x28AAD4u) {
        ctx->pc = 0x28AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAD0u;
        // 0x28aad4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAD8u;
        goto label_28aad8;
    }
    ctx->pc = 0x28AAD0u;
    {
        const bool branch_taken_0x28aad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAD0u;
        // 0x28aad4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aad0) {
            ctx->pc = 0x28AAE0u;
            goto label_28aae0;
        }
    }
    ctx->pc = 0x28AAD8u;
label_28aad8:
    // 0x28aad8: 0xc0a3486  jal         func_28D218
label_28aadc:
    if (ctx->pc == 0x28AADCu) {
        ctx->pc = 0x28AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAD8u;
        // 0x28aadc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAE0u;
        goto label_28aae0;
    }
    ctx->pc = 0x28AAD8u;
    SET_GPR_U32(ctx, 31, 0x28AAE0u);
    ctx->pc = 0x28AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAD8u;
    // 0x28aadc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28AAD8u, 0x28AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAE0u;
label_28aae0:
    // 0x28aae0: 0x12000172  beqz        $s0, . + 4 + (0x172 << 2)
label_28aae4:
    if (ctx->pc == 0x28AAE4u) {
        ctx->pc = 0x28AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAE0u;
        // 0x28aae4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAE8u;
        goto label_28aae8;
    }
    ctx->pc = 0x28AAE0u;
    {
        const bool branch_taken_0x28aae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAE0u;
        // 0x28aae4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aae0) {
            ctx->pc = 0x28B0ACu;
            goto label_28b0ac;
        }
    }
    ctx->pc = 0x28AAE8u;
label_28aae8:
    // 0x28aae8: 0xc6450030  lwc1        $f5, 0x30($s2)
    ctx->pc = 0x28aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28aaec:
    // 0x28aaec: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28aaf0:
    // 0x28aaf0: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x28aaf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28aaf4:
    // 0x28aaf4: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28aaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28aaf8:
    // 0x28aaf8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28aaf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28aafc:
    // 0x28aafc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28aafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28ab00:
    // 0x28ab00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28ab00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28ab04:
    // 0x28ab04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28ab04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28ab08:
    // 0x28ab08: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x28ab08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28ab0c:
    // 0x28ab0c: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x28ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28ab10:
    // 0x28ab10: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28ab10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28ab14:
    // 0x28ab14: 0xc7a80044  lwc1        $f8, 0x44($sp)
    ctx->pc = 0x28ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_28ab18:
    // 0x28ab18: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x28ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28ab1c:
    // 0x28ab1c: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x28ab1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28ab20:
    // 0x28ab20: 0x0  nop
    ctx->pc = 0x28ab20u;
    // NOP
label_28ab24:
    // 0x28ab24: 0x0  nop
    ctx->pc = 0x28ab24u;
    // NOP
label_28ab28:
    // 0x28ab28: 0x46141a43  div.s       $f9, $f3, $f20
    ctx->pc = 0x28ab28u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[9] = ctx->f[3] / ctx->f[20];
label_28ab2c:
    // 0x28ab2c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x28ab2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_28ab30:
    // 0x28ab30: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x28ab30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_28ab34:
    // 0x28ab34: 0x46072902  mul.s       $f4, $f5, $f7
    ctx->pc = 0x28ab34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_28ab38:
    // 0x28ab38: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x28ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ab3c:
    // 0x28ab3c: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x28ab3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
label_28ab40:
    // 0x28ab40: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x28ab40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28ab44:
    // 0x28ab44: 0x46081802  mul.s       $f0, $f3, $f8
    ctx->pc = 0x28ab44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_28ab48:
    // 0x28ab48: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ab4c:
    // 0x28ab4c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28ab4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28ab50:
    // 0x28ab50: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x28ab50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_28ab54:
    // 0x28ab54: 0x46060882  mul.s       $f2, $f1, $f6
    ctx->pc = 0x28ab54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_28ab58:
    // 0x28ab58: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x28ab58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_28ab5c:
    // 0x28ab5c: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x28ab5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_28ab60:
    // 0x28ab60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ab60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ab64:
    // 0x28ab64: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x28ab64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_28ab68:
    // 0x28ab68: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x28ab68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_28ab6c:
    // 0x28ab6c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x28ab6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_28ab70:
    // 0x28ab70: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x28ab70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_28ab74:
    // 0x28ab74: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x28ab74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_28ab78:
    // 0x28ab78: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x28ab78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_28ab7c:
    // 0x28ab7c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28ab7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_28ab80:
    // 0x28ab80: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x28ab80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_28ab84:
    // 0x28ab84: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
label_28ab88:
    if (ctx->pc == 0x28AB88u) {
        ctx->pc = 0x28AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB84u;
        // 0x28ab88: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB8Cu;
        goto label_28ab8c;
    }
    ctx->pc = 0x28AB84u;
    {
        const bool branch_taken_0x28ab84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB84u;
        // 0x28ab88: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab84) {
            ctx->pc = 0x28ABA0u;
            goto label_28aba0;
        }
    }
    ctx->pc = 0x28AB8Cu;
label_28ab8c:
    // 0x28ab8c: 0x24040194  addiu       $a0, $zero, 0x194
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
label_28ab90:
    // 0x28ab90: 0xc081546  jal         func_205518
label_28ab94:
    if (ctx->pc == 0x28AB94u) {
        ctx->pc = 0x28AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB90u;
        // 0x28ab94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB98u;
        goto label_28ab98;
    }
    ctx->pc = 0x28AB90u;
    SET_GPR_U32(ctx, 31, 0x28AB98u);
    ctx->pc = 0x28AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB90u;
    // 0x28ab94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28AB90u, 0x28AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB98u;
label_28ab98:
    // 0x28ab98: 0x10000030  b           . + 4 + (0x30 << 2)
label_28ab9c:
    if (ctx->pc == 0x28AB9Cu) {
        ctx->pc = 0x28AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB98u;
        // 0x28ab9c: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABA0u;
        goto label_28aba0;
    }
    ctx->pc = 0x28AB98u;
    {
        const bool branch_taken_0x28ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB98u;
        // 0x28ab9c: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab98) {
            ctx->pc = 0x28AC5Cu;
            goto label_28ac5c;
        }
    }
    ctx->pc = 0x28ABA0u;
label_28aba0:
    // 0x28aba0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x28aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_28aba4:
    // 0x28aba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28aba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aba8:
    // 0x28aba8: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x28aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_28abac:
    // 0x28abac: 0xc098dcc  jal         func_263730
label_28abb0:
    if (ctx->pc == 0x28ABB0u) {
        ctx->pc = 0x28ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABACu;
        // 0x28abb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABB4u;
        goto label_28abb4;
    }
    ctx->pc = 0x28ABACu;
    SET_GPR_U32(ctx, 31, 0x28ABB4u);
    ctx->pc = 0x28ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABACu;
    // 0x28abb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x28ABACu, 0x28ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABB4u;
label_28abb4:
    // 0x28abb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_28abb8:
    if (ctx->pc == 0x28ABB8u) {
        ctx->pc = 0x28ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB4u;
        // 0x28abb8: 0x8fa300d4  lw          $v1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABBCu;
        goto label_28abbc;
    }
    ctx->pc = 0x28ABB4u;
    {
        const bool branch_taken_0x28abb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB4u;
        // 0x28abb8: 0x8fa300d4  lw          $v1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abb4) {
            ctx->pc = 0x28AC18u;
            goto label_28ac18;
        }
    }
    ctx->pc = 0x28ABBCu;
label_28abbc:
    // 0x28abbc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28abbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28abc0:
    // 0x28abc0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_28abc4:
    // 0x28abc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x28abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28abc8:
    // 0x28abc8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x28abc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28abcc:
    // 0x28abcc: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x28abccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28abd0:
    // 0x28abd0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x28abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28abd4:
    // 0x28abd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28abd8:
    // 0x28abd8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28abdc:
    // 0x28abdc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_28abe0:
    if (ctx->pc == 0x28ABE0u) {
        ctx->pc = 0x28ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABDCu;
        // 0x28abe0: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABE4u;
        goto label_28abe4;
    }
    ctx->pc = 0x28ABDCu;
    {
        const bool branch_taken_0x28abdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABDCu;
        // 0x28abe0: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abdc) {
            ctx->pc = 0x28AC18u;
            goto label_28ac18;
        }
    }
    ctx->pc = 0x28ABE4u;
label_28abe4:
    // 0x28abe4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x28abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28abe8:
    // 0x28abe8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28abec:
    // 0x28abec: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x28abecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_28abf0:
    // 0x28abf0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_28abf4:
    // 0x28abf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28abf8:
    // 0x28abf8: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_28abfc:
    if (ctx->pc == 0x28ABFCu) {
        ctx->pc = 0x28ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF8u;
        // 0x28abfc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC00u;
        goto label_28ac00;
    }
    ctx->pc = 0x28ABF8u;
    {
        const bool branch_taken_0x28abf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x28ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF8u;
        // 0x28abfc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abf8) {
            ctx->pc = 0x28AC18u;
            goto label_28ac18;
        }
    }
    ctx->pc = 0x28AC00u;
label_28ac00:
    // 0x28ac00: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_28ac04:
    // 0x28ac04: 0x8f84b498  lw          $a0, -0x4B68($gp)
    ctx->pc = 0x28ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
label_28ac08:
    // 0x28ac08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28ac0c:
    // 0x28ac0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ac10:
    // 0x28ac10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28ac14:
    // 0x28ac14: 0x90911808  lbu         $s1, 0x1808($a0)
    ctx->pc = 0x28ac14u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6152)));
label_28ac18:
    // 0x28ac18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ac1c:
    // 0x28ac1c: 0xc0a2a0c  jal         func_28A830
label_28ac20:
    if (ctx->pc == 0x28AC20u) {
        ctx->pc = 0x28AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC1Cu;
        // 0x28ac20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC24u;
        goto label_28ac24;
    }
    ctx->pc = 0x28AC1Cu;
    SET_GPR_U32(ctx, 31, 0x28AC24u);
    ctx->pc = 0x28AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC1Cu;
    // 0x28ac20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A830u, 0x28AC1Cu, 0x28AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC24u;
label_28ac24:
    // 0x28ac24: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_28ac28:
    // 0x28ac28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ac2c:
    // 0x28ac2c: 0xc0a5bb0  jal         func_296EC0
label_28ac30:
    if (ctx->pc == 0x28AC30u) {
        ctx->pc = 0x28AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC2Cu;
        // 0x28ac30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC34u;
        goto label_28ac34;
    }
    ctx->pc = 0x28AC2Cu;
    SET_GPR_U32(ctx, 31, 0x28AC34u);
    ctx->pc = 0x28AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC2Cu;
    // 0x28ac30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EC0u, 0x28AC2Cu, 0x28AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC34u;
label_28ac34:
    // 0x28ac34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ac38:
    // 0x28ac38: 0xc0a5f8c  jal         func_297E30
label_28ac3c:
    if (ctx->pc == 0x28AC3Cu) {
        ctx->pc = 0x28AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC38u;
        // 0x28ac3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC40u;
        goto label_28ac40;
    }
    ctx->pc = 0x28AC38u;
    SET_GPR_U32(ctx, 31, 0x28AC40u);
    ctx->pc = 0x28AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC38u;
    // 0x28ac3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E30u, 0x28AC38u, 0x28AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC40u;
label_28ac40:
    // 0x28ac40: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ac44:
    // 0x28ac44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ac48:
    // 0x28ac48: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x28ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28ac4c:
    // 0x28ac4c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28ac4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28ac50:
    // 0x28ac50: 0xc0a900a  jal         func_2A4028
label_28ac54:
    if (ctx->pc == 0x28AC54u) {
        ctx->pc = 0x28AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC50u;
        // 0x28ac54: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC58u;
        goto label_28ac58;
    }
    ctx->pc = 0x28AC50u;
    SET_GPR_U32(ctx, 31, 0x28AC58u);
    ctx->pc = 0x28AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC50u;
    // 0x28ac54: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28AC50u, 0x28AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC58u;
label_28ac58:
    // 0x28ac58: 0x26510018  addiu       $s1, $s2, 0x18
    ctx->pc = 0x28ac58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28ac5c:
    // 0x28ac5c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x28ac5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28ac60:
    // 0x28ac60: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x28ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28ac64:
    // 0x28ac64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ac68:
    // 0x28ac68: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28ac68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ac6c:
    // 0x28ac6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28ac6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28ac70:
    // 0x28ac70: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28ac74:
    // 0x28ac74: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28ac74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ac78:
    // 0x28ac78: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x28ac78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ac7c:
    // 0x28ac7c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28ac7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ac80:
    // 0x28ac80: 0xc09c666  jal         func_271998
label_28ac84:
    if (ctx->pc == 0x28AC84u) {
        ctx->pc = 0x28AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC80u;
        // 0x28ac84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC88u;
        goto label_28ac88;
    }
    ctx->pc = 0x28AC80u;
    SET_GPR_U32(ctx, 31, 0x28AC88u);
    ctx->pc = 0x28AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC80u;
    // 0x28ac84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x28AC80u, 0x28AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC88u;
label_28ac88:
    // 0x28ac88: 0xc78c8a00  lwc1        $f12, -0x7600($gp)
    ctx->pc = 0x28ac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28ac8c:
    // 0x28ac8c: 0xc0a291c  jal         func_28A470
label_28ac90:
    if (ctx->pc == 0x28AC90u) {
        ctx->pc = 0x28AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC8Cu;
        // 0x28ac90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC94u;
        goto label_28ac94;
    }
    ctx->pc = 0x28AC8Cu;
    SET_GPR_U32(ctx, 31, 0x28AC94u);
    ctx->pc = 0x28AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC8Cu;
    // 0x28ac90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A470u, 0x28AC8Cu, 0x28AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC94u;
label_28ac94:
    // 0x28ac94: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_28ac98:
    // 0x28ac98: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_28ac9c:
    if (ctx->pc == 0x28AC9Cu) {
        ctx->pc = 0x28AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC98u;
        // 0x28ac9c: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACA0u;
        goto label_28aca0;
    }
    ctx->pc = 0x28AC98u;
    {
        const bool branch_taken_0x28ac98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ac98) {
            ctx->pc = 0x28AC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AC98u;
            // 0x28ac9c: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ACB0u;
            goto label_28acb0;
        }
    }
    ctx->pc = 0x28ACA0u;
label_28aca0:
    // 0x28aca0: 0xc0a5ac2  jal         func_296B08
label_28aca4:
    if (ctx->pc == 0x28ACA4u) {
        ctx->pc = 0x28ACA8u;
        goto label_28aca8;
    }
    ctx->pc = 0x28ACA0u;
    SET_GPR_U32(ctx, 31, 0x28ACA8u);
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x28ACA0u, 0x28ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACA8u;
label_28aca8:
    // 0x28aca8: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x28aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_28acac:
    // 0x28acac: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x28acacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_28acb0:
    // 0x28acb0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28acb4:
    if (ctx->pc == 0x28ACB4u) {
        ctx->pc = 0x28ACB8u;
        goto label_28acb8;
    }
    ctx->pc = 0x28ACB0u;
    {
        const bool branch_taken_0x28acb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28acb0) {
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28ACB8u;
label_28acb8:
    // 0x28acb8: 0xc0a5ac2  jal         func_296B08
label_28acbc:
    if (ctx->pc == 0x28ACBCu) {
        ctx->pc = 0x28ACC0u;
        goto label_28acc0;
    }
    ctx->pc = 0x28ACB8u;
    SET_GPR_U32(ctx, 31, 0x28ACC0u);
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x28ACB8u, 0x28ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACC0u;
label_28acc0:
    // 0x28acc0: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x28acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_28acc4:
    // 0x28acc4: 0xc0ada34  jal         func_2B68D0
label_28acc8:
    if (ctx->pc == 0x28ACC8u) {
        ctx->pc = 0x28ACCCu;
        goto label_28accc;
    }
    ctx->pc = 0x28ACC4u;
    SET_GPR_U32(ctx, 31, 0x28ACCCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28ACC4u, 0x28ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACCCu;
label_28accc:
    // 0x28accc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28acd0:
    if (ctx->pc == 0x28ACD0u) {
        ctx->pc = 0x28ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACCCu;
        // 0x28acd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACD4u;
        goto label_28acd4;
    }
    ctx->pc = 0x28ACCCu;
    {
        const bool branch_taken_0x28accc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACCCu;
        // 0x28acd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28accc) {
            ctx->pc = 0x28ACE0u;
            goto label_28ace0;
        }
    }
    ctx->pc = 0x28ACD4u;
label_28acd4:
    // 0x28acd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28acd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28acd8:
    // 0x28acd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_28acdc:
    if (ctx->pc == 0x28ACDCu) {
        ctx->pc = 0x28ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACD8u;
        // 0x28acdc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACE0u;
        goto label_28ace0;
    }
    ctx->pc = 0x28ACD8u;
    {
        const bool branch_taken_0x28acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACD8u;
        // 0x28acdc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acd8) {
            ctx->pc = 0x28ACF4u;
            goto label_28acf4;
        }
    }
    ctx->pc = 0x28ACE0u;
label_28ace0:
    // 0x28ace0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28ace4:
    // 0x28ace4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ace4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ace8:
    // 0x28ace8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ace8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28acec:
    // 0x28acec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28acecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28acf0:
    // 0x28acf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28acf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28acf4:
    // 0x28acf4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28acf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_28acf8:
    // 0x28acf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28acf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28acfc:
    // 0x28acfc: 0xc6420098  lwc1        $f2, 0x98($s2)
    ctx->pc = 0x28acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ad00:
    // 0x28ad00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28ad00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28ad04:
    // 0x28ad04: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28ad04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ad08:
    // 0x28ad08: 0x0  nop
    ctx->pc = 0x28ad08u;
    // NOP
label_28ad0c:
    // 0x28ad0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28ad10:
    if (ctx->pc == 0x28AD10u) {
        ctx->pc = 0x28AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD0Cu;
        // 0x28ad10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD14u;
        goto label_28ad14;
    }
    ctx->pc = 0x28AD0Cu;
    {
        const bool branch_taken_0x28ad0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD0Cu;
        // 0x28ad10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad0c) {
            ctx->pc = 0x28AD24u;
            goto label_28ad24;
        }
    }
    ctx->pc = 0x28AD14u;
label_28ad14:
    // 0x28ad14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28ad18:
    // 0x28ad18: 0x56820004  bnel        $s4, $v0, . + 4 + (0x4 << 2)
label_28ad1c:
    if (ctx->pc == 0x28AD1Cu) {
        ctx->pc = 0x28AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD18u;
        // 0x28ad1c: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD20u;
        goto label_28ad20;
    }
    ctx->pc = 0x28AD18u;
    {
        const bool branch_taken_0x28ad18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ad18) {
            ctx->pc = 0x28AD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AD18u;
            // 0x28ad1c: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AD2Cu;
            goto label_28ad2c;
        }
    }
    ctx->pc = 0x28AD20u;
label_28ad20:
    // 0x28ad20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ad24:
    // 0x28ad24: 0x10000138  b           . + 4 + (0x138 << 2)
label_28ad28:
    if (ctx->pc == 0x28AD28u) {
        ctx->pc = 0x28AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD24u;
        // 0x28ad28: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD2Cu;
        goto label_28ad2c;
    }
    ctx->pc = 0x28AD24u;
    {
        const bool branch_taken_0x28ad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD24u;
        // 0x28ad28: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad24) {
            ctx->pc = 0x28B208u;
            goto label_28b208;
        }
    }
    ctx->pc = 0x28AD2Cu;
label_28ad2c:
    // 0x28ad2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ad30:
    // 0x28ad30: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x28ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_28ad34:
    // 0x28ad34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ad38:
    // 0x28ad38: 0xc7828a04  lwc1        $f2, -0x75FC($gp)
    ctx->pc = 0x28ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ad3c:
    // 0x28ad3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28ad3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ad40:
    // 0x28ad40: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x28ad40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
label_28ad44:
    // 0x28ad44: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x28ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_28ad48:
    // 0x28ad48: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x28ad48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28ad4c:
    // 0x28ad4c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28ad50:
    // 0x28ad50: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad54:
    // 0x28ad54: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ad58:
    // 0x28ad58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ad58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ad5c:
    // 0x28ad5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28ad5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ad60:
    // 0x28ad60: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x28ad60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28ad64:
    // 0x28ad64: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad68:
    // 0x28ad68: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ad6c:
    // 0x28ad6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ad6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ad70:
    // 0x28ad70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28ad70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ad74:
    // 0x28ad74: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x28ad74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28ad78:
    // 0x28ad78: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad7c:
    // 0x28ad7c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x28ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ad80:
    // 0x28ad80: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ad80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ad84:
    // 0x28ad84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28ad84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ad88:
    // 0x28ad88: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x28ad88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28ad8c:
    // 0x28ad8c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad90:
    // 0x28ad90: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28ad90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_28ad94:
    // 0x28ad94: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x28ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28ad98:
    // 0x28ad98: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ad9c:
    // 0x28ad9c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x28ad9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_28ada0:
    // 0x28ada0: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x28ada0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28ada4:
    // 0x28ada4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x28ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ada8:
    // 0x28ada8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28ada8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_28adac:
    // 0x28adac: 0xc0a606c  jal         func_2981B0
label_28adb0:
    if (ctx->pc == 0x28ADB0u) {
        ctx->pc = 0x28ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADACu;
        // 0x28adb0: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADB4u;
        goto label_28adb4;
    }
    ctx->pc = 0x28ADACu;
    SET_GPR_U32(ctx, 31, 0x28ADB4u);
    ctx->pc = 0x28ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADACu;
    // 0x28adb0: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2981B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2981B0u, 0x28ADACu, 0x28ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADB4u;
label_28adb4:
    // 0x28adb4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x28adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_28adb8:
    // 0x28adb8: 0xc0a271c  jal         func_289C70
label_28adbc:
    if (ctx->pc == 0x28ADBCu) {
        ctx->pc = 0x28ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB8u;
        // 0x28adbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADC0u;
        goto label_28adc0;
    }
    ctx->pc = 0x28ADB8u;
    SET_GPR_U32(ctx, 31, 0x28ADC0u);
    ctx->pc = 0x28ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADB8u;
    // 0x28adbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289C70u, 0x28ADB8u, 0x28ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADC0u;
label_28adc0:
    // 0x28adc0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_28adc4:
    if (ctx->pc == 0x28ADC4u) {
        ctx->pc = 0x28ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC0u;
        // 0x28adc4: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADC8u;
        goto label_28adc8;
    }
    ctx->pc = 0x28ADC0u;
    {
        const bool branch_taken_0x28adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC0u;
        // 0x28adc4: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adc0) {
            ctx->pc = 0x28B0A0u;
            goto label_28b0a0;
        }
    }
    ctx->pc = 0x28ADC8u;
label_28adc8:
    // 0x28adc8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28adcc:
    // 0x28adcc: 0x18400872  blez        $v0, . + 4 + (0x872 << 2)
label_28add0:
    if (ctx->pc == 0x28ADD0u) {
        ctx->pc = 0x28ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADCCu;
        // 0x28add0: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADD4u;
        goto label_28add4;
    }
    ctx->pc = 0x28ADCCu;
    {
        const bool branch_taken_0x28adcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADCCu;
        // 0x28add0: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adcc) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28ADD4u;
label_28add4:
    // 0x28add4: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x28add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28add8:
    // 0x28add8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28add8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_28addc:
    // 0x28addc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28addcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ade0:
    // 0x28ade0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28ade0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ade4:
    // 0x28ade4: 0x0  nop
    ctx->pc = 0x28ade4u;
    // NOP
label_28ade8:
    // 0x28ade8: 0x45010107  bc1t        . + 4 + (0x107 << 2)
label_28adec:
    if (ctx->pc == 0x28ADECu) {
        ctx->pc = 0x28ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADE8u;
        // 0x28adec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADF0u;
        goto label_28adf0;
    }
    ctx->pc = 0x28ADE8u;
    {
        const bool branch_taken_0x28ade8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADE8u;
        // 0x28adec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ade8) {
            ctx->pc = 0x28B208u;
            goto label_28b208;
        }
    }
    ctx->pc = 0x28ADF0u;
label_28adf0:
    // 0x28adf0: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x28adf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28adf4:
    // 0x28adf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28adf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28adf8:
    // 0x28adf8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28adf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28adfc:
    // 0x28adfc: 0xc0a274c  jal         func_289D30
label_28ae00:
    if (ctx->pc == 0x28AE00u) {
        ctx->pc = 0x28AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADFCu;
        // 0x28ae00: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE04u;
        goto label_28ae04;
    }
    ctx->pc = 0x28ADFCu;
    SET_GPR_U32(ctx, 31, 0x28AE04u);
    ctx->pc = 0x28AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADFCu;
    // 0x28ae00: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D30u, 0x28ADFCu, 0x28AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE04u;
label_28ae04:
    // 0x28ae04: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28ae08:
    // 0x28ae08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28ae0c:
    if (ctx->pc == 0x28AE0Cu) {
        ctx->pc = 0x28AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE08u;
        // 0x28ae0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE10u;
        goto label_28ae10;
    }
    ctx->pc = 0x28AE08u;
    {
        const bool branch_taken_0x28ae08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE08u;
        // 0x28ae0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae08) {
            ctx->pc = 0x28AE18u;
            goto label_28ae18;
        }
    }
    ctx->pc = 0x28AE10u;
label_28ae10:
    // 0x28ae10: 0xc0a3486  jal         func_28D218
label_28ae14:
    if (ctx->pc == 0x28AE14u) {
        ctx->pc = 0x28AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE10u;
        // 0x28ae14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE18u;
        goto label_28ae18;
    }
    ctx->pc = 0x28AE10u;
    SET_GPR_U32(ctx, 31, 0x28AE18u);
    ctx->pc = 0x28AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE10u;
    // 0x28ae14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28AE10u, 0x28AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE18u;
label_28ae18:
    // 0x28ae18: 0x120000a4  beqz        $s0, . + 4 + (0xA4 << 2)
label_28ae1c:
    if (ctx->pc == 0x28AE1Cu) {
        ctx->pc = 0x28AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE18u;
        // 0x28ae1c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE20u;
        goto label_28ae20;
    }
    ctx->pc = 0x28AE18u;
    {
        const bool branch_taken_0x28ae18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE18u;
        // 0x28ae1c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae18) {
            ctx->pc = 0x28B0ACu;
            goto label_28b0ac;
        }
    }
    ctx->pc = 0x28AE20u;
label_28ae20:
    // 0x28ae20: 0xc6450030  lwc1        $f5, 0x30($s2)
    ctx->pc = 0x28ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28ae24:
    // 0x28ae24: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ae28:
    // 0x28ae28: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x28ae28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28ae2c:
    // 0x28ae2c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ae30:
    // 0x28ae30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28ae30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28ae34:
    // 0x28ae34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28ae38:
    // 0x28ae38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28ae38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28ae3c:
    // 0x28ae3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28ae3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28ae40:
    // 0x28ae40: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x28ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_28ae44:
    // 0x28ae44: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28ae48:
    // 0x28ae48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28ae48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28ae4c:
    // 0x28ae4c: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x28ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28ae50:
    // 0x28ae50: 0xc7a80044  lwc1        $f8, 0x44($sp)
    ctx->pc = 0x28ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_28ae54:
    // 0x28ae54: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x28ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28ae58:
    // 0x28ae58: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x28ae58u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28ae5c:
    // 0x28ae5c: 0x0  nop
    ctx->pc = 0x28ae5cu;
    // NOP
label_28ae60:
    // 0x28ae60: 0x0  nop
    ctx->pc = 0x28ae60u;
    // NOP
label_28ae64:
    // 0x28ae64: 0x46141a43  div.s       $f9, $f3, $f20
    ctx->pc = 0x28ae64u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[9] = ctx->f[3] / ctx->f[20];
label_28ae68:
    // 0x28ae68: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x28ae68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_28ae6c:
    // 0x28ae6c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x28ae6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_28ae70:
    // 0x28ae70: 0x46072902  mul.s       $f4, $f5, $f7
    ctx->pc = 0x28ae70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_28ae74:
    // 0x28ae74: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x28ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ae78:
    // 0x28ae78: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x28ae78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
label_28ae7c:
    // 0x28ae7c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x28ae7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28ae80:
    // 0x28ae80: 0x46081802  mul.s       $f0, $f3, $f8
    ctx->pc = 0x28ae80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_28ae84:
    // 0x28ae84: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ae88:
    // 0x28ae88: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28ae88u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28ae8c:
    // 0x28ae8c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x28ae8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_28ae90:
    // 0x28ae90: 0x46060882  mul.s       $f2, $f1, $f6
    ctx->pc = 0x28ae90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_28ae94:
    // 0x28ae94: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x28ae94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_28ae98:
    // 0x28ae98: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x28ae98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_28ae9c:
    // 0x28ae9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28aea0:
    // 0x28aea0: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x28aea0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_28aea4:
    // 0x28aea4: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x28aea4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_28aea8:
    // 0x28aea8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x28aea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_28aeac:
    // 0x28aeac: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x28aeacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_28aeb0:
    // 0x28aeb0: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x28aeb0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_28aeb4:
    // 0x28aeb4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x28aeb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_28aeb8:
    // 0x28aeb8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28aeb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_28aebc:
    // 0x28aebc: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x28aebcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_28aec0:
    // 0x28aec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28aec4:
    if (ctx->pc == 0x28AEC4u) {
        ctx->pc = 0x28AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEC0u;
        // 0x28aec4: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEC8u;
        goto label_28aec8;
    }
    ctx->pc = 0x28AEC0u;
    {
        const bool branch_taken_0x28aec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEC0u;
        // 0x28aec4: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aec0) {
            ctx->pc = 0x28AED8u;
            goto label_28aed8;
        }
    }
    ctx->pc = 0x28AEC8u;
label_28aec8:
    // 0x28aec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28aecc:
    // 0x28aecc: 0xc0a5ac2  jal         func_296B08
label_28aed0:
    if (ctx->pc == 0x28AED0u) {
        ctx->pc = 0x28AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AECCu;
        // 0x28aed0: 0x8c5403a0  lw          $s4, 0x3A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AED4u;
        goto label_28aed4;
    }
    ctx->pc = 0x28AECCu;
    SET_GPR_U32(ctx, 31, 0x28AED4u);
    ctx->pc = 0x28AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AECCu;
    // 0x28aed0: 0x8c5403a0  lw          $s4, 0x3A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x28AECCu, 0x28AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AED4u;
label_28aed4:
    // 0x28aed4: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x28aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_28aed8:
    // 0x28aed8: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x28aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_28aedc:
    // 0x28aedc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28aee0:
    if (ctx->pc == 0x28AEE0u) {
        ctx->pc = 0x28AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEDCu;
        // 0x28aee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEE4u;
        goto label_28aee4;
    }
    ctx->pc = 0x28AEDCu;
    {
        const bool branch_taken_0x28aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEDCu;
        // 0x28aee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aedc) {
            ctx->pc = 0x28AEF0u;
            goto label_28aef0;
        }
    }
    ctx->pc = 0x28AEE4u;
label_28aee4:
    // 0x28aee4: 0xc0a5ac2  jal         func_296B08
label_28aee8:
    if (ctx->pc == 0x28AEE8u) {
        ctx->pc = 0x28AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEE4u;
        // 0x28aee8: 0x8c5403a0  lw          $s4, 0x3A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEECu;
        goto label_28aeec;
    }
    ctx->pc = 0x28AEE4u;
    SET_GPR_U32(ctx, 31, 0x28AEECu);
    ctx->pc = 0x28AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEE4u;
    // 0x28aee8: 0x8c5403a0  lw          $s4, 0x3A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x28AEE4u, 0x28AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEECu;
label_28aeec:
    // 0x28aeec: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x28aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_28aef0:
    // 0x28aef0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28aef4:
    // 0x28aef4: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
label_28aef8:
    if (ctx->pc == 0x28AEF8u) {
        ctx->pc = 0x28AEFCu;
        goto label_28aefc;
    }
    ctx->pc = 0x28AEF4u;
    {
        const bool branch_taken_0x28aef4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x28aef4) {
            ctx->pc = 0x28AF10u;
            goto label_28af10;
        }
    }
    ctx->pc = 0x28AEFCu;
label_28aefc:
    // 0x28aefc: 0x24040194  addiu       $a0, $zero, 0x194
    ctx->pc = 0x28aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
label_28af00:
    // 0x28af00: 0xc081546  jal         func_205518
label_28af04:
    if (ctx->pc == 0x28AF04u) {
        ctx->pc = 0x28AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF00u;
        // 0x28af04: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF08u;
        goto label_28af08;
    }
    ctx->pc = 0x28AF00u;
    SET_GPR_U32(ctx, 31, 0x28AF08u);
    ctx->pc = 0x28AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF00u;
    // 0x28af04: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28AF00u, 0x28AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF08u;
label_28af08:
    // 0x28af08: 0x10000014  b           . + 4 + (0x14 << 2)
label_28af0c:
    if (ctx->pc == 0x28AF0Cu) {
        ctx->pc = 0x28AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF08u;
        // 0x28af0c: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF10u;
        goto label_28af10;
    }
    ctx->pc = 0x28AF08u;
    {
        const bool branch_taken_0x28af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF08u;
        // 0x28af0c: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af08) {
            ctx->pc = 0x28AF5Cu;
            goto label_28af5c;
        }
    }
    ctx->pc = 0x28AF10u;
label_28af10:
    // 0x28af10: 0xc0ada34  jal         func_2B68D0
label_28af14:
    if (ctx->pc == 0x28AF14u) {
        ctx->pc = 0x28AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF10u;
        // 0x28af14: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF18u;
        goto label_28af18;
    }
    ctx->pc = 0x28AF10u;
    SET_GPR_U32(ctx, 31, 0x28AF18u);
    ctx->pc = 0x28AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF10u;
    // 0x28af14: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28AF10u, 0x28AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF18u;
label_28af18:
    // 0x28af18: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x28af18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_28af1c:
    // 0x28af1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28af1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28af20:
    // 0x28af20: 0x244400ae  addiu       $a0, $v0, 0xAE
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 174));
label_28af24:
    // 0x28af24: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x28af24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28af28:
    // 0x28af28: 0xc081602  jal         func_205808
label_28af2c:
    if (ctx->pc == 0x28AF2Cu) {
        ctx->pc = 0x28AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF28u;
        // 0x28af2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF30u;
        goto label_28af30;
    }
    ctx->pc = 0x28AF28u;
    SET_GPR_U32(ctx, 31, 0x28AF30u);
    ctx->pc = 0x28AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF28u;
    // 0x28af2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x28AF28u, 0x28AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF30u;
label_28af30:
    // 0x28af30: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x28af30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_28af34:
    // 0x28af34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28af38:
    // 0x28af38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28af38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28af3c:
    // 0x28af3c: 0xc0a5d66  jal         func_297598
label_28af40:
    if (ctx->pc == 0x28AF40u) {
        ctx->pc = 0x28AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF3Cu;
        // 0x28af40: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF44u;
        goto label_28af44;
    }
    ctx->pc = 0x28AF3Cu;
    SET_GPR_U32(ctx, 31, 0x28AF44u);
    ctx->pc = 0x28AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF3Cu;
    // 0x28af40: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297598u, 0x28AF3Cu, 0x28AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF44u;
label_28af44:
    // 0x28af44: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28af44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28af48:
    // 0x28af48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28af48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af4c:
    // 0x28af4c: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x28af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28af50:
    // 0x28af50: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28af50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28af54:
    // 0x28af54: 0xc0a900a  jal         func_2A4028
label_28af58:
    if (ctx->pc == 0x28AF58u) {
        ctx->pc = 0x28AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF54u;
        // 0x28af58: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF5Cu;
        goto label_28af5c;
    }
    ctx->pc = 0x28AF54u;
    SET_GPR_U32(ctx, 31, 0x28AF5Cu);
    ctx->pc = 0x28AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF54u;
    // 0x28af58: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28AF54u, 0x28AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF5Cu;
label_28af5c:
    // 0x28af5c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x28af5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28af60:
    // 0x28af60: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x28af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28af64:
    // 0x28af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af68:
    // 0x28af68: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28af68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28af6c:
    // 0x28af6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28af6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28af70:
    // 0x28af70: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28af70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28af74:
    // 0x28af74: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28af74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28af78:
    // 0x28af78: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x28af78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28af7c:
    // 0x28af7c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28af7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28af80:
    // 0x28af80: 0xc09c666  jal         func_271998
label_28af84:
    if (ctx->pc == 0x28AF84u) {
        ctx->pc = 0x28AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF80u;
        // 0x28af84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF88u;
        goto label_28af88;
    }
    ctx->pc = 0x28AF80u;
    SET_GPR_U32(ctx, 31, 0x28AF88u);
    ctx->pc = 0x28AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF80u;
    // 0x28af84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x28AF80u, 0x28AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF88u;
label_28af88:
    // 0x28af88: 0xc78c8a08  lwc1        $f12, -0x75F8($gp)
    ctx->pc = 0x28af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28af8c:
    // 0x28af8c: 0xc0a291c  jal         func_28A470
label_28af90:
    if (ctx->pc == 0x28AF90u) {
        ctx->pc = 0x28AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF8Cu;
        // 0x28af90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF94u;
        goto label_28af94;
    }
    ctx->pc = 0x28AF8Cu;
    SET_GPR_U32(ctx, 31, 0x28AF94u);
    ctx->pc = 0x28AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF8Cu;
    // 0x28af90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A470u, 0x28AF8Cu, 0x28AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF94u;
label_28af94:
    // 0x28af94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_28af98:
    // 0x28af98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28af98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28af9c:
    // 0x28af9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28af9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28afa0:
    // 0x28afa0: 0x0  nop
    ctx->pc = 0x28afa0u;
    // NOP
label_28afa4:
    // 0x28afa4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_28afa8:
    if (ctx->pc == 0x28AFA8u) {
        ctx->pc = 0x28AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA4u;
        // 0x28afa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFACu;
        goto label_28afac;
    }
    ctx->pc = 0x28AFA4u;
    {
        const bool branch_taken_0x28afa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA4u;
        // 0x28afa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afa4) {
            ctx->pc = 0x28B00Cu;
            goto label_28b00c;
        }
    }
    ctx->pc = 0x28AFACu;
label_28afac:
    // 0x28afac: 0xc0ada34  jal         func_2B68D0
label_28afb0:
    if (ctx->pc == 0x28AFB0u) {
        ctx->pc = 0x28AFB4u;
        goto label_28afb4;
    }
    ctx->pc = 0x28AFACu;
    SET_GPR_U32(ctx, 31, 0x28AFB4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28AFACu, 0x28AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFB4u;
label_28afb4:
    // 0x28afb4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28afb8:
    if (ctx->pc == 0x28AFB8u) {
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFBCu;
        goto label_28afbc;
    }
    ctx->pc = 0x28AFB4u;
    {
        const bool branch_taken_0x28afb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afb4) {
            ctx->pc = 0x28AFC8u;
            goto label_28afc8;
        }
    }
    ctx->pc = 0x28AFBCu;
label_28afbc:
    // 0x28afbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28afc0:
    // 0x28afc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_28afc4:
    if (ctx->pc == 0x28AFC4u) {
        ctx->pc = 0x28AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC0u;
        // 0x28afc4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFC8u;
        goto label_28afc8;
    }
    ctx->pc = 0x28AFC0u;
    {
        const bool branch_taken_0x28afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC0u;
        // 0x28afc4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afc0) {
            ctx->pc = 0x28AFDCu;
            goto label_28afdc;
        }
    }
    ctx->pc = 0x28AFC8u;
label_28afc8:
    // 0x28afc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28afcc:
    // 0x28afcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28afd0:
    // 0x28afd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28afd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28afd4:
    // 0x28afd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28afd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_28afd8:
    // 0x28afd8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28afd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28afdc:
    // 0x28afdc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28afdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_28afe0:
    // 0x28afe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28afe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28afe4:
    // 0x28afe4: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x28afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28afe8:
    // 0x28afe8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28afe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28afec:
    // 0x28afec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28afecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28aff0:
    // 0x28aff0: 0x0  nop
    ctx->pc = 0x28aff0u;
    // NOP
label_28aff4:
    // 0x28aff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28aff8:
    if (ctx->pc == 0x28AFF8u) {
        ctx->pc = 0x28AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF4u;
        // 0x28aff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFFCu;
        goto label_28affc;
    }
    ctx->pc = 0x28AFF4u;
    {
        const bool branch_taken_0x28aff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF4u;
        // 0x28aff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aff4) {
            ctx->pc = 0x28B00Cu;
            goto label_28b00c;
        }
    }
    ctx->pc = 0x28AFFCu;
label_28affc:
    // 0x28affc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28b000:
    // 0x28b000: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_28b004:
    if (ctx->pc == 0x28B004u) {
        ctx->pc = 0x28B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B000u;
        // 0x28b004: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B008u;
        goto label_28b008;
    }
    ctx->pc = 0x28B000u;
    {
        const bool branch_taken_0x28b000 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B000u;
        // 0x28b004: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b000) {
            ctx->pc = 0x28B014u;
            goto label_28b014;
        }
    }
    ctx->pc = 0x28B008u;
label_28b008:
    // 0x28b008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28b008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b00c:
    // 0x28b00c: 0x1000007e  b           . + 4 + (0x7E << 2)
label_28b010:
    if (ctx->pc == 0x28B010u) {
        ctx->pc = 0x28B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B00Cu;
        // 0x28b010: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B014u;
        goto label_28b014;
    }
    ctx->pc = 0x28B00Cu;
    {
        const bool branch_taken_0x28b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B00Cu;
        // 0x28b010: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b00c) {
            ctx->pc = 0x28B208u;
            goto label_28b208;
        }
    }
    ctx->pc = 0x28B014u;
label_28b014:
    // 0x28b014: 0xc7838a0c  lwc1        $f3, -0x75F4($gp)
    ctx->pc = 0x28b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28b018:
    // 0x28b018: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x28b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b01c:
    // 0x28b01c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28b01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28b020:
    // 0x28b020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28b024:
    // 0x28b024: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x28b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28b028:
    // 0x28b028: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b02c:
    // 0x28b02c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b030:
    // 0x28b030: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28b030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28b034:
    // 0x28b034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28b038:
    // 0x28b038: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x28b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28b03c:
    // 0x28b03c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x28b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b040:
    // 0x28b040: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x28b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b044:
    // 0x28b044: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28b044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28b048:
    // 0x28b048: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28b048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28b04c:
    // 0x28b04c: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x28b04cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28b050:
    // 0x28b050: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b054:
    // 0x28b054: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28b054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_28b058:
    // 0x28b058: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x28b058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28b05c:
    // 0x28b05c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b060:
    // 0x28b060: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x28b060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_28b064:
    // 0x28b064: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x28b064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28b068:
    // 0x28b068: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x28b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b06c:
    // 0x28b06c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28b06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_28b070:
    // 0x28b070: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
label_28b074:
    if (ctx->pc == 0x28B074u) {
        ctx->pc = 0x28B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B070u;
        // 0x28b074: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B078u;
        goto label_28b078;
    }
    ctx->pc = 0x28B070u;
    {
        const bool branch_taken_0x28b070 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x28B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B070u;
        // 0x28b074: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b070) {
            ctx->pc = 0x28B094u;
            goto label_28b094;
        }
    }
    ctx->pc = 0x28B078u;
label_28b078:
    // 0x28b078: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28b07c:
    // 0x28b07c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28b07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b080:
    // 0x28b080: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28b080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b084:
    // 0x28b084: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x28b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_28b088:
    // 0x28b088: 0xc0a5fea  jal         func_297FA8
label_28b08c:
    if (ctx->pc == 0x28B08Cu) {
        ctx->pc = 0x28B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B088u;
        // 0x28b08c: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B090u;
        goto label_28b090;
    }
    ctx->pc = 0x28B088u;
    SET_GPR_U32(ctx, 31, 0x28B090u);
    ctx->pc = 0x28B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B088u;
    // 0x28b08c: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FA8u, 0x28B088u, 0x28B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B090u;
label_28b090:
    // 0x28b090: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x28b090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_28b094:
    // 0x28b094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28b094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b098:
    // 0x28b098: 0xc0a271c  jal         func_289C70
label_28b09c:
    if (ctx->pc == 0x28B09Cu) {
        ctx->pc = 0x28B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B098u;
        // 0x28b09c: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0A0u;
        goto label_28b0a0;
    }
    ctx->pc = 0x28B098u;
    SET_GPR_U32(ctx, 31, 0x28B0A0u);
    ctx->pc = 0x28B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B098u;
    // 0x28b09c: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289C70u, 0x28B098u, 0x28B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0A0u;
label_28b0a0:
    // 0x28b0a0: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x28b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_28b0a4:
    // 0x28b0a4: 0x100007bc  b           . + 4 + (0x7BC << 2)
label_28b0a8:
    if (ctx->pc == 0x28B0A8u) {
        ctx->pc = 0x28B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0A4u;
        // 0x28b0a8: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0ACu;
        goto label_28b0ac;
    }
    ctx->pc = 0x28B0A4u;
    {
        const bool branch_taken_0x28b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0A4u;
        // 0x28b0a8: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0a4) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B0ACu;
label_28b0ac:
    // 0x28b0ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b0b0:
    // 0x28b0b0: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28b0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b0b4:
    // 0x28b0b4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x28b0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b0b8:
    // 0x28b0b8: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x28b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b0bc:
    // 0x28b0bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b0c0:
    // 0x28b0c0: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x28b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28b0c4:
    // 0x28b0c4: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28b0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28b0c8:
    // 0x28b0c8: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x28b0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28b0cc:
    // 0x28b0cc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x28b0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b0d0:
    // 0x28b0d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28b0d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28b0d4:
    // 0x28b0d4: 0xe642001c  swc1        $f2, 0x1C($s2)
    ctx->pc = 0x28b0d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28b0d8:
    // 0x28b0d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b0dc:
    // 0x28b0dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28b0dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_28b0e0:
    // 0x28b0e0: 0x100007ad  b           . + 4 + (0x7AD << 2)
label_28b0e4:
    if (ctx->pc == 0x28B0E4u) {
        ctx->pc = 0x28B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E0u;
        // 0x28b0e4: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0E8u;
        goto label_28b0e8;
    }
    ctx->pc = 0x28B0E0u;
    {
        const bool branch_taken_0x28b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E0u;
        // 0x28b0e4: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0e0) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B0E8u;
label_28b0e8:
    // 0x28b0e8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28b0ec:
    // 0x28b0ec: 0x184007aa  blez        $v0, . + 4 + (0x7AA << 2)
label_28b0f0:
    if (ctx->pc == 0x28B0F0u) {
        ctx->pc = 0x28B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0ECu;
        // 0x28b0f0: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0F4u;
        goto label_28b0f4;
    }
    ctx->pc = 0x28B0ECu;
    {
        const bool branch_taken_0x28b0ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0ECu;
        // 0x28b0f0: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0ec) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B0F4u;
label_28b0f4:
    // 0x28b0f4: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x28b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b0f8:
    // 0x28b0f8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_28b0fc:
    // 0x28b0fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b100:
    // 0x28b100: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28b100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b104:
    // 0x28b104: 0x0  nop
    ctx->pc = 0x28b104u;
    // NOP
label_28b108:
    // 0x28b108: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_28b10c:
    if (ctx->pc == 0x28B10Cu) {
        ctx->pc = 0x28B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B108u;
        // 0x28b10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B110u;
        goto label_28b110;
    }
    ctx->pc = 0x28B108u;
    {
        const bool branch_taken_0x28b108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B108u;
        // 0x28b10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b108) {
            ctx->pc = 0x28B208u;
            goto label_28b208;
        }
    }
    ctx->pc = 0x28B110u;
label_28b110:
    // 0x28b110: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x28b110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28b114:
    // 0x28b114: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28b114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b118:
    // 0x28b118: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28b118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b11c:
    // 0x28b11c: 0xc0a2874  jal         func_28A1D0
label_28b120:
    if (ctx->pc == 0x28B120u) {
        ctx->pc = 0x28B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B11Cu;
        // 0x28b120: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B124u;
        goto label_28b124;
    }
    ctx->pc = 0x28B11Cu;
    SET_GPR_U32(ctx, 31, 0x28B124u);
    ctx->pc = 0x28B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B11Cu;
    // 0x28b120: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1D0u, 0x28B11Cu, 0x28B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B124u;
label_28b124:
    // 0x28b124: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28b124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28b128:
    // 0x28b128: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28b12c:
    if (ctx->pc == 0x28B12Cu) {
        ctx->pc = 0x28B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B128u;
        // 0x28b12c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B130u;
        goto label_28b130;
    }
    ctx->pc = 0x28B128u;
    {
        const bool branch_taken_0x28b128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B128u;
        // 0x28b12c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b128) {
            ctx->pc = 0x28B138u;
            goto label_28b138;
        }
    }
    ctx->pc = 0x28B130u;
label_28b130:
    // 0x28b130: 0xc0a3486  jal         func_28D218
label_28b134:
    if (ctx->pc == 0x28B134u) {
        ctx->pc = 0x28B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B130u;
        // 0x28b134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B138u;
        goto label_28b138;
    }
    ctx->pc = 0x28B130u;
    SET_GPR_U32(ctx, 31, 0x28B138u);
    ctx->pc = 0x28B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B130u;
    // 0x28b134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28B130u, 0x28B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B138u;
label_28b138:
    // 0x28b138: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_28b13c:
    if (ctx->pc == 0x28B13Cu) {
        ctx->pc = 0x28B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B138u;
        // 0x28b13c: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B140u;
        goto label_28b140;
    }
    ctx->pc = 0x28B138u;
    {
        const bool branch_taken_0x28b138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B138u;
        // 0x28b13c: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b138) {
            ctx->pc = 0x28B218u;
            goto label_28b218;
        }
    }
    ctx->pc = 0x28B140u;
label_28b140:
    // 0x28b140: 0xc0ada34  jal         func_2B68D0
label_28b144:
    if (ctx->pc == 0x28B144u) {
        ctx->pc = 0x28B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B140u;
        // 0x28b144: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B148u;
        goto label_28b148;
    }
    ctx->pc = 0x28B140u;
    SET_GPR_U32(ctx, 31, 0x28B148u);
    ctx->pc = 0x28B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B140u;
    // 0x28b144: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28B140u, 0x28B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B148u;
label_28b148:
    // 0x28b148: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28b14c:
    // 0x28b14c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28b14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b150:
    // 0x28b150: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28b150u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28b154:
    // 0x28b154: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_28b158:
    if (ctx->pc == 0x28B158u) {
        ctx->pc = 0x28B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B154u;
        // 0x28b158: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B15Cu;
        goto label_28b15c;
    }
    ctx->pc = 0x28B154u;
    {
        const bool branch_taken_0x28b154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b154) {
            ctx->pc = 0x28B158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B154u;
            // 0x28b158: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B15Cu;
            goto label_28b15c;
        }
    }
    ctx->pc = 0x28B15Cu;
label_28b15c:
    // 0x28b15c: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x28b15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28b160:
    // 0x28b160: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28b160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28b164:
    // 0x28b164: 0x2010  mfhi        $a0
    ctx->pc = 0x28b164u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_28b168:
    // 0x28b168: 0xc081546  jal         func_205518
label_28b16c:
    if (ctx->pc == 0x28B16Cu) {
        ctx->pc = 0x28B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B168u;
        // 0x28b16c: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B170u;
        goto label_28b170;
    }
    ctx->pc = 0x28B168u;
    SET_GPR_U32(ctx, 31, 0x28B170u);
    ctx->pc = 0x28B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B168u;
    // 0x28b16c: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28B168u, 0x28B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B170u;
label_28b170:
    // 0x28b170: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28b170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b174:
    // 0x28b174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b178:
    // 0x28b178: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x28b178u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28b17c:
    // 0x28b17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b180:
    // 0x28b180: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28b180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b184:
    // 0x28b184: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28b184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b188:
    // 0x28b188: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28b188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28b18c:
    // 0x28b18c: 0xc0a5e30  jal         func_2978C0
label_28b190:
    if (ctx->pc == 0x28B190u) {
        ctx->pc = 0x28B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B18Cu;
        // 0x28b190: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B194u;
        goto label_28b194;
    }
    ctx->pc = 0x28B18Cu;
    SET_GPR_U32(ctx, 31, 0x28B194u);
    ctx->pc = 0x28B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B18Cu;
    // 0x28b190: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x28B18Cu, 0x28B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B194u;
label_28b194:
    // 0x28b194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b198:
    // 0x28b198: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28b19c:
    // 0x28b19c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28b19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b1a0:
    // 0x28b1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28b1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b1a4:
    // 0x28b1a4: 0xc0a60f8  jal         func_2983E0
label_28b1a8:
    if (ctx->pc == 0x28B1A8u) {
        ctx->pc = 0x28B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1A4u;
        // 0x28b1a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1ACu;
        goto label_28b1ac;
    }
    ctx->pc = 0x28B1A4u;
    SET_GPR_U32(ctx, 31, 0x28B1ACu);
    ctx->pc = 0x28B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1A4u;
    // 0x28b1a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x28B1A4u, 0x28B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1ACu;
label_28b1ac:
    // 0x28b1ac: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x28b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b1b0:
    // 0x28b1b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_28b1b4:
    if (ctx->pc == 0x28B1B4u) {
        ctx->pc = 0x28B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B0u;
        // 0x28b1b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1B8u;
        goto label_28b1b8;
    }
    ctx->pc = 0x28B1B0u;
    {
        const bool branch_taken_0x28b1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1b0) {
            ctx->pc = 0x28B1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B1B0u;
            // 0x28b1b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B1C4u;
            goto label_28b1c4;
        }
    }
    ctx->pc = 0x28B1B8u;
label_28b1b8:
    // 0x28b1b8: 0xc0a5b94  jal         func_296E50
label_28b1bc:
    if (ctx->pc == 0x28B1BCu) {
        ctx->pc = 0x28B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B8u;
        // 0x28b1bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1C0u;
        goto label_28b1c0;
    }
    ctx->pc = 0x28B1B8u;
    SET_GPR_U32(ctx, 31, 0x28B1C0u);
    ctx->pc = 0x28B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1B8u;
    // 0x28b1bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28B1B8u, 0x28B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1C0u;
label_28b1c0:
    // 0x28b1c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b1c4:
    // 0x28b1c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b1c8:
    // 0x28b1c8: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x28b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28b1cc:
    // 0x28b1cc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28b1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b1d0:
    // 0x28b1d0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x28b1d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b1d4:
    // 0x28b1d4: 0xc0a900a  jal         func_2A4028
label_28b1d8:
    if (ctx->pc == 0x28B1D8u) {
        ctx->pc = 0x28B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1D4u;
        // 0x28b1d8: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1DCu;
        goto label_28b1dc;
    }
    ctx->pc = 0x28B1D4u;
    SET_GPR_U32(ctx, 31, 0x28B1DCu);
    ctx->pc = 0x28B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1D4u;
    // 0x28b1d8: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28B1D4u, 0x28B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1DCu;
label_28b1dc:
    // 0x28b1dc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b1e0:
    // 0x28b1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b1e4:
    // 0x28b1e4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28b1e8:
    // 0x28b1e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b1e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28b1ec:
    // 0x28b1ec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28b1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b1f0:
    // 0x28b1f0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28b1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28b1f4:
    // 0x28b1f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28b1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b1f8:
    // 0x28b1f8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28b1f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b1fc:
    // 0x28b1fc: 0xc09c666  jal         func_271998
label_28b200:
    if (ctx->pc == 0x28B200u) {
        ctx->pc = 0x28B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1FCu;
        // 0x28b200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B204u;
        goto label_28b204;
    }
    ctx->pc = 0x28B1FCu;
    SET_GPR_U32(ctx, 31, 0x28B204u);
    ctx->pc = 0x28B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1FCu;
    // 0x28b200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x28B1FCu, 0x28B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B204u;
label_28b204:
    // 0x28b204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b208:
    // 0x28b208: 0xc0a2572  jal         func_2895C8
label_28b20c:
    if (ctx->pc == 0x28B20Cu) {
        ctx->pc = 0x28B210u;
        goto label_28b210;
    }
    ctx->pc = 0x28B208u;
    SET_GPR_U32(ctx, 31, 0x28B210u);
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x28B208u, 0x28B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B210u;
label_28b210:
    // 0x28b210: 0x10000761  b           . + 4 + (0x761 << 2)
label_28b214:
    if (ctx->pc == 0x28B214u) {
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B210u;
        // 0x28b214: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B218u;
        goto label_28b218;
    }
    ctx->pc = 0x28B210u;
    {
        const bool branch_taken_0x28b210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B210u;
        // 0x28b214: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b210) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B218u;
label_28b218:
    // 0x28b218: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28b218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b21c:
    // 0x28b21c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x28b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b220:
    // 0x28b220: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x28b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b224:
    // 0x28b224: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x28b224u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_28b228:
    // 0x28b228: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x28b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b22c:
    // 0x28b22c: 0x8f84b460  lw          $a0, -0x4BA0($gp)
    ctx->pc = 0x28b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28b230:
    // 0x28b230: 0xe6430018  swc1        $f3, 0x18($s2)
    ctx->pc = 0x28b230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28b234:
    // 0x28b234: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x28b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b238:
    // 0x28b238: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b23c:
    // 0x28b23c: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x28b23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28b240:
    // 0x28b240: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b244:
    // 0x28b244: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28b244u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28b248:
    // 0x28b248: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
label_28b24c:
    if (ctx->pc == 0x28B24Cu) {
        ctx->pc = 0x28B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B248u;
        // 0x28b24c: 0xe6420020  swc1        $f2, 0x20($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B250u;
        goto label_28b250;
    }
    ctx->pc = 0x28B248u;
    {
        const bool branch_taken_0x28b248 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x28B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B248u;
        // 0x28b24c: 0xe6420020  swc1        $f2, 0x20($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b248) {
            ctx->pc = 0x28B2A8u;
            goto label_28b2a8;
        }
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0x8e4600cc  lw          $a2, 0xCC($s2)
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b254:
    // 0x28b254: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x28b254u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_28b258:
    // 0x28b258: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28b258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28b25c:
    // 0x28b25c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28b25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b260:
    // 0x28b260: 0xc7838a10  lwc1        $f3, -0x75F0($gp)
    ctx->pc = 0x28b260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28b264:
    // 0x28b264: 0x0  nop
    ctx->pc = 0x28b264u;
    // NOP
label_28b268:
    // 0x28b268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28b26c:
    // 0x28b26c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b270:
    // 0x28b270: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x28b270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_28b274:
    // 0x28b274: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x28b274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b278:
    // 0x28b278: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28b278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_28b27c:
    // 0x28b27c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b280:
    // 0x28b280: 0xc7848a14  lwc1        $f4, -0x75EC($gp)
    ctx->pc = 0x28b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28b284:
    // 0x28b284: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28b284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_28b288:
    // 0x28b288: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28b288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28b28c:
    // 0x28b28c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x28b28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_28b290:
    // 0x28b290: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x28b290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28b294:
    // 0x28b294: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x28b294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_28b298:
    // 0x28b298: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_28b29c:
    if (ctx->pc == 0x28B29Cu) {
        ctx->pc = 0x28B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B298u;
        // 0x28b29c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2A0u;
        goto label_28b2a0;
    }
    ctx->pc = 0x28B298u;
    {
        const bool branch_taken_0x28b298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B298u;
        // 0x28b29c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b298) {
            ctx->pc = 0x28B268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b268;
        }
    }
    ctx->pc = 0x28B2A0u;
label_28b2a0:
    // 0x28b2a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_28b2a4:
    if (ctx->pc == 0x28B2A4u) {
        ctx->pc = 0x28B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2A0u;
        // 0x28b2a4: 0xe4a50030  swc1        $f5, 0x30($a1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2A8u;
        goto label_28b2a8;
    }
    ctx->pc = 0x28B2A0u;
    {
        const bool branch_taken_0x28b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2A0u;
        // 0x28b2a4: 0xe4a50030  swc1        $f5, 0x30($a1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2a0) {
            ctx->pc = 0x28B2BCu;
            goto label_28b2bc;
        }
    }
    ctx->pc = 0x28B2A8u;
label_28b2a8:
    // 0x28b2a8: 0x8e4600cc  lw          $a2, 0xCC($s2)
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b2ac:
    // 0x28b2ac: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x28b2acu;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_28b2b0:
    // 0x28b2b0: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28b2b4:
    // 0x28b2b4: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28b2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b2b8:
    // 0x28b2b8: 0xe4a50030  swc1        $f5, 0x30($a1)
    ctx->pc = 0x28b2b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28b2bc:
    // 0x28b2bc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x28b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b2c0:
    // 0x28b2c0: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x28b2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28b2c4:
    // 0x28b2c4: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x28b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b2c8:
    // 0x28b2c8: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_28b2cc:
    if (ctx->pc == 0x28B2CCu) {
        ctx->pc = 0x28B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C8u;
        // 0x28b2cc: 0xe4a10038  swc1        $f1, 0x38($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2D0u;
        goto label_28b2d0;
    }
    ctx->pc = 0x28B2C8u;
    {
        const bool branch_taken_0x28b2c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C8u;
        // 0x28b2cc: 0xe4a10038  swc1        $f1, 0x38($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2c8) {
            ctx->pc = 0x28B2F4u;
            goto label_28b2f4;
        }
    }
    ctx->pc = 0x28B2D0u;
label_28b2d0:
    // 0x28b2d0: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x28b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_28b2d4:
    // 0x28b2d4: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x28b2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_28b2d8:
    // 0x28b2d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_28b2dc:
    if (ctx->pc == 0x28B2DCu) {
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2E0u;
        goto label_28b2e0;
    }
    ctx->pc = 0x28B2D8u;
    {
        const bool branch_taken_0x28b2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d8) {
            ctx->pc = 0x28B314u;
            goto label_28b314;
        }
    }
    ctx->pc = 0x28B2E0u;
label_28b2e0:
    // 0x28b2e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b2e4:
    // 0x28b2e4: 0xc0a5b94  jal         func_296E50
label_28b2e8:
    if (ctx->pc == 0x28B2E8u) {
        ctx->pc = 0x28B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2E4u;
        // 0x28b2e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2ECu;
        goto label_28b2ec;
    }
    ctx->pc = 0x28B2E4u;
    SET_GPR_U32(ctx, 31, 0x28B2ECu);
    ctx->pc = 0x28B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2E4u;
    // 0x28b2e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28B2E4u, 0x28B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2ECu;
label_28b2ec:
    // 0x28b2ec: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x28b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b2f0:
    // 0x28b2f0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x28b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_28b2f4:
    // 0x28b2f4: 0x264400cc  addiu       $a0, $s2, 0xCC
    ctx->pc = 0x28b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_28b2f8:
    // 0x28b2f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b2fc:
    // 0x28b2fc: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x28b2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28b300:
    // 0x28b300: 0xc0a6098  jal         func_298260
label_28b304:
    if (ctx->pc == 0x28B304u) {
        ctx->pc = 0x28B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B300u;
        // 0x28b304: 0x2407003c  addiu       $a3, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B308u;
        goto label_28b308;
    }
    ctx->pc = 0x28B300u;
    SET_GPR_U32(ctx, 31, 0x28B308u);
    ctx->pc = 0x28B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B300u;
    // 0x28b304: 0x2407003c  addiu       $a3, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298260u, 0x28B300u, 0x28B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B308u;
label_28b308:
    // 0x28b308: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x28b308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_28b30c:
    // 0x28b30c: 0x10000722  b           . + 4 + (0x722 << 2)
label_28b310:
    if (ctx->pc == 0x28B310u) {
        ctx->pc = 0x28B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B30Cu;
        // 0x28b310: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B314u;
        goto label_28b314;
    }
    ctx->pc = 0x28B30Cu;
    {
        const bool branch_taken_0x28b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B30Cu;
        // 0x28b310: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b30c) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B314u;
label_28b314:
    // 0x28b314: 0xc0a5ba2  jal         func_296E88
label_28b318:
    if (ctx->pc == 0x28B318u) {
        ctx->pc = 0x28B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B314u;
        // 0x28b318: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B31Cu;
        goto label_28b31c;
    }
    ctx->pc = 0x28B314u;
    SET_GPR_U32(ctx, 31, 0x28B31Cu);
    ctx->pc = 0x28B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B314u;
    // 0x28b318: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x28B314u, 0x28B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B31Cu;
label_28b31c:
    // 0x28b31c: 0x1000071e  b           . + 4 + (0x71E << 2)
label_28b320:
    if (ctx->pc == 0x28B320u) {
        ctx->pc = 0x28B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B31Cu;
        // 0x28b320: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B324u;
        goto label_28b324;
    }
    ctx->pc = 0x28B31Cu;
    {
        const bool branch_taken_0x28b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B31Cu;
        // 0x28b320: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b31c) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B324u;
label_28b324:
    // 0x28b324: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28b328:
    // 0x28b328: 0x1840018c  blez        $v0, . + 4 + (0x18C << 2)
label_28b32c:
    if (ctx->pc == 0x28B32Cu) {
        ctx->pc = 0x28B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B328u;
        // 0x28b32c: 0x8fa800f4  lw          $t0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B330u;
        goto label_28b330;
    }
    ctx->pc = 0x28B328u;
    {
        const bool branch_taken_0x28b328 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B328u;
        // 0x28b32c: 0x8fa800f4  lw          $t0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b328) {
            ctx->pc = 0x28B95Cu;
            goto label_28b95c;
        }
    }
    ctx->pc = 0x28B330u;
label_28b330:
    // 0x28b330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b334:
    // 0x28b334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b338:
    // 0x28b338: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28b338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b33c:
    // 0x28b33c: 0xc0a2874  jal         func_28A1D0
label_28b340:
    if (ctx->pc == 0x28B340u) {
        ctx->pc = 0x28B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B33Cu;
        // 0x28b340: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B344u;
        goto label_28b344;
    }
    ctx->pc = 0x28B33Cu;
    SET_GPR_U32(ctx, 31, 0x28B344u);
    ctx->pc = 0x28B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B33Cu;
    // 0x28b340: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1D0u, 0x28B33Cu, 0x28B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B344u;
label_28b344:
    // 0x28b344: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28b344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b348:
    // 0x28b348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b34c:
    // 0x28b34c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28b350:
    // 0x28b350: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28b354:
    if (ctx->pc == 0x28B354u) {
        ctx->pc = 0x28B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B350u;
        // 0x28b354: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B358u;
        goto label_28b358;
    }
    ctx->pc = 0x28B350u;
    {
        const bool branch_taken_0x28b350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B350u;
        // 0x28b354: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b350) {
            ctx->pc = 0x28B360u;
            goto label_28b360;
        }
    }
    ctx->pc = 0x28B358u;
label_28b358:
    // 0x28b358: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28b35c:
    if (ctx->pc == 0x28B35Cu) {
        ctx->pc = 0x28B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B358u;
        // 0x28b35c: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B360u;
        goto label_28b360;
    }
    ctx->pc = 0x28B358u;
    {
        const bool branch_taken_0x28b358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B358u;
        // 0x28b35c: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b358) {
            ctx->pc = 0x28B368u;
            goto label_28b368;
        }
    }
    ctx->pc = 0x28B360u;
label_28b360:
    // 0x28b360: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28b360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b364:
    // 0x28b364: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28b364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28b368:
    // 0x28b368: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_28b36c:
    if (ctx->pc == 0x28B36Cu) {
        ctx->pc = 0x28B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B368u;
        // 0x28b36c: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B370u;
        goto label_28b370;
    }
    ctx->pc = 0x28B368u;
    {
        const bool branch_taken_0x28b368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b368) {
            ctx->pc = 0x28B36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B368u;
            // 0x28b36c: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B37Cu;
            goto label_28b37c;
        }
    }
    ctx->pc = 0x28B370u;
label_28b370:
    // 0x28b370: 0xc0a3486  jal         func_28D218
label_28b374:
    if (ctx->pc == 0x28B374u) {
        ctx->pc = 0x28B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B370u;
        // 0x28b374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B378u;
        goto label_28b378;
    }
    ctx->pc = 0x28B370u;
    SET_GPR_U32(ctx, 31, 0x28B378u);
    ctx->pc = 0x28B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B370u;
    // 0x28b374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28B370u, 0x28B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B378u;
label_28b378:
    // 0x28b378: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x28b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b37c:
    // 0x28b37c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28b37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_28b380:
    // 0x28b380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b384:
    // 0x28b384: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28b384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b388:
    // 0x28b388: 0x0  nop
    ctx->pc = 0x28b388u;
    // NOP
label_28b38c:
    // 0x28b38c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_28b390:
    if (ctx->pc == 0x28B390u) {
        ctx->pc = 0x28B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B38Cu;
        // 0x28b390: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B394u;
        goto label_28b394;
    }
    ctx->pc = 0x28B38Cu;
    {
        const bool branch_taken_0x28b38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b38c) {
            ctx->pc = 0x28B390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B38Cu;
            // 0x28b390: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B3A0u;
            goto label_28b3a0;
        }
    }
    ctx->pc = 0x28B394u;
label_28b394:
    // 0x28b394: 0x1260003b  beqz        $s3, . + 4 + (0x3B << 2)
label_28b398:
    if (ctx->pc == 0x28B398u) {
        ctx->pc = 0x28B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B394u;
        // 0x28b398: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B39Cu;
        goto label_28b39c;
    }
    ctx->pc = 0x28B394u;
    {
        const bool branch_taken_0x28b394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B394u;
        // 0x28b398: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b394) {
            ctx->pc = 0x28B484u;
            goto label_28b484;
        }
    }
    ctx->pc = 0x28B39Cu;
label_28b39c:
    // 0x28b39c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b3a0:
    // 0x28b3a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28b3a4:
    // 0x28b3a4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_28b3a8:
    if (ctx->pc == 0x28B3A8u) {
        ctx->pc = 0x28B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A4u;
        // 0x28b3a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3ACu;
        goto label_28b3ac;
    }
    ctx->pc = 0x28B3A4u;
    {
        const bool branch_taken_0x28b3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A4u;
        // 0x28b3a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a4) {
            ctx->pc = 0x28B3D0u;
            goto label_28b3d0;
        }
    }
    ctx->pc = 0x28B3ACu;
label_28b3ac:
    // 0x28b3ac: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x28b3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_28b3b0:
    // 0x28b3b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_28b3b4:
    if (ctx->pc == 0x28B3B4u) {
        ctx->pc = 0x28B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B0u;
        // 0x28b3b4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3B8u;
        goto label_28b3b8;
    }
    ctx->pc = 0x28B3B0u;
    {
        const bool branch_taken_0x28b3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B0u;
        // 0x28b3b4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b0) {
            ctx->pc = 0x28B3DCu;
            goto label_28b3dc;
        }
    }
    ctx->pc = 0x28B3B8u;
label_28b3b8:
    // 0x28b3b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28b3bc:
    if (ctx->pc == 0x28B3BCu) {
        ctx->pc = 0x28B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B8u;
        // 0x28b3bc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3C0u;
        goto label_28b3c0;
    }
    ctx->pc = 0x28B3B8u;
    {
        const bool branch_taken_0x28b3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B8u;
        // 0x28b3bc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b8) {
            ctx->pc = 0x28B3D8u;
            goto label_28b3d8;
        }
    }
    ctx->pc = 0x28B3C0u;
label_28b3c0:
    // 0x28b3c0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_28b3c4:
    if (ctx->pc == 0x28B3C4u) {
        ctx->pc = 0x28B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C0u;
        // 0x28b3c4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3C8u;
        goto label_28b3c8;
    }
    ctx->pc = 0x28B3C0u;
    {
        const bool branch_taken_0x28b3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b3c0) {
            ctx->pc = 0x28B3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B3C0u;
            // 0x28b3c4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B3DCu;
            goto label_28b3dc;
        }
    }
    ctx->pc = 0x28B3C8u;
label_28b3c8:
    // 0x28b3c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_28b3cc:
    if (ctx->pc == 0x28B3CCu) {
        ctx->pc = 0x28B3D0u;
        goto label_28b3d0;
    }
    ctx->pc = 0x28B3C8u;
    {
        const bool branch_taken_0x28b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b3c8) {
            ctx->pc = 0x28B3DCu;
            goto label_28b3dc;
        }
    }
    ctx->pc = 0x28B3D0u;
label_28b3d0:
    // 0x28b3d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28b3d4:
    if (ctx->pc == 0x28B3D4u) {
        ctx->pc = 0x28B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D0u;
        // 0x28b3d4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3D8u;
        goto label_28b3d8;
    }
    ctx->pc = 0x28B3D0u;
    {
        const bool branch_taken_0x28b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D0u;
        // 0x28b3d4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3d0) {
            ctx->pc = 0x28B3DCu;
            goto label_28b3dc;
        }
    }
    ctx->pc = 0x28B3D8u;
label_28b3d8:
    // 0x28b3d8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x28b3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28b3dc:
    // 0x28b3dc: 0xc0ada34  jal         func_2B68D0
label_28b3e0:
    if (ctx->pc == 0x28B3E0u) {
        ctx->pc = 0x28B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3DCu;
        // 0x28b3e0: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3E4u;
        goto label_28b3e4;
    }
    ctx->pc = 0x28B3DCu;
    SET_GPR_U32(ctx, 31, 0x28B3E4u);
    ctx->pc = 0x28B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3DCu;
    // 0x28b3e0: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28B3DCu, 0x28B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3E4u;
label_28b3e4:
    // 0x28b3e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28b3e8:
    // 0x28b3e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b3ec:
    // 0x28b3ec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28b3ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28b3f0:
    // 0x28b3f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_28b3f4:
    if (ctx->pc == 0x28B3F4u) {
        ctx->pc = 0x28B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3F0u;
        // 0x28b3f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3F8u;
        goto label_28b3f8;
    }
    ctx->pc = 0x28B3F0u;
    {
        const bool branch_taken_0x28b3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b3f0) {
            ctx->pc = 0x28B3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B3F0u;
            // 0x28b3f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B3F8u;
            goto label_28b3f8;
        }
    }
    ctx->pc = 0x28B3F8u;
label_28b3f8:
    // 0x28b3f8: 0x2010  mfhi        $a0
    ctx->pc = 0x28b3f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_28b3fc:
    // 0x28b3fc: 0xc081546  jal         func_205518
label_28b400:
    if (ctx->pc == 0x28B400u) {
        ctx->pc = 0x28B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3FCu;
        // 0x28b400: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B404u;
        goto label_28b404;
    }
    ctx->pc = 0x28B3FCu;
    SET_GPR_U32(ctx, 31, 0x28B404u);
    ctx->pc = 0x28B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3FCu;
    // 0x28b400: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28B3FCu, 0x28B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B404u;
label_28b404:
    // 0x28b404: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28b404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b408:
    // 0x28b408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b40c:
    // 0x28b40c: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x28b40cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28b410:
    // 0x28b410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b414:
    // 0x28b414: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b418:
    // 0x28b418: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x28b418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b41c:
    // 0x28b41c: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x28b41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28b420:
    // 0x28b420: 0xc0a5e30  jal         func_2978C0
label_28b424:
    if (ctx->pc == 0x28B424u) {
        ctx->pc = 0x28B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B420u;
        // 0x28b424: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B428u;
        goto label_28b428;
    }
    ctx->pc = 0x28B420u;
    SET_GPR_U32(ctx, 31, 0x28B428u);
    ctx->pc = 0x28B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B420u;
    // 0x28b424: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x28B420u, 0x28B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B428u;
label_28b428:
    // 0x28b428: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x28b428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b42c:
    // 0x28b42c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28b430:
    if (ctx->pc == 0x28B430u) {
        ctx->pc = 0x28B434u;
        goto label_28b434;
    }
    ctx->pc = 0x28B42Cu;
    {
        const bool branch_taken_0x28b42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b42c) {
            ctx->pc = 0x28B440u;
            goto label_28b440;
        }
    }
    ctx->pc = 0x28B434u;
label_28b434:
    // 0x28b434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b438:
    // 0x28b438: 0xc0a5b94  jal         func_296E50
label_28b43c:
    if (ctx->pc == 0x28B43Cu) {
        ctx->pc = 0x28B440u;
        goto label_28b440;
    }
    ctx->pc = 0x28B438u;
    SET_GPR_U32(ctx, 31, 0x28B440u);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28B438u, 0x28B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B440u;
label_28b440:
    // 0x28b440: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b444:
    // 0x28b444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b448:
    // 0x28b448: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x28b448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28b44c:
    // 0x28b44c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b450:
    // 0x28b450: 0xc0a60f8  jal         func_2983E0
label_28b454:
    if (ctx->pc == 0x28B454u) {
        ctx->pc = 0x28B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B450u;
        // 0x28b454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B458u;
        goto label_28b458;
    }
    ctx->pc = 0x28B450u;
    SET_GPR_U32(ctx, 31, 0x28B458u);
    ctx->pc = 0x28B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B450u;
    // 0x28b454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x28B450u, 0x28B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B458u;
label_28b458:
    // 0x28b458: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28b458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b45c:
    // 0x28b45c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b460:
    // 0x28b460: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28b464:
    // 0x28b464: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b468:
    // 0x28b468: 0x206380a  movz        $a3, $s0, $a2
    ctx->pc = 0x28b468u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_28b46c:
    // 0x28b46c: 0xc0a900a  jal         func_2A4028
label_28b470:
    if (ctx->pc == 0x28B470u) {
        ctx->pc = 0x28B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B46Cu;
        // 0x28b470: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B474u;
        goto label_28b474;
    }
    ctx->pc = 0x28B46Cu;
    SET_GPR_U32(ctx, 31, 0x28B474u);
    ctx->pc = 0x28B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B46Cu;
    // 0x28b470: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28B46Cu, 0x28B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B474u;
label_28b474:
    // 0x28b474: 0xc0a2572  jal         func_2895C8
label_28b478:
    if (ctx->pc == 0x28B478u) {
        ctx->pc = 0x28B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B474u;
        // 0x28b478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B47Cu;
        goto label_28b47c;
    }
    ctx->pc = 0x28B474u;
    SET_GPR_U32(ctx, 31, 0x28B47Cu);
    ctx->pc = 0x28B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B474u;
    // 0x28b478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x28B474u, 0x28B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B47Cu;
label_28b47c:
    // 0x28b47c: 0x10000112  b           . + 4 + (0x112 << 2)
label_28b480:
    if (ctx->pc == 0x28B480u) {
        ctx->pc = 0x28B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B47Cu;
        // 0x28b480: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B484u;
        goto label_28b484;
    }
    ctx->pc = 0x28B47Cu;
    {
        const bool branch_taken_0x28b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B47Cu;
        // 0x28b480: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b47c) {
            ctx->pc = 0x28B8C8u;
            goto label_28b8c8;
        }
    }
    ctx->pc = 0x28B484u;
label_28b484:
    // 0x28b484: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28b484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b488:
    // 0x28b488: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28b488u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b48c:
    // 0x28b48c: 0x0  nop
    ctx->pc = 0x28b48cu;
    // NOP
label_28b490:
    // 0x28b490: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_28b494:
    if (ctx->pc == 0x28B494u) {
        ctx->pc = 0x28B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B490u;
        // 0x28b494: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B498u;
        goto label_28b498;
    }
    ctx->pc = 0x28B490u;
    {
        const bool branch_taken_0x28b490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B490u;
        // 0x28b494: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b490) {
            ctx->pc = 0x28B4B8u;
            goto label_28b4b8;
        }
    }
    ctx->pc = 0x28B498u;
label_28b498:
    // 0x28b498: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28b498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b49c:
    // 0x28b49c: 0x0  nop
    ctx->pc = 0x28b49cu;
    // NOP
label_28b4a0:
    // 0x28b4a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b4a4:
    if (ctx->pc == 0x28B4A4u) {
        ctx->pc = 0x28B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A0u;
        // 0x28b4a4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4A8u;
        goto label_28b4a8;
    }
    ctx->pc = 0x28B4A0u;
    {
        const bool branch_taken_0x28b4a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A0u;
        // 0x28b4a4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4a0) {
            ctx->pc = 0x28B4B8u;
            goto label_28b4b8;
        }
    }
    ctx->pc = 0x28B4A8u;
label_28b4a8:
    // 0x28b4a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28b4a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b4ac:
    // 0x28b4ac: 0x0  nop
    ctx->pc = 0x28b4acu;
    // NOP
label_28b4b0:
    // 0x28b4b0: 0x45030105  bc1tl       . + 4 + (0x105 << 2)
label_28b4b4:
    if (ctx->pc == 0x28B4B4u) {
        ctx->pc = 0x28B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4B0u;
        // 0x28b4b4: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4B8u;
        goto label_28b4b8;
    }
    ctx->pc = 0x28B4B0u;
    {
        const bool branch_taken_0x28b4b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b4b0) {
            ctx->pc = 0x28B4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B4B0u;
            // 0x28b4b4: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B8C8u;
            goto label_28b8c8;
        }
    }
    ctx->pc = 0x28B4B8u;
label_28b4b8:
    // 0x28b4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b4bc:
    // 0x28b4bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b4c0:
    // 0x28b4c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28b4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b4c4:
    // 0x28b4c4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x28b4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b4c8:
    // 0x28b4c8: 0xc0a2874  jal         func_28A1D0
label_28b4cc:
    if (ctx->pc == 0x28B4CCu) {
        ctx->pc = 0x28B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4C8u;
        // 0x28b4cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4D0u;
        goto label_28b4d0;
    }
    ctx->pc = 0x28B4C8u;
    SET_GPR_U32(ctx, 31, 0x28B4D0u);
    ctx->pc = 0x28B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4C8u;
    // 0x28b4cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1D0u, 0x28B4C8u, 0x28B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4D0u;
label_28b4d0:
    // 0x28b4d0: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_28b4d4:
    if (ctx->pc == 0x28B4D4u) {
        ctx->pc = 0x28B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D0u;
        // 0x28b4d4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4D8u;
        goto label_28b4d8;
    }
    ctx->pc = 0x28B4D0u;
    {
        const bool branch_taken_0x28b4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D0u;
        // 0x28b4d4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d0) {
            ctx->pc = 0x28B668u;
            goto label_28b668;
        }
    }
    ctx->pc = 0x28B4D8u;
label_28b4d8:
    // 0x28b4d8: 0xc7828a18  lwc1        $f2, -0x75E8($gp)
    ctx->pc = 0x28b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b4dc:
    // 0x28b4dc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b4e0:
    // 0x28b4e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28b4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28b4e4:
    // 0x28b4e4: 0xc6440030  lwc1        $f4, 0x30($s2)
    ctx->pc = 0x28b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28b4e8:
    // 0x28b4e8: 0xc6460034  lwc1        $f6, 0x34($s2)
    ctx->pc = 0x28b4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28b4ec:
    // 0x28b4ec: 0xc6450038  lwc1        $f5, 0x38($s2)
    ctx->pc = 0x28b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28b4f0:
    // 0x28b4f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b4f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b4f4:
    // 0x28b4f4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x28b4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_28b4f8:
    // 0x28b4f8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x28b4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_28b4fc:
    // 0x28b4fc: 0xc7878a1c  lwc1        $f7, -0x75E4($gp)
    ctx->pc = 0x28b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28b500:
    // 0x28b500: 0xc7898a20  lwc1        $f9, -0x75E0($gp)
    ctx->pc = 0x28b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_28b504:
    // 0x28b504: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x28b504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28b508:
    // 0x28b508: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b50c:
    // 0x28b50c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b510:
    // 0x28b510: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28b510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28b514:
    // 0x28b514: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b518:
    // 0x28b518: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x28b518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28b51c:
    // 0x28b51c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b520:
    // 0x28b520: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x28b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b524:
    // 0x28b524: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28b524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28b528:
    // 0x28b528: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b52c:
    // 0x28b52c: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x28b52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28b530:
    // 0x28b530: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x28b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28b534:
    // 0x28b534: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b538:
    // 0x28b538: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x28b538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_28b53c:
    // 0x28b53c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b540:
    // 0x28b540: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x28b540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_28b544:
    // 0x28b544: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x28b544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_28b548:
    // 0x28b548: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28b548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28b54c:
    // 0x28b54c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28b54cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28b550:
    // 0x28b550: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x28b550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_28b554:
    // 0x28b554: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x28b554u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_28b558:
    // 0x28b558: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x28b558u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_28b55c:
    // 0x28b55c: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x28b55cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_28b560:
    // 0x28b560: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x28b560u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28b564:
    // 0x28b564: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x28b564u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_28b568:
    // 0x28b568: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b56c:
    // 0x28b56c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28b56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28b570:
    // 0x28b570: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x28b570u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_28b574:
    // 0x28b574: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x28b574u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_28b578:
    // 0x28b578: 0xe6460034  swc1        $f6, 0x34($s2)
    ctx->pc = 0x28b578u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28b57c:
    // 0x28b57c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x28b57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_28b580:
    // 0x28b580: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b584:
    // 0x28b584: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x28b584u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_28b588:
    // 0x28b588: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28b588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28b58c:
    // 0x28b58c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x28b58cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_28b590:
    // 0x28b590: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x28b590u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_28b594:
    // 0x28b594: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x28b594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28b598:
    // 0x28b598: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28b598u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28b59c:
    // 0x28b59c: 0x46092034  c.lt.s      $f4, $f9
    ctx->pc = 0x28b59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b5a0:
    // 0x28b5a0: 0x0  nop
    ctx->pc = 0x28b5a0u;
    // NOP
label_28b5a4:
    // 0x28b5a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b5a8:
    if (ctx->pc == 0x28B5A8u) {
        ctx->pc = 0x28B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5A4u;
        // 0x28b5a8: 0xe6450038  swc1        $f5, 0x38($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5ACu;
        goto label_28b5ac;
    }
    ctx->pc = 0x28B5A4u;
    {
        const bool branch_taken_0x28b5a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5A4u;
        // 0x28b5a8: 0xe6450038  swc1        $f5, 0x38($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5a4) {
            ctx->pc = 0x28B5BCu;
            goto label_28b5bc;
        }
    }
    ctx->pc = 0x28B5ACu;
label_28b5ac:
    // 0x28b5ac: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x28b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_28b5b0:
    // 0x28b5b0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x28b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_28b5b4:
    // 0x28b5b4: 0x10000024  b           . + 4 + (0x24 << 2)
label_28b5b8:
    if (ctx->pc == 0x28B5B8u) {
        ctx->pc = 0x28B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5B4u;
        // 0x28b5b8: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5BCu;
        goto label_28b5bc;
    }
    ctx->pc = 0x28B5B4u;
    {
        const bool branch_taken_0x28b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5B4u;
        // 0x28b5b8: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5b4) {
            ctx->pc = 0x28B648u;
            goto label_28b648;
        }
    }
    ctx->pc = 0x28B5BCu;
label_28b5bc:
    // 0x28b5bc: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28b5c0:
    // 0x28b5c0: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
label_28b5c4:
    if (ctx->pc == 0x28B5C4u) {
        ctx->pc = 0x28B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5C0u;
        // 0x28b5c4: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5C8u;
        goto label_28b5c8;
    }
    ctx->pc = 0x28B5C0u;
    {
        const bool branch_taken_0x28b5c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5C0u;
        // 0x28b5c4: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5c0) {
            ctx->pc = 0x28B648u;
            goto label_28b648;
        }
    }
    ctx->pc = 0x28B5C8u;
label_28b5c8:
    // 0x28b5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28b5cc:
    // 0x28b5cc: 0xc7818a24  lwc1        $f1, -0x75DC($gp)
    ctx->pc = 0x28b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b5d0:
    // 0x28b5d0: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x28b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_28b5d4:
    // 0x28b5d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28b5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28b5d8:
    // 0x28b5d8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28b5dc:
    // 0x28b5dc: 0xae4400d4  sw          $a0, 0xD4($s2)
    ctx->pc = 0x28b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 4));
label_28b5e0:
    // 0x28b5e0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x28b5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_28b5e4:
    // 0x28b5e4: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_28b5e8:
    if (ctx->pc == 0x28B5E8u) {
        ctx->pc = 0x28B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5E4u;
        // 0x28b5e8: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5ECu;
        goto label_28b5ec;
    }
    ctx->pc = 0x28B5E4u;
    {
        const bool branch_taken_0x28b5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5E4u;
        // 0x28b5e8: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5e4) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B5ECu;
label_28b5ec:
    // 0x28b5ec: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x28b5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_28b5f0:
    // 0x28b5f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28b5f4:
    if (ctx->pc == 0x28B5F4u) {
        ctx->pc = 0x28B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F0u;
        // 0x28b5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5F8u;
        goto label_28b5f8;
    }
    ctx->pc = 0x28B5F0u;
    {
        const bool branch_taken_0x28b5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F0u;
        // 0x28b5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5f0) {
            ctx->pc = 0x28B608u;
            goto label_28b608;
        }
    }
    ctx->pc = 0x28B5F8u;
label_28b5f8:
    // 0x28b5f8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_28b5fc:
    if (ctx->pc == 0x28B5FCu) {
        ctx->pc = 0x28B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F8u;
        // 0x28b5fc: 0x240400b3  addiu       $a0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B600u;
        goto label_28b600;
    }
    ctx->pc = 0x28B5F8u;
    {
        const bool branch_taken_0x28b5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F8u;
        // 0x28b5fc: 0x240400b3  addiu       $a0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5f8) {
            ctx->pc = 0x28B630u;
            goto label_28b630;
        }
    }
    ctx->pc = 0x28B600u;
label_28b600:
    // 0x28b600: 0x10000012  b           . + 4 + (0x12 << 2)
label_28b604:
    if (ctx->pc == 0x28B604u) {
        ctx->pc = 0x28B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B600u;
        // 0x28b604: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B608u;
        goto label_28b608;
    }
    ctx->pc = 0x28B600u;
    {
        const bool branch_taken_0x28b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B600u;
        // 0x28b604: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b600) {
            ctx->pc = 0x28B64Cu;
            goto label_28b64c;
        }
    }
    ctx->pc = 0x28B608u;
label_28b608:
    // 0x28b608: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28b60c:
    // 0x28b60c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_28b610:
    if (ctx->pc == 0x28B610u) {
        ctx->pc = 0x28B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B60Cu;
        // 0x28b610: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B614u;
        goto label_28b614;
    }
    ctx->pc = 0x28B60Cu;
    {
        const bool branch_taken_0x28b60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B60Cu;
        // 0x28b610: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b60c) {
            ctx->pc = 0x28B62Cu;
            goto label_28b62c;
        }
    }
    ctx->pc = 0x28B614u;
label_28b614:
    // 0x28b614: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_28b618:
    if (ctx->pc == 0x28B618u) {
        ctx->pc = 0x28B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B614u;
        // 0x28b618: 0x240400b6  addiu       $a0, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B61Cu;
        goto label_28b61c;
    }
    ctx->pc = 0x28B614u;
    {
        const bool branch_taken_0x28b614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B614u;
        // 0x28b618: 0x240400b6  addiu       $a0, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b614) {
            ctx->pc = 0x28B640u;
            goto label_28b640;
        }
    }
    ctx->pc = 0x28B61Cu;
label_28b61c:
    // 0x28b61c: 0x1000000b  b           . + 4 + (0xB << 2)
label_28b620:
    if (ctx->pc == 0x28B620u) {
        ctx->pc = 0x28B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B61Cu;
        // 0x28b620: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B624u;
        goto label_28b624;
    }
    ctx->pc = 0x28B61Cu;
    {
        const bool branch_taken_0x28b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B61Cu;
        // 0x28b620: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b61c) {
            ctx->pc = 0x28B64Cu;
            goto label_28b64c;
        }
    }
    ctx->pc = 0x28B624u;
label_28b624:
    // 0x28b624: 0x10000002  b           . + 4 + (0x2 << 2)
label_28b628:
    if (ctx->pc == 0x28B628u) {
        ctx->pc = 0x28B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B624u;
        // 0x28b628: 0x240400b4  addiu       $a0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B62Cu;
        goto label_28b62c;
    }
    ctx->pc = 0x28B624u;
    {
        const bool branch_taken_0x28b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B624u;
        // 0x28b628: 0x240400b4  addiu       $a0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b624) {
            ctx->pc = 0x28B630u;
            goto label_28b630;
        }
    }
    ctx->pc = 0x28B62Cu;
label_28b62c:
    // 0x28b62c: 0x240400b5  addiu       $a0, $zero, 0xB5
    ctx->pc = 0x28b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_28b630:
    // 0x28b630: 0xc081546  jal         func_205518
label_28b634:
    if (ctx->pc == 0x28B634u) {
        ctx->pc = 0x28B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B630u;
        // 0x28b634: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B638u;
        goto label_28b638;
    }
    ctx->pc = 0x28B630u;
    SET_GPR_U32(ctx, 31, 0x28B638u);
    ctx->pc = 0x28B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B630u;
    // 0x28b634: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28B630u, 0x28B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B638u;
label_28b638:
    // 0x28b638: 0x10000004  b           . + 4 + (0x4 << 2)
label_28b63c:
    if (ctx->pc == 0x28B63Cu) {
        ctx->pc = 0x28B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B638u;
        // 0x28b63c: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B640u;
        goto label_28b640;
    }
    ctx->pc = 0x28B638u;
    {
        const bool branch_taken_0x28b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B638u;
        // 0x28b63c: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b638) {
            ctx->pc = 0x28B64Cu;
            goto label_28b64c;
        }
    }
    ctx->pc = 0x28B640u;
label_28b640:
    // 0x28b640: 0xc081546  jal         func_205518
label_28b644:
    if (ctx->pc == 0x28B644u) {
        ctx->pc = 0x28B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B640u;
        // 0x28b644: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B648u;
        goto label_28b648;
    }
    ctx->pc = 0x28B640u;
    SET_GPR_U32(ctx, 31, 0x28B648u);
    ctx->pc = 0x28B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B640u;
    // 0x28b644: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28B640u, 0x28B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B648u;
label_28b648:
    // 0x28b648: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x28b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b64c:
    // 0x28b64c: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28b650:
    // 0x28b650: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x28b650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28b654:
    // 0x28b654: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x28b654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b658:
    // 0x28b658: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x28b658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28b65c:
    // 0x28b65c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x28b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b660:
    // 0x28b660: 0x1000006d  b           . + 4 + (0x6D << 2)
label_28b664:
    if (ctx->pc == 0x28B664u) {
        ctx->pc = 0x28B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B660u;
        // 0x28b664: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B668u;
        goto label_28b668;
    }
    ctx->pc = 0x28B660u;
    {
        const bool branch_taken_0x28b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B660u;
        // 0x28b664: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b660) {
            ctx->pc = 0x28B818u;
            goto label_28b818;
        }
    }
    ctx->pc = 0x28B668u;
label_28b668:
    // 0x28b668: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b66c:
    // 0x28b66c: 0xc6470018  lwc1        $f7, 0x18($s2)
    ctx->pc = 0x28b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28b670:
    // 0x28b670: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x28b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b674:
    // 0x28b674: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x28b674u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_28b678:
    // 0x28b678: 0xc645001c  lwc1        $f5, 0x1C($s2)
    ctx->pc = 0x28b678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28b67c:
    // 0x28b67c: 0xc7818a28  lwc1        $f1, -0x75D8($gp)
    ctx->pc = 0x28b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b680:
    // 0x28b680: 0xc6440034  lwc1        $f4, 0x34($s2)
    ctx->pc = 0x28b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28b684:
    // 0x28b684: 0xe6470018  swc1        $f7, 0x18($s2)
    ctx->pc = 0x28b684u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28b688:
    // 0x28b688: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28b688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28b68c:
    // 0x28b68c: 0xc6460020  lwc1        $f6, 0x20($s2)
    ctx->pc = 0x28b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28b690:
    // 0x28b690: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b694:
    // 0x28b694: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28b694u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28b698:
    // 0x28b698: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x28b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28b69c:
    // 0x28b69c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x28b69cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_28b6a0:
    // 0x28b6a0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b6a4:
    // 0x28b6a4: 0xc7808a2c  lwc1        $f0, -0x75D4($gp)
    ctx->pc = 0x28b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b6a8:
    // 0x28b6a8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28b6ac:
    // 0x28b6ac: 0xe645001c  swc1        $f5, 0x1C($s2)
    ctx->pc = 0x28b6acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28b6b0:
    // 0x28b6b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28b6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28b6b4:
    // 0x28b6b4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x28b6b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_28b6b8:
    // 0x28b6b8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x28b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b6bc:
    // 0x28b6bc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x28b6bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_28b6c0:
    // 0x28b6c0: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x28b6c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_28b6c4:
    // 0x28b6c4: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x28b6c4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_28b6c8:
    // 0x28b6c8: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x28b6c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28b6cc:
    // 0x28b6cc: 0xe6440034  swc1        $f4, 0x34($s2)
    ctx->pc = 0x28b6ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28b6d0:
    // 0x28b6d0: 0xe6460020  swc1        $f6, 0x20($s2)
    ctx->pc = 0x28b6d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28b6d4:
    // 0x28b6d4: 0xe4470030  swc1        $f7, 0x30($v0)
    ctx->pc = 0x28b6d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_28b6d8:
    // 0x28b6d8: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x28b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b6dc:
    // 0x28b6dc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x28b6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_28b6e0:
    // 0x28b6e0: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x28b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b6e4:
    // 0x28b6e4: 0xc0ada34  jal         func_2B68D0
label_28b6e8:
    if (ctx->pc == 0x28B6E8u) {
        ctx->pc = 0x28B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6E4u;
        // 0x28b6e8: 0xe4410038  swc1        $f1, 0x38($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6ECu;
        goto label_28b6ec;
    }
    ctx->pc = 0x28B6E4u;
    SET_GPR_U32(ctx, 31, 0x28B6ECu);
    ctx->pc = 0x28B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6E4u;
    // 0x28b6e8: 0xe4410038  swc1        $f1, 0x38($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28B6E4u, 0x28B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6ECu;
label_28b6ec:
    // 0x28b6ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28b6f0:
    if (ctx->pc == 0x28B6F0u) {
        ctx->pc = 0x28B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6ECu;
        // 0x28b6f0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6F4u;
        goto label_28b6f4;
    }
    ctx->pc = 0x28B6ECu;
    {
        const bool branch_taken_0x28b6ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6ECu;
        // 0x28b6f0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6ec) {
            ctx->pc = 0x28B700u;
            goto label_28b700;
        }
    }
    ctx->pc = 0x28B6F4u;
label_28b6f4:
    // 0x28b6f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b6f8:
    // 0x28b6f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_28b6fc:
    if (ctx->pc == 0x28B6FCu) {
        ctx->pc = 0x28B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6F8u;
        // 0x28b6fc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B700u;
        goto label_28b700;
    }
    ctx->pc = 0x28B6F8u;
    {
        const bool branch_taken_0x28b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6F8u;
        // 0x28b6fc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6f8) {
            ctx->pc = 0x28B718u;
            goto label_28b718;
        }
    }
    ctx->pc = 0x28B700u;
label_28b700:
    // 0x28b700: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28b700u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b704:
    // 0x28b704: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b708:
    // 0x28b708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28b70c:
    // 0x28b70c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b710:
    // 0x28b710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28b710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28b714:
    // 0x28b714: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28b714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28b718:
    // 0x28b718: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28b718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_28b71c:
    // 0x28b71c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b720:
    // 0x28b720: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28b720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28b724:
    // 0x28b724: 0xc0ada34  jal         func_2B68D0
label_28b728:
    if (ctx->pc == 0x28B728u) {
        ctx->pc = 0x28B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B724u;
        // 0x28b728: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B72Cu;
        goto label_28b72c;
    }
    ctx->pc = 0x28B724u;
    SET_GPR_U32(ctx, 31, 0x28B72Cu);
    ctx->pc = 0x28B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B724u;
    // 0x28b728: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28B724u, 0x28B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B72Cu;
label_28b72c:
    // 0x28b72c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28b730:
    if (ctx->pc == 0x28B730u) {
        ctx->pc = 0x28B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B72Cu;
        // 0x28b730: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B734u;
        goto label_28b734;
    }
    ctx->pc = 0x28B72Cu;
    {
        const bool branch_taken_0x28b72c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B72Cu;
        // 0x28b730: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b72c) {
            ctx->pc = 0x28B740u;
            goto label_28b740;
        }
    }
    ctx->pc = 0x28B734u;
label_28b734:
    // 0x28b734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b738:
    // 0x28b738: 0x10000007  b           . + 4 + (0x7 << 2)
label_28b73c:
    if (ctx->pc == 0x28B73Cu) {
        ctx->pc = 0x28B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B738u;
        // 0x28b73c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B740u;
        goto label_28b740;
    }
    ctx->pc = 0x28B738u;
    {
        const bool branch_taken_0x28b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B738u;
        // 0x28b73c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b738) {
            ctx->pc = 0x28B758u;
            goto label_28b758;
        }
    }
    ctx->pc = 0x28B740u;
label_28b740:
    // 0x28b740: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28b740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b744:
    // 0x28b744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b748:
    // 0x28b748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28b74c:
    // 0x28b74c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b750:
    // 0x28b750: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28b750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28b754:
    // 0x28b754: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28b754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28b758:
    // 0x28b758: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_28b75c:
    // 0x28b75c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b760:
    // 0x28b760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28b760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28b764:
    // 0x28b764: 0xc0ada34  jal         func_2B68D0
label_28b768:
    if (ctx->pc == 0x28B768u) {
        ctx->pc = 0x28B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B764u;
        // 0x28b768: 0xe4800068  swc1        $f0, 0x68($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B76Cu;
        goto label_28b76c;
    }
    ctx->pc = 0x28B764u;
    SET_GPR_U32(ctx, 31, 0x28B76Cu);
    ctx->pc = 0x28B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B764u;
    // 0x28b768: 0xe4800068  swc1        $f0, 0x68($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28B764u, 0x28B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B76Cu;
label_28b76c:
    // 0x28b76c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_28b770:
    if (ctx->pc == 0x28B770u) {
        ctx->pc = 0x28B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B76Cu;
        // 0x28b770: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B774u;
        goto label_28b774;
    }
    ctx->pc = 0x28B76Cu;
    {
        const bool branch_taken_0x28b76c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B76Cu;
        // 0x28b770: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b76c) {
            ctx->pc = 0x28B784u;
            goto label_28b784;
        }
    }
    ctx->pc = 0x28B774u;
label_28b774:
    // 0x28b774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28b774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28b778:
    // 0x28b778: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28b778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_28b77c:
    // 0x28b77c: 0x10000008  b           . + 4 + (0x8 << 2)
label_28b780:
    if (ctx->pc == 0x28B780u) {
        ctx->pc = 0x28B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B77Cu;
        // 0x28b780: 0xc4810068  lwc1        $f1, 0x68($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B784u;
        goto label_28b784;
    }
    ctx->pc = 0x28B77Cu;
    {
        const bool branch_taken_0x28b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B77Cu;
        // 0x28b780: 0xc4810068  lwc1        $f1, 0x68($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b77c) {
            ctx->pc = 0x28B7A0u;
            goto label_28b7a0;
        }
    }
    ctx->pc = 0x28B784u;
label_28b784:
    // 0x28b784: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28b784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b788:
    // 0x28b788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b78c:
    // 0x28b78c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28b790:
    // 0x28b790: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28b790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28b794:
    // 0x28b794: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28b794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_28b798:
    // 0x28b798: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28b798u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28b79c:
    // 0x28b79c: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x28b79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b7a0:
    // 0x28b7a0: 0xc48c0064  lwc1        $f12, 0x64($a0)
    ctx->pc = 0x28b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28b7a4:
    // 0x28b7a4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28b7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_28b7a8:
    // 0x28b7a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b7ac:
    // 0x28b7ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28b7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28b7b0:
    // 0x28b7b0: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x28b7b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_28b7b4:
    // 0x28b7b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28b7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28b7b8:
    // 0x28b7b8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28b7b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_28b7bc:
    // 0x28b7bc: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x28b7bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28b7c0:
    // 0x28b7c0: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x28b7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_28b7c4:
    // 0x28b7c4: 0xc0b9182  jal         func_2E4608
label_28b7c8:
    if (ctx->pc == 0x28B7C8u) {
        ctx->pc = 0x28B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7C4u;
        // 0x28b7c8: 0x46026300  add.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7CCu;
        goto label_28b7cc;
    }
    ctx->pc = 0x28B7C4u;
    SET_GPR_U32(ctx, 31, 0x28B7CCu);
    ctx->pc = 0x28B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7C4u;
    // 0x28b7c8: 0x46026300  add.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28B7C4u, 0x28B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7CCu;
label_28b7cc:
    // 0x28b7cc: 0xc0b5e96  jal         func_2D7A58
label_28b7d0:
    if (ctx->pc == 0x28B7D0u) {
        ctx->pc = 0x28B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7CCu;
        // 0x28b7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7D4u;
        goto label_28b7d4;
    }
    ctx->pc = 0x28B7CCu;
    SET_GPR_U32(ctx, 31, 0x28B7D4u);
    ctx->pc = 0x28B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7CCu;
    // 0x28b7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x28B7CCu, 0x28B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7D4u;
label_28b7d4:
    // 0x28b7d4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x28b7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_28b7d8:
    // 0x28b7d8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x28b7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_28b7dc:
    // 0x28b7dc: 0xc0b8d3a  jal         func_2E34E8
label_28b7e0:
    if (ctx->pc == 0x28B7E0u) {
        ctx->pc = 0x28B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7DCu;
        // 0x28b7e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7E4u;
        goto label_28b7e4;
    }
    ctx->pc = 0x28B7DCu;
    SET_GPR_U32(ctx, 31, 0x28B7E4u);
    ctx->pc = 0x28B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7DCu;
    // 0x28b7e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28B7DCu, 0x28B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7E4u;
label_28b7e4:
    // 0x28b7e4: 0xc0b8e84  jal         func_2E3A10
label_28b7e8:
    if (ctx->pc == 0x28B7E8u) {
        ctx->pc = 0x28B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7E4u;
        // 0x28b7e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7ECu;
        goto label_28b7ec;
    }
    ctx->pc = 0x28B7E4u;
    SET_GPR_U32(ctx, 31, 0x28B7ECu);
    ctx->pc = 0x28B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7E4u;
    // 0x28b7e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28B7E4u, 0x28B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7ECu;
label_28b7ec:
    // 0x28b7ec: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28b7f0:
    // 0x28b7f0: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x28b7f0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_28b7f4:
    // 0x28b7f4: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x28b7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b7f8:
    // 0x28b7f8: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x28b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b7fc:
    // 0x28b7fc: 0xc4a2006c  lwc1        $f2, 0x6C($a1)
    ctx->pc = 0x28b7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b800:
    // 0x28b800: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x28b800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_28b804:
    // 0x28b804: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x28b804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_28b808:
    // 0x28b808: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x28b808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_28b80c:
    // 0x28b80c: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x28b80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
label_28b810:
    // 0x28b810: 0xe4a10068  swc1        $f1, 0x68($a1)
    ctx->pc = 0x28b810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
label_28b814:
    // 0x28b814: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x28b814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
label_28b818:
    // 0x28b818: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x28b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b81c:
    // 0x28b81c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28b820:
    if (ctx->pc == 0x28B820u) {
        ctx->pc = 0x28B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B81Cu;
        // 0x28b820: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B824u;
        goto label_28b824;
    }
    ctx->pc = 0x28B81Cu;
    {
        const bool branch_taken_0x28b81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B81Cu;
        // 0x28b820: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b81c) {
            ctx->pc = 0x28B834u;
            goto label_28b834;
        }
    }
    ctx->pc = 0x28B824u;
label_28b824:
    // 0x28b824: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x28b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28b828:
    // 0x28b828: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x28b828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_28b82c:
    // 0x28b82c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_28b830:
    if (ctx->pc == 0x28B830u) {
        ctx->pc = 0x28B834u;
        goto label_28b834;
    }
    ctx->pc = 0x28B82Cu;
    {
        const bool branch_taken_0x28b82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b82c) {
            ctx->pc = 0x28B8BCu;
            goto label_28b8bc;
        }
    }
    ctx->pc = 0x28B834u;
label_28b834:
    // 0x28b834: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28b834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b838:
    // 0x28b838: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28b83c:
    // 0x28b83c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_28b840:
    if (ctx->pc == 0x28B840u) {
        ctx->pc = 0x28B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B83Cu;
        // 0x28b840: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B844u;
        goto label_28b844;
    }
    ctx->pc = 0x28B83Cu;
    {
        const bool branch_taken_0x28b83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B83Cu;
        // 0x28b840: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b83c) {
            ctx->pc = 0x28B878u;
            goto label_28b878;
        }
    }
    ctx->pc = 0x28B844u;
label_28b844:
    // 0x28b844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28b848:
    if (ctx->pc == 0x28B848u) {
        ctx->pc = 0x28B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B844u;
        // 0x28b848: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B84Cu;
        goto label_28b84c;
    }
    ctx->pc = 0x28B844u;
    {
        const bool branch_taken_0x28b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B844u;
        // 0x28b848: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b844) {
            ctx->pc = 0x28B85Cu;
            goto label_28b85c;
        }
    }
    ctx->pc = 0x28B84Cu;
label_28b84c:
    // 0x28b84c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_28b850:
    if (ctx->pc == 0x28B850u) {
        ctx->pc = 0x28B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B84Cu;
        // 0x28b850: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B854u;
        goto label_28b854;
    }
    ctx->pc = 0x28B84Cu;
    {
        const bool branch_taken_0x28b84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B84Cu;
        // 0x28b850: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b84c) {
            ctx->pc = 0x28B870u;
            goto label_28b870;
        }
    }
    ctx->pc = 0x28B854u;
label_28b854:
    // 0x28b854: 0x1000000b  b           . + 4 + (0xB << 2)
label_28b858:
    if (ctx->pc == 0x28B858u) {
        ctx->pc = 0x28B85Cu;
        goto label_28b85c;
    }
    ctx->pc = 0x28B854u;
    {
        const bool branch_taken_0x28b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b854) {
            ctx->pc = 0x28B884u;
            goto label_28b884;
        }
    }
    ctx->pc = 0x28B85Cu;
label_28b85c:
    // 0x28b85c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28b860:
    // 0x28b860: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28b864:
    if (ctx->pc == 0x28B864u) {
        ctx->pc = 0x28B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B860u;
        // 0x28b864: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B868u;
        goto label_28b868;
    }
    ctx->pc = 0x28B860u;
    {
        const bool branch_taken_0x28b860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B860u;
        // 0x28b864: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b860) {
            ctx->pc = 0x28B880u;
            goto label_28b880;
        }
    }
    ctx->pc = 0x28B868u;
label_28b868:
    // 0x28b868: 0x10000006  b           . + 4 + (0x6 << 2)
label_28b86c:
    if (ctx->pc == 0x28B86Cu) {
        ctx->pc = 0x28B870u;
        goto label_28b870;
    }
    ctx->pc = 0x28B868u;
    {
        const bool branch_taken_0x28b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b868) {
            ctx->pc = 0x28B884u;
            goto label_28b884;
        }
    }
    ctx->pc = 0x28B870u;
label_28b870:
    // 0x28b870: 0x10000004  b           . + 4 + (0x4 << 2)
label_28b874:
    if (ctx->pc == 0x28B874u) {
        ctx->pc = 0x28B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B870u;
        // 0x28b874: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B878u;
        goto label_28b878;
    }
    ctx->pc = 0x28B870u;
    {
        const bool branch_taken_0x28b870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B870u;
        // 0x28b874: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b870) {
            ctx->pc = 0x28B884u;
            goto label_28b884;
        }
    }
    ctx->pc = 0x28B878u;
label_28b878:
    // 0x28b878: 0x10000002  b           . + 4 + (0x2 << 2)
label_28b87c:
    if (ctx->pc == 0x28B87Cu) {
        ctx->pc = 0x28B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B878u;
        // 0x28b87c: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B880u;
        goto label_28b880;
    }
    ctx->pc = 0x28B878u;
    {
        const bool branch_taken_0x28b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B878u;
        // 0x28b87c: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b878) {
            ctx->pc = 0x28B884u;
            goto label_28b884;
        }
    }
    ctx->pc = 0x28B880u;
label_28b880:
    // 0x28b880: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x28b880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28b884:
    // 0x28b884: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_28b888:
    if (ctx->pc == 0x28B888u) {
        ctx->pc = 0x28B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B884u;
        // 0x28b888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B88Cu;
        goto label_28b88c;
    }
    ctx->pc = 0x28B884u;
    {
        const bool branch_taken_0x28b884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B884u;
        // 0x28b888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b884) {
            ctx->pc = 0x28B8A4u;
            goto label_28b8a4;
        }
    }
    ctx->pc = 0x28B88Cu;
label_28b88c:
    // 0x28b88c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b890:
    // 0x28b890: 0xc0a5b94  jal         func_296E50
label_28b894:
    if (ctx->pc == 0x28B894u) {
        ctx->pc = 0x28B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B890u;
        // 0x28b894: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B898u;
        goto label_28b898;
    }
    ctx->pc = 0x28B890u;
    SET_GPR_U32(ctx, 31, 0x28B898u);
    ctx->pc = 0x28B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B890u;
    // 0x28b894: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28B890u, 0x28B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B898u;
label_28b898:
    // 0x28b898: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b89c:
    // 0x28b89c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x28b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_28b8a0:
    // 0x28b8a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b8a4:
    // 0x28b8a4: 0x264400cc  addiu       $a0, $s2, 0xCC
    ctx->pc = 0x28b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_28b8a8:
    // 0x28b8a8: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x28b8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28b8ac:
    // 0x28b8ac: 0xc0a6098  jal         func_298260
label_28b8b0:
    if (ctx->pc == 0x28B8B0u) {
        ctx->pc = 0x28B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8ACu;
        // 0x28b8b0: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8B4u;
        goto label_28b8b4;
    }
    ctx->pc = 0x28B8ACu;
    SET_GPR_U32(ctx, 31, 0x28B8B4u);
    ctx->pc = 0x28B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8ACu;
    // 0x28b8b0: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298260u, 0x28B8ACu, 0x28B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8B4u;
label_28b8b4:
    // 0x28b8b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b8b8:
    if (ctx->pc == 0x28B8B8u) {
        ctx->pc = 0x28B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8B4u;
        // 0x28b8b8: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8BCu;
        goto label_28b8bc;
    }
    ctx->pc = 0x28B8B4u;
    {
        const bool branch_taken_0x28b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8B4u;
        // 0x28b8b8: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8b4) {
            ctx->pc = 0x28B8C4u;
            goto label_28b8c4;
        }
    }
    ctx->pc = 0x28B8BCu;
label_28b8bc:
    // 0x28b8bc: 0xc0a5ba2  jal         func_296E88
label_28b8c0:
    if (ctx->pc == 0x28B8C0u) {
        ctx->pc = 0x28B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8BCu;
        // 0x28b8c0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8C4u;
        goto label_28b8c4;
    }
    ctx->pc = 0x28B8BCu;
    SET_GPR_U32(ctx, 31, 0x28B8C4u);
    ctx->pc = 0x28B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8BCu;
    // 0x28b8c0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x28B8BCu, 0x28B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8C4u;
label_28b8c4:
    // 0x28b8c4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28b8c8:
    // 0x28b8c8: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_28b8cc:
    if (ctx->pc == 0x28B8CCu) {
        ctx->pc = 0x28B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8C8u;
        // 0x28b8cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8D0u;
        goto label_28b8d0;
    }
    ctx->pc = 0x28B8C8u;
    {
        const bool branch_taken_0x28b8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8C8u;
        // 0x28b8cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8c8) {
            ctx->pc = 0x28B944u;
            goto label_28b944;
        }
    }
    ctx->pc = 0x28B8D0u;
label_28b8d0:
    // 0x28b8d0: 0xc4a20060  lwc1        $f2, 0x60($a1)
    ctx->pc = 0x28b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28b8d4:
    // 0x28b8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b8d8:
    // 0x28b8d8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x28b8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b8dc:
    // 0x28b8dc: 0x0  nop
    ctx->pc = 0x28b8dcu;
    // NOP
label_28b8e0:
    // 0x28b8e0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_28b8e4:
    if (ctx->pc == 0x28B8E4u) {
        ctx->pc = 0x28B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8E0u;
        // 0x28b8e4: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8E8u;
        goto label_28b8e8;
    }
    ctx->pc = 0x28B8E0u;
    {
        const bool branch_taken_0x28b8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8E0u;
        // 0x28b8e4: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8e0) {
            ctx->pc = 0x28B950u;
            goto label_28b950;
        }
    }
    ctx->pc = 0x28B8E8u;
label_28b8e8:
    // 0x28b8e8: 0xc7808a30  lwc1        $f0, -0x75D0($gp)
    ctx->pc = 0x28b8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b8ec:
    // 0x28b8ec: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x28b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b8f0:
    // 0x28b8f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28b8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28b8f4:
    // 0x28b8f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28b8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_28b8f8:
    // 0x28b8f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28b8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28b8fc:
    // 0x28b8fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b8fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b900:
    // 0x28b900: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x28b900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
label_28b904:
    // 0x28b904: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x28b904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b908:
    // 0x28b908: 0x0  nop
    ctx->pc = 0x28b908u;
    // NOP
label_28b90c:
    // 0x28b90c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_28b910:
    if (ctx->pc == 0x28B910u) {
        ctx->pc = 0x28B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B90Cu;
        // 0x28b910: 0xe4a1005c  swc1        $f1, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B914u;
        goto label_28b914;
    }
    ctx->pc = 0x28B90Cu;
    {
        const bool branch_taken_0x28b90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B90Cu;
        // 0x28b910: 0xe4a1005c  swc1        $f1, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b90c) {
            ctx->pc = 0x28B958u;
            goto label_28b958;
        }
    }
    ctx->pc = 0x28B914u;
label_28b914:
    // 0x28b914: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28b914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28b918:
    // 0x28b918: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28b918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b91c:
    // 0x28b91c: 0x8e45006c  lw          $a1, 0x6C($s2)
    ctx->pc = 0x28b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28b920:
    // 0x28b920: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x28b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b924:
    // 0x28b924: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x28b924u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_28b928:
    // 0x28b928: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28b928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28b92c:
    // 0x28b92c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b930:
    // 0x28b930: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x28b930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_28b934:
    // 0x28b934: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_28b938:
    if (ctx->pc == 0x28B938u) {
        ctx->pc = 0x28B93Cu;
        goto label_28b93c;
    }
    ctx->pc = 0x28B934u;
    {
        const bool branch_taken_0x28b934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b934) {
            ctx->pc = 0x28B920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b920;
        }
    }
    ctx->pc = 0x28B93Cu;
label_28b93c:
    // 0x28b93c: 0x10000009  b           . + 4 + (0x9 << 2)
label_28b940:
    if (ctx->pc == 0x28B940u) {
        ctx->pc = 0x28B944u;
        goto label_28b944;
    }
    ctx->pc = 0x28B93Cu;
    {
        const bool branch_taken_0x28b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b93c) {
            ctx->pc = 0x28B964u;
            goto label_28b964;
        }
    }
    ctx->pc = 0x28B944u;
label_28b944:
    // 0x28b944: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b948:
    // 0x28b948: 0x10000005  b           . + 4 + (0x5 << 2)
label_28b94c:
    if (ctx->pc == 0x28B94Cu) {
        ctx->pc = 0x28B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B948u;
        // 0x28b94c: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B950u;
        goto label_28b950;
    }
    ctx->pc = 0x28B948u;
    {
        const bool branch_taken_0x28b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B948u;
        // 0x28b94c: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b948) {
            ctx->pc = 0x28B960u;
            goto label_28b960;
        }
    }
    ctx->pc = 0x28B950u;
label_28b950:
    // 0x28b950: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b954:
    if (ctx->pc == 0x28B954u) {
        ctx->pc = 0x28B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B950u;
        // 0x28b954: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B958u;
        goto label_28b958;
    }
    ctx->pc = 0x28B950u;
    {
        const bool branch_taken_0x28b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B950u;
        // 0x28b954: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b950) {
            ctx->pc = 0x28B960u;
            goto label_28b960;
        }
    }
    ctx->pc = 0x28B958u;
label_28b958:
    // 0x28b958: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28b958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28b95c:
    // 0x28b95c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28b95cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b960:
    // 0x28b960: 0x8e45006c  lw          $a1, 0x6C($s2)
    ctx->pc = 0x28b960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28b964:
    // 0x28b964: 0x4a0058c  bltz        $a1, . + 4 + (0x58C << 2)
label_28b968:
    if (ctx->pc == 0x28B968u) {
        ctx->pc = 0x28B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B964u;
        // 0x28b968: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B96Cu;
        goto label_28b96c;
    }
    ctx->pc = 0x28B964u;
    {
        const bool branch_taken_0x28b964 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x28B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B964u;
        // 0x28b968: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b964) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28B96Cu;
label_28b96c:
    // 0x28b96c: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_28b970:
    // 0x28b970: 0x100002b3  b           . + 4 + (0x2B3 << 2)
label_28b974:
    if (ctx->pc == 0x28B974u) {
        ctx->pc = 0x28B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B970u;
        // 0x28b974: 0xa21018  mult        $v0, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B978u;
        goto label_28b978;
    }
    ctx->pc = 0x28B970u;
    {
        const bool branch_taken_0x28b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B970u;
        // 0x28b974: 0xa21018  mult        $v0, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b970) {
            ctx->pc = 0x28C440u;
            goto label_28c440;
        }
    }
    ctx->pc = 0x28B978u;
label_28b978:
    // 0x28b978: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x28b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_28b97c:
    // 0x28b97c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28b980:
    // 0x28b980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28b980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b984:
    // 0x28b984: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
label_28b988:
    if (ctx->pc == 0x28B988u) {
        ctx->pc = 0x28B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B984u;
        // 0x28b988: 0xc6400048  lwc1        $f0, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B98Cu;
        goto label_28b98c;
    }
    ctx->pc = 0x28B984u;
    {
        const bool branch_taken_0x28b984 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B984u;
        // 0x28b988: 0xc6400048  lwc1        $f0, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b984) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B98Cu;
label_28b98c:
    // 0x28b98c: 0xc7818a34  lwc1        $f1, -0x75CC($gp)
    ctx->pc = 0x28b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b990:
    // 0x28b990: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b994:
    // 0x28b994: 0x0  nop
    ctx->pc = 0x28b994u;
    // NOP
label_28b998:
    // 0x28b998: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_28b99c:
    if (ctx->pc == 0x28B99Cu) {
        ctx->pc = 0x28B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B998u;
        // 0x28b99c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9A0u;
        goto label_28b9a0;
    }
    ctx->pc = 0x28B998u;
    {
        const bool branch_taken_0x28b998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B998u;
        // 0x28b99c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b998) {
            ctx->pc = 0x28BA5Cu;
            goto label_28ba5c;
        }
    }
    ctx->pc = 0x28B9A0u;
label_28b9a0:
    // 0x28b9a0: 0xc0ada34  jal         func_2B68D0
label_28b9a4:
    if (ctx->pc == 0x28B9A4u) {
        ctx->pc = 0x28B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9A0u;
        // 0x28b9a4: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9A8u;
        goto label_28b9a8;
    }
    ctx->pc = 0x28B9A0u;
    SET_GPR_U32(ctx, 31, 0x28B9A8u);
    ctx->pc = 0x28B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9A0u;
    // 0x28b9a4: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28B9A0u, 0x28B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9A8u;
label_28b9a8:
    // 0x28b9a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28b9ac:
    // 0x28b9ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9b0:
    // 0x28b9b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28b9b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28b9b4:
    // 0x28b9b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_28b9b8:
    if (ctx->pc == 0x28B9B8u) {
        ctx->pc = 0x28B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9B4u;
        // 0x28b9b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9BCu;
        goto label_28b9bc;
    }
    ctx->pc = 0x28B9B4u;
    {
        const bool branch_taken_0x28b9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b9b4) {
            ctx->pc = 0x28B9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B9B4u;
            // 0x28b9b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B9BCu;
            goto label_28b9bc;
        }
    }
    ctx->pc = 0x28B9BCu;
label_28b9bc:
    // 0x28b9bc: 0x2010  mfhi        $a0
    ctx->pc = 0x28b9bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_28b9c0:
    // 0x28b9c0: 0xc081546  jal         func_205518
label_28b9c4:
    if (ctx->pc == 0x28B9C4u) {
        ctx->pc = 0x28B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9C0u;
        // 0x28b9c4: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9C8u;
        goto label_28b9c8;
    }
    ctx->pc = 0x28B9C0u;
    SET_GPR_U32(ctx, 31, 0x28B9C8u);
    ctx->pc = 0x28B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9C0u;
    // 0x28b9c4: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28B9C0u, 0x28B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9C8u;
label_28b9c8:
    // 0x28b9c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28b9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b9cc:
    // 0x28b9cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b9d0:
    // 0x28b9d0: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x28b9d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28b9d4:
    // 0x28b9d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x28b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28b9d8:
    // 0x28b9d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9dc:
    // 0x28b9dc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x28b9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9e0:
    // 0x28b9e0: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x28b9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28b9e4:
    // 0x28b9e4: 0xc0a5e30  jal         func_2978C0
label_28b9e8:
    if (ctx->pc == 0x28B9E8u) {
        ctx->pc = 0x28B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9E4u;
        // 0x28b9e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9ECu;
        goto label_28b9ec;
    }
    ctx->pc = 0x28B9E4u;
    SET_GPR_U32(ctx, 31, 0x28B9ECu);
    ctx->pc = 0x28B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9E4u;
    // 0x28b9e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x28B9E4u, 0x28B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9ECu;
label_28b9ec:
    // 0x28b9ec: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x28b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28b9f0:
    // 0x28b9f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_28b9f4:
    if (ctx->pc == 0x28B9F4u) {
        ctx->pc = 0x28B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9F0u;
        // 0x28b9f4: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9F8u;
        goto label_28b9f8;
    }
    ctx->pc = 0x28B9F0u;
    {
        const bool branch_taken_0x28b9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b9f0) {
            ctx->pc = 0x28B9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B9F0u;
            // 0x28b9f4: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BA08u;
            goto label_28ba08;
        }
    }
    ctx->pc = 0x28B9F8u;
label_28b9f8:
    // 0x28b9f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b9fc:
    // 0x28b9fc: 0xc0a5b94  jal         func_296E50
label_28ba00:
    if (ctx->pc == 0x28BA00u) {
        ctx->pc = 0x28BA04u;
        goto label_28ba04;
    }
    ctx->pc = 0x28B9FCu;
    SET_GPR_U32(ctx, 31, 0x28BA04u);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28B9FCu, 0x28BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA04u;
label_28ba04:
    // 0x28ba04: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x28ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_28ba08:
    // 0x28ba08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28ba0c:
    if (ctx->pc == 0x28BA0Cu) {
        ctx->pc = 0x28BA10u;
        goto label_28ba10;
    }
    ctx->pc = 0x28BA08u;
    {
        const bool branch_taken_0x28ba08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba08) {
            ctx->pc = 0x28BA1Cu;
            goto label_28ba1c;
        }
    }
    ctx->pc = 0x28BA10u;
label_28ba10:
    // 0x28ba10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ba10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28ba14:
    // 0x28ba14: 0xc0a5b94  jal         func_296E50
label_28ba18:
    if (ctx->pc == 0x28BA18u) {
        ctx->pc = 0x28BA1Cu;
        goto label_28ba1c;
    }
    ctx->pc = 0x28BA14u;
    SET_GPR_U32(ctx, 31, 0x28BA1Cu);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28BA14u, 0x28BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA1Cu;
label_28ba1c:
    // 0x28ba1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ba1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28ba20:
    // 0x28ba20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ba24:
    // 0x28ba24: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x28ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28ba28:
    // 0x28ba28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ba28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba2c:
    // 0x28ba2c: 0xc0a60f8  jal         func_2983E0
label_28ba30:
    if (ctx->pc == 0x28BA30u) {
        ctx->pc = 0x28BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA2Cu;
        // 0x28ba30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA34u;
        goto label_28ba34;
    }
    ctx->pc = 0x28BA2Cu;
    SET_GPR_U32(ctx, 31, 0x28BA34u);
    ctx->pc = 0x28BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA2Cu;
    // 0x28ba30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x28BA2Cu, 0x28BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA34u;
label_28ba34:
    // 0x28ba34: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ba38:
    // 0x28ba38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28ba38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba3c:
    // 0x28ba3c: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x28ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28ba40:
    // 0x28ba40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ba40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ba44:
    // 0x28ba44: 0xc0a900a  jal         func_2A4028
label_28ba48:
    if (ctx->pc == 0x28BA48u) {
        ctx->pc = 0x28BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA44u;
        // 0x28ba48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA4Cu;
        goto label_28ba4c;
    }
    ctx->pc = 0x28BA44u;
    SET_GPR_U32(ctx, 31, 0x28BA4Cu);
    ctx->pc = 0x28BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA44u;
    // 0x28ba48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28BA44u, 0x28BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA4Cu;
label_28ba4c:
    // 0x28ba4c: 0xc0a2572  jal         func_2895C8
label_28ba50:
    if (ctx->pc == 0x28BA50u) {
        ctx->pc = 0x28BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA4Cu;
        // 0x28ba50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA54u;
        goto label_28ba54;
    }
    ctx->pc = 0x28BA4Cu;
    SET_GPR_U32(ctx, 31, 0x28BA54u);
    ctx->pc = 0x28BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA4Cu;
    // 0x28ba50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x28BA4Cu, 0x28BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA54u;
label_28ba54:
    // 0x28ba54: 0x1000012b  b           . + 4 + (0x12B << 2)
label_28ba58:
    if (ctx->pc == 0x28BA58u) {
        ctx->pc = 0x28BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA54u;
        // 0x28ba58: 0x8e43006c  lw          $v1, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA5Cu;
        goto label_28ba5c;
    }
    ctx->pc = 0x28BA54u;
    {
        const bool branch_taken_0x28ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA54u;
        // 0x28ba58: 0x8e43006c  lw          $v1, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba54) {
            ctx->pc = 0x28BF04u;
            goto label_28bf04;
        }
    }
    ctx->pc = 0x28BA5Cu;
label_28ba5c:
    // 0x28ba5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28ba5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ba60:
    // 0x28ba60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28ba60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ba64:
    // 0x28ba64: 0x0  nop
    ctx->pc = 0x28ba64u;
    // NOP
label_28ba68:
    // 0x28ba68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_28ba6c:
    if (ctx->pc == 0x28BA6Cu) {
        ctx->pc = 0x28BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA68u;
        // 0x28ba6c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA70u;
        goto label_28ba70;
    }
    ctx->pc = 0x28BA68u;
    {
        const bool branch_taken_0x28ba68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA68u;
        // 0x28ba6c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba68) {
            ctx->pc = 0x28BA90u;
            goto label_28ba90;
        }
    }
    ctx->pc = 0x28BA70u;
label_28ba70:
    // 0x28ba70: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28ba70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ba74:
    // 0x28ba74: 0x0  nop
    ctx->pc = 0x28ba74u;
    // NOP
label_28ba78:
    // 0x28ba78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28ba7c:
    if (ctx->pc == 0x28BA7Cu) {
        ctx->pc = 0x28BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA78u;
        // 0x28ba7c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA80u;
        goto label_28ba80;
    }
    ctx->pc = 0x28BA78u;
    {
        const bool branch_taken_0x28ba78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA78u;
        // 0x28ba7c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba78) {
            ctx->pc = 0x28BA90u;
            goto label_28ba90;
        }
    }
    ctx->pc = 0x28BA80u;
label_28ba80:
    // 0x28ba80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28ba80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ba84:
    // 0x28ba84: 0x0  nop
    ctx->pc = 0x28ba84u;
    // NOP
label_28ba88:
    // 0x28ba88: 0x450300f5  bc1tl       . + 4 + (0xF5 << 2)
label_28ba8c:
    if (ctx->pc == 0x28BA8Cu) {
        ctx->pc = 0x28BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA88u;
        // 0x28ba8c: 0xc641003c  lwc1        $f1, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA90u;
        goto label_28ba90;
    }
    ctx->pc = 0x28BA88u;
    {
        const bool branch_taken_0x28ba88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ba88) {
            ctx->pc = 0x28BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BA88u;
            // 0x28ba8c: 0xc641003c  lwc1        $f1, 0x3C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE60u;
            goto label_28be60;
        }
    }
    ctx->pc = 0x28BA90u;
label_28ba90:
    // 0x28ba90: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x28ba90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28ba94:
    // 0x28ba94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ba98:
    // 0x28ba98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28ba98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28ba9c:
    // 0x28ba9c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28ba9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28baa0:
    // 0x28baa0: 0xc0a2874  jal         func_28A1D0
label_28baa4:
    if (ctx->pc == 0x28BAA4u) {
        ctx->pc = 0x28BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAA0u;
        // 0x28baa4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAA8u;
        goto label_28baa8;
    }
    ctx->pc = 0x28BAA0u;
    SET_GPR_U32(ctx, 31, 0x28BAA8u);
    ctx->pc = 0x28BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAA0u;
    // 0x28baa4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1D0u, 0x28BAA0u, 0x28BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAA8u;
label_28baa8:
    // 0x28baa8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28baac:
    // 0x28baac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28bab0:
    if (ctx->pc == 0x28BAB0u) {
        ctx->pc = 0x28BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAACu;
        // 0x28bab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAB4u;
        goto label_28bab4;
    }
    ctx->pc = 0x28BAACu;
    {
        const bool branch_taken_0x28baac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAACu;
        // 0x28bab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28baac) {
            ctx->pc = 0x28BABCu;
            goto label_28babc;
        }
    }
    ctx->pc = 0x28BAB4u;
label_28bab4:
    // 0x28bab4: 0xc0a3486  jal         func_28D218
label_28bab8:
    if (ctx->pc == 0x28BAB8u) {
        ctx->pc = 0x28BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAB4u;
        // 0x28bab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BABCu;
        goto label_28babc;
    }
    ctx->pc = 0x28BAB4u;
    SET_GPR_U32(ctx, 31, 0x28BABCu);
    ctx->pc = 0x28BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAB4u;
    // 0x28bab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28BAB4u, 0x28BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BABCu;
label_28babc:
    // 0x28babc: 0x1200007c  beqz        $s0, . + 4 + (0x7C << 2)
label_28bac0:
    if (ctx->pc == 0x28BAC0u) {
        ctx->pc = 0x28BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BABCu;
        // 0x28bac0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAC4u;
        goto label_28bac4;
    }
    ctx->pc = 0x28BABCu;
    {
        const bool branch_taken_0x28babc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BABCu;
        // 0x28bac0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28babc) {
            ctx->pc = 0x28BCB0u;
            goto label_28bcb0;
        }
    }
    ctx->pc = 0x28BAC4u;
label_28bac4:
    // 0x28bac4: 0xc7828a38  lwc1        $f2, -0x75C8($gp)
    ctx->pc = 0x28bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28bac8:
    // 0x28bac8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bacc:
    // 0x28bacc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28baccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28bad0:
    // 0x28bad0: 0xc6440030  lwc1        $f4, 0x30($s2)
    ctx->pc = 0x28bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28bad4:
    // 0x28bad4: 0xc6460034  lwc1        $f6, 0x34($s2)
    ctx->pc = 0x28bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28bad8:
    // 0x28bad8: 0xc6450038  lwc1        $f5, 0x38($s2)
    ctx->pc = 0x28bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28badc:
    // 0x28badc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28badcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bae0:
    // 0x28bae0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x28bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_28bae4:
    // 0x28bae4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x28bae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_28bae8:
    // 0x28bae8: 0xc7878a3c  lwc1        $f7, -0x75C4($gp)
    ctx->pc = 0x28bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28baec:
    // 0x28baec: 0xc7898a40  lwc1        $f9, -0x75C0($gp)
    ctx->pc = 0x28baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_28baf0:
    // 0x28baf0: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x28baf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28baf4:
    // 0x28baf4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28baf8:
    // 0x28baf8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bafc:
    // 0x28bafc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28bafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28bb00:
    // 0x28bb00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28bb00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bb04:
    // 0x28bb04: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x28bb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28bb08:
    // 0x28bb08: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bb0c:
    // 0x28bb0c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x28bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bb10:
    // 0x28bb10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28bb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28bb14:
    // 0x28bb14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28bb14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bb18:
    // 0x28bb18: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x28bb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28bb1c:
    // 0x28bb1c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x28bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28bb20:
    // 0x28bb20: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bb24:
    // 0x28bb24: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x28bb24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_28bb28:
    // 0x28bb28: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bb2c:
    // 0x28bb2c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x28bb2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_28bb30:
    // 0x28bb30: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x28bb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_28bb34:
    // 0x28bb34: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28bb34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28bb38:
    // 0x28bb38: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28bb38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28bb3c:
    // 0x28bb3c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x28bb3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_28bb40:
    // 0x28bb40: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x28bb40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_28bb44:
    // 0x28bb44: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x28bb44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_28bb48:
    // 0x28bb48: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x28bb48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_28bb4c:
    // 0x28bb4c: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x28bb4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28bb50:
    // 0x28bb50: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x28bb50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_28bb54:
    // 0x28bb54: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bb58:
    // 0x28bb58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28bb58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28bb5c:
    // 0x28bb5c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x28bb5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_28bb60:
    // 0x28bb60: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x28bb60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_28bb64:
    // 0x28bb64: 0xe6460034  swc1        $f6, 0x34($s2)
    ctx->pc = 0x28bb64u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28bb68:
    // 0x28bb68: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x28bb68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_28bb6c:
    // 0x28bb6c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bb70:
    // 0x28bb70: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x28bb70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_28bb74:
    // 0x28bb74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28bb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28bb78:
    // 0x28bb78: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x28bb78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_28bb7c:
    // 0x28bb7c: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x28bb7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_28bb80:
    // 0x28bb80: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x28bb80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28bb84:
    // 0x28bb84: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28bb84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28bb88:
    // 0x28bb88: 0x46092034  c.lt.s      $f4, $f9
    ctx->pc = 0x28bb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bb8c:
    // 0x28bb8c: 0x0  nop
    ctx->pc = 0x28bb8cu;
    // NOP
label_28bb90:
    // 0x28bb90: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_28bb94:
    if (ctx->pc == 0x28BB94u) {
        ctx->pc = 0x28BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB90u;
        // 0x28bb94: 0xe6450038  swc1        $f5, 0x38($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB98u;
        goto label_28bb98;
    }
    ctx->pc = 0x28BB90u;
    {
        const bool branch_taken_0x28bb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB90u;
        // 0x28bb94: 0xe6450038  swc1        $f5, 0x38($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb90) {
            ctx->pc = 0x28BBC4u;
            goto label_28bbc4;
        }
    }
    ctx->pc = 0x28BB98u;
label_28bb98:
    // 0x28bb98: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x28bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_28bb9c:
    // 0x28bb9c: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x28bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_28bba0:
    // 0x28bba0: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x28bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_28bba4:
    // 0x28bba4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28bba8:
    // 0x28bba8: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x28bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bbac:
    // 0x28bbac: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x28bbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_28bbb0:
    // 0x28bbb0: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x28bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bbb4:
    // 0x28bbb4: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x28bbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_28bbb8:
    // 0x28bbb8: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x28bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bbbc:
    // 0x28bbbc: 0x10000035  b           . + 4 + (0x35 << 2)
label_28bbc0:
    if (ctx->pc == 0x28BBC0u) {
        ctx->pc = 0x28BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBBCu;
        // 0x28bbc0: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBC4u;
        goto label_28bbc4;
    }
    ctx->pc = 0x28BBBCu;
    {
        const bool branch_taken_0x28bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBBCu;
        // 0x28bbc0: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbbc) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BBC4u;
label_28bbc4:
    // 0x28bbc4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x28bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bbc8:
    // 0x28bbc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28bbcc:
    // 0x28bbcc: 0xc7808a44  lwc1        $f0, -0x75BC($gp)
    ctx->pc = 0x28bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bbd0:
    // 0x28bbd0: 0xc644003c  lwc1        $f4, 0x3C($s2)
    ctx->pc = 0x28bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28bbd4:
    // 0x28bbd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28bbd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28bbd8:
    // 0x28bbd8: 0xc6420040  lwc1        $f2, 0x40($s2)
    ctx->pc = 0x28bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28bbdc:
    // 0x28bbdc: 0xc7858a48  lwc1        $f5, -0x75B8($gp)
    ctx->pc = 0x28bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28bbe0:
    // 0x28bbe0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x28bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bbe4:
    // 0x28bbe4: 0xc7838a4c  lwc1        $f3, -0x75B4($gp)
    ctx->pc = 0x28bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28bbe8:
    // 0x28bbe8: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x28bbe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_28bbec:
    // 0x28bbec: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x28bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_28bbf0:
    // 0x28bbf0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28bbf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_28bbf4:
    // 0x28bbf4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x28bbf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_28bbf8:
    // 0x28bbf8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28bbf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_28bbfc:
    // 0x28bbfc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28bc00:
    // 0x28bc00: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x28bc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28bc04:
    // 0x28bc04: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x28bc04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_28bc08:
    // 0x28bc08: 0xe6420040  swc1        $f2, 0x40($s2)
    ctx->pc = 0x28bc08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_28bc0c:
    // 0x28bc0c: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x28bc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_28bc10:
    // 0x28bc10: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_28bc14:
    if (ctx->pc == 0x28BC14u) {
        ctx->pc = 0x28BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC10u;
        // 0x28bc14: 0xae4400d4  sw          $a0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC18u;
        goto label_28bc18;
    }
    ctx->pc = 0x28BC10u;
    {
        const bool branch_taken_0x28bc10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC10u;
        // 0x28bc14: 0xae4400d4  sw          $a0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc10) {
            ctx->pc = 0x28BC60u;
            goto label_28bc60;
        }
    }
    ctx->pc = 0x28BC18u;
label_28bc18:
    // 0x28bc18: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x28bc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_28bc1c:
    // 0x28bc1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28bc20:
    if (ctx->pc == 0x28BC20u) {
        ctx->pc = 0x28BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC1Cu;
        // 0x28bc20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC24u;
        goto label_28bc24;
    }
    ctx->pc = 0x28BC1Cu;
    {
        const bool branch_taken_0x28bc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC1Cu;
        // 0x28bc20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc1c) {
            ctx->pc = 0x28BC34u;
            goto label_28bc34;
        }
    }
    ctx->pc = 0x28BC24u;
label_28bc24:
    // 0x28bc24: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_28bc28:
    if (ctx->pc == 0x28BC28u) {
        ctx->pc = 0x28BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC24u;
        // 0x28bc28: 0x240400b3  addiu       $a0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC2Cu;
        goto label_28bc2c;
    }
    ctx->pc = 0x28BC24u;
    {
        const bool branch_taken_0x28bc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC24u;
        // 0x28bc28: 0x240400b3  addiu       $a0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc24) {
            ctx->pc = 0x28BC50u;
            goto label_28bc50;
        }
    }
    ctx->pc = 0x28BC2Cu;
label_28bc2c:
    // 0x28bc2c: 0x10000019  b           . + 4 + (0x19 << 2)
label_28bc30:
    if (ctx->pc == 0x28BC30u) {
        ctx->pc = 0x28BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC2Cu;
        // 0x28bc30: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC34u;
        goto label_28bc34;
    }
    ctx->pc = 0x28BC2Cu;
    {
        const bool branch_taken_0x28bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC2Cu;
        // 0x28bc30: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc2c) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BC34u;
label_28bc34:
    // 0x28bc34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28bc38:
    // 0x28bc38: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_28bc3c:
    if (ctx->pc == 0x28BC3Cu) {
        ctx->pc = 0x28BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC38u;
        // 0x28bc3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC40u;
        goto label_28bc40;
    }
    ctx->pc = 0x28BC38u;
    {
        const bool branch_taken_0x28bc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC38u;
        // 0x28bc3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc38) {
            ctx->pc = 0x28BC74u;
            goto label_28bc74;
        }
    }
    ctx->pc = 0x28BC40u;
label_28bc40:
    // 0x28bc40: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_28bc44:
    if (ctx->pc == 0x28BC44u) {
        ctx->pc = 0x28BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC40u;
        // 0x28bc44: 0x240400b6  addiu       $a0, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC48u;
        goto label_28bc48;
    }
    ctx->pc = 0x28BC40u;
    {
        const bool branch_taken_0x28bc40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC40u;
        // 0x28bc44: 0x240400b6  addiu       $a0, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc40) {
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BC48u;
label_28bc48:
    // 0x28bc48: 0x10000012  b           . + 4 + (0x12 << 2)
label_28bc4c:
    if (ctx->pc == 0x28BC4Cu) {
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC50u;
        goto label_28bc50;
    }
    ctx->pc = 0x28BC48u;
    {
        const bool branch_taken_0x28bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc48) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BC50u;
label_28bc50:
    // 0x28bc50: 0xc081546  jal         func_205518
label_28bc54:
    if (ctx->pc == 0x28BC54u) {
        ctx->pc = 0x28BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC50u;
        // 0x28bc54: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC58u;
        goto label_28bc58;
    }
    ctx->pc = 0x28BC50u;
    SET_GPR_U32(ctx, 31, 0x28BC58u);
    ctx->pc = 0x28BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC50u;
    // 0x28bc54: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28BC50u, 0x28BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC58u;
label_28bc58:
    // 0x28bc58: 0x1000000e  b           . + 4 + (0xE << 2)
label_28bc5c:
    if (ctx->pc == 0x28BC5Cu) {
        ctx->pc = 0x28BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC58u;
        // 0x28bc5c: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC60u;
        goto label_28bc60;
    }
    ctx->pc = 0x28BC58u;
    {
        const bool branch_taken_0x28bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC58u;
        // 0x28bc5c: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc58) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BC60u;
label_28bc60:
    // 0x28bc60: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x28bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_28bc64:
    // 0x28bc64: 0xc081546  jal         func_205518
label_28bc68:
    if (ctx->pc == 0x28BC68u) {
        ctx->pc = 0x28BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC64u;
        // 0x28bc68: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC6Cu;
        goto label_28bc6c;
    }
    ctx->pc = 0x28BC64u;
    SET_GPR_U32(ctx, 31, 0x28BC6Cu);
    ctx->pc = 0x28BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC64u;
    // 0x28bc68: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28BC64u, 0x28BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC6Cu;
label_28bc6c:
    // 0x28bc6c: 0x10000009  b           . + 4 + (0x9 << 2)
label_28bc70:
    if (ctx->pc == 0x28BC70u) {
        ctx->pc = 0x28BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC6Cu;
        // 0x28bc70: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC74u;
        goto label_28bc74;
    }
    ctx->pc = 0x28BC6Cu;
    {
        const bool branch_taken_0x28bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC6Cu;
        // 0x28bc70: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc6c) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BC74u;
label_28bc74:
    // 0x28bc74: 0x240400b5  addiu       $a0, $zero, 0xB5
    ctx->pc = 0x28bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_28bc78:
    // 0x28bc78: 0xc081546  jal         func_205518
label_28bc7c:
    if (ctx->pc == 0x28BC7Cu) {
        ctx->pc = 0x28BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC78u;
        // 0x28bc7c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC80u;
        goto label_28bc80;
    }
    ctx->pc = 0x28BC78u;
    SET_GPR_U32(ctx, 31, 0x28BC80u);
    ctx->pc = 0x28BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC78u;
    // 0x28bc7c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28BC78u, 0x28BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC80u;
label_28bc80:
    // 0x28bc80: 0x10000004  b           . + 4 + (0x4 << 2)
label_28bc84:
    if (ctx->pc == 0x28BC84u) {
        ctx->pc = 0x28BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC80u;
        // 0x28bc84: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC88u;
        goto label_28bc88;
    }
    ctx->pc = 0x28BC80u;
    {
        const bool branch_taken_0x28bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC80u;
        // 0x28bc84: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc80) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BC88u;
label_28bc88:
    // 0x28bc88: 0xc081546  jal         func_205518
label_28bc8c:
    if (ctx->pc == 0x28BC8Cu) {
        ctx->pc = 0x28BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC88u;
        // 0x28bc8c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC90u;
        goto label_28bc90;
    }
    ctx->pc = 0x28BC88u;
    SET_GPR_U32(ctx, 31, 0x28BC90u);
    ctx->pc = 0x28BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC88u;
    // 0x28bc8c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28BC88u, 0x28BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC90u;
label_28bc90:
    // 0x28bc90: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28bc94:
    // 0x28bc94: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x28bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bc98:
    // 0x28bc98: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x28bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28bc9c:
    // 0x28bc9c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x28bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bca0:
    // 0x28bca0: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x28bca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28bca4:
    // 0x28bca4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x28bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bca8:
    // 0x28bca8: 0x10000056  b           . + 4 + (0x56 << 2)
label_28bcac:
    if (ctx->pc == 0x28BCACu) {
        ctx->pc = 0x28BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA8u;
        // 0x28bcac: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCB0u;
        goto label_28bcb0;
    }
    ctx->pc = 0x28BCA8u;
    {
        const bool branch_taken_0x28bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA8u;
        // 0x28bcac: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bca8) {
            ctx->pc = 0x28BE04u;
            goto label_28be04;
        }
    }
    ctx->pc = 0x28BCB0u;
label_28bcb0:
    // 0x28bcb0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bcb4:
    // 0x28bcb4: 0xc6470018  lwc1        $f7, 0x18($s2)
    ctx->pc = 0x28bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28bcb8:
    // 0x28bcb8: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x28bcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bcbc:
    // 0x28bcbc: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x28bcbcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_28bcc0:
    // 0x28bcc0: 0xc645001c  lwc1        $f5, 0x1C($s2)
    ctx->pc = 0x28bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28bcc4:
    // 0x28bcc4: 0xc7818a50  lwc1        $f1, -0x75B0($gp)
    ctx->pc = 0x28bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bcc8:
    // 0x28bcc8: 0xc6440034  lwc1        $f4, 0x34($s2)
    ctx->pc = 0x28bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28bccc:
    // 0x28bccc: 0xe6470018  swc1        $f7, 0x18($s2)
    ctx->pc = 0x28bcccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28bcd0:
    // 0x28bcd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28bcd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28bcd4:
    // 0x28bcd4: 0xc6460020  lwc1        $f6, 0x20($s2)
    ctx->pc = 0x28bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28bcd8:
    // 0x28bcd8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28bcdc:
    // 0x28bcdc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28bcdcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28bce0:
    // 0x28bce0: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x28bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28bce4:
    // 0x28bce4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x28bce4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_28bce8:
    // 0x28bce8: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bcec:
    // 0x28bcec: 0xc7808a54  lwc1        $f0, -0x75AC($gp)
    ctx->pc = 0x28bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bcf0:
    // 0x28bcf0: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28bcf4:
    // 0x28bcf4: 0xe645001c  swc1        $f5, 0x1C($s2)
    ctx->pc = 0x28bcf4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28bcf8:
    // 0x28bcf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28bcf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28bcfc:
    // 0x28bcfc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x28bcfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_28bd00:
    // 0x28bd00: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x28bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28bd04:
    // 0x28bd04: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x28bd04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_28bd08:
    // 0x28bd08: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x28bd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_28bd0c:
    // 0x28bd0c: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x28bd0cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_28bd10:
    // 0x28bd10: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x28bd10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28bd14:
    // 0x28bd14: 0xe6440034  swc1        $f4, 0x34($s2)
    ctx->pc = 0x28bd14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28bd18:
    // 0x28bd18: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28bd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28bd1c:
    // 0x28bd1c: 0xe6460020  swc1        $f6, 0x20($s2)
    ctx->pc = 0x28bd1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28bd20:
    // 0x28bd20: 0xe4a70030  swc1        $f7, 0x30($a1)
    ctx->pc = 0x28bd20u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28bd24:
    // 0x28bd24: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x28bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28bd28:
    // 0x28bd28: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x28bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bd2c:
    // 0x28bd2c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x28bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28bd30:
    // 0x28bd30: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x28bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bd34:
    // 0x28bd34: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x28bd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_28bd38:
    // 0x28bd38: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x28bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bd3c:
    // 0x28bd3c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28bd3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28bd40:
    // 0x28bd40: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x28bd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bd44:
    // 0x28bd44: 0x0  nop
    ctx->pc = 0x28bd44u;
    // NOP
label_28bd48:
    // 0x28bd48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28bd4c:
    if (ctx->pc == 0x28BD4Cu) {
        ctx->pc = 0x28BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD48u;
        // 0x28bd4c: 0xe4a20048  swc1        $f2, 0x48($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD50u;
        goto label_28bd50;
    }
    ctx->pc = 0x28BD48u;
    {
        const bool branch_taken_0x28bd48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD48u;
        // 0x28bd4c: 0xe4a20048  swc1        $f2, 0x48($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd48) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BD50u;
label_28bd50:
    // 0x28bd50: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_28bd54:
    // 0x28bd54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28bd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bd58:
    // 0x28bd58: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x28bd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28bd5c:
    // 0x28bd5c: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x28bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_28bd60:
    // 0x28bd60: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x28bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bd64:
    // 0x28bd64: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28bd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_28bd68:
    // 0x28bd68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28bd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28bd6c:
    // 0x28bd6c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28bd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bd70:
    // 0x28bd70: 0x0  nop
    ctx->pc = 0x28bd70u;
    // NOP
label_28bd74:
    // 0x28bd74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_28bd78:
    if (ctx->pc == 0x28BD78u) {
        ctx->pc = 0x28BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD74u;
        // 0x28bd78: 0xc4a1004c  lwc1        $f1, 0x4C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD7Cu;
        goto label_28bd7c;
    }
    ctx->pc = 0x28BD74u;
    {
        const bool branch_taken_0x28bd74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bd74) {
            ctx->pc = 0x28BD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BD74u;
            // 0x28bd78: 0xc4a1004c  lwc1        $f1, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BD88u;
            goto label_28bd88;
        }
    }
    ctx->pc = 0x28BD7Cu;
label_28bd7c:
    // 0x28bd7c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28bd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28bd80:
    // 0x28bd80: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x28bd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_28bd84:
    // 0x28bd84: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x28bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bd88:
    // 0x28bd88: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x28bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bd8c:
    // 0x28bd8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28bd8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bd90:
    // 0x28bd90: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x28bd90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bd94:
    // 0x28bd94: 0x0  nop
    ctx->pc = 0x28bd94u;
    // NOP
label_28bd98:
    // 0x28bd98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28bd9c:
    if (ctx->pc == 0x28BD9Cu) {
        ctx->pc = 0x28BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD98u;
        // 0x28bd9c: 0xe4a0004c  swc1        $f0, 0x4C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDA0u;
        goto label_28bda0;
    }
    ctx->pc = 0x28BD98u;
    {
        const bool branch_taken_0x28bd98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD98u;
        // 0x28bd9c: 0xe4a0004c  swc1        $f0, 0x4C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd98) {
            ctx->pc = 0x28BDA8u;
            goto label_28bda8;
        }
    }
    ctx->pc = 0x28BDA0u;
label_28bda0:
    // 0x28bda0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28bda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28bda4:
    // 0x28bda4: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x28bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_28bda8:
    // 0x28bda8: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x28bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bdac:
    // 0x28bdac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28bdacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bdb0:
    // 0x28bdb0: 0x0  nop
    ctx->pc = 0x28bdb0u;
    // NOP
label_28bdb4:
    // 0x28bdb4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_28bdb8:
    if (ctx->pc == 0x28BDB8u) {
        ctx->pc = 0x28BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDB4u;
        // 0x28bdb8: 0xc4a10058  lwc1        $f1, 0x58($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDBCu;
        goto label_28bdbc;
    }
    ctx->pc = 0x28BDB4u;
    {
        const bool branch_taken_0x28bdb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bdb4) {
            ctx->pc = 0x28BDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BDB4u;
            // 0x28bdb8: 0xc4a10058  lwc1        $f1, 0x58($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BDC8u;
            goto label_28bdc8;
        }
    }
    ctx->pc = 0x28BDBCu;
label_28bdbc:
    // 0x28bdbc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28bdbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28bdc0:
    // 0x28bdc0: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x28bdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_28bdc4:
    // 0x28bdc4: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x28bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bdc8:
    // 0x28bdc8: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x28bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bdcc:
    // 0x28bdcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28bdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bdd0:
    // 0x28bdd0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x28bdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bdd4:
    // 0x28bdd4: 0x0  nop
    ctx->pc = 0x28bdd4u;
    // NOP
label_28bdd8:
    // 0x28bdd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28bddc:
    if (ctx->pc == 0x28BDDCu) {
        ctx->pc = 0x28BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDD8u;
        // 0x28bddc: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDE0u;
        goto label_28bde0;
    }
    ctx->pc = 0x28BDD8u;
    {
        const bool branch_taken_0x28bdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDD8u;
        // 0x28bddc: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdd8) {
            ctx->pc = 0x28BDE8u;
            goto label_28bde8;
        }
    }
    ctx->pc = 0x28BDE0u;
label_28bde0:
    // 0x28bde0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28bde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28bde4:
    // 0x28bde4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x28bde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_28bde8:
    // 0x28bde8: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x28bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bdec:
    // 0x28bdec: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28bdecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bdf0:
    // 0x28bdf0: 0x0  nop
    ctx->pc = 0x28bdf0u;
    // NOP
label_28bdf4:
    // 0x28bdf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_28bdf8:
    if (ctx->pc == 0x28BDF8u) {
        ctx->pc = 0x28BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF4u;
        // 0x28bdf8: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDFCu;
        goto label_28bdfc;
    }
    ctx->pc = 0x28BDF4u;
    {
        const bool branch_taken_0x28bdf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bdf4) {
            ctx->pc = 0x28BDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BDF4u;
            // 0x28bdf8: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE08u;
            goto label_28be08;
        }
    }
    ctx->pc = 0x28BDFCu;
label_28bdfc:
    // 0x28bdfc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28bdfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28be00:
    // 0x28be00: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x28be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_28be04:
    // 0x28be04: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x28be04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28be08:
    // 0x28be08: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_28be0c:
    if (ctx->pc == 0x28BE0Cu) {
        ctx->pc = 0x28BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE08u;
        // 0x28be0c: 0x264400cc  addiu       $a0, $s2, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE10u;
        goto label_28be10;
    }
    ctx->pc = 0x28BE08u;
    {
        const bool branch_taken_0x28be08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be08) {
            ctx->pc = 0x28BE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BE08u;
            // 0x28be0c: 0x264400cc  addiu       $a0, $s2, 0xCC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE38u;
            goto label_28be38;
        }
    }
    ctx->pc = 0x28BE10u;
label_28be10:
    // 0x28be10: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x28be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28be14:
    // 0x28be14: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x28be14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_28be18:
    // 0x28be18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_28be1c:
    if (ctx->pc == 0x28BE1Cu) {
        ctx->pc = 0x28BE20u;
        goto label_28be20;
    }
    ctx->pc = 0x28BE18u;
    {
        const bool branch_taken_0x28be18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28be18) {
            ctx->pc = 0x28BE50u;
            goto label_28be50;
        }
    }
    ctx->pc = 0x28BE20u;
label_28be20:
    // 0x28be20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28be20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28be24:
    // 0x28be24: 0xc0a5b94  jal         func_296E50
label_28be28:
    if (ctx->pc == 0x28BE28u) {
        ctx->pc = 0x28BE2Cu;
        goto label_28be2c;
    }
    ctx->pc = 0x28BE24u;
    SET_GPR_U32(ctx, 31, 0x28BE2Cu);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28BE24u, 0x28BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE2Cu;
label_28be2c:
    // 0x28be2c: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x28be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_28be30:
    // 0x28be30: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x28be30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_28be34:
    // 0x28be34: 0x264400cc  addiu       $a0, $s2, 0xCC
    ctx->pc = 0x28be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_28be38:
    // 0x28be38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28be3c:
    // 0x28be3c: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x28be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28be40:
    // 0x28be40: 0xc0a6098  jal         func_298260
label_28be44:
    if (ctx->pc == 0x28BE44u) {
        ctx->pc = 0x28BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE40u;
        // 0x28be44: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE48u;
        goto label_28be48;
    }
    ctx->pc = 0x28BE40u;
    SET_GPR_U32(ctx, 31, 0x28BE48u);
    ctx->pc = 0x28BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE40u;
    // 0x28be44: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298260u, 0x28BE40u, 0x28BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE48u;
label_28be48:
    // 0x28be48: 0x10000018  b           . + 4 + (0x18 << 2)
label_28be4c:
    if (ctx->pc == 0x28BE4Cu) {
        ctx->pc = 0x28BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE48u;
        // 0x28be4c: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE50u;
        goto label_28be50;
    }
    ctx->pc = 0x28BE48u;
    {
        const bool branch_taken_0x28be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE48u;
        // 0x28be4c: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be48) {
            ctx->pc = 0x28BEACu;
            goto label_28beac;
        }
    }
    ctx->pc = 0x28BE50u;
label_28be50:
    // 0x28be50: 0xc0a5ba2  jal         func_296E88
label_28be54:
    if (ctx->pc == 0x28BE54u) {
        ctx->pc = 0x28BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE50u;
        // 0x28be54: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE58u;
        goto label_28be58;
    }
    ctx->pc = 0x28BE50u;
    SET_GPR_U32(ctx, 31, 0x28BE58u);
    ctx->pc = 0x28BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE50u;
    // 0x28be54: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x28BE50u, 0x28BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE58u;
label_28be58:
    // 0x28be58: 0x10000015  b           . + 4 + (0x15 << 2)
label_28be5c:
    if (ctx->pc == 0x28BE5Cu) {
        ctx->pc = 0x28BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE58u;
        // 0x28be5c: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE60u;
        goto label_28be60;
    }
    ctx->pc = 0x28BE58u;
    {
        const bool branch_taken_0x28be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE58u;
        // 0x28be5c: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be58) {
            ctx->pc = 0x28BEB0u;
            goto label_28beb0;
        }
    }
    ctx->pc = 0x28BE60u;
label_28be60:
    // 0x28be60: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x28be60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_28be64:
    // 0x28be64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28be64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28be68:
    // 0x28be68: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28be6c:
    // 0x28be6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28be6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28be70:
    // 0x28be70: 0xc7838a58  lwc1        $f3, -0x75A8($gp)
    ctx->pc = 0x28be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28be74:
    // 0x28be74: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x28be74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_28be78:
    // 0x28be78: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x28be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28be7c:
    // 0x28be7c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x28be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_28be80:
    // 0x28be80: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x28be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28be84:
    // 0x28be84: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x28be84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_28be88:
    // 0x28be88: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x28be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28be8c:
    // 0x28be8c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x28be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28be90:
    // 0x28be90: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x28be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28be94:
    // 0x28be94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28be94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_28be98:
    // 0x28be98: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28be98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28be9c:
    // 0x28be9c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28be9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_28bea0:
    // 0x28bea0: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x28bea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_28bea4:
    // 0x28bea4: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x28bea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_28bea8:
    // 0x28bea8: 0xe6420044  swc1        $f2, 0x44($s2)
    ctx->pc = 0x28bea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_28beac:
    // 0x28beac: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x28beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_28beb0:
    // 0x28beb0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_28beb4:
    if (ctx->pc == 0x28BEB4u) {
        ctx->pc = 0x28BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEB0u;
        // 0x28beb4: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEB8u;
        goto label_28beb8;
    }
    ctx->pc = 0x28BEB0u;
    {
        const bool branch_taken_0x28beb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28beb0) {
            ctx->pc = 0x28BEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BEB0u;
            // 0x28beb4: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BEE0u;
            goto label_28bee0;
        }
    }
    ctx->pc = 0x28BEB8u;
label_28beb8:
    // 0x28beb8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x28beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28bebc:
    // 0x28bebc: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x28bebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_28bec0:
    // 0x28bec0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_28bec4:
    if (ctx->pc == 0x28BEC4u) {
        ctx->pc = 0x28BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEC0u;
        // 0x28bec4: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEC8u;
        goto label_28bec8;
    }
    ctx->pc = 0x28BEC0u;
    {
        const bool branch_taken_0x28bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bec0) {
            ctx->pc = 0x28BEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BEC0u;
            // 0x28bec4: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BEF8u;
            goto label_28bef8;
        }
    }
    ctx->pc = 0x28BEC8u;
label_28bec8:
    // 0x28bec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28becc:
    // 0x28becc: 0xc0a5b94  jal         func_296E50
label_28bed0:
    if (ctx->pc == 0x28BED0u) {
        ctx->pc = 0x28BED4u;
        goto label_28bed4;
    }
    ctx->pc = 0x28BECCu;
    SET_GPR_U32(ctx, 31, 0x28BED4u);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x28BECCu, 0x28BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BED4u;
label_28bed4:
    // 0x28bed4: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_28bed8:
    // 0x28bed8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x28bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_28bedc:
    // 0x28bedc: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_28bee0:
    // 0x28bee0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28bee4:
    // 0x28bee4: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x28bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28bee8:
    // 0x28bee8: 0xc0a6098  jal         func_298260
label_28beec:
    if (ctx->pc == 0x28BEECu) {
        ctx->pc = 0x28BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEE8u;
        // 0x28beec: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEF0u;
        goto label_28bef0;
    }
    ctx->pc = 0x28BEE8u;
    SET_GPR_U32(ctx, 31, 0x28BEF0u);
    ctx->pc = 0x28BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEE8u;
    // 0x28beec: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298260u, 0x28BEE8u, 0x28BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEF0u;
label_28bef0:
    // 0x28bef0: 0x10000003  b           . + 4 + (0x3 << 2)
label_28bef4:
    if (ctx->pc == 0x28BEF4u) {
        ctx->pc = 0x28BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF0u;
        // 0x28bef4: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEF8u;
        goto label_28bef8;
    }
    ctx->pc = 0x28BEF0u;
    {
        const bool branch_taken_0x28bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF0u;
        // 0x28bef4: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bef0) {
            ctx->pc = 0x28BF00u;
            goto label_28bf00;
        }
    }
    ctx->pc = 0x28BEF8u;
label_28bef8:
    // 0x28bef8: 0xc0a5ba2  jal         func_296E88
label_28befc:
    if (ctx->pc == 0x28BEFCu) {
        ctx->pc = 0x28BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF8u;
        // 0x28befc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF00u;
        goto label_28bf00;
    }
    ctx->pc = 0x28BEF8u;
    SET_GPR_U32(ctx, 31, 0x28BF00u);
    ctx->pc = 0x28BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEF8u;
    // 0x28befc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x28BEF8u, 0x28BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF00u;
label_28bf00:
    // 0x28bf00: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x28bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28bf04:
    // 0x28bf04: 0x460041f  bltz        $v1, . + 4 + (0x41F << 2)
label_28bf08:
    if (ctx->pc == 0x28BF08u) {
        ctx->pc = 0x28BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF04u;
        // 0x28bf08: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF0Cu;
        goto label_28bf0c;
    }
    ctx->pc = 0x28BF04u;
    {
        const bool branch_taken_0x28bf04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF04u;
        // 0x28bf08: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf04) {
            ctx->pc = 0x28CF84u;
            goto label_28cf84;
        }
    }
    ctx->pc = 0x28BF0Cu;
label_28bf0c:
    // 0x28bf0c: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x28bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_28bf10:
    // 0x28bf10: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28bf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28bf14:
    // 0x28bf14: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x28bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bf18:
    // 0x28bf18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28bf1c:
    // 0x28bf1c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28bf20:
    // 0x28bf20: 0x10000149  b           . + 4 + (0x149 << 2)
label_28bf24:
    if (ctx->pc == 0x28BF24u) {
        ctx->pc = 0x28BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF20u;
        // 0x28bf24: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF28u;
        goto label_28bf28;
    }
    ctx->pc = 0x28BF20u;
    {
        const bool branch_taken_0x28bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF20u;
        // 0x28bf24: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf20) {
            ctx->pc = 0x28C448u;
            goto label_28c448;
        }
    }
    ctx->pc = 0x28BF28u;
label_28bf28:
    // 0x28bf28: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28bf2c:
    // 0x28bf2c: 0x1840013e  blez        $v0, . + 4 + (0x13E << 2)
label_28bf30:
    if (ctx->pc == 0x28BF30u) {
        ctx->pc = 0x28BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF2Cu;
        // 0x28bf30: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF34u;
        goto label_28bf34;
    }
    ctx->pc = 0x28BF2Cu;
    {
        const bool branch_taken_0x28bf2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF2Cu;
        // 0x28bf30: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf2c) {
            ctx->pc = 0x28C428u;
            goto label_28c428;
        }
    }
    ctx->pc = 0x28BF34u;
label_28bf34:
    // 0x28bf34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28bf34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28bf38:
    // 0x28bf38: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x28bf38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bf3c:
    // 0x28bf3c: 0x0  nop
    ctx->pc = 0x28bf3cu;
    // NOP
label_28bf40:
    // 0x28bf40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_28bf44:
    if (ctx->pc == 0x28BF44u) {
        ctx->pc = 0x28BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF40u;
        // 0x28bf44: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF48u;
        goto label_28bf48;
    }
    ctx->pc = 0x28BF40u;
    {
        const bool branch_taken_0x28bf40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF40u;
        // 0x28bf44: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf40) {
            ctx->pc = 0x28BF68u;
            goto label_28bf68;
        }
    }
    ctx->pc = 0x28BF48u;
label_28bf48:
    // 0x28bf48: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x28bf48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bf4c:
    // 0x28bf4c: 0x0  nop
    ctx->pc = 0x28bf4cu;
    // NOP
label_28bf50:
    // 0x28bf50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28bf54:
    if (ctx->pc == 0x28BF54u) {
        ctx->pc = 0x28BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF50u;
        // 0x28bf54: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF58u;
        goto label_28bf58;
    }
    ctx->pc = 0x28BF50u;
    {
        const bool branch_taken_0x28bf50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF50u;
        // 0x28bf54: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf50) {
            ctx->pc = 0x28BF68u;
            goto label_28bf68;
        }
    }
    ctx->pc = 0x28BF58u;
label_28bf58:
    // 0x28bf58: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x28bf58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bf5c:
    // 0x28bf5c: 0x0  nop
    ctx->pc = 0x28bf5cu;
    // NOP
label_28bf60:
    // 0x28bf60: 0x45010118  bc1t        . + 4 + (0x118 << 2)
label_28bf64:
    if (ctx->pc == 0x28BF64u) {
        ctx->pc = 0x28BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF60u;
        // 0x28bf64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF68u;
        goto label_28bf68;
    }
    ctx->pc = 0x28BF60u;
    {
        const bool branch_taken_0x28bf60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF60u;
        // 0x28bf64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf60) {
            ctx->pc = 0x28C3C4u;
            goto label_28c3c4;
        }
    }
    ctx->pc = 0x28BF68u;
label_28bf68:
    // 0x28bf68: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x28bf68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28bf6c:
    // 0x28bf6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28bf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28bf70:
    // 0x28bf70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28bf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28bf74:
    // 0x28bf74: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28bf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28bf78:
    // 0x28bf78: 0xc0a2874  jal         func_28A1D0
label_28bf7c:
    if (ctx->pc == 0x28BF7Cu) {
        ctx->pc = 0x28BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF78u;
        // 0x28bf7c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF80u;
        goto label_28bf80;
    }
    ctx->pc = 0x28BF78u;
    SET_GPR_U32(ctx, 31, 0x28BF80u);
    ctx->pc = 0x28BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF78u;
    // 0x28bf7c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1D0u, 0x28BF78u, 0x28BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF80u;
label_28bf80:
    // 0x28bf80: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28bf84:
    // 0x28bf84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28bf88:
    if (ctx->pc == 0x28BF88u) {
        ctx->pc = 0x28BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF84u;
        // 0x28bf88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF8Cu;
        goto label_28bf8c;
    }
    ctx->pc = 0x28BF84u;
    {
        const bool branch_taken_0x28bf84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF84u;
        // 0x28bf88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf84) {
            ctx->pc = 0x28BF94u;
            goto label_28bf94;
        }
    }
    ctx->pc = 0x28BF8Cu;
label_28bf8c:
    // 0x28bf8c: 0xc0a3486  jal         func_28D218
label_28bf90:
    if (ctx->pc == 0x28BF90u) {
        ctx->pc = 0x28BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF8Cu;
        // 0x28bf90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF94u;
        goto label_28bf94;
    }
    ctx->pc = 0x28BF8Cu;
    SET_GPR_U32(ctx, 31, 0x28BF94u);
    ctx->pc = 0x28BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF8Cu;
    // 0x28bf90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28BF8Cu, 0x28BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF94u;
label_28bf94:
    // 0x28bf94: 0x120000b5  beqz        $s0, . + 4 + (0xB5 << 2)
label_28bf98:
    if (ctx->pc == 0x28BF98u) {
        ctx->pc = 0x28BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF94u;
        // 0x28bf98: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF9Cu;
        goto label_28bf9c;
    }
    ctx->pc = 0x28BF94u;
    {
        const bool branch_taken_0x28bf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF94u;
        // 0x28bf98: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf94) {
            ctx->pc = 0x28C26Cu;
            goto label_28c26c;
        }
    }
    ctx->pc = 0x28BF9Cu;
label_28bf9c:
    // 0x28bf9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x28bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28bfa0:
    // 0x28bfa0: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
label_28bfa4:
    if (ctx->pc == 0x28BFA4u) {
        ctx->pc = 0x28BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFA0u;
        // 0x28bfa4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFA8u;
        goto label_28bfa8;
    }
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFA0u;
        // 0x28bfa4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BFD4u;
            goto label_28bfd4;
        }
    }
    ctx->pc = 0x28BFA8u;
label_28bfa8:
    // 0x28bfa8: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x28bfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28bfac:
    // 0x28bfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bfb0:
    // 0x28bfb0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28bfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28bfb4:
    // 0x28bfb4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28bfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28bfb8:
    // 0x28bfb8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28bfbc:
    // 0x28bfbc: 0x26480018  addiu       $t0, $s2, 0x18
    ctx->pc = 0x28bfbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28bfc0:
    // 0x28bfc0: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x28bfc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28bfc4:
    // 0x28bfc4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28bfc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28bfc8:
    // 0x28bfc8: 0xc09c666  jal         func_271998
label_28bfcc:
    if (ctx->pc == 0x28BFCCu) {
        ctx->pc = 0x28BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC8u;
        // 0x28bfcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFD0u;
        goto label_28bfd0;
    }
    ctx->pc = 0x28BFC8u;
    SET_GPR_U32(ctx, 31, 0x28BFD0u);
    ctx->pc = 0x28BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFC8u;
    // 0x28bfcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x28BFC8u, 0x28BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFD0u;
label_28bfd0:
    // 0x28bfd0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bfd4:
    // 0x28bfd4: 0xc7828a5c  lwc1        $f2, -0x75A4($gp)
    ctx->pc = 0x28bfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28bfd8:
    // 0x28bfd8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bfdc:
    // 0x28bfdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28bfdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28bfe0:
    // 0x28bfe0: 0xc7838a60  lwc1        $f3, -0x75A0($gp)
    ctx->pc = 0x28bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28bfe4:
    // 0x28bfe4: 0xc6440030  lwc1        $f4, 0x30($s2)
    ctx->pc = 0x28bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28bfe8:
    // 0x28bfe8: 0xc6450034  lwc1        $f5, 0x34($s2)
    ctx->pc = 0x28bfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28bfec:
    // 0x28bfec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28bfecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bff0:
    // 0x28bff0: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x28bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28bff4:
    // 0x28bff4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x28bff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_28bff8:
    // 0x28bff8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x28bff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_28bffc:
    // 0x28bffc: 0xc7888a64  lwc1        $f8, -0x759C($gp)
    ctx->pc = 0x28bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_28c000:
    // 0x28c000: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x28c000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28c004:
    // 0x28c004: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_28c008:
    // 0x28c008: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x28c008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_28c00c:
    // 0x28c00c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28c00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c010:
    // 0x28c010: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c014:
    // 0x28c014: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28c014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28c018:
    // 0x28c018: 0xc78a8a68  lwc1        $f10, -0x7598($gp)
    ctx->pc = 0x28c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28c01c:
    // 0x28c01c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28c01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c020:
    // 0x28c020: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x28c020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_28c024:
    // 0x28c024: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x28c024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28c028:
    // 0x28c028: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c02c:
    // 0x28c02c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x28c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c030:
    // 0x28c030: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28c030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28c034:
    // 0x28c034: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28c034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c038:
    // 0x28c038: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x28c038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28c03c:
    // 0x28c03c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x28c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c040:
    // 0x28c040: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c044:
    // 0x28c044: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x28c044u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_28c048:
    // 0x28c048: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28c048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c04c:
    // 0x28c04c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x28c04cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_28c050:
    // 0x28c050: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x28c050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_28c054:
    // 0x28c054: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28c054u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28c058:
    // 0x28c058: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28c058u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28c05c:
    // 0x28c05c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x28c05cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_28c060:
    // 0x28c060: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x28c060u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_28c064:
    // 0x28c064: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x28c064u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_28c068:
    // 0x28c068: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x28c068u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
label_28c06c:
    // 0x28c06c: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x28c06cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28c070:
    // 0x28c070: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x28c070u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_28c074:
    // 0x28c074: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c078:
    // 0x28c078: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28c078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28c07c:
    // 0x28c07c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x28c07cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_28c080:
    // 0x28c080: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x28c080u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_28c084:
    // 0x28c084: 0xe6450034  swc1        $f5, 0x34($s2)
    ctx->pc = 0x28c084u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28c088:
    // 0x28c088: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x28c088u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28c08c:
    // 0x28c08c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c090:
    // 0x28c090: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28c090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28c094:
    // 0x28c094: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x28c094u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_28c098:
    // 0x28c098: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x28c098u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_28c09c:
    // 0x28c09c: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x28c09cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
label_28c0a0:
    // 0x28c0a0: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x28c0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_28c0a4:
    // 0x28c0a4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28c0a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28c0a8:
    // 0x28c0a8: 0x460a2034  c.lt.s      $f4, $f10
    ctx->pc = 0x28c0a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c0ac:
    // 0x28c0ac: 0x0  nop
    ctx->pc = 0x28c0acu;
    // NOP
label_28c0b0:
    // 0x28c0b0: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_28c0b4:
    if (ctx->pc == 0x28C0B4u) {
        ctx->pc = 0x28C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0B0u;
        // 0x28c0b4: 0xe6460038  swc1        $f6, 0x38($s2) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0B8u;
        goto label_28c0b8;
    }
    ctx->pc = 0x28C0B0u;
    {
        const bool branch_taken_0x28c0b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0B0u;
        // 0x28c0b4: 0xe6460038  swc1        $f6, 0x38($s2) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0b0) {
            ctx->pc = 0x28C1ECu;
            goto label_28c1ec;
        }
    }
    ctx->pc = 0x28C0B8u;
label_28c0b8:
    // 0x28c0b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x28c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28c0bc:
    // 0x28c0bc: 0x1051004b  beq         $v0, $s1, . + 4 + (0x4B << 2)
label_28c0c0:
    if (ctx->pc == 0x28C0C0u) {
        ctx->pc = 0x28C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0BCu;
        // 0x28c0c0: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0C4u;
        goto label_28c0c4;
    }
    ctx->pc = 0x28C0BCu;
    {
        const bool branch_taken_0x28c0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x28C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0BCu;
        // 0x28c0c0: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0bc) {
            ctx->pc = 0x28C1ECu;
            goto label_28c1ec;
        }
    }
    ctx->pc = 0x28C0C4u;
label_28c0c4:
    // 0x28c0c4: 0xc7808a6c  lwc1        $f0, -0x7594($gp)
    ctx->pc = 0x28c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c0c8:
    // 0x28c0c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28c0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c0cc:
    // 0x28c0cc: 0x0  nop
    ctx->pc = 0x28c0ccu;
    // NOP
label_28c0d0:
    // 0x28c0d0: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_28c0d4:
    if (ctx->pc == 0x28C0D4u) {
        ctx->pc = 0x28C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D0u;
        // 0x28c0d4: 0xc782b468  lwc1        $f2, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0D8u;
        goto label_28c0d8;
    }
    ctx->pc = 0x28C0D0u;
    {
        const bool branch_taken_0x28c0d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D0u;
        // 0x28c0d4: 0xc782b468  lwc1        $f2, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0d0) {
            ctx->pc = 0x28C1F0u;
            goto label_28c1f0;
        }
    }
    ctx->pc = 0x28C0D8u;
label_28c0d8:
    // 0x28c0d8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28c0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28c0dc:
    // 0x28c0dc: 0xdc318ad8  ld          $s1, -0x7528($at)
    ctx->pc = 0x28c0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 1), 4294937304)));
label_28c0e0:
    // 0x28c0e0: 0xc0b9182  jal         func_2E4608
label_28c0e4:
    if (ctx->pc == 0x28C0E4u) {
        ctx->pc = 0x28C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0E0u;
        // 0x28c0e4: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0E8u;
        goto label_28c0e8;
    }
    ctx->pc = 0x28C0E0u;
    SET_GPR_U32(ctx, 31, 0x28C0E8u);
    ctx->pc = 0x28C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0E0u;
    // 0x28c0e4: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C0E0u, 0x28C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0E8u;
label_28c0e8:
    // 0x28c0e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28c0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28c0ec:
    // 0x28c0ec: 0xdc338ae0  ld          $s3, -0x7520($at)
    ctx->pc = 0x28c0ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294937312)));
label_28c0f0:
    // 0x28c0f0: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x28c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28c0f4:
    // 0x28c0f4: 0xc0b9182  jal         func_2E4608
label_28c0f8:
    if (ctx->pc == 0x28C0F8u) {
        ctx->pc = 0x28C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0F4u;
        // 0x28c0f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0FCu;
        goto label_28c0fc;
    }
    ctx->pc = 0x28C0F4u;
    SET_GPR_U32(ctx, 31, 0x28C0FCu);
    ctx->pc = 0x28C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0F4u;
    // 0x28c0f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C0F4u, 0x28C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0FCu;
label_28c0fc:
    // 0x28c0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c100:
    // 0x28c100: 0xc0b5d44  jal         func_2D7510
label_28c104:
    if (ctx->pc == 0x28C104u) {
        ctx->pc = 0x28C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C100u;
        // 0x28c104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C108u;
        goto label_28c108;
    }
    ctx->pc = 0x28C100u;
    SET_GPR_U32(ctx, 31, 0x28C108u);
    ctx->pc = 0x28C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C100u;
    // 0x28c104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x28C100u, 0x28C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C108u;
label_28c108:
    // 0x28c108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c10c:
    // 0x28c10c: 0xc0b8c90  jal         func_2E3240
label_28c110:
    if (ctx->pc == 0x28C110u) {
        ctx->pc = 0x28C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C10Cu;
        // 0x28c110: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C114u;
        goto label_28c114;
    }
    ctx->pc = 0x28C10Cu;
    SET_GPR_U32(ctx, 31, 0x28C114u);
    ctx->pc = 0x28C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C10Cu;
    // 0x28c110: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28C10Cu, 0x28C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C114u;
label_28c114:
    // 0x28c114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c118:
    // 0x28c118: 0xc0b8d3a  jal         func_2E34E8
label_28c11c:
    if (ctx->pc == 0x28C11Cu) {
        ctx->pc = 0x28C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C118u;
        // 0x28c11c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C120u;
        goto label_28c120;
    }
    ctx->pc = 0x28C118u;
    SET_GPR_U32(ctx, 31, 0x28C120u);
    ctx->pc = 0x28C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C118u;
    // 0x28c11c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28C118u, 0x28C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C120u;
label_28c120:
    // 0x28c120: 0x8e500060  lw          $s0, 0x60($s2)
    ctx->pc = 0x28c120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c124:
    // 0x28c124: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28c124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28c128:
    // 0x28c128: 0xdc258ae8  ld          $a1, -0x7518($at)
    ctx->pc = 0x28c128u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937320)));
label_28c12c:
    // 0x28c12c: 0xc0b8c60  jal         func_2E3180
label_28c130:
    if (ctx->pc == 0x28C130u) {
        ctx->pc = 0x28C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C12Cu;
        // 0x28c130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C134u;
        goto label_28c134;
    }
    ctx->pc = 0x28C12Cu;
    SET_GPR_U32(ctx, 31, 0x28C134u);
    ctx->pc = 0x28C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C12Cu;
    // 0x28c130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x28C12Cu, 0x28C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C134u;
label_28c134:
    // 0x28c134: 0xc0b8e84  jal         func_2E3A10
label_28c138:
    if (ctx->pc == 0x28C138u) {
        ctx->pc = 0x28C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C134u;
        // 0x28c138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C13Cu;
        goto label_28c13c;
    }
    ctx->pc = 0x28C134u;
    SET_GPR_U32(ctx, 31, 0x28C13Cu);
    ctx->pc = 0x28C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C134u;
    // 0x28c138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28C134u, 0x28C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C13Cu;
label_28c13c:
    // 0x28c13c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28c13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_28c140:
    // 0x28c140: 0xc0b9182  jal         func_2E4608
label_28c144:
    if (ctx->pc == 0x28C144u) {
        ctx->pc = 0x28C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C140u;
        // 0x28c144: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C148u;
        goto label_28c148;
    }
    ctx->pc = 0x28C140u;
    SET_GPR_U32(ctx, 31, 0x28C148u);
    ctx->pc = 0x28C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C140u;
    // 0x28c144: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C140u, 0x28C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C148u;
label_28c148:
    // 0x28c148: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c14c:
    // 0x28c14c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c150:
    // 0x28c150: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28c150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28c154:
    // 0x28c154: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28c154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28c158:
    // 0x28c158: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x28c158u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c15c:
    // 0x28c15c: 0x0  nop
    ctx->pc = 0x28c15cu;
    // NOP
label_28c160:
    // 0x28c160: 0x0  nop
    ctx->pc = 0x28c160u;
    // NOP
label_28c164:
    // 0x28c164: 0x460c0004  c1          0xC0004
    ctx->pc = 0x28c164u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
label_28c168:
    // 0x28c168: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x28c168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c16c:
    // 0x28c16c: 0x0  nop
    ctx->pc = 0x28c16cu;
    // NOP
label_28c170:
    // 0x28c170: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28c174:
    if (ctx->pc == 0x28C174u) {
        ctx->pc = 0x28C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C170u;
        // 0x28c174: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C178u;
        goto label_28c178;
    }
    ctx->pc = 0x28C170u;
    {
        const bool branch_taken_0x28c170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C170u;
        // 0x28c174: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c170) {
            ctx->pc = 0x28C180u;
            goto label_28c180;
        }
    }
    ctx->pc = 0x28C178u;
label_28c178:
    // 0x28c178: 0xc0b60e6  jal         func_2D8398
label_28c17c:
    if (ctx->pc == 0x28C17Cu) {
        ctx->pc = 0x28C180u;
        goto label_28c180;
    }
    ctx->pc = 0x28C178u;
    SET_GPR_U32(ctx, 31, 0x28C180u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28C178u, 0x28C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C180u;
label_28c180:
    // 0x28c180: 0xc0b9182  jal         func_2E4608
label_28c184:
    if (ctx->pc == 0x28C184u) {
        ctx->pc = 0x28C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C180u;
        // 0x28c184: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C188u;
        goto label_28c188;
    }
    ctx->pc = 0x28C180u;
    SET_GPR_U32(ctx, 31, 0x28C188u);
    ctx->pc = 0x28C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C180u;
    // 0x28c184: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C180u, 0x28C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C188u;
label_28c188:
    // 0x28c188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c18c:
    // 0x28c18c: 0xc0b5d44  jal         func_2D7510
label_28c190:
    if (ctx->pc == 0x28C190u) {
        ctx->pc = 0x28C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C18Cu;
        // 0x28c190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C194u;
        goto label_28c194;
    }
    ctx->pc = 0x28C18Cu;
    SET_GPR_U32(ctx, 31, 0x28C194u);
    ctx->pc = 0x28C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C18Cu;
    // 0x28c190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x28C18Cu, 0x28C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C194u;
label_28c194:
    // 0x28c194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c198:
    // 0x28c198: 0xc0b8c90  jal         func_2E3240
label_28c19c:
    if (ctx->pc == 0x28C19Cu) {
        ctx->pc = 0x28C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C198u;
        // 0x28c19c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1A0u;
        goto label_28c1a0;
    }
    ctx->pc = 0x28C198u;
    SET_GPR_U32(ctx, 31, 0x28C1A0u);
    ctx->pc = 0x28C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C198u;
    // 0x28c19c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28C198u, 0x28C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1A0u;
label_28c1a0:
    // 0x28c1a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c1a4:
    // 0x28c1a4: 0xc0b8d3a  jal         func_2E34E8
label_28c1a8:
    if (ctx->pc == 0x28C1A8u) {
        ctx->pc = 0x28C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1A4u;
        // 0x28c1a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1ACu;
        goto label_28c1ac;
    }
    ctx->pc = 0x28C1A4u;
    SET_GPR_U32(ctx, 31, 0x28C1ACu);
    ctx->pc = 0x28C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1A4u;
    // 0x28c1a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28C1A4u, 0x28C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1ACu;
label_28c1ac:
    // 0x28c1ac: 0x8e500060  lw          $s0, 0x60($s2)
    ctx->pc = 0x28c1acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c1b0:
    // 0x28c1b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c1b4:
    // 0x28c1b4: 0xc0b8c76  jal         func_2E31D8
label_28c1b8:
    if (ctx->pc == 0x28C1B8u) {
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1BCu;
        goto label_28c1bc;
    }
    ctx->pc = 0x28C1B4u;
    SET_GPR_U32(ctx, 31, 0x28C1BCu);
    ctx->pc = 0x28C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1B4u;
    // 0x28c1b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x28C1B4u, 0x28C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0xc0b8e84  jal         func_2E3A10
label_28c1c0:
    if (ctx->pc == 0x28C1C0u) {
        ctx->pc = 0x28C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1BCu;
        // 0x28c1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1C4u;
        goto label_28c1c4;
    }
    ctx->pc = 0x28C1BCu;
    SET_GPR_U32(ctx, 31, 0x28C1C4u);
    ctx->pc = 0x28C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1BCu;
    // 0x28c1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28C1BCu, 0x28C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1C4u;
label_28c1c4:
    // 0x28c1c4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x28c1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_28c1c8:
    // 0x28c1c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c1cc:
    // 0x28c1cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28c1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28c1d0:
    // 0x28c1d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c1d4:
    // 0x28c1d4: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x28c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
label_28c1d8:
    // 0x28c1d8: 0xe6400108  swc1        $f0, 0x108($s2)
    ctx->pc = 0x28c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
label_28c1dc:
    // 0x28c1dc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x28c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_28c1e0:
    // 0x28c1e0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x28c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_28c1e4:
    // 0x28c1e4: 0x10000019  b           . + 4 + (0x19 << 2)
label_28c1e8:
    if (ctx->pc == 0x28C1E8u) {
        ctx->pc = 0x28C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E4u;
        // 0x28c1e8: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1ECu;
        goto label_28c1ec;
    }
    ctx->pc = 0x28C1E4u;
    {
        const bool branch_taken_0x28c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E4u;
        // 0x28c1e8: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e4) {
            ctx->pc = 0x28C24Cu;
            goto label_28c24c;
        }
    }
    ctx->pc = 0x28C1ECu;
label_28c1ec:
    // 0x28c1ec: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x28c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c1f0:
    // 0x28c1f0: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x28c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_28c1f4:
    // 0x28c1f4: 0xc7808a70  lwc1        $f0, -0x7590($gp)
    ctx->pc = 0x28c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c1f8:
    // 0x28c1f8: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x28c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_28c1fc:
    // 0x28c1fc: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x28c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c200:
    // 0x28c200: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x28c200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28c204:
    // 0x28c204: 0xc644003c  lwc1        $f4, 0x3C($s2)
    ctx->pc = 0x28c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c208:
    // 0x28c208: 0xc6450040  lwc1        $f5, 0x40($s2)
    ctx->pc = 0x28c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c20c:
    // 0x28c20c: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x28c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c210:
    // 0x28c210: 0xc7868a74  lwc1        $f6, -0x758C($gp)
    ctx->pc = 0x28c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c214:
    // 0x28c214: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x28c214u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_28c218:
    // 0x28c218: 0xc7808a78  lwc1        $f0, -0x7588($gp)
    ctx->pc = 0x28c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c21c:
    // 0x28c21c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x28c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_28c220:
    // 0x28c220: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x28c220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_28c224:
    // 0x28c224: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x28c224u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_28c228:
    // 0x28c228: 0xe6430034  swc1        $f3, 0x34($s2)
    ctx->pc = 0x28c228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28c22c:
    // 0x28c22c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x28c22cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_28c230:
    // 0x28c230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28c234:
    // 0x28c234: 0xe6410044  swc1        $f1, 0x44($s2)
    ctx->pc = 0x28c234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_28c238:
    // 0x28c238: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x28c238u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_28c23c:
    // 0x28c23c: 0xe6450040  swc1        $f5, 0x40($s2)
    ctx->pc = 0x28c23cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_28c240:
    // 0x28c240: 0xc081546  jal         func_205518
label_28c244:
    if (ctx->pc == 0x28C244u) {
        ctx->pc = 0x28C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C240u;
        // 0x28c244: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C248u;
        goto label_28c248;
    }
    ctx->pc = 0x28C240u;
    SET_GPR_U32(ctx, 31, 0x28C248u);
    ctx->pc = 0x28C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C240u;
    // 0x28c244: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28C240u, 0x28C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C248u;
label_28c248:
    // 0x28c248: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c24c:
    // 0x28c24c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x28c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c250:
    // 0x28c250: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28c250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28c254:
    // 0x28c254: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x28c254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28c258:
    // 0x28c258: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x28c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c25c:
    // 0x28c25c: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x28c25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28c260:
    // 0x28c260: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x28c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c264:
    // 0x28c264: 0x10000070  b           . + 4 + (0x70 << 2)
label_28c268:
    if (ctx->pc == 0x28C268u) {
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C26Cu;
        goto label_28c26c;
    }
    ctx->pc = 0x28C264u;
    {
        const bool branch_taken_0x28c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c264) {
            ctx->pc = 0x28C428u;
            goto label_28c428;
        }
    }
    ctx->pc = 0x28C26Cu;
label_28c26c:
    // 0x28c26c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c270:
    // 0x28c270: 0xc6470018  lwc1        $f7, 0x18($s2)
    ctx->pc = 0x28c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28c274:
    // 0x28c274: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x28c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c278:
    // 0x28c278: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x28c278u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_28c27c:
    // 0x28c27c: 0xc645001c  lwc1        $f5, 0x1C($s2)
    ctx->pc = 0x28c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c280:
    // 0x28c280: 0xc7818a7c  lwc1        $f1, -0x7584($gp)
    ctx->pc = 0x28c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c284:
    // 0x28c284: 0xc6440034  lwc1        $f4, 0x34($s2)
    ctx->pc = 0x28c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c288:
    // 0x28c288: 0xe6470018  swc1        $f7, 0x18($s2)
    ctx->pc = 0x28c288u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28c28c:
    // 0x28c28c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28c28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28c290:
    // 0x28c290: 0xc6460020  lwc1        $f6, 0x20($s2)
    ctx->pc = 0x28c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c294:
    // 0x28c294: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c298:
    // 0x28c298: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28c298u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28c29c:
    // 0x28c29c: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x28c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c2a0:
    // 0x28c2a0: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x28c2a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_28c2a4:
    // 0x28c2a4: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c2a8:
    // 0x28c2a8: 0xc7808a80  lwc1        $f0, -0x7580($gp)
    ctx->pc = 0x28c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c2ac:
    // 0x28c2ac: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c2b0:
    // 0x28c2b0: 0xe645001c  swc1        $f5, 0x1C($s2)
    ctx->pc = 0x28c2b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28c2b4:
    // 0x28c2b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28c2b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28c2b8:
    // 0x28c2b8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x28c2b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_28c2bc:
    // 0x28c2bc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x28c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c2c0:
    // 0x28c2c0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x28c2c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_28c2c4:
    // 0x28c2c4: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x28c2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_28c2c8:
    // 0x28c2c8: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x28c2c8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_28c2cc:
    // 0x28c2cc: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x28c2ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_28c2d0:
    // 0x28c2d0: 0xe6440034  swc1        $f4, 0x34($s2)
    ctx->pc = 0x28c2d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28c2d4:
    // 0x28c2d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28c2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28c2d8:
    // 0x28c2d8: 0xe6460020  swc1        $f6, 0x20($s2)
    ctx->pc = 0x28c2d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28c2dc:
    // 0x28c2dc: 0xe4a70030  swc1        $f7, 0x30($a1)
    ctx->pc = 0x28c2dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28c2e0:
    // 0x28c2e0: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x28c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c2e4:
    // 0x28c2e4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x28c2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c2e8:
    // 0x28c2e8: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x28c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28c2ec:
    // 0x28c2ec: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x28c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c2f0:
    // 0x28c2f0: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x28c2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_28c2f4:
    // 0x28c2f4: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x28c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c2f8:
    // 0x28c2f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28c2f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28c2fc:
    // 0x28c2fc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x28c2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c300:
    // 0x28c300: 0x0  nop
    ctx->pc = 0x28c300u;
    // NOP
label_28c304:
    // 0x28c304: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28c308:
    if (ctx->pc == 0x28C308u) {
        ctx->pc = 0x28C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C304u;
        // 0x28c308: 0xe4a20048  swc1        $f2, 0x48($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C30Cu;
        goto label_28c30c;
    }
    ctx->pc = 0x28C304u;
    {
        const bool branch_taken_0x28c304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C304u;
        // 0x28c308: 0xe4a20048  swc1        $f2, 0x48($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c304) {
            ctx->pc = 0x28C31Cu;
            goto label_28c31c;
        }
    }
    ctx->pc = 0x28C30Cu;
label_28c30c:
    // 0x28c30c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_28c310:
    // 0x28c310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c314:
    // 0x28c314: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x28c314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28c318:
    // 0x28c318: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x28c318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_28c31c:
    // 0x28c31c: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x28c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c320:
    // 0x28c320: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_28c324:
    // 0x28c324: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28c324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28c328:
    // 0x28c328: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28c328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c32c:
    // 0x28c32c: 0x0  nop
    ctx->pc = 0x28c32cu;
    // NOP
label_28c330:
    // 0x28c330: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_28c334:
    if (ctx->pc == 0x28C334u) {
        ctx->pc = 0x28C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C330u;
        // 0x28c334: 0xc4a1004c  lwc1        $f1, 0x4C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C338u;
        goto label_28c338;
    }
    ctx->pc = 0x28C330u;
    {
        const bool branch_taken_0x28c330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c330) {
            ctx->pc = 0x28C334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C330u;
            // 0x28c334: 0xc4a1004c  lwc1        $f1, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C344u;
            goto label_28c344;
        }
    }
    ctx->pc = 0x28C338u;
label_28c338:
    // 0x28c338: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28c338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28c33c:
    // 0x28c33c: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x28c33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_28c340:
    // 0x28c340: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x28c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c344:
    // 0x28c344: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x28c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c348:
    // 0x28c348: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28c348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c34c:
    // 0x28c34c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x28c34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c350:
    // 0x28c350: 0x0  nop
    ctx->pc = 0x28c350u;
    // NOP
label_28c354:
    // 0x28c354: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28c358:
    if (ctx->pc == 0x28C358u) {
        ctx->pc = 0x28C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C354u;
        // 0x28c358: 0xe4a0004c  swc1        $f0, 0x4C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C35Cu;
        goto label_28c35c;
    }
    ctx->pc = 0x28C354u;
    {
        const bool branch_taken_0x28c354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C354u;
        // 0x28c358: 0xe4a0004c  swc1        $f0, 0x4C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c354) {
            ctx->pc = 0x28C364u;
            goto label_28c364;
        }
    }
    ctx->pc = 0x28C35Cu;
label_28c35c:
    // 0x28c35c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28c35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28c360:
    // 0x28c360: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x28c360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_28c364:
    // 0x28c364: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x28c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c368:
    // 0x28c368: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28c368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c36c:
    // 0x28c36c: 0x0  nop
    ctx->pc = 0x28c36cu;
    // NOP
label_28c370:
    // 0x28c370: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_28c374:
    if (ctx->pc == 0x28C374u) {
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0xc4a10058  lwc1        $f1, 0x58($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C378u;
        goto label_28c378;
    }
    ctx->pc = 0x28C370u;
    {
        const bool branch_taken_0x28c370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c370) {
            ctx->pc = 0x28C374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C370u;
            // 0x28c374: 0xc4a10058  lwc1        $f1, 0x58($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C384u;
            goto label_28c384;
        }
    }
    ctx->pc = 0x28C378u;
label_28c378:
    // 0x28c378: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28c378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28c37c:
    // 0x28c37c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x28c37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_28c380:
    // 0x28c380: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x28c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c384:
    // 0x28c384: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x28c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c388:
    // 0x28c388: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28c388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c38c:
    // 0x28c38c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x28c38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c390:
    // 0x28c390: 0x0  nop
    ctx->pc = 0x28c390u;
    // NOP
label_28c394:
    // 0x28c394: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28c398:
    if (ctx->pc == 0x28C398u) {
        ctx->pc = 0x28C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C394u;
        // 0x28c398: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C39Cu;
        goto label_28c39c;
    }
    ctx->pc = 0x28C394u;
    {
        const bool branch_taken_0x28c394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C394u;
        // 0x28c398: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c394) {
            ctx->pc = 0x28C3A4u;
            goto label_28c3a4;
        }
    }
    ctx->pc = 0x28C39Cu;
label_28c39c:
    // 0x28c39c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28c39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28c3a0:
    // 0x28c3a0: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x28c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_28c3a4:
    // 0x28c3a4: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x28c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c3a8:
    // 0x28c3a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28c3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c3ac:
    // 0x28c3ac: 0x0  nop
    ctx->pc = 0x28c3acu;
    // NOP
label_28c3b0:
    // 0x28c3b0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_28c3b4:
    if (ctx->pc == 0x28C3B4u) {
        ctx->pc = 0x28C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3B0u;
        // 0x28c3b4: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3B8u;
        goto label_28c3b8;
    }
    ctx->pc = 0x28C3B0u;
    {
        const bool branch_taken_0x28c3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3B0u;
        // 0x28c3b4: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3b0) {
            ctx->pc = 0x28C424u;
            goto label_28c424;
        }
    }
    ctx->pc = 0x28C3B8u;
label_28c3b8:
    // 0x28c3b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28c3b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28c3bc:
    // 0x28c3bc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28c3c0:
    if (ctx->pc == 0x28C3C0u) {
        ctx->pc = 0x28C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3BCu;
        // 0x28c3c0: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3C4u;
        goto label_28c3c4;
    }
    ctx->pc = 0x28C3BCu;
    {
        const bool branch_taken_0x28c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3BCu;
        // 0x28c3c0: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3bc) {
            ctx->pc = 0x28C428u;
            goto label_28c428;
        }
    }
    ctx->pc = 0x28C3C4u;
label_28c3c4:
    // 0x28c3c4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x28c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_28c3c8:
    // 0x28c3c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c3cc:
    // 0x28c3cc: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x28c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c3d0:
    // 0x28c3d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x28c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c3d4:
    // 0x28c3d4: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c3d8:
    // 0x28c3d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c3dc:
    // 0x28c3dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28c3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28c3e0:
    // 0x28c3e0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_28c3e4:
    // 0x28c3e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28c3e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28c3e8:
    // 0x28c3e8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x28c3e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_28c3ec:
    // 0x28c3ec: 0xc098ffc  jal         func_263FF0
label_28c3f0:
    if (ctx->pc == 0x28C3F0u) {
        ctx->pc = 0x28C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3ECu;
        // 0x28c3f0: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3F4u;
        goto label_28c3f4;
    }
    ctx->pc = 0x28C3ECu;
    SET_GPR_U32(ctx, 31, 0x28C3F4u);
    ctx->pc = 0x28C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3ECu;
    // 0x28c3f0: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x28C3ECu, 0x28C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3F4u;
label_28c3f4:
    // 0x28c3f4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x28c3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c3f8:
    // 0x28c3f8: 0xc7828a84  lwc1        $f2, -0x757C($gp)
    ctx->pc = 0x28c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c3fc:
    // 0x28c3fc: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x28c3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c400:
    // 0x28c400: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28c400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_28c404:
    // 0x28c404: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28c404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28c408:
    // 0x28c408: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x28c408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c40c:
    // 0x28c40c: 0x0  nop
    ctx->pc = 0x28c40cu;
    // NOP
label_28c410:
    // 0x28c410: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_28c414:
    if (ctx->pc == 0x28C414u) {
        ctx->pc = 0x28C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C410u;
        // 0x28c414: 0xe6400108  swc1        $f0, 0x108($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C418u;
        goto label_28c418;
    }
    ctx->pc = 0x28C410u;
    {
        const bool branch_taken_0x28c410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C410u;
        // 0x28c414: 0xe6400108  swc1        $f0, 0x108($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c410) {
            ctx->pc = 0x28C424u;
            goto label_28c424;
        }
    }
    ctx->pc = 0x28C418u;
label_28c418:
    // 0x28c418: 0xc0a2572  jal         func_2895C8
label_28c41c:
    if (ctx->pc == 0x28C41Cu) {
        ctx->pc = 0x28C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C418u;
        // 0x28c41c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C420u;
        goto label_28c420;
    }
    ctx->pc = 0x28C418u;
    SET_GPR_U32(ctx, 31, 0x28C420u);
    ctx->pc = 0x28C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C418u;
    // 0x28c41c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x28C418u, 0x28C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C420u;
label_28c420:
    // 0x28c420: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28c420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c424:
    // 0x28c424: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28c424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28c428:
    // 0x28c428: 0x124002da  beqz        $s2, . + 4 + (0x2DA << 2)
label_28c42c:
    if (ctx->pc == 0x28C42Cu) {
        ctx->pc = 0x28C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C428u;
        // 0x28c42c: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C430u;
        goto label_28c430;
    }
    ctx->pc = 0x28C428u;
    {
        const bool branch_taken_0x28c428 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C428u;
        // 0x28c42c: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c428) {
            ctx->pc = 0x28CF94u;
            goto label_28cf94;
        }
    }
    ctx->pc = 0x28C430u;
label_28c430:
    // 0x28c430: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x28c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28c434:
    // 0x28c434: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_28c438:
    // 0x28c438: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28c438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28c43c:
    // 0x28c43c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28c43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c440:
    // 0x28c440: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x28c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c444:
    // 0x28c444: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c448:
    // 0x28c448: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28c44c:
    // 0x28c44c: 0xe4400b74  swc1        $f0, 0xB74($v0)
    ctx->pc = 0x28c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2932), bits); }
label_28c450:
    // 0x28c450: 0xac430b80  sw          $v1, 0xB80($v0)
    ctx->pc = 0x28c450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2944), GPR_U32(ctx, 3));
label_28c454:
    // 0x28c454: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x28c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c458:
    // 0x28c458: 0xe4400b78  swc1        $f0, 0xB78($v0)
    ctx->pc = 0x28c458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2936), bits); }
label_28c45c:
    // 0x28c45c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x28c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c460:
    // 0x28c460: 0x100002cd  b           . + 4 + (0x2CD << 2)
label_28c464:
    if (ctx->pc == 0x28C464u) {
        ctx->pc = 0x28C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C460u;
        // 0x28c464: 0xe4410b7c  swc1        $f1, 0xB7C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C468u;
        goto label_28c468;
    }
    ctx->pc = 0x28C460u;
    {
        const bool branch_taken_0x28c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C460u;
        // 0x28c464: 0xe4410b7c  swc1        $f1, 0xB7C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c460) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28C468u;
label_28c468:
    // 0x28c468: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_28c46c:
    // 0x28c46c: 0x18400264  blez        $v0, . + 4 + (0x264 << 2)
label_28c470:
    if (ctx->pc == 0x28C470u) {
        ctx->pc = 0x28C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C46Cu;
        // 0x28c470: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C474u;
        goto label_28c474;
    }
    ctx->pc = 0x28C46Cu;
    {
        const bool branch_taken_0x28c46c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C46Cu;
        // 0x28c470: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c46c) {
            ctx->pc = 0x28CE00u;
            goto label_28ce00;
        }
    }
    ctx->pc = 0x28C474u;
label_28c474:
    // 0x28c474: 0x14c20028  bne         $a2, $v0, . + 4 + (0x28 << 2)
label_28c478:
    if (ctx->pc == 0x28C478u) {
        ctx->pc = 0x28C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C474u;
        // 0x28c478: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C47Cu;
        goto label_28c47c;
    }
    ctx->pc = 0x28C474u;
    {
        const bool branch_taken_0x28c474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C474u;
        // 0x28c478: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c474) {
            ctx->pc = 0x28C518u;
            goto label_28c518;
        }
    }
    ctx->pc = 0x28C47Cu;
label_28c47c:
    // 0x28c47c: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x28c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c480:
    // 0x28c480: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x28c480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_28c484:
    // 0x28c484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c488:
    // 0x28c488: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28c488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c48c:
    // 0x28c48c: 0x0  nop
    ctx->pc = 0x28c48cu;
    // NOP
label_28c490:
    // 0x28c490: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_28c494:
    if (ctx->pc == 0x28C494u) {
        ctx->pc = 0x28C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C490u;
        // 0x28c494: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C498u;
        goto label_28c498;
    }
    ctx->pc = 0x28C490u;
    {
        const bool branch_taken_0x28c490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C490u;
        // 0x28c494: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c490) {
            ctx->pc = 0x28C518u;
            goto label_28c518;
        }
    }
    ctx->pc = 0x28C498u;
label_28c498:
    // 0x28c498: 0xc0ada34  jal         func_2B68D0
label_28c49c:
    if (ctx->pc == 0x28C49Cu) {
        ctx->pc = 0x28C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C498u;
        // 0x28c49c: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4A0u;
        goto label_28c4a0;
    }
    ctx->pc = 0x28C498u;
    SET_GPR_U32(ctx, 31, 0x28C4A0u);
    ctx->pc = 0x28C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C498u;
    // 0x28c49c: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28C498u, 0x28C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4A0u;
label_28c4a0:
    // 0x28c4a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28c4a4:
    // 0x28c4a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c4a8:
    // 0x28c4a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28c4a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28c4ac:
    // 0x28c4ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_28c4b0:
    if (ctx->pc == 0x28C4B0u) {
        ctx->pc = 0x28C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ACu;
        // 0x28c4b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4B4u;
        goto label_28c4b4;
    }
    ctx->pc = 0x28C4ACu;
    {
        const bool branch_taken_0x28c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c4ac) {
            ctx->pc = 0x28C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C4ACu;
            // 0x28c4b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C4B4u;
            goto label_28c4b4;
        }
    }
    ctx->pc = 0x28C4B4u;
label_28c4b4:
    // 0x28c4b4: 0x2010  mfhi        $a0
    ctx->pc = 0x28c4b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_28c4b8:
    // 0x28c4b8: 0xc081546  jal         func_205518
label_28c4bc:
    if (ctx->pc == 0x28C4BCu) {
        ctx->pc = 0x28C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4B8u;
        // 0x28c4bc: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4C0u;
        goto label_28c4c0;
    }
    ctx->pc = 0x28C4B8u;
    SET_GPR_U32(ctx, 31, 0x28C4C0u);
    ctx->pc = 0x28C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4B8u;
    // 0x28c4bc: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28C4B8u, 0x28C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4C0u;
label_28c4c0:
    // 0x28c4c0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x28c4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c4c4:
    // 0x28c4c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c4c8:
    // 0x28c4c8: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28c4cc:
    // 0x28c4cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c4d0:
    // 0x28c4d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28c4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c4d4:
    // 0x28c4d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x28c4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c4d8:
    // 0x28c4d8: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x28c4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_28c4dc:
    // 0x28c4dc: 0xc0a5e30  jal         func_2978C0
label_28c4e0:
    if (ctx->pc == 0x28C4E0u) {
        ctx->pc = 0x28C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4DCu;
        // 0x28c4e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4E4u;
        goto label_28c4e4;
    }
    ctx->pc = 0x28C4DCu;
    SET_GPR_U32(ctx, 31, 0x28C4E4u);
    ctx->pc = 0x28C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4DCu;
    // 0x28c4e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x28C4DCu, 0x28C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4E4u;
label_28c4e4:
    // 0x28c4e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c4e8:
    // 0x28c4e8: 0xc0a5f8c  jal         func_297E30
label_28c4ec:
    if (ctx->pc == 0x28C4ECu) {
        ctx->pc = 0x28C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4E8u;
        // 0x28c4ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4F0u;
        goto label_28c4f0;
    }
    ctx->pc = 0x28C4E8u;
    SET_GPR_U32(ctx, 31, 0x28C4F0u);
    ctx->pc = 0x28C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4E8u;
    // 0x28c4ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E30u, 0x28C4E8u, 0x28C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4F0u;
label_28c4f0:
    // 0x28c4f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c4f4:
    // 0x28c4f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28c4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c4f8:
    // 0x28c4f8: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x28c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28c4fc:
    // 0x28c4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c500:
    // 0x28c500: 0xc0a900a  jal         func_2A4028
label_28c504:
    if (ctx->pc == 0x28C504u) {
        ctx->pc = 0x28C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C500u;
        // 0x28c504: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C508u;
        goto label_28c508;
    }
    ctx->pc = 0x28C500u;
    SET_GPR_U32(ctx, 31, 0x28C508u);
    ctx->pc = 0x28C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C500u;
    // 0x28c504: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28C500u, 0x28C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C508u;
label_28c508:
    // 0x28c508: 0xc0a2572  jal         func_2895C8
label_28c50c:
    if (ctx->pc == 0x28C50Cu) {
        ctx->pc = 0x28C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C508u;
        // 0x28c50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C510u;
        goto label_28c510;
    }
    ctx->pc = 0x28C508u;
    SET_GPR_U32(ctx, 31, 0x28C510u);
    ctx->pc = 0x28C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C508u;
    // 0x28c50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x28C508u, 0x28C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C510u;
label_28c510:
    // 0x28c510: 0x10000234  b           . + 4 + (0x234 << 2)
label_28c514:
    if (ctx->pc == 0x28C514u) {
        ctx->pc = 0x28C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C510u;
        // 0x28c514: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C518u;
        goto label_28c518;
    }
    ctx->pc = 0x28C510u;
    {
        const bool branch_taken_0x28c510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C510u;
        // 0x28c514: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c510) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28C518u;
label_28c518:
    // 0x28c518: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28c518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c51c:
    // 0x28c51c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28c51cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c520:
    // 0x28c520: 0x0  nop
    ctx->pc = 0x28c520u;
    // NOP
label_28c524:
    // 0x28c524: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_28c528:
    if (ctx->pc == 0x28C528u) {
        ctx->pc = 0x28C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C524u;
        // 0x28c528: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C52Cu;
        goto label_28c52c;
    }
    ctx->pc = 0x28C524u;
    {
        const bool branch_taken_0x28c524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C524u;
        // 0x28c528: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c524) {
            ctx->pc = 0x28C54Cu;
            goto label_28c54c;
        }
    }
    ctx->pc = 0x28C52Cu;
label_28c52c:
    // 0x28c52c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28c52cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c530:
    // 0x28c530: 0x0  nop
    ctx->pc = 0x28c530u;
    // NOP
label_28c534:
    // 0x28c534: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28c538:
    if (ctx->pc == 0x28C538u) {
        ctx->pc = 0x28C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C534u;
        // 0x28c538: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C53Cu;
        goto label_28c53c;
    }
    ctx->pc = 0x28C534u;
    {
        const bool branch_taken_0x28c534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C534u;
        // 0x28c538: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c534) {
            ctx->pc = 0x28C54Cu;
            goto label_28c54c;
        }
    }
    ctx->pc = 0x28C53Cu;
label_28c53c:
    // 0x28c53c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28c53cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c540:
    // 0x28c540: 0x0  nop
    ctx->pc = 0x28c540u;
    // NOP
label_28c544:
    // 0x28c544: 0x4503017e  bc1tl       . + 4 + (0x17E << 2)
label_28c548:
    if (ctx->pc == 0x28C548u) {
        ctx->pc = 0x28C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C544u;
        // 0x28c548: 0x8e5000e0  lw          $s0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C54Cu;
        goto label_28c54c;
    }
    ctx->pc = 0x28C544u;
    {
        const bool branch_taken_0x28c544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c544) {
            ctx->pc = 0x28C548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C544u;
            // 0x28c548: 0x8e5000e0  lw          $s0, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB40u;
            goto label_28cb40;
        }
    }
    ctx->pc = 0x28C54Cu;
label_28c54c:
    // 0x28c54c: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x28c54cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28c550:
    // 0x28c550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c554:
    // 0x28c554: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c558:
    // 0x28c558: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28c558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c55c:
    // 0x28c55c: 0xc0a2874  jal         func_28A1D0
label_28c560:
    if (ctx->pc == 0x28C560u) {
        ctx->pc = 0x28C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C55Cu;
        // 0x28c560: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C564u;
        goto label_28c564;
    }
    ctx->pc = 0x28C55Cu;
    SET_GPR_U32(ctx, 31, 0x28C564u);
    ctx->pc = 0x28C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C55Cu;
    // 0x28c560: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1D0u, 0x28C55Cu, 0x28C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C564u;
label_28c564:
    // 0x28c564: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28c564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28c568:
    // 0x28c568: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28c56c:
    if (ctx->pc == 0x28C56Cu) {
        ctx->pc = 0x28C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C568u;
        // 0x28c56c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C570u;
        goto label_28c570;
    }
    ctx->pc = 0x28C568u;
    {
        const bool branch_taken_0x28c568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C568u;
        // 0x28c56c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c568) {
            ctx->pc = 0x28C578u;
            goto label_28c578;
        }
    }
    ctx->pc = 0x28C570u;
label_28c570:
    // 0x28c570: 0xc0a3486  jal         func_28D218
label_28c574:
    if (ctx->pc == 0x28C574u) {
        ctx->pc = 0x28C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C570u;
        // 0x28c574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C578u;
        goto label_28c578;
    }
    ctx->pc = 0x28C570u;
    SET_GPR_U32(ctx, 31, 0x28C578u);
    ctx->pc = 0x28C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C570u;
    // 0x28c574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28C570u, 0x28C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C578u;
label_28c578:
    // 0x28c578: 0x12600152  beqz        $s3, . + 4 + (0x152 << 2)
label_28c57c:
    if (ctx->pc == 0x28C57Cu) {
        ctx->pc = 0x28C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C578u;
        // 0x28c57c: 0x26540018  addiu       $s4, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C580u;
        goto label_28c580;
    }
    ctx->pc = 0x28C578u;
    {
        const bool branch_taken_0x28c578 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C578u;
        // 0x28c57c: 0x26540018  addiu       $s4, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c578) {
            ctx->pc = 0x28CAC4u;
            goto label_28cac4;
        }
    }
    ctx->pc = 0x28C580u;
label_28c580:
    // 0x28c580: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x28c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_28c584:
    // 0x28c584: 0xc081546  jal         func_205518
label_28c588:
    if (ctx->pc == 0x28C588u) {
        ctx->pc = 0x28C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C584u;
        // 0x28c588: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C58Cu;
        goto label_28c58c;
    }
    ctx->pc = 0x28C584u;
    SET_GPR_U32(ctx, 31, 0x28C58Cu);
    ctx->pc = 0x28C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C584u;
    // 0x28c588: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28C584u, 0x28C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C58Cu;
label_28c58c:
    // 0x28c58c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x28c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28c590:
    // 0x28c590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c594:
    // 0x28c594: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_28c598:
    if (ctx->pc == 0x28C598u) {
        ctx->pc = 0x28C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C594u;
        // 0x28c598: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C59Cu;
        goto label_28c59c;
    }
    ctx->pc = 0x28C594u;
    {
        const bool branch_taken_0x28c594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C594u;
        // 0x28c598: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c594) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C59Cu;
label_28c59c:
    // 0x28c59c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c5a0:
    // 0x28c5a0: 0x10000067  b           . + 4 + (0x67 << 2)
label_28c5a4:
    if (ctx->pc == 0x28C5A4u) {
        ctx->pc = 0x28C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5A0u;
        // 0x28c5a4: 0xae4000e0  sw          $zero, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5A8u;
        goto label_28c5a8;
    }
    ctx->pc = 0x28C5A0u;
    {
        const bool branch_taken_0x28c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5A0u;
        // 0x28c5a4: 0xae4000e0  sw          $zero, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5a0) {
            ctx->pc = 0x28C740u;
            goto label_28c740;
        }
    }
    ctx->pc = 0x28C5A8u;
label_28c5a8:
    // 0x28c5a8: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
label_28c5ac:
    if (ctx->pc == 0x28C5ACu) {
        ctx->pc = 0x28C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5A8u;
        // 0x28c5ac: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5B0u;
        goto label_28c5b0;
    }
    ctx->pc = 0x28C5A8u;
    {
        const bool branch_taken_0x28c5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5A8u;
        // 0x28c5ac: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5a8) {
            ctx->pc = 0x28C708u;
            goto label_28c708;
        }
    }
    ctx->pc = 0x28C5B0u;
label_28c5b0:
    // 0x28c5b0: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x28c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c5b4:
    // 0x28c5b4: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_28c5b8:
    // 0x28c5b8: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x28c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c5bc:
    // 0x28c5bc: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x28c5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28c5c0:
    // 0x28c5c0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x28c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c5c4:
    // 0x28c5c4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x28c5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_28c5c8:
    // 0x28c5c8: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x28c5c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_28c5cc:
    // 0x28c5cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28c5d0:
    // 0x28c5d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28c5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28c5d4:
    // 0x28c5d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28c5d8:
    // 0x28c5d8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x28c5d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28c5dc:
    // 0x28c5dc: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x28c5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c5e0:
    // 0x28c5e0: 0x0  nop
    ctx->pc = 0x28c5e0u;
    // NOP
label_28c5e4:
    // 0x28c5e4: 0x0  nop
    ctx->pc = 0x28c5e4u;
    // NOP
label_28c5e8:
    // 0x28c5e8: 0x460c0044  c1          0xC0044
    ctx->pc = 0x28c5e8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
label_28c5ec:
    // 0x28c5ec: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x28c5ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c5f0:
    // 0x28c5f0: 0x0  nop
    ctx->pc = 0x28c5f0u;
    // NOP
label_28c5f4:
    // 0x28c5f4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_28c5f8:
    if (ctx->pc == 0x28C5F8u) {
        ctx->pc = 0x28C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F4u;
        // 0x28c5f8: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5FCu;
        goto label_28c5fc;
    }
    ctx->pc = 0x28C5F4u;
    {
        const bool branch_taken_0x28c5f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F4u;
        // 0x28c5f8: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5f4) {
            ctx->pc = 0x28C614u;
            goto label_28c614;
        }
    }
    ctx->pc = 0x28C5FCu;
label_28c5fc:
    // 0x28c5fc: 0xc0b60e6  jal         func_2D8398
label_28c600:
    if (ctx->pc == 0x28C600u) {
        ctx->pc = 0x28C604u;
        goto label_28c604;
    }
    ctx->pc = 0x28C5FCu;
    SET_GPR_U32(ctx, 31, 0x28C604u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28C5FCu, 0x28C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C604u;
label_28c604:
    // 0x28c604: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x28c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c608:
    // 0x28c608: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x28c608u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_28c60c:
    // 0x28c60c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x28c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c610:
    // 0x28c610: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x28c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c614:
    // 0x28c614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28c614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28c618:
    // 0x28c618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c61c:
    // 0x28c61c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28c61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c620:
    // 0x28c620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c624:
    // 0x28c624: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28c624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c628:
    // 0x28c628: 0x0  nop
    ctx->pc = 0x28c628u;
    // NOP
label_28c62c:
    // 0x28c62c: 0x0  nop
    ctx->pc = 0x28c62cu;
    // NOP
label_28c630:
    // 0x28c630: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28c630u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_28c634:
    // 0x28c634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c638:
    // 0x28c638: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c63c:
    // 0x28c63c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x28c63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c640:
    // 0x28c640: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x28c640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28c644:
    // 0x28c644: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c648:
    // 0x28c648: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x28c648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_28c64c:
    // 0x28c64c: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x28c64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_28c650:
    // 0x28c650: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x28c650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_28c654:
    // 0x28c654: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28c654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28c658:
    // 0x28c658: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28c658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28c65c:
    // 0x28c65c: 0xc0a19c0  jal         func_286700
label_28c660:
    if (ctx->pc == 0x28C660u) {
        ctx->pc = 0x28C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C65Cu;
        // 0x28c660: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C664u;
        goto label_28c664;
    }
    ctx->pc = 0x28C65Cu;
    SET_GPR_U32(ctx, 31, 0x28C664u);
    ctx->pc = 0x28C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C65Cu;
    // 0x28c660: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x286700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286700u, 0x28C65Cu, 0x28C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C664u;
label_28c664:
    // 0x28c664: 0xc0a1418  jal         func_285060
label_28c668:
    if (ctx->pc == 0x28C668u) {
        ctx->pc = 0x28C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C664u;
        // 0x28c668: 0xae5300e0  sw          $s3, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C66Cu;
        goto label_28c66c;
    }
    ctx->pc = 0x28C664u;
    SET_GPR_U32(ctx, 31, 0x28C66Cu);
    ctx->pc = 0x28C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C664u;
    // 0x28c668: 0xae5300e0  sw          $s3, 0xE0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x28C664u, 0x28C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C66Cu;
label_28c66c:
    // 0x28c66c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x28c66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c670:
    // 0x28c670: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c674:
    // 0x28c674: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_28c678:
    // 0x28c678: 0x4610032  bgez        $v1, . + 4 + (0x32 << 2)
label_28c67c:
    if (ctx->pc == 0x28C67Cu) {
        ctx->pc = 0x28C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C678u;
        // 0x28c67c: 0xae4300e4  sw          $v1, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C680u;
        goto label_28c680;
    }
    ctx->pc = 0x28C678u;
    {
        const bool branch_taken_0x28c678 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C678u;
        // 0x28c67c: 0xae4300e4  sw          $v1, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c678) {
            ctx->pc = 0x28C744u;
            goto label_28c744;
        }
    }
    ctx->pc = 0x28C680u;
label_28c680:
    // 0x28c680: 0xc0a1418  jal         func_285060
label_28c684:
    if (ctx->pc == 0x28C684u) {
        ctx->pc = 0x28C688u;
        goto label_28c688;
    }
    ctx->pc = 0x28C680u;
    SET_GPR_U32(ctx, 31, 0x28C688u);
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x28C680u, 0x28C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C688u;
label_28c688:
    // 0x28c688: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x28c688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c68c:
    // 0x28c68c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c690:
    // 0x28c690: 0x80430002  lb          $v1, 0x2($v0)
    ctx->pc = 0x28c690u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_28c694:
    // 0x28c694: 0x462000b  bltzl       $v1, . + 4 + (0xB << 2)
label_28c698:
    if (ctx->pc == 0x28C698u) {
        ctx->pc = 0x28C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C694u;
        // 0x28c698: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C69Cu;
        goto label_28c69c;
    }
    ctx->pc = 0x28C694u;
    {
        const bool branch_taken_0x28c694 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x28c694) {
            ctx->pc = 0x28C698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C694u;
            // 0x28c698: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C6C4u;
            goto label_28c6c4;
        }
    }
    ctx->pc = 0x28C69Cu;
label_28c69c:
    // 0x28c69c: 0xc0a1418  jal         func_285060
label_28c6a0:
    if (ctx->pc == 0x28C6A0u) {
        ctx->pc = 0x28C6A4u;
        goto label_28c6a4;
    }
    ctx->pc = 0x28C69Cu;
    SET_GPR_U32(ctx, 31, 0x28C6A4u);
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x28C69Cu, 0x28C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6A4u;
label_28c6a4:
    // 0x28c6a4: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x28c6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c6a8:
    // 0x28c6a8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c6ac:
    // 0x28c6ac: 0x80430002  lb          $v1, 0x2($v0)
    ctx->pc = 0x28c6acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_28c6b0:
    // 0x28c6b0: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x28c6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c6b4:
    // 0x28c6b4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x28c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28c6b8:
    // 0x28c6b8: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x28c6b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_28c6bc:
    // 0x28c6bc: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x28c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
label_28c6c0:
    // 0x28c6c0: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x28c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_28c6c4:
    // 0x28c6c4: 0x441001f  bgez        $v0, . + 4 + (0x1F << 2)
label_28c6c8:
    if (ctx->pc == 0x28C6C8u) {
        ctx->pc = 0x28C6CCu;
        goto label_28c6cc;
    }
    ctx->pc = 0x28C6C4u;
    {
        const bool branch_taken_0x28c6c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28c6c4) {
            ctx->pc = 0x28C744u;
            goto label_28c744;
        }
    }
    ctx->pc = 0x28C6CCu;
label_28c6cc:
    // 0x28c6cc: 0xc0a1418  jal         func_285060
label_28c6d0:
    if (ctx->pc == 0x28C6D0u) {
        ctx->pc = 0x28C6D4u;
        goto label_28c6d4;
    }
    ctx->pc = 0x28C6CCu;
    SET_GPR_U32(ctx, 31, 0x28C6D4u);
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x28C6CCu, 0x28C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6D4u;
label_28c6d4:
    // 0x28c6d4: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x28c6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c6d8:
    // 0x28c6d8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c6dc:
    // 0x28c6dc: 0x80430003  lb          $v1, 0x3($v0)
    ctx->pc = 0x28c6dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_28c6e0:
    // 0x28c6e0: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
label_28c6e4:
    if (ctx->pc == 0x28C6E4u) {
        ctx->pc = 0x28C6E8u;
        goto label_28c6e8;
    }
    ctx->pc = 0x28C6E0u;
    {
        const bool branch_taken_0x28c6e0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x28c6e0) {
            ctx->pc = 0x28C744u;
            goto label_28c744;
        }
    }
    ctx->pc = 0x28C6E8u;
label_28c6e8:
    // 0x28c6e8: 0xc0a1418  jal         func_285060
label_28c6ec:
    if (ctx->pc == 0x28C6ECu) {
        ctx->pc = 0x28C6F0u;
        goto label_28c6f0;
    }
    ctx->pc = 0x28C6E8u;
    SET_GPR_U32(ctx, 31, 0x28C6F0u);
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x28C6E8u, 0x28C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6F0u;
label_28c6f0:
    // 0x28c6f0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x28c6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c6f4:
    // 0x28c6f4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c6f8:
    // 0x28c6f8: 0x80430003  lb          $v1, 0x3($v0)
    ctx->pc = 0x28c6f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_28c6fc:
    // 0x28c6fc: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x28c6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c700:
    // 0x28c700: 0x1000000e  b           . + 4 + (0xE << 2)
label_28c704:
    if (ctx->pc == 0x28C704u) {
        ctx->pc = 0x28C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C700u;
        // 0x28c704: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C708u;
        goto label_28c708;
    }
    ctx->pc = 0x28C700u;
    {
        const bool branch_taken_0x28c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C700u;
        // 0x28c704: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c700) {
            ctx->pc = 0x28C73Cu;
            goto label_28c73c;
        }
    }
    ctx->pc = 0x28C708u;
label_28c708:
    // 0x28c708: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x28c708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_28c70c:
    // 0x28c70c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x28c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_28c710:
    // 0x28c710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c714:
    // 0x28c714: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28c714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28c718:
    // 0x28c718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c71c:
    // 0x28c71c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c720:
    // 0x28c720: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x28c720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c724:
    // 0x28c724: 0xc098dcc  jal         func_263730
label_28c728:
    if (ctx->pc == 0x28C728u) {
        ctx->pc = 0x28C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C724u;
        // 0x28c728: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C72Cu;
        goto label_28c72c;
    }
    ctx->pc = 0x28C724u;
    SET_GPR_U32(ctx, 31, 0x28C72Cu);
    ctx->pc = 0x28C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C724u;
    // 0x28c728: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x28C724u, 0x28C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C72Cu;
label_28c72c:
    // 0x28c72c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x28c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_28c730:
    // 0x28c730: 0xae5300e0  sw          $s3, 0xE0($s2)
    ctx->pc = 0x28c730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 19));
label_28c734:
    // 0x28c734: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x28c734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c738:
    // 0x28c738: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c73c:
    // 0x28c73c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x28c73cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_28c740:
    // 0x28c740: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x28c740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
label_28c744:
    // 0x28c744: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28c744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28c748:
    // 0x28c748: 0xdc318af0  ld          $s1, -0x7510($at)
    ctx->pc = 0x28c748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 1), 4294937328)));
label_28c74c:
    // 0x28c74c: 0xc0b9182  jal         func_2E4608
label_28c750:
    if (ctx->pc == 0x28C750u) {
        ctx->pc = 0x28C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C74Cu;
        // 0x28c750: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C754u;
        goto label_28c754;
    }
    ctx->pc = 0x28C74Cu;
    SET_GPR_U32(ctx, 31, 0x28C754u);
    ctx->pc = 0x28C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C74Cu;
    // 0x28c750: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C74Cu, 0x28C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C754u;
label_28c754:
    // 0x28c754: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28c754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28c758:
    // 0x28c758: 0xdc348af8  ld          $s4, -0x7508($at)
    ctx->pc = 0x28c758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 1), 4294937336)));
label_28c75c:
    // 0x28c75c: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x28c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28c760:
    // 0x28c760: 0xc0b9182  jal         func_2E4608
label_28c764:
    if (ctx->pc == 0x28C764u) {
        ctx->pc = 0x28C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C760u;
        // 0x28c764: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C768u;
        goto label_28c768;
    }
    ctx->pc = 0x28C760u;
    SET_GPR_U32(ctx, 31, 0x28C768u);
    ctx->pc = 0x28C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C760u;
    // 0x28c764: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C760u, 0x28C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C768u;
label_28c768:
    // 0x28c768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c76c:
    // 0x28c76c: 0xc0b5d44  jal         func_2D7510
label_28c770:
    if (ctx->pc == 0x28C770u) {
        ctx->pc = 0x28C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C76Cu;
        // 0x28c770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C774u;
        goto label_28c774;
    }
    ctx->pc = 0x28C76Cu;
    SET_GPR_U32(ctx, 31, 0x28C774u);
    ctx->pc = 0x28C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C76Cu;
    // 0x28c770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x28C76Cu, 0x28C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C774u;
label_28c774:
    // 0x28c774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c778:
    // 0x28c778: 0xc0b8c90  jal         func_2E3240
label_28c77c:
    if (ctx->pc == 0x28C77Cu) {
        ctx->pc = 0x28C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C778u;
        // 0x28c77c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C780u;
        goto label_28c780;
    }
    ctx->pc = 0x28C778u;
    SET_GPR_U32(ctx, 31, 0x28C780u);
    ctx->pc = 0x28C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C778u;
    // 0x28c77c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28C778u, 0x28C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C780u;
label_28c780:
    // 0x28c780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c784:
    // 0x28c784: 0xc0b8d3a  jal         func_2E34E8
label_28c788:
    if (ctx->pc == 0x28C788u) {
        ctx->pc = 0x28C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C784u;
        // 0x28c788: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C78Cu;
        goto label_28c78c;
    }
    ctx->pc = 0x28C784u;
    SET_GPR_U32(ctx, 31, 0x28C78Cu);
    ctx->pc = 0x28C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C784u;
    // 0x28c788: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28C784u, 0x28C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C78Cu;
label_28c78c:
    // 0x28c78c: 0x8e500060  lw          $s0, 0x60($s2)
    ctx->pc = 0x28c78cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c790:
    // 0x28c790: 0xc0b8e84  jal         func_2E3A10
label_28c794:
    if (ctx->pc == 0x28C794u) {
        ctx->pc = 0x28C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C790u;
        // 0x28c794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C798u;
        goto label_28c798;
    }
    ctx->pc = 0x28C790u;
    SET_GPR_U32(ctx, 31, 0x28C798u);
    ctx->pc = 0x28C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C790u;
    // 0x28c794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28C790u, 0x28C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C798u;
label_28c798:
    // 0x28c798: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28c798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_28c79c:
    // 0x28c79c: 0xc0b9182  jal         func_2E4608
label_28c7a0:
    if (ctx->pc == 0x28C7A0u) {
        ctx->pc = 0x28C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C79Cu;
        // 0x28c7a0: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7A4u;
        goto label_28c7a4;
    }
    ctx->pc = 0x28C79Cu;
    SET_GPR_U32(ctx, 31, 0x28C7A4u);
    ctx->pc = 0x28C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C79Cu;
    // 0x28c7a0: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C79Cu, 0x28C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7A4u;
label_28c7a4:
    // 0x28c7a4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c7a8:
    // 0x28c7a8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28c7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c7ac:
    // 0x28c7ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28c7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28c7b0:
    // 0x28c7b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28c7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28c7b4:
    // 0x28c7b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x28c7b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c7b8:
    // 0x28c7b8: 0x0  nop
    ctx->pc = 0x28c7b8u;
    // NOP
label_28c7bc:
    // 0x28c7bc: 0x0  nop
    ctx->pc = 0x28c7bcu;
    // NOP
label_28c7c0:
    // 0x28c7c0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x28c7c0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
label_28c7c4:
    // 0x28c7c4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x28c7c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c7c8:
    // 0x28c7c8: 0x0  nop
    ctx->pc = 0x28c7c8u;
    // NOP
label_28c7cc:
    // 0x28c7cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28c7d0:
    if (ctx->pc == 0x28C7D0u) {
        ctx->pc = 0x28C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7CCu;
        // 0x28c7d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7D4u;
        goto label_28c7d4;
    }
    ctx->pc = 0x28C7CCu;
    {
        const bool branch_taken_0x28c7cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7CCu;
        // 0x28c7d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7cc) {
            ctx->pc = 0x28C7DCu;
            goto label_28c7dc;
        }
    }
    ctx->pc = 0x28C7D4u;
label_28c7d4:
    // 0x28c7d4: 0xc0b60e6  jal         func_2D8398
label_28c7d8:
    if (ctx->pc == 0x28C7D8u) {
        ctx->pc = 0x28C7DCu;
        goto label_28c7dc;
    }
    ctx->pc = 0x28C7D4u;
    SET_GPR_U32(ctx, 31, 0x28C7DCu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28C7D4u, 0x28C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7DCu;
label_28c7dc:
    // 0x28c7dc: 0xc0b9182  jal         func_2E4608
label_28c7e0:
    if (ctx->pc == 0x28C7E0u) {
        ctx->pc = 0x28C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7DCu;
        // 0x28c7e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7E4u;
        goto label_28c7e4;
    }
    ctx->pc = 0x28C7DCu;
    SET_GPR_U32(ctx, 31, 0x28C7E4u);
    ctx->pc = 0x28C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7DCu;
    // 0x28c7e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28C7DCu, 0x28C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7E4u;
label_28c7e4:
    // 0x28c7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c7e8:
    // 0x28c7e8: 0xc0b5d44  jal         func_2D7510
label_28c7ec:
    if (ctx->pc == 0x28C7ECu) {
        ctx->pc = 0x28C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7E8u;
        // 0x28c7ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7F0u;
        goto label_28c7f0;
    }
    ctx->pc = 0x28C7E8u;
    SET_GPR_U32(ctx, 31, 0x28C7F0u);
    ctx->pc = 0x28C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7E8u;
    // 0x28c7ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x28C7E8u, 0x28C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7F0u;
label_28c7f0:
    // 0x28c7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c7f4:
    // 0x28c7f4: 0xc0b8c90  jal         func_2E3240
label_28c7f8:
    if (ctx->pc == 0x28C7F8u) {
        ctx->pc = 0x28C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7F4u;
        // 0x28c7f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7FCu;
        goto label_28c7fc;
    }
    ctx->pc = 0x28C7F4u;
    SET_GPR_U32(ctx, 31, 0x28C7FCu);
    ctx->pc = 0x28C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7F4u;
    // 0x28c7f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28C7F4u, 0x28C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7FCu;
label_28c7fc:
    // 0x28c7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c800:
    // 0x28c800: 0xc0b8d3a  jal         func_2E34E8
label_28c804:
    if (ctx->pc == 0x28C804u) {
        ctx->pc = 0x28C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C800u;
        // 0x28c804: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C808u;
        goto label_28c808;
    }
    ctx->pc = 0x28C800u;
    SET_GPR_U32(ctx, 31, 0x28C808u);
    ctx->pc = 0x28C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C800u;
    // 0x28c804: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28C800u, 0x28C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C808u;
label_28c808:
    // 0x28c808: 0x8e500060  lw          $s0, 0x60($s2)
    ctx->pc = 0x28c808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28c80c:
    // 0x28c80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c810:
    // 0x28c810: 0xc0b8c76  jal         func_2E31D8
label_28c814:
    if (ctx->pc == 0x28C814u) {
        ctx->pc = 0x28C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C810u;
        // 0x28c814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C818u;
        goto label_28c818;
    }
    ctx->pc = 0x28C810u;
    SET_GPR_U32(ctx, 31, 0x28C818u);
    ctx->pc = 0x28C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C810u;
    // 0x28c814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x28C810u, 0x28C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C818u;
label_28c818:
    // 0x28c818: 0xc0b8e84  jal         func_2E3A10
label_28c81c:
    if (ctx->pc == 0x28C81Cu) {
        ctx->pc = 0x28C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C818u;
        // 0x28c81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C820u;
        goto label_28c820;
    }
    ctx->pc = 0x28C818u;
    SET_GPR_U32(ctx, 31, 0x28C820u);
    ctx->pc = 0x28C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C818u;
    // 0x28c81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28C818u, 0x28C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C820u;
label_28c820:
    // 0x28c820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c824:
    // 0x28c824: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x28c824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_28c828:
    // 0x28c828: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x28c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_28c82c:
    // 0x28c82c: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_28c830:
    if (ctx->pc == 0x28C830u) {
        ctx->pc = 0x28C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C82Cu;
        // 0x28c830: 0xaca0004c  sw          $zero, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C834u;
        goto label_28c834;
    }
    ctx->pc = 0x28C82Cu;
    {
        const bool branch_taken_0x28c82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C82Cu;
        // 0x28c830: 0xaca0004c  sw          $zero, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c82c) {
            ctx->pc = 0x28CA44u;
            goto label_28ca44;
        }
    }
    ctx->pc = 0x28C834u;
label_28c834:
    // 0x28c834: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x28c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_28c838:
    // 0x28c838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c83c:
    // 0x28c83c: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_28c840:
    if (ctx->pc == 0x28C840u) {
        ctx->pc = 0x28C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C83Cu;
        // 0x28c840: 0xc66c004c  lwc1        $f12, 0x4C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C844u;
        goto label_28c844;
    }
    ctx->pc = 0x28C83Cu;
    {
        const bool branch_taken_0x28c83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c83c) {
            ctx->pc = 0x28C840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C83Cu;
            // 0x28c840: 0xc66c004c  lwc1        $f12, 0x4C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C89Cu;
            goto label_28c89c;
        }
    }
    ctx->pc = 0x28C844u;
label_28c844:
    // 0x28c844: 0xc7818a88  lwc1        $f1, -0x7578($gp)
    ctx->pc = 0x28c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c848:
    // 0x28c848: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x28c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28c84c:
    // 0x28c84c: 0xc66d004c  lwc1        $f13, 0x4C($s3)
    ctx->pc = 0x28c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_28c850:
    // 0x28c850: 0xc66e0058  lwc1        $f14, 0x58($s3)
    ctx->pc = 0x28c850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_28c854:
    // 0x28c854: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x28c854u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_28c858:
    // 0x28c858: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x28c858u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
label_28c85c:
    // 0x28c85c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28c85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_28c860:
    // 0x28c860: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c864:
    // 0x28c864: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x28c864u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
label_28c868:
    // 0x28c868: 0x0  nop
    ctx->pc = 0x28c868u;
    // NOP
label_28c86c:
    // 0x28c86c: 0x0  nop
    ctx->pc = 0x28c86cu;
    // NOP
label_28c870:
    // 0x28c870: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x28c870u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
label_28c874:
    // 0x28c874: 0x0  nop
    ctx->pc = 0x28c874u;
    // NOP
label_28c878:
    // 0x28c878: 0x0  nop
    ctx->pc = 0x28c878u;
    // NOP
label_28c87c:
    // 0x28c87c: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x28c87cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
label_28c880:
    // 0x28c880: 0x0  nop
    ctx->pc = 0x28c880u;
    // NOP
label_28c884:
    // 0x28c884: 0x0  nop
    ctx->pc = 0x28c884u;
    // NOP
label_28c888:
    // 0x28c888: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x28c888u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
label_28c88c:
    // 0x28c88c: 0xc0ad2c6  jal         func_2B4B18
label_28c890:
    if (ctx->pc == 0x28C890u) {
        ctx->pc = 0x28C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C88Cu;
        // 0x28c890: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C894u;
        goto label_28c894;
    }
    ctx->pc = 0x28C88Cu;
    SET_GPR_U32(ctx, 31, 0x28C894u);
    ctx->pc = 0x28C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C88Cu;
    // 0x28c890: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x28C88Cu, 0x28C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C894u;
label_28c894:
    // 0x28c894: 0x1000000b  b           . + 4 + (0xB << 2)
label_28c898:
    if (ctx->pc == 0x28C898u) {
        ctx->pc = 0x28C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C894u;
        // 0x28c898: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C89Cu;
        goto label_28c89c;
    }
    ctx->pc = 0x28C894u;
    {
        const bool branch_taken_0x28c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C894u;
        // 0x28c898: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c894) {
            ctx->pc = 0x28C8C4u;
            goto label_28c8c4;
        }
    }
    ctx->pc = 0x28C89Cu;
label_28c89c:
    // 0x28c89c: 0xc7808a8c  lwc1        $f0, -0x7574($gp)
    ctx->pc = 0x28c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c8a0:
    // 0x28c8a0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28c8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_28c8a4:
    // 0x28c8a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c8a8:
    // 0x28c8a8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x28c8a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_28c8ac:
    // 0x28c8ac: 0x0  nop
    ctx->pc = 0x28c8acu;
    // NOP
label_28c8b0:
    // 0x28c8b0: 0x0  nop
    ctx->pc = 0x28c8b0u;
    // NOP
label_28c8b4:
    // 0x28c8b4: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x28c8b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
label_28c8b8:
    // 0x28c8b8: 0xc0ad296  jal         func_2B4A58
label_28c8bc:
    if (ctx->pc == 0x28C8BCu) {
        ctx->pc = 0x28C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8B8u;
        // 0x28c8bc: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C8C0u;
        goto label_28c8c0;
    }
    ctx->pc = 0x28C8B8u;
    SET_GPR_U32(ctx, 31, 0x28C8C0u);
    ctx->pc = 0x28C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8B8u;
    // 0x28c8bc: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x28C8B8u, 0x28C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8C0u;
label_28c8c0:
    // 0x28c8c0: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x28c8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c8c4:
    // 0x28c8c4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c8c8:
    // 0x28c8c8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x28c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c8cc:
    // 0x28c8cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28c8ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28c8d0:
    // 0x28c8d0: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x28c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c8d4:
    // 0x28c8d4: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28c8d8:
    // 0x28c8d8: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x28c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28c8dc:
    // 0x28c8dc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x28c8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_28c8e0:
    // 0x28c8e0: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x28c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c8e4:
    // 0x28c8e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28c8e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_28c8e8:
    // 0x28c8e8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x28c8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_28c8ec:
    // 0x28c8ec: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x28c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c8f0:
    // 0x28c8f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x28c8f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_28c8f4:
    // 0x28c8f4: 0xc0b57ea  jal         func_2D5FA8
label_28c8f8:
    if (ctx->pc == 0x28C8F8u) {
        ctx->pc = 0x28C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8F4u;
        // 0x28c8f8: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C8FCu;
        goto label_28c8fc;
    }
    ctx->pc = 0x28C8F4u;
    SET_GPR_U32(ctx, 31, 0x28C8FCu);
    ctx->pc = 0x28C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8F4u;
    // 0x28c8f8: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x28C8F4u, 0x28C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8FCu;
label_28c8fc:
    // 0x28c8fc: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28c900:
    // 0x28c900: 0xc0ad50a  jal         func_2B5428
label_28c904:
    if (ctx->pc == 0x28C904u) {
        ctx->pc = 0x28C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C900u;
        // 0x28c904: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C908u;
        goto label_28c908;
    }
    ctx->pc = 0x28C900u;
    SET_GPR_U32(ctx, 31, 0x28C908u);
    ctx->pc = 0x28C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C900u;
    // 0x28c904: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28C900u, 0x28C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C908u;
label_28c908:
    // 0x28c908: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28c90c:
    // 0x28c90c: 0xc0ad50a  jal         func_2B5428
label_28c910:
    if (ctx->pc == 0x28C910u) {
        ctx->pc = 0x28C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C90Cu;
        // 0x28c910: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C914u;
        goto label_28c914;
    }
    ctx->pc = 0x28C90Cu;
    SET_GPR_U32(ctx, 31, 0x28C914u);
    ctx->pc = 0x28C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C90Cu;
    // 0x28c910: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28C90Cu, 0x28C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C914u;
label_28c914:
    // 0x28c914: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x28c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_28c918:
    // 0x28c918: 0x460001e  bltz        $v1, . + 4 + (0x1E << 2)
label_28c91c:
    if (ctx->pc == 0x28C91Cu) {
        ctx->pc = 0x28C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C918u;
        // 0x28c91c: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C920u;
        goto label_28c920;
    }
    ctx->pc = 0x28C918u;
    {
        const bool branch_taken_0x28c918 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C918u;
        // 0x28c91c: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c918) {
            ctx->pc = 0x28C994u;
            goto label_28c994;
        }
    }
    ctx->pc = 0x28C920u;
label_28c920:
    // 0x28c920: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x28c920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_28c924:
    // 0x28c924: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28c924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28c928:
    // 0x28c928: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28c928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28c92c:
    // 0x28c92c: 0xc0b5848  jal         func_2D6120
label_28c930:
    if (ctx->pc == 0x28C930u) {
        ctx->pc = 0x28C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C92Cu;
        // 0x28c930: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C934u;
        goto label_28c934;
    }
    ctx->pc = 0x28C92Cu;
    SET_GPR_U32(ctx, 31, 0x28C934u);
    ctx->pc = 0x28C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C92Cu;
    // 0x28c930: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x28C92Cu, 0x28C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C934u;
label_28c934:
    // 0x28c934: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x28c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c938:
    // 0x28c938: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x28c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c93c:
    // 0x28c93c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c940:
    // 0x28c940: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x28c940u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_28c944:
    // 0x28c944: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x28c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c948:
    // 0x28c948: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c94c:
    // 0x28c94c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x28c94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c950:
    // 0x28c950: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28c950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_28c954:
    // 0x28c954: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28c958:
    // 0x28c958: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28c958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28c95c:
    // 0x28c95c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x28c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28c960:
    // 0x28c960: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x28c960u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_28c964:
    // 0x28c964: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x28c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_28c968:
    // 0x28c968: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x28c968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_28c96c:
    // 0x28c96c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x28c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_28c970:
    // 0x28c970: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x28c970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_28c974:
    // 0x28c974: 0xc0b57ea  jal         func_2D5FA8
label_28c978:
    if (ctx->pc == 0x28C978u) {
        ctx->pc = 0x28C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C974u;
        // 0x28c978: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C97Cu;
        goto label_28c97c;
    }
    ctx->pc = 0x28C974u;
    SET_GPR_U32(ctx, 31, 0x28C97Cu);
    ctx->pc = 0x28C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C974u;
    // 0x28c978: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x28C974u, 0x28C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C97Cu;
label_28c97c:
    // 0x28c97c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28c980:
    // 0x28c980: 0xc0ad50a  jal         func_2B5428
label_28c984:
    if (ctx->pc == 0x28C984u) {
        ctx->pc = 0x28C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C980u;
        // 0x28c984: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C988u;
        goto label_28c988;
    }
    ctx->pc = 0x28C980u;
    SET_GPR_U32(ctx, 31, 0x28C988u);
    ctx->pc = 0x28C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C980u;
    // 0x28c984: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28C980u, 0x28C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C988u;
label_28c988:
    // 0x28c988: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28c98c:
    // 0x28c98c: 0xc0ad50a  jal         func_2B5428
label_28c990:
    if (ctx->pc == 0x28C990u) {
        ctx->pc = 0x28C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C98Cu;
        // 0x28c990: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C994u;
        goto label_28c994;
    }
    ctx->pc = 0x28C98Cu;
    SET_GPR_U32(ctx, 31, 0x28C994u);
    ctx->pc = 0x28C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C98Cu;
    // 0x28c990: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28C98Cu, 0x28C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C994u;
label_28c994:
    // 0x28c994: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x28c994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c998:
    // 0x28c998: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x28c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c99c:
    // 0x28c99c: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x28c99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_28c9a0:
    // 0x28c9a0: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x28c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c9a4:
    // 0x28c9a4: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x28c9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_28c9a8:
    // 0x28c9a8: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x28c9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_28c9ac:
    // 0x28c9ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28c9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28c9b0:
    // 0x28c9b0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x28c9b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28c9b4:
    // 0x28c9b4: 0x0  nop
    ctx->pc = 0x28c9b4u;
    // NOP
label_28c9b8:
    // 0x28c9b8: 0x0  nop
    ctx->pc = 0x28c9b8u;
    // NOP
label_28c9bc:
    // 0x28c9bc: 0x460c0044  c1          0xC0044
    ctx->pc = 0x28c9bcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
label_28c9c0:
    // 0x28c9c0: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x28c9c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c9c4:
    // 0x28c9c4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_28c9c8:
    if (ctx->pc == 0x28C9C8u) {
        ctx->pc = 0x28C9CCu;
        goto label_28c9cc;
    }
    ctx->pc = 0x28C9C4u;
    {
        const bool branch_taken_0x28c9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c9c4) {
            ctx->pc = 0x28C9E4u;
            goto label_28c9e4;
        }
    }
    ctx->pc = 0x28C9CCu;
label_28c9cc:
    // 0x28c9cc: 0xc0b60e6  jal         func_2D8398
label_28c9d0:
    if (ctx->pc == 0x28C9D0u) {
        ctx->pc = 0x28C9D4u;
        goto label_28c9d4;
    }
    ctx->pc = 0x28C9CCu;
    SET_GPR_U32(ctx, 31, 0x28C9D4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28C9CCu, 0x28C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9D4u;
label_28c9d4:
    // 0x28c9d4: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x28c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c9d8:
    // 0x28c9d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x28c9d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_28c9dc:
    // 0x28c9dc: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x28c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c9e0:
    // 0x28c9e0: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x28c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c9e4:
    // 0x28c9e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28c9e8:
    // 0x28c9e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9ec:
    // 0x28c9ec: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x28c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c9f0:
    // 0x28c9f0: 0x0  nop
    ctx->pc = 0x28c9f0u;
    // NOP
label_28c9f4:
    // 0x28c9f4: 0x0  nop
    ctx->pc = 0x28c9f4u;
    // NOP
label_28c9f8:
    // 0x28c9f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28c9f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_28c9fc:
    // 0x28c9fc: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x28c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28ca00:
    // 0x28ca00: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x28ca00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_28ca04:
    // 0x28ca04: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x28ca04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_28ca08:
    // 0x28ca08: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x28ca08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_28ca0c:
    // 0x28ca0c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x28ca0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_28ca10:
    // 0x28ca10: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x28ca10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_28ca14:
    // 0x28ca14: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x28ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_28ca18:
    // 0x28ca18: 0xe64300e8  swc1        $f3, 0xE8($s2)
    ctx->pc = 0x28ca18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
label_28ca1c:
    // 0x28ca1c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca20:
    // 0x28ca20: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x28ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
label_28ca24:
    // 0x28ca24: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x28ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ca28:
    // 0x28ca28: 0xe64100f0  swc1        $f1, 0xF0($s2)
    ctx->pc = 0x28ca28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
label_28ca2c:
    // 0x28ca2c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca30:
    // 0x28ca30: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x28ca30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
label_28ca34:
    // 0x28ca34: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ca38:
    // 0x28ca38: 0xe64100f8  swc1        $f1, 0xF8($s2)
    ctx->pc = 0x28ca38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
label_28ca3c:
    // 0x28ca3c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca40:
    // 0x28ca40: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x28ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_28ca44:
    // 0x28ca44: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca48:
    // 0x28ca48: 0xc7828a90  lwc1        $f2, -0x7570($gp)
    ctx->pc = 0x28ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ca4c:
    // 0x28ca4c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x28ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ca50:
    // 0x28ca50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ca50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ca54:
    // 0x28ca54: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ca58:
    // 0x28ca58: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28ca58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_28ca5c:
    // 0x28ca5c: 0xe6430018  swc1        $f3, 0x18($s2)
    ctx->pc = 0x28ca5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28ca60:
    // 0x28ca60: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca64:
    // 0x28ca64: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ca68:
    // 0x28ca68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ca68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ca6c:
    // 0x28ca6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28ca6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ca70:
    // 0x28ca70: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x28ca70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28ca74:
    // 0x28ca74: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca78:
    // 0x28ca78: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x28ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ca7c:
    // 0x28ca7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ca7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ca80:
    // 0x28ca80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28ca80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ca84:
    // 0x28ca84: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x28ca84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28ca88:
    // 0x28ca88: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca8c:
    // 0x28ca8c: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x28ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_28ca90:
    // 0x28ca90: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ca94:
    // 0x28ca94: 0xe6410084  swc1        $f1, 0x84($s2)
    ctx->pc = 0x28ca94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
label_28ca98:
    // 0x28ca98: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ca9c:
    // 0x28ca9c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x28ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_28caa0:
    // 0x28caa0: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x28caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
label_28caa4:
    // 0x28caa4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x28caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_28caa8:
    // 0x28caa8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x28caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_28caac:
    // 0x28caac: 0xe4a30030  swc1        $f3, 0x30($a1)
    ctx->pc = 0x28caacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_28cab0:
    // 0x28cab0: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x28cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cab4:
    // 0x28cab4: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x28cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_28cab8:
    // 0x28cab8: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x28cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cabc:
    // 0x28cabc: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_28cac0:
    if (ctx->pc == 0x28CAC0u) {
        ctx->pc = 0x28CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CABCu;
        // 0x28cac0: 0xe4a10038  swc1        $f1, 0x38($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAC4u;
        goto label_28cac4;
    }
    ctx->pc = 0x28CABCu;
    {
        const bool branch_taken_0x28cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CABCu;
        // 0x28cac0: 0xe4a10038  swc1        $f1, 0x38($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cabc) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CAC4u;
label_28cac4:
    // 0x28cac4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cac8:
    // 0x28cac8: 0xc6450018  lwc1        $f5, 0x18($s2)
    ctx->pc = 0x28cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28cacc:
    // 0x28cacc: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x28caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cad0:
    // 0x28cad0: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x28cad0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_28cad4:
    // 0x28cad4: 0xc643001c  lwc1        $f3, 0x1C($s2)
    ctx->pc = 0x28cad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28cad8:
    // 0x28cad8: 0xc7818a94  lwc1        $f1, -0x756C($gp)
    ctx->pc = 0x28cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cadc:
    // 0x28cadc: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x28cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28cae0:
    // 0x28cae0: 0xe6450018  swc1        $f5, 0x18($s2)
    ctx->pc = 0x28cae0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28cae4:
    // 0x28cae4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28cae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28cae8:
    // 0x28cae8: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x28cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28caec:
    // 0x28caec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x28caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28caf0:
    // 0x28caf0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28caf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28caf4:
    // 0x28caf4: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28caf8:
    // 0x28caf8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x28caf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_28cafc:
    // 0x28cafc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x28cafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_28cb00:
    // 0x28cb00: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x28cb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_28cb04:
    // 0x28cb04: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28cb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28cb08:
    // 0x28cb08: 0xe643001c  swc1        $f3, 0x1C($s2)
    ctx->pc = 0x28cb08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28cb0c:
    // 0x28cb0c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb10:
    // 0x28cb10: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x28cb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_28cb14:
    // 0x28cb14: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28cb14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28cb18:
    // 0x28cb18: 0xe6440020  swc1        $f4, 0x20($s2)
    ctx->pc = 0x28cb18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28cb1c:
    // 0x28cb1c: 0xe4450030  swc1        $f5, 0x30($v0)
    ctx->pc = 0x28cb1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_28cb20:
    // 0x28cb20: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x28cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb24:
    // 0x28cb24: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x28cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cb28:
    // 0x28cb28: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x28cb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_28cb2c:
    // 0x28cb2c: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x28cb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_28cb30:
    // 0x28cb30: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x28cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28cb34:
    // 0x28cb34: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x28cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_28cb38:
    // 0x28cb38: 0x100000aa  b           . + 4 + (0xAA << 2)
label_28cb3c:
    if (ctx->pc == 0x28CB3Cu) {
        ctx->pc = 0x28CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB38u;
        // 0x28cb3c: 0xe4420038  swc1        $f2, 0x38($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB40u;
        goto label_28cb40;
    }
    ctx->pc = 0x28CB38u;
    {
        const bool branch_taken_0x28cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB38u;
        // 0x28cb3c: 0xe4420038  swc1        $f2, 0x38($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb38) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CB40u;
label_28cb40:
    // 0x28cb40: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
label_28cb44:
    if (ctx->pc == 0x28CB44u) {
        ctx->pc = 0x28CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB40u;
        // 0x28cb44: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB48u;
        goto label_28cb48;
    }
    ctx->pc = 0x28CB40u;
    {
        const bool branch_taken_0x28cb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB40u;
        // 0x28cb44: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb40) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CB48u;
label_28cb48:
    // 0x28cb48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28cb4c:
    // 0x28cb4c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_28cb50:
    if (ctx->pc == 0x28CB50u) {
        ctx->pc = 0x28CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB4Cu;
        // 0x28cb50: 0xc64100e8  lwc1        $f1, 0xE8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB54u;
        goto label_28cb54;
    }
    ctx->pc = 0x28CB4Cu;
    {
        const bool branch_taken_0x28cb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cb4c) {
            ctx->pc = 0x28CB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CB4Cu;
            // 0x28cb50: 0xc64100e8  lwc1        $f1, 0xE8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB80u;
            goto label_28cb80;
        }
    }
    ctx->pc = 0x28CB54u;
label_28cb54:
    // 0x28cb54: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x28cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_28cb58:
    // 0x28cb58: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x28cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
label_28cb5c:
    // 0x28cb5c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_28cb60:
    // 0x28cb60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28cb64:
    if (ctx->pc == 0x28CB64u) {
        ctx->pc = 0x28CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB60u;
        // 0x28cb64: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB68u;
        goto label_28cb68;
    }
    ctx->pc = 0x28CB60u;
    {
        const bool branch_taken_0x28cb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB60u;
        // 0x28cb64: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb60) {
            ctx->pc = 0x28CB7Cu;
            goto label_28cb7c;
        }
    }
    ctx->pc = 0x28CB68u;
label_28cb68:
    // 0x28cb68: 0xc7818a98  lwc1        $f1, -0x7568($gp)
    ctx->pc = 0x28cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cb6c:
    // 0x28cb6c: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x28cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_28cb70:
    // 0x28cb70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28cb70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28cb74:
    // 0x28cb74: 0x1000009b  b           . + 4 + (0x9B << 2)
label_28cb78:
    if (ctx->pc == 0x28CB78u) {
        ctx->pc = 0x28CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB74u;
        // 0x28cb78: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB7Cu;
        goto label_28cb7c;
    }
    ctx->pc = 0x28CB74u;
    {
        const bool branch_taken_0x28cb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB74u;
        // 0x28cb78: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb74) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CB7Cu;
label_28cb7c:
    // 0x28cb7c: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x28cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cb80:
    // 0x28cb80: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x28cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_28cb84:
    // 0x28cb84: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x28cb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_28cb88:
    // 0x28cb88: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x28cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb8c:
    // 0x28cb8c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x28cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_28cb90:
    // 0x28cb90: 0xc64100f0  lwc1        $f1, 0xF0($s2)
    ctx->pc = 0x28cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cb94:
    // 0x28cb94: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x28cb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_28cb98:
    // 0x28cb98: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x28cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb9c:
    // 0x28cb9c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x28cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_28cba0:
    // 0x28cba0: 0xc64100f8  lwc1        $f1, 0xF8($s2)
    ctx->pc = 0x28cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cba4:
    // 0x28cba4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x28cba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_28cba8:
    // 0x28cba8: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x28cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cbac:
    // 0x28cbac: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
label_28cbb0:
    if (ctx->pc == 0x28CBB0u) {
        ctx->pc = 0x28CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBACu;
        // 0x28cbb0: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBB4u;
        goto label_28cbb4;
    }
    ctx->pc = 0x28CBACu;
    {
        const bool branch_taken_0x28cbac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBACu;
        // 0x28cbb0: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbac) {
            ctx->pc = 0x28CBF0u;
            goto label_28cbf0;
        }
    }
    ctx->pc = 0x28CBB4u;
label_28cbb4:
    // 0x28cbb4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cbb8:
    // 0x28cbb8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x28cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_28cbbc:
    // 0x28cbbc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28cbc0:
    // 0x28cbc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28cbc4:
    // 0x28cbc4: 0xc0b5848  jal         func_2D6120
label_28cbc8:
    if (ctx->pc == 0x28CBC8u) {
        ctx->pc = 0x28CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBC4u;
        // 0x28cbc8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBCCu;
        goto label_28cbcc;
    }
    ctx->pc = 0x28CBC4u;
    SET_GPR_U32(ctx, 31, 0x28CBCCu);
    ctx->pc = 0x28CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBC4u;
    // 0x28cbc8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x28CBC4u, 0x28CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBCCu;
label_28cbcc:
    // 0x28cbcc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28cbd0:
    // 0x28cbd0: 0xc0ad532  jal         func_2B54C8
label_28cbd4:
    if (ctx->pc == 0x28CBD4u) {
        ctx->pc = 0x28CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBD0u;
        // 0x28cbd4: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBD8u;
        goto label_28cbd8;
    }
    ctx->pc = 0x28CBD0u;
    SET_GPR_U32(ctx, 31, 0x28CBD8u);
    ctx->pc = 0x28CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBD0u;
    // 0x28cbd4: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x28CBD0u, 0x28CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBD8u;
label_28cbd8:
    // 0x28cbd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28cbdc:
    // 0x28cbdc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x28cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_28cbe0:
    // 0x28cbe0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x28cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_28cbe4:
    // 0x28cbe4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x28cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_28cbe8:
    // 0x28cbe8: 0xc0ad532  jal         func_2B54C8
label_28cbec:
    if (ctx->pc == 0x28CBECu) {
        ctx->pc = 0x28CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBE8u;
        // 0x28cbec: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBF0u;
        goto label_28cbf0;
    }
    ctx->pc = 0x28CBE8u;
    SET_GPR_U32(ctx, 31, 0x28CBF0u);
    ctx->pc = 0x28CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBE8u;
    // 0x28cbec: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x28CBE8u, 0x28CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBF0u;
label_28cbf0:
    // 0x28cbf0: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x28cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_28cbf4:
    // 0x28cbf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28cbf8:
    // 0x28cbf8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_28cbfc:
    if (ctx->pc == 0x28CBFCu) {
        ctx->pc = 0x28CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBF8u;
        // 0x28cbfc: 0xc60f004c  lwc1        $f15, 0x4C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC00u;
        goto label_28cc00;
    }
    ctx->pc = 0x28CBF8u;
    {
        const bool branch_taken_0x28cbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cbf8) {
            ctx->pc = 0x28CBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CBF8u;
            // 0x28cbfc: 0xc60f004c  lwc1        $f15, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CC64u;
            goto label_28cc64;
        }
    }
    ctx->pc = 0x28CC00u;
label_28cc00:
    // 0x28cc00: 0xc7818a9c  lwc1        $f1, -0x7564($gp)
    ctx->pc = 0x28cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cc04:
    // 0x28cc04: 0xc60f0048  lwc1        $f15, 0x48($s0)
    ctx->pc = 0x28cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28cc08:
    // 0x28cc08: 0xc610004c  lwc1        $f16, 0x4C($s0)
    ctx->pc = 0x28cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28cc0c:
    // 0x28cc0c: 0xc6110058  lwc1        $f17, 0x58($s0)
    ctx->pc = 0x28cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_28cc10:
    // 0x28cc10: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x28cc10u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
label_28cc14:
    // 0x28cc14: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x28cc14u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
label_28cc18:
    // 0x28cc18: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28cc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_28cc1c:
    // 0x28cc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28cc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cc20:
    // 0x28cc20: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x28cc20u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
label_28cc24:
    // 0x28cc24: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28cc28:
    // 0x28cc28: 0x0  nop
    ctx->pc = 0x28cc28u;
    // NOP
label_28cc2c:
    // 0x28cc2c: 0x0  nop
    ctx->pc = 0x28cc2cu;
    // NOP
label_28cc30:
    // 0x28cc30: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x28cc30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
label_28cc34:
    // 0x28cc34: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x28cc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_28cc38:
    // 0x28cc38: 0x0  nop
    ctx->pc = 0x28cc38u;
    // NOP
label_28cc3c:
    // 0x28cc3c: 0x0  nop
    ctx->pc = 0x28cc3cu;
    // NOP
label_28cc40:
    // 0x28cc40: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x28cc40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
label_28cc44:
    // 0x28cc44: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x28cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28cc48:
    // 0x28cc48: 0x0  nop
    ctx->pc = 0x28cc48u;
    // NOP
label_28cc4c:
    // 0x28cc4c: 0x0  nop
    ctx->pc = 0x28cc4cu;
    // NOP
label_28cc50:
    // 0x28cc50: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x28cc50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
label_28cc54:
    // 0x28cc54: 0xc0ad338  jal         func_2B4CE0
label_28cc58:
    if (ctx->pc == 0x28CC58u) {
        ctx->pc = 0x28CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC54u;
        // 0x28cc58: 0xc60d0034  lwc1        $f13, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC5Cu;
        goto label_28cc5c;
    }
    ctx->pc = 0x28CC54u;
    SET_GPR_U32(ctx, 31, 0x28CC5Cu);
    ctx->pc = 0x28CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC54u;
    // 0x28cc58: 0xc60d0034  lwc1        $f13, 0x34($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x28CC54u, 0x28CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC5Cu;
label_28cc5c:
    // 0x28cc5c: 0x1000000e  b           . + 4 + (0xE << 2)
label_28cc60:
    if (ctx->pc == 0x28CC60u) {
        ctx->pc = 0x28CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC5Cu;
        // 0x28cc60: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC64u;
        goto label_28cc64;
    }
    ctx->pc = 0x28CC5Cu;
    {
        const bool branch_taken_0x28cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC5Cu;
        // 0x28cc60: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc5c) {
            ctx->pc = 0x28CC98u;
            goto label_28cc98;
        }
    }
    ctx->pc = 0x28CC64u;
label_28cc64:
    // 0x28cc64: 0xc7808aa0  lwc1        $f0, -0x7560($gp)
    ctx->pc = 0x28cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cc68:
    // 0x28cc68: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28cc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_28cc6c:
    // 0x28cc6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28cc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cc70:
    // 0x28cc70: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x28cc70u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_28cc74:
    // 0x28cc74: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28cc78:
    // 0x28cc78: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x28cc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_28cc7c:
    // 0x28cc7c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x28cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28cc80:
    // 0x28cc80: 0x0  nop
    ctx->pc = 0x28cc80u;
    // NOP
label_28cc84:
    // 0x28cc84: 0x0  nop
    ctx->pc = 0x28cc84u;
    // NOP
label_28cc88:
    // 0x28cc88: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x28cc88u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
label_28cc8c:
    // 0x28cc8c: 0xc0ad314  jal         func_2B4C50
label_28cc90:
    if (ctx->pc == 0x28CC90u) {
        ctx->pc = 0x28CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC8Cu;
        // 0x28cc90: 0xc60d0034  lwc1        $f13, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC94u;
        goto label_28cc94;
    }
    ctx->pc = 0x28CC8Cu;
    SET_GPR_U32(ctx, 31, 0x28CC94u);
    ctx->pc = 0x28CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC8Cu;
    // 0x28cc90: 0xc60d0034  lwc1        $f13, 0x34($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28CC8Cu, 0x28CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC94u;
label_28cc94:
    // 0x28cc94: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28cc98:
    // 0x28cc98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28cc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28cc9c:
    // 0x28cc9c: 0xdc338b00  ld          $s3, -0x7500($at)
    ctx->pc = 0x28cc9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294937344)));
label_28cca0:
    // 0x28cca0: 0xc0ad532  jal         func_2B54C8
label_28cca4:
    if (ctx->pc == 0x28CCA4u) {
        ctx->pc = 0x28CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCA0u;
        // 0x28cca4: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCA8u;
        goto label_28cca8;
    }
    ctx->pc = 0x28CCA0u;
    SET_GPR_U32(ctx, 31, 0x28CCA8u);
    ctx->pc = 0x28CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CCA0u;
    // 0x28cca4: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x28CCA0u, 0x28CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CCA8u;
label_28cca8:
    // 0x28cca8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_28ccac:
    // 0x28ccac: 0xdc318b08  ld          $s1, -0x74F8($at)
    ctx->pc = 0x28ccacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 1), 4294937352)));
label_28ccb0:
    // 0x28ccb0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28ccb4:
    // 0x28ccb4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_28ccb8:
    // 0x28ccb8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x28ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_28ccbc:
    // 0x28ccbc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x28ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_28ccc0:
    // 0x28ccc0: 0xc0ad532  jal         func_2B54C8
label_28ccc4:
    if (ctx->pc == 0x28CCC4u) {
        ctx->pc = 0x28CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCC0u;
        // 0x28ccc4: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCC8u;
        goto label_28ccc8;
    }
    ctx->pc = 0x28CCC0u;
    SET_GPR_U32(ctx, 31, 0x28CCC8u);
    ctx->pc = 0x28CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CCC0u;
    // 0x28ccc4: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x28CCC0u, 0x28CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CCC8u;
label_28ccc8:
    // 0x28ccc8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x28ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cccc:
    // 0x28cccc: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28ccd0:
    // 0x28ccd0: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x28ccd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_28ccd4:
    // 0x28ccd4: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x28ccd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_28ccd8:
    // 0x28ccd8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x28ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ccdc:
    // 0x28ccdc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x28ccdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_28cce0:
    // 0x28cce0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x28cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_28cce4:
    // 0x28cce4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x28cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cce8:
    // 0x28cce8: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x28cce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_28ccec:
    // 0x28ccec: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x28ccecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_28ccf0:
    // 0x28ccf0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x28ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ccf4:
    // 0x28ccf4: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x28ccf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_28ccf8:
    // 0x28ccf8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x28ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ccfc:
    // 0x28ccfc: 0xe6410084  swc1        $f1, 0x84($s2)
    ctx->pc = 0x28ccfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
label_28cd00:
    // 0x28cd00: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x28cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cd04:
    // 0x28cd04: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x28cd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
label_28cd08:
    // 0x28cd08: 0xc0b9182  jal         func_2E4608
label_28cd0c:
    if (ctx->pc == 0x28CD0Cu) {
        ctx->pc = 0x28CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD08u;
        // 0x28cd0c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD10u;
        goto label_28cd10;
    }
    ctx->pc = 0x28CD08u;
    SET_GPR_U32(ctx, 31, 0x28CD10u);
    ctx->pc = 0x28CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD08u;
    // 0x28cd0c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28CD08u, 0x28CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD10u;
label_28cd10:
    // 0x28cd10: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x28cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28cd14:
    // 0x28cd14: 0xc0b9182  jal         func_2E4608
label_28cd18:
    if (ctx->pc == 0x28CD18u) {
        ctx->pc = 0x28CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD14u;
        // 0x28cd18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD1Cu;
        goto label_28cd1c;
    }
    ctx->pc = 0x28CD14u;
    SET_GPR_U32(ctx, 31, 0x28CD1Cu);
    ctx->pc = 0x28CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD14u;
    // 0x28cd18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28CD14u, 0x28CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD1Cu;
label_28cd1c:
    // 0x28cd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cd20:
    // 0x28cd20: 0xc0b5d44  jal         func_2D7510
label_28cd24:
    if (ctx->pc == 0x28CD24u) {
        ctx->pc = 0x28CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD20u;
        // 0x28cd24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD28u;
        goto label_28cd28;
    }
    ctx->pc = 0x28CD20u;
    SET_GPR_U32(ctx, 31, 0x28CD28u);
    ctx->pc = 0x28CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD20u;
    // 0x28cd24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x28CD20u, 0x28CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD28u;
label_28cd28:
    // 0x28cd28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28cd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cd2c:
    // 0x28cd2c: 0xc0b8c90  jal         func_2E3240
label_28cd30:
    if (ctx->pc == 0x28CD30u) {
        ctx->pc = 0x28CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD2Cu;
        // 0x28cd30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD34u;
        goto label_28cd34;
    }
    ctx->pc = 0x28CD2Cu;
    SET_GPR_U32(ctx, 31, 0x28CD34u);
    ctx->pc = 0x28CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD2Cu;
    // 0x28cd30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28CD2Cu, 0x28CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD34u;
label_28cd34:
    // 0x28cd34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cd38:
    // 0x28cd38: 0xc0b8d3a  jal         func_2E34E8
label_28cd3c:
    if (ctx->pc == 0x28CD3Cu) {
        ctx->pc = 0x28CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD38u;
        // 0x28cd3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD40u;
        goto label_28cd40;
    }
    ctx->pc = 0x28CD38u;
    SET_GPR_U32(ctx, 31, 0x28CD40u);
    ctx->pc = 0x28CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD38u;
    // 0x28cd3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28CD38u, 0x28CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD40u;
label_28cd40:
    // 0x28cd40: 0x8e500060  lw          $s0, 0x60($s2)
    ctx->pc = 0x28cd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28cd44:
    // 0x28cd44: 0xc0b8e84  jal         func_2E3A10
label_28cd48:
    if (ctx->pc == 0x28CD48u) {
        ctx->pc = 0x28CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD44u;
        // 0x28cd48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD4Cu;
        goto label_28cd4c;
    }
    ctx->pc = 0x28CD44u;
    SET_GPR_U32(ctx, 31, 0x28CD4Cu);
    ctx->pc = 0x28CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD44u;
    // 0x28cd48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28CD44u, 0x28CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD4Cu;
label_28cd4c:
    // 0x28cd4c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28cd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_28cd50:
    // 0x28cd50: 0xc0b9182  jal         func_2E4608
label_28cd54:
    if (ctx->pc == 0x28CD54u) {
        ctx->pc = 0x28CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD50u;
        // 0x28cd54: 0xc7ac00a0  lwc1        $f12, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD58u;
        goto label_28cd58;
    }
    ctx->pc = 0x28CD50u;
    SET_GPR_U32(ctx, 31, 0x28CD58u);
    ctx->pc = 0x28CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD50u;
    // 0x28cd54: 0xc7ac00a0  lwc1        $f12, 0xA0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28CD50u, 0x28CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD58u;
label_28cd58:
    // 0x28cd58: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x28cd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cd5c:
    // 0x28cd5c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x28cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cd60:
    // 0x28cd60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28cd60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28cd64:
    // 0x28cd64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28cd64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28cd68:
    // 0x28cd68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x28cd68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28cd6c:
    // 0x28cd6c: 0x0  nop
    ctx->pc = 0x28cd6cu;
    // NOP
label_28cd70:
    // 0x28cd70: 0x0  nop
    ctx->pc = 0x28cd70u;
    // NOP
label_28cd74:
    // 0x28cd74: 0x460c0004  c1          0xC0004
    ctx->pc = 0x28cd74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
label_28cd78:
    // 0x28cd78: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x28cd78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28cd7c:
    // 0x28cd7c: 0x0  nop
    ctx->pc = 0x28cd7cu;
    // NOP
label_28cd80:
    // 0x28cd80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28cd84:
    if (ctx->pc == 0x28CD84u) {
        ctx->pc = 0x28CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD80u;
        // 0x28cd84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD88u;
        goto label_28cd88;
    }
    ctx->pc = 0x28CD80u;
    {
        const bool branch_taken_0x28cd80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD80u;
        // 0x28cd84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd80) {
            ctx->pc = 0x28CD90u;
            goto label_28cd90;
        }
    }
    ctx->pc = 0x28CD88u;
label_28cd88:
    // 0x28cd88: 0xc0b60e6  jal         func_2D8398
label_28cd8c:
    if (ctx->pc == 0x28CD8Cu) {
        ctx->pc = 0x28CD90u;
        goto label_28cd90;
    }
    ctx->pc = 0x28CD88u;
    SET_GPR_U32(ctx, 31, 0x28CD90u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28CD88u, 0x28CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD90u;
label_28cd90:
    // 0x28cd90: 0xc0b9182  jal         func_2E4608
label_28cd94:
    if (ctx->pc == 0x28CD94u) {
        ctx->pc = 0x28CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD90u;
        // 0x28cd94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD98u;
        goto label_28cd98;
    }
    ctx->pc = 0x28CD90u;
    SET_GPR_U32(ctx, 31, 0x28CD98u);
    ctx->pc = 0x28CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD90u;
    // 0x28cd94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28CD90u, 0x28CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD98u;
label_28cd98:
    // 0x28cd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cd9c:
    // 0x28cd9c: 0xc0b5d44  jal         func_2D7510
label_28cda0:
    if (ctx->pc == 0x28CDA0u) {
        ctx->pc = 0x28CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD9Cu;
        // 0x28cda0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDA4u;
        goto label_28cda4;
    }
    ctx->pc = 0x28CD9Cu;
    SET_GPR_U32(ctx, 31, 0x28CDA4u);
    ctx->pc = 0x28CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD9Cu;
    // 0x28cda0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x28CD9Cu, 0x28CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDA4u;
label_28cda4:
    // 0x28cda4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cda8:
    // 0x28cda8: 0xc0b8c90  jal         func_2E3240
label_28cdac:
    if (ctx->pc == 0x28CDACu) {
        ctx->pc = 0x28CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDA8u;
        // 0x28cdac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDB0u;
        goto label_28cdb0;
    }
    ctx->pc = 0x28CDA8u;
    SET_GPR_U32(ctx, 31, 0x28CDB0u);
    ctx->pc = 0x28CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDA8u;
    // 0x28cdac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28CDA8u, 0x28CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDB0u;
label_28cdb0:
    // 0x28cdb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cdb4:
    // 0x28cdb4: 0xc0b8d3a  jal         func_2E34E8
label_28cdb8:
    if (ctx->pc == 0x28CDB8u) {
        ctx->pc = 0x28CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDB4u;
        // 0x28cdb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDBCu;
        goto label_28cdbc;
    }
    ctx->pc = 0x28CDB4u;
    SET_GPR_U32(ctx, 31, 0x28CDBCu);
    ctx->pc = 0x28CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDB4u;
    // 0x28cdb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28CDB4u, 0x28CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDBCu;
label_28cdbc:
    // 0x28cdbc: 0x8e500060  lw          $s0, 0x60($s2)
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28cdc0:
    // 0x28cdc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28cdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cdc4:
    // 0x28cdc4: 0xc0b8c76  jal         func_2E31D8
label_28cdc8:
    if (ctx->pc == 0x28CDC8u) {
        ctx->pc = 0x28CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDC4u;
        // 0x28cdc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDCCu;
        goto label_28cdcc;
    }
    ctx->pc = 0x28CDC4u;
    SET_GPR_U32(ctx, 31, 0x28CDCCu);
    ctx->pc = 0x28CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDC4u;
    // 0x28cdc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x28CDC4u, 0x28CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDCCu;
label_28cdcc:
    // 0x28cdcc: 0xc0b8e84  jal         func_2E3A10
label_28cdd0:
    if (ctx->pc == 0x28CDD0u) {
        ctx->pc = 0x28CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDCCu;
        // 0x28cdd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDD4u;
        goto label_28cdd4;
    }
    ctx->pc = 0x28CDCCu;
    SET_GPR_U32(ctx, 31, 0x28CDD4u);
    ctx->pc = 0x28CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDCCu;
    // 0x28cdd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28CDCCu, 0x28CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDD4u;
label_28cdd4:
    // 0x28cdd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28cdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cdd8:
    // 0x28cdd8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x28cdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_28cddc:
    // 0x28cddc: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x28cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_28cde0:
    // 0x28cde0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28cde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28cde4:
    // 0x28cde4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x28cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28cde8:
    // 0x28cde8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_28cdec:
    if (ctx->pc == 0x28CDECu) {
        ctx->pc = 0x28CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDE8u;
        // 0x28cdec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDF0u;
        goto label_28cdf0;
    }
    ctx->pc = 0x28CDE8u;
    {
        const bool branch_taken_0x28cde8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDE8u;
        // 0x28cdec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cde8) {
            ctx->pc = 0x28CE04u;
            goto label_28ce04;
        }
    }
    ctx->pc = 0x28CDF0u;
label_28cdf0:
    // 0x28cdf0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28cdf4:
    // 0x28cdf4: 0xc0a258e  jal         func_289638
label_28cdf8:
    if (ctx->pc == 0x28CDF8u) {
        ctx->pc = 0x28CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDF4u;
        // 0x28cdf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CDFCu;
        goto label_28cdfc;
    }
    ctx->pc = 0x28CDF4u;
    SET_GPR_U32(ctx, 31, 0x28CDFCu);
    ctx->pc = 0x28CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDF4u;
    // 0x28cdf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289638u, 0x28CDF4u, 0x28CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDFCu;
label_28cdfc:
    // 0x28cdfc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28cdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ce00:
    // 0x28ce00: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28ce04:
    // 0x28ce04: 0x14c2004b  bne         $a2, $v0, . + 4 + (0x4B << 2)
label_28ce08:
    if (ctx->pc == 0x28CE08u) {
        ctx->pc = 0x28CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE04u;
        // 0x28ce08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE0Cu;
        goto label_28ce0c;
    }
    ctx->pc = 0x28CE04u;
    {
        const bool branch_taken_0x28ce04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE04u;
        // 0x28ce08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce04) {
            ctx->pc = 0x28CF34u;
            goto label_28cf34;
        }
    }
    ctx->pc = 0x28CE0Cu;
label_28ce0c:
    // 0x28ce0c: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x28ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ce10:
    // 0x28ce10: 0xc7818aa4  lwc1        $f1, -0x755C($gp)
    ctx->pc = 0x28ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ce14:
    // 0x28ce14: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x28ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ce18:
    // 0x28ce18: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28ce18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_28ce1c:
    // 0x28ce1c: 0xc643007c  lwc1        $f3, 0x7C($s2)
    ctx->pc = 0x28ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ce20:
    // 0x28ce20: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_28ce24:
    // 0x28ce24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28ce24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_28ce28:
    // 0x28ce28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28ce28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28ce2c:
    // 0x28ce2c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x28ce2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ce30:
    // 0x28ce30: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x28ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_28ce34:
    // 0x28ce34: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x28ce34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_28ce38:
    // 0x28ce38: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x28ce38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ce3c:
    // 0x28ce3c: 0x0  nop
    ctx->pc = 0x28ce3cu;
    // NOP
label_28ce40:
    // 0x28ce40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28ce44:
    if (ctx->pc == 0x28CE44u) {
        ctx->pc = 0x28CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE40u;
        // 0x28ce44: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE48u;
        goto label_28ce48;
    }
    ctx->pc = 0x28CE40u;
    {
        const bool branch_taken_0x28ce40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE40u;
        // 0x28ce44: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce40) {
            ctx->pc = 0x28CE50u;
            goto label_28ce50;
        }
    }
    ctx->pc = 0x28CE48u;
label_28ce48:
    // 0x28ce48: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x28ce48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_28ce4c:
    // 0x28ce4c: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x28ce4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
label_28ce50:
    // 0x28ce50: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28ce54:
    // 0x28ce54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ce58:
    // 0x28ce58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ce58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28ce5c:
    // 0x28ce5c: 0xc09829e  jal         func_260A78
label_28ce60:
    if (ctx->pc == 0x28CE60u) {
        ctx->pc = 0x28CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE5Cu;
        // 0x28ce60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE64u;
        goto label_28ce64;
    }
    ctx->pc = 0x28CE5Cu;
    SET_GPR_U32(ctx, 31, 0x28CE64u);
    ctx->pc = 0x28CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE5Cu;
    // 0x28ce60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x28CE5Cu, 0x28CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE64u;
label_28ce64:
    // 0x28ce64: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x28ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28ce68:
    // 0x28ce68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_28ce6c:
    // 0x28ce6c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x28ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_28ce70:
    // 0x28ce70: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_28ce74:
    if (ctx->pc == 0x28CE74u) {
        ctx->pc = 0x28CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE70u;
        // 0x28ce74: 0xc6400048  lwc1        $f0, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE78u;
        goto label_28ce78;
    }
    ctx->pc = 0x28CE70u;
    {
        const bool branch_taken_0x28ce70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ce70) {
            ctx->pc = 0x28CE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CE70u;
            // 0x28ce74: 0xc6400048  lwc1        $f0, 0x48($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CED0u;
            goto label_28ced0;
        }
    }
    ctx->pc = 0x28CE78u;
label_28ce78:
    // 0x28ce78: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x28ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_28ce7c:
    // 0x28ce7c: 0xc0b5862  jal         func_2D6188
label_28ce80:
    if (ctx->pc == 0x28CE80u) {
        ctx->pc = 0x28CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE7Cu;
        // 0x28ce80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE84u;
        goto label_28ce84;
    }
    ctx->pc = 0x28CE7Cu;
    SET_GPR_U32(ctx, 31, 0x28CE84u);
    ctx->pc = 0x28CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE7Cu;
    // 0x28ce80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x28CE7Cu, 0x28CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE84u;
label_28ce84:
    // 0x28ce84: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28ce88:
    // 0x28ce88: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x28ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_28ce8c:
    // 0x28ce8c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28ce90:
    // 0x28ce90: 0xc0b5862  jal         func_2D6188
label_28ce94:
    if (ctx->pc == 0x28CE94u) {
        ctx->pc = 0x28CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE90u;
        // 0x28ce94: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE98u;
        goto label_28ce98;
    }
    ctx->pc = 0x28CE90u;
    SET_GPR_U32(ctx, 31, 0x28CE98u);
    ctx->pc = 0x28CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE90u;
    // 0x28ce94: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x28CE90u, 0x28CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE98u;
label_28ce98:
    // 0x28ce98: 0xc64c007c  lwc1        $f12, 0x7C($s2)
    ctx->pc = 0x28ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28ce9c:
    // 0x28ce9c: 0xc7808aa8  lwc1        $f0, -0x7558($gp)
    ctx->pc = 0x28ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cea0:
    // 0x28cea0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28cea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_28cea4:
    // 0x28cea4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28cea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cea8:
    // 0x28cea8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x28cea8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_28ceac:
    // 0x28ceac: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x28ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_28ceb0:
    // 0x28ceb0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_28ceb4:
    // 0x28ceb4: 0x0  nop
    ctx->pc = 0x28ceb4u;
    // NOP
label_28ceb8:
    // 0x28ceb8: 0x0  nop
    ctx->pc = 0x28ceb8u;
    // NOP
label_28cebc:
    // 0x28cebc: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x28cebcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
label_28cec0:
    // 0x28cec0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28cec4:
    // 0x28cec4: 0xc0ad296  jal         func_2B4A58
label_28cec8:
    if (ctx->pc == 0x28CEC8u) {
        ctx->pc = 0x28CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEC4u;
        // 0x28cec8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CECCu;
        goto label_28cecc;
    }
    ctx->pc = 0x28CEC4u;
    SET_GPR_U32(ctx, 31, 0x28CECCu);
    ctx->pc = 0x28CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEC4u;
    // 0x28cec8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x28CEC4u, 0x28CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CECCu;
label_28cecc:
    // 0x28cecc: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x28ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ced0:
    // 0x28ced0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28ced4:
    // 0x28ced4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28ced4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ced8:
    // 0x28ced8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ced8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28cedc:
    // 0x28cedc: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x28cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_28cee0:
    // 0x28cee0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28cee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28cee4:
    // 0x28cee4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28cee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28cee8:
    // 0x28cee8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28cee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28ceec:
    // 0x28ceec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x28ceecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28cef0:
    // 0x28cef0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_28cef4:
    if (ctx->pc == 0x28CEF4u) {
        ctx->pc = 0x28CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEF0u;
        // 0x28cef4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEF8u;
        goto label_28cef8;
    }
    ctx->pc = 0x28CEF0u;
    {
        const bool branch_taken_0x28cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEF0u;
        // 0x28cef4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cef0) {
            ctx->pc = 0x28CF2Cu;
            goto label_28cf2c;
        }
    }
    ctx->pc = 0x28CEF8u;
label_28cef8:
    // 0x28cef8: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x28cef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_28cefc:
    // 0x28cefc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28cf00:
    if (ctx->pc == 0x28CF00u) {
        ctx->pc = 0x28CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEFCu;
        // 0x28cf00: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF04u;
        goto label_28cf04;
    }
    ctx->pc = 0x28CEFCu;
    {
        const bool branch_taken_0x28cefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEFCu;
        // 0x28cf00: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cefc) {
            ctx->pc = 0x28CF10u;
            goto label_28cf10;
        }
    }
    ctx->pc = 0x28CF04u;
label_28cf04:
    // 0x28cf04: 0x240400bf  addiu       $a0, $zero, 0xBF
    ctx->pc = 0x28cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_28cf08:
    // 0x28cf08: 0xc081546  jal         func_205518
label_28cf0c:
    if (ctx->pc == 0x28CF0Cu) {
        ctx->pc = 0x28CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF08u;
        // 0x28cf0c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF10u;
        goto label_28cf10;
    }
    ctx->pc = 0x28CF08u;
    SET_GPR_U32(ctx, 31, 0x28CF10u);
    ctx->pc = 0x28CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF08u;
    // 0x28cf0c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28CF08u, 0x28CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF10u;
label_28cf10:
    // 0x28cf10: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x28cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_28cf14:
    // 0x28cf14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28cf18:
    // 0x28cf18: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_28cf1c:
    if (ctx->pc == 0x28CF1Cu) {
        ctx->pc = 0x28CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF18u;
        // 0x28cf1c: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF20u;
        goto label_28cf20;
    }
    ctx->pc = 0x28CF18u;
    {
        const bool branch_taken_0x28cf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cf18) {
            ctx->pc = 0x28CF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CF18u;
            // 0x28cf1c: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CF30u;
            goto label_28cf30;
        }
    }
    ctx->pc = 0x28CF20u;
label_28cf20:
    // 0x28cf20: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x28cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_28cf24:
    // 0x28cf24: 0xc081546  jal         func_205518
label_28cf28:
    if (ctx->pc == 0x28CF28u) {
        ctx->pc = 0x28CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF24u;
        // 0x28cf28: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF2Cu;
        goto label_28cf2c;
    }
    ctx->pc = 0x28CF24u;
    SET_GPR_U32(ctx, 31, 0x28CF2Cu);
    ctx->pc = 0x28CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF24u;
    // 0x28cf28: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28CF24u, 0x28CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF2Cu;
label_28cf2c:
    // 0x28cf2c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28cf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28cf30:
    // 0x28cf30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x28cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28cf34:
    // 0x28cf34: 0x14c20014  bne         $a2, $v0, . + 4 + (0x14 << 2)
label_28cf38:
    if (ctx->pc == 0x28CF38u) {
        ctx->pc = 0x28CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF34u;
        // 0x28cf38: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF3Cu;
        goto label_28cf3c;
    }
    ctx->pc = 0x28CF34u;
    {
        const bool branch_taken_0x28cf34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF34u;
        // 0x28cf38: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf34) {
            ctx->pc = 0x28CF88u;
            goto label_28cf88;
        }
    }
    ctx->pc = 0x28CF3Cu;
label_28cf3c:
    // 0x28cf3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28cf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_28cf40:
    // 0x28cf40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28cf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cf44:
    // 0x28cf44: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x28cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cf48:
    // 0x28cf48: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x28cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_28cf4c:
    // 0x28cf4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28cf4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28cf50:
    // 0x28cf50: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28cf50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28cf54:
    // 0x28cf54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28cf54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28cf58:
    // 0x28cf58: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28cf58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28cf5c:
    // 0x28cf5c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_28cf60:
    if (ctx->pc == 0x28CF60u) {
        ctx->pc = 0x28CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF5Cu;
        // 0x28cf60: 0x240400c1  addiu       $a0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF64u;
        goto label_28cf64;
    }
    ctx->pc = 0x28CF5Cu;
    {
        const bool branch_taken_0x28cf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF5Cu;
        // 0x28cf60: 0x240400c1  addiu       $a0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf5c) {
            ctx->pc = 0x28CF90u;
            goto label_28cf90;
        }
    }
    ctx->pc = 0x28CF64u;
label_28cf64:
    // 0x28cf64: 0xc081546  jal         func_205518
label_28cf68:
    if (ctx->pc == 0x28CF68u) {
        ctx->pc = 0x28CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF64u;
        // 0x28cf68: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF6Cu;
        goto label_28cf6c;
    }
    ctx->pc = 0x28CF64u;
    SET_GPR_U32(ctx, 31, 0x28CF6Cu);
    ctx->pc = 0x28CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF64u;
    // 0x28cf68: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28CF64u, 0x28CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF6Cu;
label_28cf6c:
    // 0x28cf6c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28cf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28cf70:
    // 0x28cf70: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x28cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_28cf74:
    // 0x28cf74: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28cf74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28cf78:
    // 0x28cf78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28cf7c:
    // 0x28cf7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_28cf80:
    if (ctx->pc == 0x28CF80u) {
        ctx->pc = 0x28CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF7Cu;
        // 0x28cf80: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF84u;
        goto label_28cf84;
    }
    ctx->pc = 0x28CF7Cu;
    {
        const bool branch_taken_0x28cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF7Cu;
        // 0x28cf80: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf7c) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF84u;
label_28cf84:
    // 0x28cf84: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28cf84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28cf88:
    // 0x28cf88: 0x10000003  b           . + 4 + (0x3 << 2)
label_28cf8c:
    if (ctx->pc == 0x28CF8Cu) {
        ctx->pc = 0x28CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF88u;
        // 0x28cf8c: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF90u;
        goto label_28cf90;
    }
    ctx->pc = 0x28CF88u;
    {
        const bool branch_taken_0x28cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF88u;
        // 0x28cf8c: 0x8f87b948  lw          $a3, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf88) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF90u;
label_28cf90:
    // 0x28cf90: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x28cf90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28cf94:
    // 0x28cf94: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28cf98:
    // 0x28cf98: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28cf9c:
    // 0x28cf9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28cfa0:
    if (ctx->pc == 0x28CFA0u) {
        ctx->pc = 0x28CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF9Cu;
        // 0x28cfa0: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFA4u;
        goto label_28cfa4;
    }
    ctx->pc = 0x28CF9Cu;
    {
        const bool branch_taken_0x28cf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF9Cu;
        // 0x28cfa0: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf9c) {
            ctx->pc = 0x28CFB8u;
            goto label_28cfb8;
        }
    }
    ctx->pc = 0x28CFA4u;
label_28cfa4:
    // 0x28cfa4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_28cfa8:
    // 0x28cfa8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x28cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_28cfac:
    // 0x28cfac: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x28cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28cfb0:
    // 0x28cfb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28cfb4:
    if (ctx->pc == 0x28CFB4u) {
        ctx->pc = 0x28CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFB0u;
        // 0x28cfb4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFB8u;
        goto label_28cfb8;
    }
    ctx->pc = 0x28CFB0u;
    {
        const bool branch_taken_0x28cfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFB0u;
        // 0x28cfb4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfb0) {
            ctx->pc = 0x28CFBCu;
            goto label_28cfbc;
        }
    }
    ctx->pc = 0x28CFB8u;
label_28cfb8:
    // 0x28cfb8: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x28cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28cfbc:
    // 0x28cfbc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x28cfbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28cfc0:
    // 0x28cfc0: 0x2ae20032  slti        $v0, $s7, 0x32
    ctx->pc = 0x28cfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)50) ? 1 : 0);
label_28cfc4:
    // 0x28cfc4: 0x5440f66a  bnel        $v0, $zero, . + 4 + (-0x996 << 2)
label_28cfc8:
    if (ctx->pc == 0x28CFC8u) {
        ctx->pc = 0x28CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFC4u;
        // 0x28cfc8: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFCCu;
        goto label_28cfcc;
    }
    ctx->pc = 0x28CFC4u;
    {
        const bool branch_taken_0x28cfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cfc4) {
            ctx->pc = 0x28CFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CFC4u;
            // 0x28cfc8: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a970;
        }
    }
    ctx->pc = 0x28CFCCu;
label_28cfcc:
    // 0x28cfcc: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x28cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_28cfd0:
    // 0x28cfd0: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x28cfd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_28cfd4:
    // 0x28cfd4: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x28cfd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_28cfd8:
    // 0x28cfd8: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x28cfd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_28cfdc:
    // 0x28cfdc: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x28cfdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_28cfe0:
    // 0x28cfe0: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x28cfe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_28cfe4:
    // 0x28cfe4: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x28cfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_28cfe8:
    // 0x28cfe8: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x28cfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_28cfec:
    // 0x28cfec: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x28cfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_28cff0:
    // 0x28cff0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x28cff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_28cff4:
    // 0x28cff4: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x28cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28cff8:
    // 0x28cff8: 0x3e00008  jr          $ra
label_28cffc:
    if (ctx->pc == 0x28CFFCu) {
        ctx->pc = 0x28CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFF8u;
        // 0x28cffc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D000u;
        goto label_fallthrough_0x28cff8;
    }
    ctx->pc = 0x28CFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFF8u;
        // 0x28cffc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28cff8:
    ctx->pc = 0x28D000u;
}
