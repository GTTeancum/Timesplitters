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

// Function: aiTickBefore
// Address: 0x2ba9c8 - 0x2bb470
void aiTickBefore_0x2ba9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("aiTickBefore_0x2ba9c8");
#endif

    switch (ctx->pc) {
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        case 0x2bada8u: goto label_2bada8;
        case 0x2badacu: goto label_2badac;
        case 0x2badb0u: goto label_2badb0;
        case 0x2badb4u: goto label_2badb4;
        case 0x2badb8u: goto label_2badb8;
        case 0x2badbcu: goto label_2badbc;
        case 0x2badc0u: goto label_2badc0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2badc8u: goto label_2badc8;
        case 0x2badccu: goto label_2badcc;
        case 0x2badd0u: goto label_2badd0;
        case 0x2badd4u: goto label_2badd4;
        case 0x2badd8u: goto label_2badd8;
        case 0x2baddcu: goto label_2baddc;
        case 0x2bade0u: goto label_2bade0;
        case 0x2bade4u: goto label_2bade4;
        case 0x2bade8u: goto label_2bade8;
        case 0x2badecu: goto label_2badec;
        case 0x2badf0u: goto label_2badf0;
        case 0x2badf4u: goto label_2badf4;
        case 0x2badf8u: goto label_2badf8;
        case 0x2badfcu: goto label_2badfc;
        case 0x2bae00u: goto label_2bae00;
        case 0x2bae04u: goto label_2bae04;
        case 0x2bae08u: goto label_2bae08;
        case 0x2bae0cu: goto label_2bae0c;
        case 0x2bae10u: goto label_2bae10;
        case 0x2bae14u: goto label_2bae14;
        case 0x2bae18u: goto label_2bae18;
        case 0x2bae1cu: goto label_2bae1c;
        case 0x2bae20u: goto label_2bae20;
        case 0x2bae24u: goto label_2bae24;
        case 0x2bae28u: goto label_2bae28;
        case 0x2bae2cu: goto label_2bae2c;
        case 0x2bae30u: goto label_2bae30;
        case 0x2bae34u: goto label_2bae34;
        case 0x2bae38u: goto label_2bae38;
        case 0x2bae3cu: goto label_2bae3c;
        case 0x2bae40u: goto label_2bae40;
        case 0x2bae44u: goto label_2bae44;
        case 0x2bae48u: goto label_2bae48;
        case 0x2bae4cu: goto label_2bae4c;
        case 0x2bae50u: goto label_2bae50;
        case 0x2bae54u: goto label_2bae54;
        case 0x2bae58u: goto label_2bae58;
        case 0x2bae5cu: goto label_2bae5c;
        case 0x2bae60u: goto label_2bae60;
        case 0x2bae64u: goto label_2bae64;
        case 0x2bae68u: goto label_2bae68;
        case 0x2bae6cu: goto label_2bae6c;
        case 0x2bae70u: goto label_2bae70;
        case 0x2bae74u: goto label_2bae74;
        case 0x2bae78u: goto label_2bae78;
        case 0x2bae7cu: goto label_2bae7c;
        case 0x2bae80u: goto label_2bae80;
        case 0x2bae84u: goto label_2bae84;
        case 0x2bae88u: goto label_2bae88;
        case 0x2bae8cu: goto label_2bae8c;
        case 0x2bae90u: goto label_2bae90;
        case 0x2bae94u: goto label_2bae94;
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        case 0x2baed0u: goto label_2baed0;
        case 0x2baed4u: goto label_2baed4;
        case 0x2baed8u: goto label_2baed8;
        case 0x2baedcu: goto label_2baedc;
        case 0x2baee0u: goto label_2baee0;
        case 0x2baee4u: goto label_2baee4;
        case 0x2baee8u: goto label_2baee8;
        case 0x2baeecu: goto label_2baeec;
        case 0x2baef0u: goto label_2baef0;
        case 0x2baef4u: goto label_2baef4;
        case 0x2baef8u: goto label_2baef8;
        case 0x2baefcu: goto label_2baefc;
        case 0x2baf00u: goto label_2baf00;
        case 0x2baf04u: goto label_2baf04;
        case 0x2baf08u: goto label_2baf08;
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf10u: goto label_2baf10;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf18u: goto label_2baf18;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2baf20u: goto label_2baf20;
        case 0x2baf24u: goto label_2baf24;
        case 0x2baf28u: goto label_2baf28;
        case 0x2baf2cu: goto label_2baf2c;
        case 0x2baf30u: goto label_2baf30;
        case 0x2baf34u: goto label_2baf34;
        case 0x2baf38u: goto label_2baf38;
        case 0x2baf3cu: goto label_2baf3c;
        case 0x2baf40u: goto label_2baf40;
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf50u: goto label_2baf50;
        case 0x2baf54u: goto label_2baf54;
        case 0x2baf58u: goto label_2baf58;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf60u: goto label_2baf60;
        case 0x2baf64u: goto label_2baf64;
        case 0x2baf68u: goto label_2baf68;
        case 0x2baf6cu: goto label_2baf6c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf78u: goto label_2baf78;
        case 0x2baf7cu: goto label_2baf7c;
        case 0x2baf80u: goto label_2baf80;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2baf90u: goto label_2baf90;
        case 0x2baf94u: goto label_2baf94;
        case 0x2baf98u: goto label_2baf98;
        case 0x2baf9cu: goto label_2baf9c;
        case 0x2bafa0u: goto label_2bafa0;
        case 0x2bafa4u: goto label_2bafa4;
        case 0x2bafa8u: goto label_2bafa8;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bafb0u: goto label_2bafb0;
        case 0x2bafb4u: goto label_2bafb4;
        case 0x2bafb8u: goto label_2bafb8;
        case 0x2bafbcu: goto label_2bafbc;
        case 0x2bafc0u: goto label_2bafc0;
        case 0x2bafc4u: goto label_2bafc4;
        case 0x2bafc8u: goto label_2bafc8;
        case 0x2bafccu: goto label_2bafcc;
        case 0x2bafd0u: goto label_2bafd0;
        case 0x2bafd4u: goto label_2bafd4;
        case 0x2bafd8u: goto label_2bafd8;
        case 0x2bafdcu: goto label_2bafdc;
        case 0x2bafe0u: goto label_2bafe0;
        case 0x2bafe4u: goto label_2bafe4;
        case 0x2bafe8u: goto label_2bafe8;
        case 0x2bafecu: goto label_2bafec;
        case 0x2baff0u: goto label_2baff0;
        case 0x2baff4u: goto label_2baff4;
        case 0x2baff8u: goto label_2baff8;
        case 0x2baffcu: goto label_2baffc;
        case 0x2bb000u: goto label_2bb000;
        case 0x2bb004u: goto label_2bb004;
        case 0x2bb008u: goto label_2bb008;
        case 0x2bb00cu: goto label_2bb00c;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb014u: goto label_2bb014;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb01cu: goto label_2bb01c;
        case 0x2bb020u: goto label_2bb020;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb028u: goto label_2bb028;
        case 0x2bb02cu: goto label_2bb02c;
        case 0x2bb030u: goto label_2bb030;
        case 0x2bb034u: goto label_2bb034;
        case 0x2bb038u: goto label_2bb038;
        case 0x2bb03cu: goto label_2bb03c;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb044u: goto label_2bb044;
        case 0x2bb048u: goto label_2bb048;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb054u: goto label_2bb054;
        case 0x2bb058u: goto label_2bb058;
        case 0x2bb05cu: goto label_2bb05c;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb068u: goto label_2bb068;
        case 0x2bb06cu: goto label_2bb06c;
        case 0x2bb070u: goto label_2bb070;
        case 0x2bb074u: goto label_2bb074;
        case 0x2bb078u: goto label_2bb078;
        case 0x2bb07cu: goto label_2bb07c;
        case 0x2bb080u: goto label_2bb080;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb088u: goto label_2bb088;
        case 0x2bb08cu: goto label_2bb08c;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb094u: goto label_2bb094;
        case 0x2bb098u: goto label_2bb098;
        case 0x2bb09cu: goto label_2bb09c;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0a4u: goto label_2bb0a4;
        case 0x2bb0a8u: goto label_2bb0a8;
        case 0x2bb0acu: goto label_2bb0ac;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0b4u: goto label_2bb0b4;
        case 0x2bb0b8u: goto label_2bb0b8;
        case 0x2bb0bcu: goto label_2bb0bc;
        case 0x2bb0c0u: goto label_2bb0c0;
        case 0x2bb0c4u: goto label_2bb0c4;
        case 0x2bb0c8u: goto label_2bb0c8;
        case 0x2bb0ccu: goto label_2bb0cc;
        case 0x2bb0d0u: goto label_2bb0d0;
        case 0x2bb0d4u: goto label_2bb0d4;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0dcu: goto label_2bb0dc;
        case 0x2bb0e0u: goto label_2bb0e0;
        case 0x2bb0e4u: goto label_2bb0e4;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb0f0u: goto label_2bb0f0;
        case 0x2bb0f4u: goto label_2bb0f4;
        case 0x2bb0f8u: goto label_2bb0f8;
        case 0x2bb0fcu: goto label_2bb0fc;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        case 0x2bb2b0u: goto label_2bb2b0;
        case 0x2bb2b4u: goto label_2bb2b4;
        case 0x2bb2b8u: goto label_2bb2b8;
        case 0x2bb2bcu: goto label_2bb2bc;
        case 0x2bb2c0u: goto label_2bb2c0;
        case 0x2bb2c4u: goto label_2bb2c4;
        case 0x2bb2c8u: goto label_2bb2c8;
        case 0x2bb2ccu: goto label_2bb2cc;
        case 0x2bb2d0u: goto label_2bb2d0;
        case 0x2bb2d4u: goto label_2bb2d4;
        case 0x2bb2d8u: goto label_2bb2d8;
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb2e0u: goto label_2bb2e0;
        case 0x2bb2e4u: goto label_2bb2e4;
        case 0x2bb2e8u: goto label_2bb2e8;
        case 0x2bb2ecu: goto label_2bb2ec;
        case 0x2bb2f0u: goto label_2bb2f0;
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb2f8u: goto label_2bb2f8;
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb304u: goto label_2bb304;
        case 0x2bb308u: goto label_2bb308;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb310u: goto label_2bb310;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb31cu: goto label_2bb31c;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb324u: goto label_2bb324;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb32cu: goto label_2bb32c;
        case 0x2bb330u: goto label_2bb330;
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb33cu: goto label_2bb33c;
        case 0x2bb340u: goto label_2bb340;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb348u: goto label_2bb348;
        case 0x2bb34cu: goto label_2bb34c;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb358u: goto label_2bb358;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb364u: goto label_2bb364;
        case 0x2bb368u: goto label_2bb368;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb370u: goto label_2bb370;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb378u: goto label_2bb378;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb380u: goto label_2bb380;
        case 0x2bb384u: goto label_2bb384;
        case 0x2bb388u: goto label_2bb388;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb390u: goto label_2bb390;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb398u: goto label_2bb398;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a0u: goto label_2bb3a0;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3acu: goto label_2bb3ac;
        case 0x2bb3b0u: goto label_2bb3b0;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3b8u: goto label_2bb3b8;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3c0u: goto label_2bb3c0;
        case 0x2bb3c4u: goto label_2bb3c4;
        case 0x2bb3c8u: goto label_2bb3c8;
        case 0x2bb3ccu: goto label_2bb3cc;
        case 0x2bb3d0u: goto label_2bb3d0;
        case 0x2bb3d4u: goto label_2bb3d4;
        case 0x2bb3d8u: goto label_2bb3d8;
        case 0x2bb3dcu: goto label_2bb3dc;
        case 0x2bb3e0u: goto label_2bb3e0;
        case 0x2bb3e4u: goto label_2bb3e4;
        case 0x2bb3e8u: goto label_2bb3e8;
        case 0x2bb3ecu: goto label_2bb3ec;
        case 0x2bb3f0u: goto label_2bb3f0;
        case 0x2bb3f4u: goto label_2bb3f4;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb3fcu: goto label_2bb3fc;
        case 0x2bb400u: goto label_2bb400;
        case 0x2bb404u: goto label_2bb404;
        case 0x2bb408u: goto label_2bb408;
        case 0x2bb40cu: goto label_2bb40c;
        case 0x2bb410u: goto label_2bb410;
        case 0x2bb414u: goto label_2bb414;
        case 0x2bb418u: goto label_2bb418;
        case 0x2bb41cu: goto label_2bb41c;
        case 0x2bb420u: goto label_2bb420;
        case 0x2bb424u: goto label_2bb424;
        case 0x2bb428u: goto label_2bb428;
        case 0x2bb42cu: goto label_2bb42c;
        case 0x2bb430u: goto label_2bb430;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb438u: goto label_2bb438;
        case 0x2bb43cu: goto label_2bb43c;
        case 0x2bb440u: goto label_2bb440;
        case 0x2bb444u: goto label_2bb444;
        case 0x2bb448u: goto label_2bb448;
        case 0x2bb44cu: goto label_2bb44c;
        case 0x2bb450u: goto label_2bb450;
        case 0x2bb454u: goto label_2bb454;
        case 0x2bb458u: goto label_2bb458;
        case 0x2bb45cu: goto label_2bb45c;
        case 0x2bb460u: goto label_2bb460;
        case 0x2bb464u: goto label_2bb464;
        case 0x2bb468u: goto label_2bb468;
        case 0x2bb46cu: goto label_2bb46c;
        default: break;
    }

    ctx->pc = 0x2ba9c8u;

label_2ba9c8:
    // 0x2ba9c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ba9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ba9cc:
    // 0x2ba9cc: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2ba9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2ba9d0:
    // 0x2ba9d0: 0x8f82b9b8  lw          $v0, -0x4648($gp)
    ctx->pc = 0x2ba9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949304)));
label_2ba9d4:
    // 0x2ba9d4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2ba9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2ba9d8:
    // 0x2ba9d8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2ba9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2ba9dc:
    // 0x2ba9dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ba9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba9e0:
    // 0x2ba9e0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2ba9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_2ba9e4:
    // 0x2ba9e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ba9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ba9e8:
    // 0x2ba9e8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2ba9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_2ba9ec:
    // 0x2ba9ec: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ba9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2ba9f0:
    // 0x2ba9f0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2ba9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_2ba9f4:
    // 0x2ba9f4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2ba9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2ba9f8:
    // 0x2ba9f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2ba9fc:
    if (ctx->pc == 0x2BA9FCu) {
        ctx->pc = 0x2BA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9F8u;
        // 0x2ba9fc: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA00u;
        goto label_2baa00;
    }
    ctx->pc = 0x2BA9F8u;
    {
        const bool branch_taken_0x2ba9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9F8u;
        // 0x2ba9fc: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9f8) {
            ctx->pc = 0x2BAA04u;
            goto label_2baa04;
        }
    }
    ctx->pc = 0x2BAA00u;
label_2baa00:
    // 0x2baa00: 0xaf83b9b8  sw          $v1, -0x4648($gp)
    ctx->pc = 0x2baa00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949304), GPR_U32(ctx, 3));
label_2baa04:
    // 0x2baa04: 0x8f83b4fc  lw          $v1, -0x4B04($gp)
    ctx->pc = 0x2baa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
label_2baa08:
    // 0x2baa08: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2baa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2baa0c:
    // 0x2baa0c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_2baa10:
    if (ctx->pc == 0x2BAA10u) {
        ctx->pc = 0x2BAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA0Cu;
        // 0x2baa10: 0x8f82b4e0  lw          $v0, -0x4B20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA14u;
        goto label_2baa14;
    }
    ctx->pc = 0x2BAA0Cu;
    {
        const bool branch_taken_0x2baa0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA0Cu;
        // 0x2baa10: 0x8f82b4e0  lw          $v0, -0x4B20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa0c) {
            ctx->pc = 0x2BAA48u;
            goto label_2baa48;
        }
    }
    ctx->pc = 0x2BAA14u;
label_2baa14:
    // 0x2baa14: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x2baa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2baa18:
    // 0x2baa18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2baa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2baa1c:
    // 0x2baa1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2baa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2baa20:
    // 0x2baa20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2baa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2baa24:
    // 0x2baa24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2baa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2baa28:
    // 0x2baa28: 0x80f809  jalr        $a0
label_2baa2c:
    if (ctx->pc == 0x2BAA2Cu) {
        ctx->pc = 0x2BAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA28u;
        // 0x2baa2c: 0xaf82b4e0  sw          $v0, -0x4B20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA30u;
        goto label_2baa30;
    }
    ctx->pc = 0x2BAA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x2BAA30u);
        ctx->pc = 0x2BAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA28u;
        // 0x2baa2c: 0xaf82b4e0  sw          $v0, -0x4B20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAA28u, 0x2BAA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAA30u;
label_2baa30:
    // 0x2baa30: 0x8f85b4fc  lw          $a1, -0x4B04($gp)
    ctx->pc = 0x2baa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
label_2baa34:
    // 0x2baa34: 0x8f82b4e0  lw          $v0, -0x4B20($gp)
    ctx->pc = 0x2baa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948064)));
label_2baa38:
    // 0x2baa38: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2baa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2baa3c:
    // 0x2baa3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2baa3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2baa40:
    // 0x2baa40: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2baa44:
    if (ctx->pc == 0x2BAA44u) {
        ctx->pc = 0x2BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA40u;
        // 0x2baa44: 0xaf80b4e0  sw          $zero, -0x4B20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA48u;
        goto label_2baa48;
    }
    ctx->pc = 0x2BAA40u;
    {
        const bool branch_taken_0x2baa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa40) {
            ctx->pc = 0x2BAA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAA40u;
            // 0x2baa44: 0xaf80b4e0  sw          $zero, -0x4B20($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948064), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA48u;
            goto label_2baa48;
        }
    }
    ctx->pc = 0x2BAA48u;
label_2baa48:
    // 0x2baa48: 0xc0afe0c  jal         func_2BF830
label_2baa4c:
    if (ctx->pc == 0x2BAA4Cu) {
        ctx->pc = 0x2BAA50u;
        goto label_2baa50;
    }
    ctx->pc = 0x2BAA48u;
    SET_GPR_U32(ctx, 31, 0x2BAA50u);
    ctx->pc = 0x2BF830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF830u, 0x2BAA48u, 0x2BAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA50u;
label_2baa50:
    // 0x2baa50: 0xc0b35fe  jal         func_2CD7F8
label_2baa54:
    if (ctx->pc == 0x2BAA54u) {
        ctx->pc = 0x2BAA58u;
        goto label_2baa58;
    }
    ctx->pc = 0x2BAA50u;
    SET_GPR_U32(ctx, 31, 0x2BAA58u);
    ctx->pc = 0x2CD7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD7F8u, 0x2BAA50u, 0x2BAA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA58u;
label_2baa58:
    // 0x2baa58: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2baa58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2baa5c:
    // 0x2baa5c: 0x10c0027a  beqz        $a2, . + 4 + (0x27A << 2)
label_2baa60:
    if (ctx->pc == 0x2BAA60u) {
        ctx->pc = 0x2BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA5Cu;
        // 0x2baa60: 0x8f82b4d8  lw          $v0, -0x4B28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA64u;
        goto label_2baa64;
    }
    ctx->pc = 0x2BAA5Cu;
    {
        const bool branch_taken_0x2baa5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA5Cu;
        // 0x2baa60: 0x8f82b4d8  lw          $v0, -0x4B28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa5c) {
            ctx->pc = 0x2BB448u;
            goto label_2bb448;
        }
    }
    ctx->pc = 0x2BAA64u;
label_2baa64:
    // 0x2baa64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2baa68:
    // 0x2baa68: 0x1c400059  bgtz        $v0, . + 4 + (0x59 << 2)
label_2baa6c:
    if (ctx->pc == 0x2BAA6Cu) {
        ctx->pc = 0x2BAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA68u;
        // 0x2baa6c: 0xaf82b4d8  sw          $v0, -0x4B28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA70u;
        goto label_2baa70;
    }
    ctx->pc = 0x2BAA68u;
    {
        const bool branch_taken_0x2baa68 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA68u;
        // 0x2baa6c: 0xaf82b4d8  sw          $v0, -0x4B28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa68) {
            ctx->pc = 0x2BABD0u;
            goto label_2babd0;
        }
    }
    ctx->pc = 0x2BAA70u;
label_2baa70:
    // 0x2baa70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2baa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2baa74:
    // 0x2baa74: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x2baa74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_2baa78:
    // 0x2baa78: 0xaf82b4d8  sw          $v0, -0x4B28($gp)
    ctx->pc = 0x2baa78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948056), GPR_U32(ctx, 2));
label_2baa7c:
    // 0x2baa7c: 0x26692058  addiu       $t1, $s3, 0x2058
    ctx->pc = 0x2baa7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
label_2baa80:
    // 0x2baa80: 0x8f84b4d4  lw          $a0, -0x4B2C($gp)
    ctx->pc = 0x2baa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948052)));
label_2baa84:
    // 0x2baa84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2baa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baa88:
    // 0x2baa88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2baa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baa8c:
    // 0x2baa8c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x2baa8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
label_2baa90:
    // 0x2baa90: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x2baa90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2baa94:
    // 0x2baa94: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2baa94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2baa98:
    // 0x2baa98: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2baa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2baa9c:
    // 0x2baa9c: 0x0  nop
    ctx->pc = 0x2baa9cu;
    // NOP
label_2baaa0:
    // 0x2baaa0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2baaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2baaa4:
    // 0x2baaa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2baaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2baaa8:
    // 0x2baaa8: 0x8c700160  lw          $s0, 0x160($v1)
    ctx->pc = 0x2baaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2baaac:
    // 0x2baaac: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2baaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2baab0:
    // 0x2baab0: 0x54480003  bnel        $v0, $t0, . + 4 + (0x3 << 2)
label_2baab4:
    if (ctx->pc == 0x2BAAB4u) {
        ctx->pc = 0x2BAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB0u;
        // 0x2baab4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAB8u;
        goto label_2baab8;
    }
    ctx->pc = 0x2BAAB0u;
    {
        const bool branch_taken_0x2baab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2baab0) {
            ctx->pc = 0x2BAAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAAB0u;
            // 0x2baab4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAAC0u;
            goto label_2baac0;
        }
    }
    ctx->pc = 0x2BAAB8u;
label_2baab8:
    // 0x2baab8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2baabc:
    if (ctx->pc == 0x2BAABCu) {
        ctx->pc = 0x2BAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB8u;
        // 0x2baabc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAC0u;
        goto label_2baac0;
    }
    ctx->pc = 0x2BAAB8u;
    {
        const bool branch_taken_0x2baab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB8u;
        // 0x2baabc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baab8) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAAC0u;
label_2baac0:
    // 0x2baac0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2baac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2baac4:
    // 0x2baac4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2baac8:
    if (ctx->pc == 0x2BAAC8u) {
        ctx->pc = 0x2BAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC4u;
        // 0x2baac8: 0xaf84b4d4  sw          $a0, -0x4B2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948052), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAACCu;
        goto label_2baacc;
    }
    ctx->pc = 0x2BAAC4u;
    {
        const bool branch_taken_0x2baac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC4u;
        // 0x2baac8: 0xaf84b4d4  sw          $a0, -0x4B2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948052), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baac4) {
            ctx->pc = 0x2BAAD8u;
            goto label_2baad8;
        }
    }
    ctx->pc = 0x2BAACCu;
label_2baacc:
    // 0x2baacc: 0xaf80b4d4  sw          $zero, -0x4B2C($gp)
    ctx->pc = 0x2baaccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948052), GPR_U32(ctx, 0));
label_2baad0:
    // 0x2baad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2baad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baad4:
    // 0x2baad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2baad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baad8:
    // 0x2baad8: 0x10a0fff1  beqz        $a1, . + 4 + (-0xF << 2)
label_2baadc:
    if (ctx->pc == 0x2BAADCu) {
        ctx->pc = 0x2BAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAD8u;
        // 0x2baadc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE0u;
        goto label_2baae0;
    }
    ctx->pc = 0x2BAAD8u;
    {
        const bool branch_taken_0x2baad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAD8u;
        // 0x2baadc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baad8) {
            ctx->pc = 0x2BAAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baaa0;
        }
    }
    ctx->pc = 0x2BAAE0u;
label_2baae0:
    // 0x2baae0: 0x12400162  beqz        $s2, . + 4 + (0x162 << 2)
label_2baae4:
    if (ctx->pc == 0x2BAAE4u) {
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x8f84b230  lw          $a0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE8u;
        goto label_2baae8;
    }
    ctx->pc = 0x2BAAE0u;
    {
        const bool branch_taken_0x2baae0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x8f84b230  lw          $a0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae0) {
            ctx->pc = 0x2BB06Cu;
            goto label_2bb06c;
        }
    }
    ctx->pc = 0x2BAAE8u;
label_2baae8:
    // 0x2baae8: 0x8e0c0bcc  lw          $t4, 0xBCC($s0)
    ctx->pc = 0x2baae8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
label_2baaec:
    // 0x2baaec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2baaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2baaf0:
    // 0x2baaf0: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x2baaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_2baaf4:
    // 0x2baaf4: 0xc5810030  lwc1        $f1, 0x30($t4)
    ctx->pc = 0x2baaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2baaf8:
    // 0x2baaf8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2baaf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baafc:
    // 0x2baafc: 0x8d910010  lw          $s1, 0x10($t4)
    ctx->pc = 0x2baafcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_2bab00:
    // 0x2bab00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2bab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bab04:
    // 0x2bab04: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2bab04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2bab08:
    // 0x2bab08: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bab0c:
    // 0x2bab0c: 0xc7808fec  lwc1        $f0, -0x7014($gp)
    ctx->pc = 0x2bab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bab10:
    // 0x2bab10: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2bab10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_2bab14:
    // 0x2bab14: 0xc5820034  lwc1        $f2, 0x34($t4)
    ctx->pc = 0x2bab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bab18:
    // 0x2bab18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bab18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bab1c:
    // 0x2bab1c: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x2bab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_2bab20:
    // 0x2bab20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bab20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bab24:
    // 0x2bab24: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bab24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2bab28:
    // 0x2bab28: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x2bab28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
label_2bab2c:
    // 0x2bab2c: 0x8c6d0160  lw          $t5, 0x160($v1)
    ctx->pc = 0x2bab2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2bab30:
    // 0x2bab30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bab30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bab34:
    // 0x2bab34: 0xc7848ff0  lwc1        $f4, -0x7010($gp)
    ctx->pc = 0x2bab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2bab38:
    // 0x2bab38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bab38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bab3c:
    // 0x2bab3c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2bab3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2bab40:
    // 0x2bab40: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2bab40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2bab44:
    // 0x2bab44: 0xc5830038  lwc1        $f3, 0x38($t4)
    ctx->pc = 0x2bab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bab48:
    // 0x2bab48: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2bab48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2bab4c:
    // 0x2bab4c: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x2bab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bab50:
    // 0x2bab50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bab50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2bab54:
    // 0x2bab54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bab54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2bab58:
    // 0x2bab58: 0xc5a10bc4  lwc1        $f1, 0xBC4($t5)
    ctx->pc = 0x2bab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bab5c:
    // 0x2bab5c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bab5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_2bab60:
    // 0x2bab60: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2bab60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2bab64:
    // 0x2bab64: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bab64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2bab68:
    // 0x2bab68: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x2bab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bab6c:
    // 0x2bab6c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2bab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_2bab70:
    // 0x2bab70: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bab70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2bab74:
    // 0x2bab74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2bab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2bab78:
    // 0x2bab78: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x2bab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_2bab7c:
    // 0x2bab7c: 0xc09640e  jal         func_259038
label_2bab80:
    if (ctx->pc == 0x2BAB80u) {
        ctx->pc = 0x2BAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB7Cu;
        // 0x2bab80: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB84u;
        goto label_2bab84;
    }
    ctx->pc = 0x2BAB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB84u);
    ctx->pc = 0x2BAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB7Cu;
    // 0x2bab80: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2BAB7Cu, 0x2BAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB84u;
label_2bab84:
    // 0x2bab84: 0x8e030ae4  lw          $v1, 0xAE4($s0)
    ctx->pc = 0x2bab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
label_2bab88:
    // 0x2bab88: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2bab8c:
    if (ctx->pc == 0x2BAB8Cu) {
        ctx->pc = 0x2BAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB88u;
        // 0x2bab8c: 0xc6010b60  lwc1        $f1, 0xB60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB90u;
        goto label_2bab90;
    }
    ctx->pc = 0x2BAB88u;
    {
        const bool branch_taken_0x2bab88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bab88) {
            ctx->pc = 0x2BAB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAB88u;
            // 0x2bab8c: 0xc6010b60  lwc1        $f1, 0xB60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BABA4u;
            goto label_2baba4;
        }
    }
    ctx->pc = 0x2BAB90u;
label_2bab90:
    // 0x2bab90: 0xae120ad4  sw          $s2, 0xAD4($s0)
    ctx->pc = 0x2bab90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 18));
label_2bab94:
    // 0x2bab94: 0xc0b2cc2  jal         func_2CB308
label_2bab98:
    if (ctx->pc == 0x2BAB98u) {
        ctx->pc = 0x2BAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB94u;
        // 0x2bab98: 0x8e040bcc  lw          $a0, 0xBCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB9Cu;
        goto label_2bab9c;
    }
    ctx->pc = 0x2BAB94u;
    SET_GPR_U32(ctx, 31, 0x2BAB9Cu);
    ctx->pc = 0x2BAB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB94u;
    // 0x2bab98: 0x8e040bcc  lw          $a0, 0xBCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB308u, 0x2BAB94u, 0x2BAB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB9Cu;
label_2bab9c:
    // 0x2bab9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2baba0:
    if (ctx->pc == 0x2BABA0u) {
        ctx->pc = 0x2BABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB9Cu;
        // 0x2baba0: 0x8e030bcc  lw          $v1, 0xBCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABA4u;
        goto label_2baba4;
    }
    ctx->pc = 0x2BAB9Cu;
    {
        const bool branch_taken_0x2bab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB9Cu;
        // 0x2baba0: 0x8e030bcc  lw          $v1, 0xBCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab9c) {
            ctx->pc = 0x2BABC4u;
            goto label_2babc4;
        }
    }
    ctx->pc = 0x2BABA4u;
label_2baba4:
    // 0x2baba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2baba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2baba8:
    // 0x2baba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2baba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2babac:
    // 0x2babac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2babacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2babb0:
    // 0x2babb0: 0x0  nop
    ctx->pc = 0x2babb0u;
    // NOP
label_2babb4:
    // 0x2babb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2babb8:
    if (ctx->pc == 0x2BABB8u) {
        ctx->pc = 0x2BABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABB4u;
        // 0x2babb8: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABBCu;
        goto label_2babbc;
    }
    ctx->pc = 0x2BABB4u;
    {
        const bool branch_taken_0x2babb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABB4u;
        // 0x2babb8: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babb4) {
            ctx->pc = 0x2BABC0u;
            goto label_2babc0;
        }
    }
    ctx->pc = 0x2BABBCu;
label_2babbc:
    // 0x2babbc: 0xae000b60  sw          $zero, 0xB60($s0)
    ctx->pc = 0x2babbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2912), GPR_U32(ctx, 0));
label_2babc0:
    // 0x2babc0: 0x8e030bcc  lw          $v1, 0xBCC($s0)
    ctx->pc = 0x2babc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
label_2babc4:
    // 0x2babc4: 0x36220020  ori         $v0, $s1, 0x20
    ctx->pc = 0x2babc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
label_2babc8:
    // 0x2babc8: 0x10000127  b           . + 4 + (0x127 << 2)
label_2babcc:
    if (ctx->pc == 0x2BABCCu) {
        ctx->pc = 0x2BABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABC8u;
        // 0x2babcc: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABD0u;
        goto label_2babd0;
    }
    ctx->pc = 0x2BABC8u;
    {
        const bool branch_taken_0x2babc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABC8u;
        // 0x2babcc: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babc8) {
            ctx->pc = 0x2BB068u;
            goto label_2bb068;
        }
    }
    ctx->pc = 0x2BABD0u;
label_2babd0:
    // 0x2babd0: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x2babd0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_2babd4:
    // 0x2babd4: 0x8f84b4d0  lw          $a0, -0x4B30($gp)
    ctx->pc = 0x2babd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
label_2babd8:
    // 0x2babd8: 0x26692058  addiu       $t1, $s3, 0x2058
    ctx->pc = 0x2babd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
label_2babdc:
    // 0x2babdc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2babdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2babe0:
    // 0x2babe0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2babe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2babe4:
    // 0x2babe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2babe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2babe8:
    // 0x2babe8: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x2babe8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
label_2babec:
    // 0x2babec: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x2babecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2babf0:
    // 0x2babf0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2babf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2babf4:
    // 0x2babf4: 0x0  nop
    ctx->pc = 0x2babf4u;
    // NOP
label_2babf8:
    // 0x2babf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2babf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2babfc:
    // 0x2babfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2babfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bac00:
    // 0x2bac00: 0x8c700160  lw          $s0, 0x160($v1)
    ctx->pc = 0x2bac00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2bac04:
    // 0x2bac04: 0x8e0e0ae4  lw          $t6, 0xAE4($s0)
    ctx->pc = 0x2bac04u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
label_2bac08:
    // 0x2bac08: 0x11c0000c  beqz        $t6, . + 4 + (0xC << 2)
label_2bac0c:
    if (ctx->pc == 0x2BAC0Cu) {
        ctx->pc = 0x2BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC08u;
        // 0x2bac0c: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC10u;
        goto label_2bac10;
    }
    ctx->pc = 0x2BAC08u;
    {
        const bool branch_taken_0x2bac08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC08u;
        // 0x2bac0c: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac08) {
            ctx->pc = 0x2BAC3Cu;
            goto label_2bac3c;
        }
    }
    ctx->pc = 0x2BAC10u;
label_2bac10:
    // 0x2bac10: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_2bac14:
    // 0x2bac14: 0x30420149  andi        $v0, $v0, 0x149
    ctx->pc = 0x2bac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)329);
label_2bac18:
    // 0x2bac18: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2bac1c:
    if (ctx->pc == 0x2BAC1Cu) {
        ctx->pc = 0x2BAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC18u;
        // 0x2bac1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC20u;
        goto label_2bac20;
    }
    ctx->pc = 0x2BAC18u;
    {
        const bool branch_taken_0x2bac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac18) {
            ctx->pc = 0x2BAC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC18u;
            // 0x2bac1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC40u;
            goto label_2bac40;
        }
    }
    ctx->pc = 0x2BAC20u;
label_2bac20:
    // 0x2bac20: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2bac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2bac24:
    // 0x2bac24: 0x50480006  beql        $v0, $t0, . + 4 + (0x6 << 2)
label_2bac28:
    if (ctx->pc == 0x2BAC28u) {
        ctx->pc = 0x2BAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC24u;
        // 0x2bac28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC2Cu;
        goto label_2bac2c;
    }
    ctx->pc = 0x2BAC24u;
    {
        const bool branch_taken_0x2bac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2bac24) {
            ctx->pc = 0x2BAC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC24u;
            // 0x2bac28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC40u;
            goto label_2bac40;
        }
    }
    ctx->pc = 0x2BAC2Cu;
label_2bac2c:
    // 0x2bac2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bac30:
    if (ctx->pc == 0x2BAC30u) {
        ctx->pc = 0x2BAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC2Cu;
        // 0x2bac30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC34u;
        goto label_2bac34;
    }
    ctx->pc = 0x2BAC2Cu;
    {
        const bool branch_taken_0x2bac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac2c) {
            ctx->pc = 0x2BAC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC2Cu;
            // 0x2bac30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC40u;
            goto label_2bac40;
        }
    }
    ctx->pc = 0x2BAC34u;
label_2bac34:
    // 0x2bac34: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bac38:
    if (ctx->pc == 0x2BAC38u) {
        ctx->pc = 0x2BAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC34u;
        // 0x2bac38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC3Cu;
        goto label_2bac3c;
    }
    ctx->pc = 0x2BAC34u;
    {
        const bool branch_taken_0x2bac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC34u;
        // 0x2bac38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac34) {
            ctx->pc = 0x2BAC54u;
            goto label_2bac54;
        }
    }
    ctx->pc = 0x2BAC3Cu;
label_2bac3c:
    // 0x2bac3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2bac40:
    // 0x2bac40: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2bac40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2bac44:
    // 0x2bac44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2bac48:
    if (ctx->pc == 0x2BAC48u) {
        ctx->pc = 0x2BAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC44u;
        // 0x2bac48: 0xaf84b4d0  sw          $a0, -0x4B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC4Cu;
        goto label_2bac4c;
    }
    ctx->pc = 0x2BAC44u;
    {
        const bool branch_taken_0x2bac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC44u;
        // 0x2bac48: 0xaf84b4d0  sw          $a0, -0x4B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac44) {
            ctx->pc = 0x2BAC58u;
            goto label_2bac58;
        }
    }
    ctx->pc = 0x2BAC4Cu;
label_2bac4c:
    // 0x2bac4c: 0xaf80b4d0  sw          $zero, -0x4B30($gp)
    ctx->pc = 0x2bac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 0));
label_2bac50:
    // 0x2bac50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bac54:
    // 0x2bac54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bac58:
    // 0x2bac58: 0x10a0ffe7  beqz        $a1, . + 4 + (-0x19 << 2)
label_2bac5c:
    if (ctx->pc == 0x2BAC5Cu) {
        ctx->pc = 0x2BAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC58u;
        // 0x2bac5c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC60u;
        goto label_2bac60;
    }
    ctx->pc = 0x2BAC58u;
    {
        const bool branch_taken_0x2bac58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC58u;
        // 0x2bac5c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac58) {
            ctx->pc = 0x2BABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2babf8;
        }
    }
    ctx->pc = 0x2BAC60u;
label_2bac60:
    // 0x2bac60: 0x124000f0  beqz        $s2, . + 4 + (0xF0 << 2)
label_2bac64:
    if (ctx->pc == 0x2BAC64u) {
        ctx->pc = 0x2BAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC60u;
        // 0x2bac64: 0x26632058  addiu       $v1, $s3, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC68u;
        goto label_2bac68;
    }
    ctx->pc = 0x2BAC60u;
    {
        const bool branch_taken_0x2bac60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC60u;
        // 0x2bac64: 0x26632058  addiu       $v1, $s3, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac60) {
            ctx->pc = 0x2BB024u;
            goto label_2bb024;
        }
    }
    ctx->pc = 0x2BAC68u;
label_2bac68:
    // 0x2bac68: 0xc6030bc0  lwc1        $f3, 0xBC0($s0)
    ctx->pc = 0x2bac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bac6c:
    // 0x2bac6c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2bac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2bac70:
    // 0x2bac70: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2bac70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2bac74:
    // 0x2bac74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bac78:
    // 0x2bac78: 0x3484ffdf  ori         $a0, $a0, 0xFFDF
    ctx->pc = 0x2bac78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65503);
label_2bac7c:
    // 0x2bac7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2bac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2bac80:
    // 0x2bac80: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bac84:
    // 0x2bac84: 0xc6050bc4  lwc1        $f5, 0xBC4($s0)
    ctx->pc = 0x2bac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2bac88:
    // 0x2bac88: 0x8de20010  lw          $v0, 0x10($t7)
    ctx->pc = 0x2bac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
label_2bac8c:
    // 0x2bac8c: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2bac8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2bac90:
    // 0x2bac90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2bac94:
    // 0x2bac94: 0xc6040bc8  lwc1        $f4, 0xBC8($s0)
    ctx->pc = 0x2bac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2bac98:
    // 0x2bac98: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x2bac98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
label_2bac9c:
    // 0x2bac9c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2bac9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2baca0:
    // 0x2baca0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2baca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2baca4:
    // 0x2baca4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_2baca8:
    if (ctx->pc == 0x2BACA8u) {
        ctx->pc = 0x2BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACA4u;
        // 0x2baca8: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACACu;
        goto label_2bacac;
    }
    ctx->pc = 0x2BACA4u;
    {
        const bool branch_taken_0x2baca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACA4u;
        // 0x2baca8: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baca4) {
            ctx->pc = 0x2BACE0u;
            goto label_2bace0;
        }
    }
    ctx->pc = 0x2BACACu;
label_2bacac:
    // 0x2bacac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2bacb0:
    if (ctx->pc == 0x2BACB0u) {
        ctx->pc = 0x2BACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACACu;
        // 0x2bacb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACB4u;
        goto label_2bacb4;
    }
    ctx->pc = 0x2BACACu;
    {
        const bool branch_taken_0x2bacac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACACu;
        // 0x2bacb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacac) {
            ctx->pc = 0x2BACC4u;
            goto label_2bacc4;
        }
    }
    ctx->pc = 0x2BACB4u;
label_2bacb4:
    // 0x2bacb4: 0x50820023  beql        $a0, $v0, . + 4 + (0x23 << 2)
label_2bacb8:
    if (ctx->pc == 0x2BACB8u) {
        ctx->pc = 0x2BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB4u;
        // 0x2bacb8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACBCu;
        goto label_2bacbc;
    }
    ctx->pc = 0x2BACB4u;
    {
        const bool branch_taken_0x2bacb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bacb4) {
            ctx->pc = 0x2BACB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BACB4u;
            // 0x2bacb8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAD44u;
            goto label_2bad44;
        }
    }
    ctx->pc = 0x2BACBCu;
label_2bacbc:
    // 0x2bacbc: 0x1000008b  b           . + 4 + (0x8B << 2)
label_2bacc0:
    if (ctx->pc == 0x2BACC0u) {
        ctx->pc = 0x2BACC4u;
        goto label_2bacc4;
    }
    ctx->pc = 0x2BACBCu;
    {
        const bool branch_taken_0x2bacbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bacbc) {
            ctx->pc = 0x2BAEECu;
            goto label_2baeec;
        }
    }
    ctx->pc = 0x2BACC4u;
label_2bacc4:
    // 0x2bacc4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2bacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2bacc8:
    // 0x2bacc8: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
label_2baccc:
    if (ctx->pc == 0x2BACCCu) {
        ctx->pc = 0x2BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC8u;
        // 0x2baccc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD0u;
        goto label_2bacd0;
    }
    ctx->pc = 0x2BACC8u;
    {
        const bool branch_taken_0x2bacc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC8u;
        // 0x2baccc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacc8) {
            ctx->pc = 0x2BAD40u;
            goto label_2bad40;
        }
    }
    ctx->pc = 0x2BACD0u;
label_2bacd0:
    // 0x2bacd0: 0x50820061  beql        $a0, $v0, . + 4 + (0x61 << 2)
label_2bacd4:
    if (ctx->pc == 0x2BACD4u) {
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0xc5c20030  lwc1        $f2, 0x30($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD8u;
        goto label_2bacd8;
    }
    ctx->pc = 0x2BACD0u;
    {
        const bool branch_taken_0x2bacd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bacd0) {
            ctx->pc = 0x2BACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BACD0u;
            // 0x2bacd4: 0xc5c20030  lwc1        $f2, 0x30($t6) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAE58u;
            goto label_2bae58;
        }
    }
    ctx->pc = 0x2BACD8u;
label_2bacd8:
    // 0x2bacd8: 0x10000084  b           . + 4 + (0x84 << 2)
label_2bacdc:
    if (ctx->pc == 0x2BACDCu) {
        ctx->pc = 0x2BACE0u;
        goto label_2bace0;
    }
    ctx->pc = 0x2BACD8u;
    {
        const bool branch_taken_0x2bacd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bacd8) {
            ctx->pc = 0x2BAEECu;
            goto label_2baeec;
        }
    }
    ctx->pc = 0x2BACE0u;
label_2bace0:
    // 0x2bace0: 0xc5c00030  lwc1        $f0, 0x30($t6)
    ctx->pc = 0x2bace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bace4:
    // 0x2bace4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bace8:
    // 0x2bace8: 0x8dc20160  lw          $v0, 0x160($t6)
    ctx->pc = 0x2bace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 352)));
label_2bacec:
    // 0x2bacec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2bacecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2bacf0:
    // 0x2bacf0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bacf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2bacf4:
    // 0x2bacf4: 0xc7818ff4  lwc1        $f1, -0x700C($gp)
    ctx->pc = 0x2bacf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bacf8:
    // 0x2bacf8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bacf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bacfc:
    // 0x2bacfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bacfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad00:
    // 0x2bad00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bad00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad04:
    // 0x2bad04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bad04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad08:
    // 0x2bad08: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bad08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2bad0c:
    // 0x2bad0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bad0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad10:
    // 0x2bad10: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2bad10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2bad14:
    // 0x2bad14: 0xc4400bc4  lwc1        $f0, 0xBC4($v0)
    ctx->pc = 0x2bad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bad18:
    // 0x2bad18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bad18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2bad1c:
    // 0x2bad1c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2bad1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2bad20:
    // 0x2bad20: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2bad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2bad24:
    // 0x2bad24: 0xc5c10038  lwc1        $f1, 0x38($t6)
    ctx->pc = 0x2bad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bad28:
    // 0x2bad28: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2bad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2bad2c:
    // 0x2bad2c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bad2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_2bad30:
    // 0x2bad30: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2bad30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2bad34:
    // 0x2bad34: 0x8de4000c  lw          $a0, 0xC($t7)
    ctx->pc = 0x2bad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
label_2bad38:
    // 0x2bad38: 0x10000042  b           . + 4 + (0x42 << 2)
label_2bad3c:
    if (ctx->pc == 0x2BAD3Cu) {
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD40u;
        goto label_2bad40;
    }
    ctx->pc = 0x2BAD38u;
    {
        const bool branch_taken_0x2bad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad38) {
            ctx->pc = 0x2BAE44u;
            goto label_2bae44;
        }
    }
    ctx->pc = 0x2BAD40u;
label_2bad40:
    // 0x2bad40: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2bad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2bad44:
    // 0x2bad44: 0x2442ff37  addiu       $v0, $v0, -0xC9
    ctx->pc = 0x2bad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967095));
label_2bad48:
    // 0x2bad48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bad48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2bad4c:
    // 0x2bad4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2bad50:
    if (ctx->pc == 0x2BAD50u) {
        ctx->pc = 0x2BAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD4Cu;
        // 0x2bad50: 0xc7a40030  lwc1        $f4, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD54u;
        goto label_2bad54;
    }
    ctx->pc = 0x2BAD4Cu;
    {
        const bool branch_taken_0x2bad4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD4Cu;
        // 0x2bad50: 0xc7a40030  lwc1        $f4, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad4c) {
            ctx->pc = 0x2BAD84u;
            goto label_2bad84;
        }
    }
    ctx->pc = 0x2BAD54u;
label_2bad54:
    // 0x2bad54: 0xc5c001fc  lwc1        $f0, 0x1FC($t6)
    ctx->pc = 0x2bad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bad58:
    // 0x2bad58: 0xc5c10030  lwc1        $f1, 0x30($t6)
    ctx->pc = 0x2bad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bad5c:
    // 0x2bad5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bad5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bad60:
    // 0x2bad60: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2bad64:
    // 0x2bad64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bad64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bad68:
    // 0x2bad68: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2bad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2bad6c:
    // 0x2bad6c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2bad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bad70:
    // 0x2bad70: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bad70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_2bad74:
    // 0x2bad74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bad74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2bad78:
    // 0x2bad78: 0xc5c00034  lwc1        $f0, 0x34($t6)
    ctx->pc = 0x2bad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bad7c:
    // 0x2bad7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2bad80:
    if (ctx->pc == 0x2BAD80u) {
        ctx->pc = 0x2BAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD7Cu;
        // 0x2bad80: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD84u;
        goto label_2bad84;
    }
    ctx->pc = 0x2BAD7Cu;
    {
        const bool branch_taken_0x2bad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD7Cu;
        // 0x2bad80: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad7c) {
            ctx->pc = 0x2BADACu;
            goto label_2badac;
        }
    }
    ctx->pc = 0x2BAD84u;
label_2bad84:
    // 0x2bad84: 0xc5c001fc  lwc1        $f0, 0x1FC($t6)
    ctx->pc = 0x2bad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bad88:
    // 0x2bad88: 0xc5c10030  lwc1        $f1, 0x30($t6)
    ctx->pc = 0x2bad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bad8c:
    // 0x2bad8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bad8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bad90:
    // 0x2bad90: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2bad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2bad94:
    // 0x2bad94: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2bad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bad98:
    // 0x2bad98: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bad98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_2bad9c:
    // 0x2bad9c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bad9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2bada0:
    // 0x2bada0: 0xc5c10200  lwc1        $f1, 0x200($t6)
    ctx->pc = 0x2bada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bada4:
    // 0x2bada4: 0xc5c00034  lwc1        $f0, 0x34($t6)
    ctx->pc = 0x2bada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bada8:
    // 0x2bada8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bada8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2badac:
    // 0x2badac: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2badacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2badb0:
    // 0x2badb0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2badb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2badb4:
    // 0x2badb4: 0xc5c10204  lwc1        $f1, 0x204($t6)
    ctx->pc = 0x2badb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2badb8:
    // 0x2badb8: 0xc5c00038  lwc1        $f0, 0x38($t6)
    ctx->pc = 0x2badb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2badbc:
    // 0x2badbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2badbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2badc0:
    // 0x2badc0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2badc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2badc4:
    // 0x2badc4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2badc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2badc8:
    // 0x2badc8: 0x8f82b4d0  lw          $v0, -0x4B30($gp)
    ctx->pc = 0x2badc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
label_2badcc:
    // 0x2badcc: 0x26632058  addiu       $v1, $s3, 0x2058
    ctx->pc = 0x2badccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
label_2badd0:
    // 0x2badd0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2badd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2badd4:
    // 0x2badd4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x2badd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_2badd8:
    // 0x2badd8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2badd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2baddc:
    // 0x2baddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2baddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2bade0:
    // 0x2bade0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bade4:
    // 0x2bade4: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x2bade4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2bade8:
    // 0x2bade8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2badec:
    // 0x2badec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2badecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2badf0:
    // 0x2badf0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2badf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2badf4:
    // 0x2badf4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2badf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2badf8:
    // 0x2badf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2badf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2badfc:
    // 0x2badfc: 0x24432628  addiu       $v1, $v0, 0x2628
    ctx->pc = 0x2badfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9768));
label_2bae00:
    // 0x2bae00: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2bae00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2bae04:
    // 0x2bae04: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x2bae04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_2bae08:
    // 0x2bae08: 0xe4412628  swc1        $f1, 0x2628($v0)
    ctx->pc = 0x2bae08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9768), bits); }
label_2bae0c:
    // 0x2bae0c: 0x24ea2618  addiu       $t2, $a3, 0x2618
    ctx->pc = 0x2bae0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 9752));
label_2bae10:
    // 0x2bae10: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2bae10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2bae14:
    // 0x2bae14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bae14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bae18:
    // 0x2bae18: 0xe4e42618  swc1        $f4, 0x2618($a3)
    ctx->pc = 0x2bae18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 9752), bits); }
label_2bae1c:
    // 0x2bae1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bae1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae20:
    // 0x2bae20: 0xe5430008  swc1        $f3, 0x8($t2)
    ctx->pc = 0x2bae20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_2bae24:
    // 0x2bae24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bae24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae28:
    // 0x2bae28: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2bae28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2bae2c:
    // 0x2bae2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bae2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae30:
    // 0x2bae30: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2bae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2bae34:
    // 0x2bae34: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2bae34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2bae38:
    // 0x2bae38: 0xe5450004  swc1        $f5, 0x4($t2)
    ctx->pc = 0x2bae38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_2bae3c:
    // 0x2bae3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2bae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2bae40:
    // 0x2bae40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bae40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae44:
    // 0x2bae44: 0xc09640e  jal         func_259038
label_2bae48:
    if (ctx->pc == 0x2BAE48u) {
        ctx->pc = 0x2BAE4Cu;
        goto label_2bae4c;
    }
    ctx->pc = 0x2BAE44u;
    SET_GPR_U32(ctx, 31, 0x2BAE4Cu);
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2BAE44u, 0x2BAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE4Cu;
label_2bae4c:
    // 0x2bae4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bae4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae50:
    // 0x2bae50: 0x10000026  b           . + 4 + (0x26 << 2)
label_2bae54:
    if (ctx->pc == 0x2BAE54u) {
        ctx->pc = 0x2BAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE50u;
        // 0x2bae54: 0x8e0e0ae4  lw          $t6, 0xAE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE58u;
        goto label_2bae58;
    }
    ctx->pc = 0x2BAE50u;
    {
        const bool branch_taken_0x2bae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE50u;
        // 0x2bae54: 0x8e0e0ae4  lw          $t6, 0xAE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae50) {
            ctx->pc = 0x2BAEECu;
            goto label_2baeec;
        }
    }
    ctx->pc = 0x2BAE58u;
label_2bae58:
    // 0x2bae58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2bae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2bae5c:
    // 0x2bae5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2bae60:
    // 0x2bae60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bae60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bae64:
    // 0x2bae64: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x2bae64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
label_2bae68:
    // 0x2bae68: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2bae68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2bae6c:
    // 0x2bae6c: 0x258d2618  addiu       $t5, $t4, 0x2618
    ctx->pc = 0x2bae6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 9752));
label_2bae70:
    // 0x2bae70: 0x24432628  addiu       $v1, $v0, 0x2628
    ctx->pc = 0x2bae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9768));
label_2bae74:
    // 0x2bae74: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2bae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2bae78:
    // 0x2bae78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bae78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bae7c:
    // 0x2bae7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bae7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae80:
    // 0x2bae80: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2bae80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2bae84:
    // 0x2bae84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bae84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae88:
    // 0x2bae88: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2bae88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2bae8c:
    // 0x2bae8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bae8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae90:
    // 0x2bae90: 0xc5c00034  lwc1        $f0, 0x34($t6)
    ctx->pc = 0x2bae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bae94:
    // 0x2bae94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bae94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae98:
    // 0x2bae98: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2bae98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2bae9c:
    // 0x2bae9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2baea0:
    // 0x2baea0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2baea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2baea4:
    // 0x2baea4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2baea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2baea8:
    // 0x2baea8: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2baea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2baeac:
    // 0x2baeac: 0xc5c10038  lwc1        $f1, 0x38($t6)
    ctx->pc = 0x2baeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2baeb0:
    // 0x2baeb0: 0xe4422628  swc1        $f2, 0x2628($v0)
    ctx->pc = 0x2baeb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9768), bits); }
label_2baeb4:
    // 0x2baeb4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2baeb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_2baeb8:
    // 0x2baeb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2baeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2baebc:
    // 0x2baebc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2baebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2baec0:
    // 0x2baec0: 0xe5832618  swc1        $f3, 0x2618($t4)
    ctx->pc = 0x2baec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 9752), bits); }
label_2baec4:
    // 0x2baec4: 0x46012080  add.s       $f2, $f4, $f1
    ctx->pc = 0x2baec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2baec8:
    // 0x2baec8: 0xe5a40008  swc1        $f4, 0x8($t5)
    ctx->pc = 0x2baec8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_2baecc:
    // 0x2baecc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2baeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2baed0:
    // 0x2baed0: 0x8de4000c  lw          $a0, 0xC($t7)
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
label_2baed4:
    // 0x2baed4: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2baed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2baed8:
    // 0x2baed8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2baed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2baedc:
    // 0x2baedc: 0xc09640e  jal         func_259038
label_2baee0:
    if (ctx->pc == 0x2BAEE0u) {
        ctx->pc = 0x2BAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEDCu;
        // 0x2baee0: 0xe5a50004  swc1        $f5, 0x4($t5) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEE4u;
        goto label_2baee4;
    }
    ctx->pc = 0x2BAEDCu;
    SET_GPR_U32(ctx, 31, 0x2BAEE4u);
    ctx->pc = 0x2BAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEDCu;
    // 0x2baee0: 0xe5a50004  swc1        $f5, 0x4($t5) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2BAEDCu, 0x2BAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAEE4u;
label_2baee4:
    // 0x2baee4: 0x8e0e0ae4  lw          $t6, 0xAE4($s0)
    ctx->pc = 0x2baee4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
label_2baee8:
    // 0x2baee8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2baee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baeec:
    // 0x2baeec: 0x162e0003  bne         $s1, $t6, . + 4 + (0x3 << 2)
label_2baef0:
    if (ctx->pc == 0x2BAEF0u) {
        ctx->pc = 0x2BAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEECu;
        // 0x2baef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEF4u;
        goto label_2baef4;
    }
    ctx->pc = 0x2BAEECu;
    {
        const bool branch_taken_0x2baeec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 14));
        ctx->pc = 0x2BAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEECu;
        // 0x2baef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baeec) {
            ctx->pc = 0x2BAEFCu;
            goto label_2baefc;
        }
    }
    ctx->pc = 0x2BAEF4u;
label_2baef4:
    // 0x2baef4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2baef8:
    if (ctx->pc == 0x2BAEF8u) {
        ctx->pc = 0x2BAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEF4u;
        // 0x2baef8: 0xae020ad4  sw          $v0, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEFCu;
        goto label_2baefc;
    }
    ctx->pc = 0x2BAEF4u;
    {
        const bool branch_taken_0x2baef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEF4u;
        // 0x2baef8: 0xae020ad4  sw          $v0, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baef4) {
            ctx->pc = 0x2BAFE8u;
            goto label_2bafe8;
        }
    }
    ctx->pc = 0x2BAEFCu;
label_2baefc:
    // 0x2baefc: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_2baf00:
    if (ctx->pc == 0x2BAF00u) {
        ctx->pc = 0x2BAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEFCu;
        // 0x2baf00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF04u;
        goto label_2baf04;
    }
    ctx->pc = 0x2BAEFCu;
    {
        const bool branch_taken_0x2baefc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEFCu;
        // 0x2baf00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baefc) {
            ctx->pc = 0x2BAFC8u;
            goto label_2bafc8;
        }
    }
    ctx->pc = 0x2BAF04u;
label_2baf04:
    // 0x2baf04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2baf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2baf08:
    // 0x2baf08: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_2baf0c:
    if (ctx->pc == 0x2BAF0Cu) {
        ctx->pc = 0x2BAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF08u;
        // 0x2baf0c: 0xc6010b60  lwc1        $f1, 0xB60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF10u;
        goto label_2baf10;
    }
    ctx->pc = 0x2BAF08u;
    {
        const bool branch_taken_0x2baf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2baf08) {
            ctx->pc = 0x2BAF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF08u;
            // 0x2baf0c: 0xc6010b60  lwc1        $f1, 0xB60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAFCCu;
            goto label_2bafcc;
        }
    }
    ctx->pc = 0x2BAF10u;
label_2baf10:
    // 0x2baf10: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2baf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2baf14:
    // 0x2baf14: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_2baf18:
    if (ctx->pc == 0x2BAF18u) {
        ctx->pc = 0x2BAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF14u;
        // 0x2baf18: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF1Cu;
        goto label_2baf1c;
    }
    ctx->pc = 0x2BAF14u;
    {
        const bool branch_taken_0x2baf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF14u;
        // 0x2baf18: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf14) {
            ctx->pc = 0x2BAF84u;
            goto label_2baf84;
        }
    }
    ctx->pc = 0x2BAF1Cu;
label_2baf1c:
    // 0x2baf1c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x2baf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_2baf20:
    // 0x2baf20: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2baf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2baf24:
    // 0x2baf24: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2baf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2baf28:
    // 0x2baf28: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_2baf2c:
    if (ctx->pc == 0x2BAF2Cu) {
        ctx->pc = 0x2BAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF28u;
        // 0x2baf2c: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF30u;
        goto label_2baf30;
    }
    ctx->pc = 0x2BAF28u;
    {
        const bool branch_taken_0x2baf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF28u;
        // 0x2baf2c: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf28) {
            ctx->pc = 0x2BAF84u;
            goto label_2baf84;
        }
    }
    ctx->pc = 0x2BAF30u;
label_2baf30:
    // 0x2baf30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2baf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2baf34:
    // 0x2baf34: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2baf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2baf38:
    // 0x2baf38: 0x54640014  bnel        $v1, $a0, . + 4 + (0x14 << 2)
label_2baf3c:
    if (ctx->pc == 0x2BAF3Cu) {
        ctx->pc = 0x2BAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF38u;
        // 0x2baf3c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF40u;
        goto label_2baf40;
    }
    ctx->pc = 0x2BAF38u;
    {
        const bool branch_taken_0x2baf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2baf38) {
            ctx->pc = 0x2BAF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF38u;
            // 0x2baf3c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF8Cu;
            goto label_2baf8c;
        }
    }
    ctx->pc = 0x2BAF40u;
label_2baf40:
    // 0x2baf40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2baf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2baf44:
    // 0x2baf44: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2baf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2baf48:
    // 0x2baf48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2baf48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2baf4c:
    // 0x2baf4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2baf50:
    if (ctx->pc == 0x2BAF50u) {
        ctx->pc = 0x2BAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF4Cu;
        // 0x2baf50: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF54u;
        goto label_2baf54;
    }
    ctx->pc = 0x2BAF4Cu;
    {
        const bool branch_taken_0x2baf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF4Cu;
        // 0x2baf50: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf4c) {
            ctx->pc = 0x2BAFB8u;
            goto label_2bafb8;
        }
    }
    ctx->pc = 0x2BAF54u;
label_2baf54:
    // 0x2baf54: 0x8f89b230  lw          $t1, -0x4DD0($gp)
    ctx->pc = 0x2baf54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_2baf58:
    // 0x2baf58: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2baf58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2baf5c:
    // 0x2baf5c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2baf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2baf60:
    // 0x2baf60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2baf60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2baf64:
    // 0x2baf64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2baf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2baf68:
    // 0x2baf68: 0xc4400370  lwc1        $f0, 0x370($v0)
    ctx->pc = 0x2baf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2baf6c:
    // 0x2baf6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2baf6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2baf70:
    // 0x2baf70: 0x0  nop
    ctx->pc = 0x2baf70u;
    // NOP
label_2baf74:
    // 0x2baf74: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_2baf78:
    if (ctx->pc == 0x2BAF78u) {
        ctx->pc = 0x2BAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF74u;
        // 0x2baf78: 0xc6010b60  lwc1        $f1, 0xB60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF7Cu;
        goto label_2baf7c;
    }
    ctx->pc = 0x2BAF74u;
    {
        const bool branch_taken_0x2baf74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baf74) {
            ctx->pc = 0x2BAF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF74u;
            // 0x2baf78: 0xc6010b60  lwc1        $f1, 0xB60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAFCCu;
            goto label_2bafcc;
        }
    }
    ctx->pc = 0x2BAF7Cu;
label_2baf7c:
    // 0x2baf7c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2baf80:
    if (ctx->pc == 0x2BAF80u) {
        ctx->pc = 0x2BAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF7Cu;
        // 0x2baf80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF84u;
        goto label_2baf84;
    }
    ctx->pc = 0x2BAF7Cu;
    {
        const bool branch_taken_0x2baf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF7Cu;
        // 0x2baf80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf7c) {
            ctx->pc = 0x2BAFBCu;
            goto label_2bafbc;
        }
    }
    ctx->pc = 0x2BAF84u;
label_2baf84:
    // 0x2baf84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2baf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2baf88:
    // 0x2baf88: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2baf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2baf8c:
    // 0x2baf8c: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
label_2baf90:
    if (ctx->pc == 0x2BAF90u) {
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF8Cu;
        // 0x2baf90: 0x8f83b4d0  lw          $v1, -0x4B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF94u;
        goto label_2baf94;
    }
    ctx->pc = 0x2BAF8Cu;
    {
        const bool branch_taken_0x2baf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF8Cu;
        // 0x2baf90: 0x8f83b4d0  lw          $v1, -0x4B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf8c) {
            ctx->pc = 0x2BAFECu;
            goto label_2bafec;
        }
    }
    ctx->pc = 0x2BAF94u;
label_2baf94:
    // 0x2baf94: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2baf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2baf98:
    // 0x2baf98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2baf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2baf9c:
    // 0x2baf9c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2bafa0:
    if (ctx->pc == 0x2BAFA0u) {
        ctx->pc = 0x2BAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF9Cu;
        // 0x2bafa0: 0x26622058  addiu       $v0, $s3, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAFA4u;
        goto label_2bafa4;
    }
    ctx->pc = 0x2BAF9Cu;
    {
        const bool branch_taken_0x2baf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF9Cu;
        // 0x2bafa0: 0x26622058  addiu       $v0, $s3, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf9c) {
            ctx->pc = 0x2BAFF0u;
            goto label_2baff0;
        }
    }
    ctx->pc = 0x2BAFA4u;
label_2bafa4:
    // 0x2bafa4: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_2bafa8:
    // 0x2bafa8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2bafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2bafac:
    // 0x2bafac: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2bafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2bafb0:
    // 0x2bafb0: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
label_2bafb4:
    if (ctx->pc == 0x2BAFB4u) {
        ctx->pc = 0x2BAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFB0u;
        // 0x2bafb4: 0x8f83b4d0  lw          $v1, -0x4B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAFB8u;
        goto label_2bafb8;
    }
    ctx->pc = 0x2BAFB0u;
    {
        const bool branch_taken_0x2bafb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFB0u;
        // 0x2bafb4: 0x8f83b4d0  lw          $v1, -0x4B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bafb0) {
            ctx->pc = 0x2BAFECu;
            goto label_2bafec;
        }
    }
    ctx->pc = 0x2BAFB8u;
label_2bafb8:
    // 0x2bafb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bafbc:
    // 0x2bafbc: 0xae110ae4  sw          $s1, 0xAE4($s0)
    ctx->pc = 0x2bafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 17));
label_2bafc0:
    // 0x2bafc0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2bafc4:
    if (ctx->pc == 0x2BAFC4u) {
        ctx->pc = 0x2BAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFC0u;
        // 0x2bafc4: 0xae020ad4  sw          $v0, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAFC8u;
        goto label_2bafc8;
    }
    ctx->pc = 0x2BAFC0u;
    {
        const bool branch_taken_0x2bafc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFC0u;
        // 0x2bafc4: 0xae020ad4  sw          $v0, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bafc0) {
            ctx->pc = 0x2BAFE8u;
            goto label_2bafe8;
        }
    }
    ctx->pc = 0x2BAFC8u;
label_2bafc8:
    // 0x2bafc8: 0xc6010b60  lwc1        $f1, 0xB60($s0)
    ctx->pc = 0x2bafc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bafcc:
    // 0x2bafcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bafccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bafd0:
    // 0x2bafd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bafd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bafd4:
    // 0x2bafd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bafd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bafd8:
    // 0x2bafd8: 0x0  nop
    ctx->pc = 0x2bafd8u;
    // NOP
label_2bafdc:
    // 0x2bafdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2bafe0:
    if (ctx->pc == 0x2BAFE0u) {
        ctx->pc = 0x2BAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFDCu;
        // 0x2bafe0: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAFE4u;
        goto label_2bafe4;
    }
    ctx->pc = 0x2BAFDCu;
    {
        const bool branch_taken_0x2bafdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFDCu;
        // 0x2bafe0: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bafdc) {
            ctx->pc = 0x2BAFE8u;
            goto label_2bafe8;
        }
    }
    ctx->pc = 0x2BAFE4u;
label_2bafe4:
    // 0x2bafe4: 0xae000b60  sw          $zero, 0xB60($s0)
    ctx->pc = 0x2bafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2912), GPR_U32(ctx, 0));
label_2bafe8:
    // 0x2bafe8: 0x8f83b4d0  lw          $v1, -0x4B30($gp)
    ctx->pc = 0x2bafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
label_2bafec:
    // 0x2bafec: 0x26622058  addiu       $v0, $s3, 0x2058
    ctx->pc = 0x2bafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
label_2baff0:
    // 0x2baff0: 0x8f859cec  lw          $a1, -0x6314($gp)
    ctx->pc = 0x2baff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941932)));
label_2baff4:
    // 0x2baff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2baff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2baff8:
    // 0x2baff8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2baff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2baffc:
    // 0x2baffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2baffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bb000:
    // 0x2bb000: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2bb000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2bb004:
    // 0x2bb004: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2bb004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_2bb008:
    // 0x2bb008: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2bb008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2bb00c:
    // 0x2bb00c: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2bb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2bb010:
    // 0x2bb010: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2bb010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2bb014:
    // 0x2bb014: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_2bb018:
    if (ctx->pc == 0x2BB018u) {
        ctx->pc = 0x2BB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB014u;
        // 0x2bb018: 0xae030a90  sw          $v1, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB01Cu;
        goto label_2bb01c;
    }
    ctx->pc = 0x2BB014u;
    {
        const bool branch_taken_0x2bb014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB014u;
        // 0x2bb018: 0xae030a90  sw          $v1, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb014) {
            ctx->pc = 0x2BB044u;
            goto label_2bb044;
        }
    }
    ctx->pc = 0x2BB01Cu;
label_2bb01c:
    // 0x2bb01c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2bb020:
    if (ctx->pc == 0x2BB020u) {
        ctx->pc = 0x2BB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB01Cu;
        // 0x2bb020: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB024u;
        goto label_2bb024;
    }
    ctx->pc = 0x2BB01Cu;
    {
        const bool branch_taken_0x2bb01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB01Cu;
        // 0x2bb020: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb01c) {
            ctx->pc = 0x2BB044u;
            goto label_2bb044;
        }
    }
    ctx->pc = 0x2BB024u;
label_2bb024:
    // 0x2bb024: 0xc6010b60  lwc1        $f1, 0xB60($s0)
    ctx->pc = 0x2bb024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bb028:
    // 0x2bb028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bb02c:
    // 0x2bb02c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bb030:
    // 0x2bb030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bb030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bb034:
    // 0x2bb034: 0x0  nop
    ctx->pc = 0x2bb034u;
    // NOP
label_2bb038:
    // 0x2bb038: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2bb03c:
    if (ctx->pc == 0x2BB03Cu) {
        ctx->pc = 0x2BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB038u;
        // 0x2bb03c: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB040u;
        goto label_2bb040;
    }
    ctx->pc = 0x2BB038u;
    {
        const bool branch_taken_0x2bb038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB038u;
        // 0x2bb03c: 0xae000ad4  sw          $zero, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb038) {
            ctx->pc = 0x2BB044u;
            goto label_2bb044;
        }
    }
    ctx->pc = 0x2BB040u;
label_2bb040:
    // 0x2bb040: 0xae000b60  sw          $zero, 0xB60($s0)
    ctx->pc = 0x2bb040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2912), GPR_U32(ctx, 0));
label_2bb044:
    // 0x2bb044: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2bb048:
    if (ctx->pc == 0x2BB048u) {
        ctx->pc = 0x2BB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB044u;
        // 0x2bb048: 0x8f82b4d0  lw          $v0, -0x4B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB04Cu;
        goto label_2bb04c;
    }
    ctx->pc = 0x2BB044u;
    {
        const bool branch_taken_0x2bb044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB044u;
        // 0x2bb048: 0x8f82b4d0  lw          $v0, -0x4B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb044) {
            ctx->pc = 0x2BB068u;
            goto label_2bb068;
        }
    }
    ctx->pc = 0x2BB04Cu;
label_2bb04c:
    // 0x2bb04c: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2bb04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2bb050:
    // 0x2bb050: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2bb050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb054:
    // 0x2bb054: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2bb054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2bb058:
    // 0x2bb058: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2bb05c:
    if (ctx->pc == 0x2BB05Cu) {
        ctx->pc = 0x2BB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB058u;
        // 0x2bb05c: 0xaf84b4d0  sw          $a0, -0x4B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB060u;
        goto label_2bb060;
    }
    ctx->pc = 0x2BB058u;
    {
        const bool branch_taken_0x2bb058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB058u;
        // 0x2bb05c: 0xaf84b4d0  sw          $a0, -0x4B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb058) {
            ctx->pc = 0x2BB06Cu;
            goto label_2bb06c;
        }
    }
    ctx->pc = 0x2BB060u;
label_2bb060:
    // 0x2bb060: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bb064:
    if (ctx->pc == 0x2BB064u) {
        ctx->pc = 0x2BB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB060u;
        // 0x2bb064: 0xaf80b4d0  sw          $zero, -0x4B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB068u;
        goto label_2bb068;
    }
    ctx->pc = 0x2BB060u;
    {
        const bool branch_taken_0x2bb060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB060u;
        // 0x2bb064: 0xaf80b4d0  sw          $zero, -0x4B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb060) {
            ctx->pc = 0x2BB06Cu;
            goto label_2bb06c;
        }
    }
    ctx->pc = 0x2BB068u;
label_2bb068:
    // 0x2bb068: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2bb068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2bb06c:
    // 0x2bb06c: 0x8f82b4dc  lw          $v0, -0x4B24($gp)
    ctx->pc = 0x2bb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
label_2bb070:
    // 0x2bb070: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2bb070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2bb074:
    // 0x2bb074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb078:
    // 0x2bb078: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2bb078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2bb07c:
    // 0x2bb07c: 0xaf82b4dc  sw          $v0, -0x4B24($gp)
    ctx->pc = 0x2bb07cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948060), GPR_U32(ctx, 2));
label_2bb080:
    // 0x2bb080: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2bb080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2bb084:
    // 0x2bb084: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2bb088:
    if (ctx->pc == 0x2BB088u) {
        ctx->pc = 0x2BB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB084u;
        // 0x2bb088: 0xaf80b4dc  sw          $zero, -0x4B24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB08Cu;
        goto label_2bb08c;
    }
    ctx->pc = 0x2BB084u;
    {
        const bool branch_taken_0x2bb084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb084) {
            ctx->pc = 0x2BB088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB084u;
            // 0x2bb088: 0xaf80b4dc  sw          $zero, -0x4B24($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948060), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB08Cu;
            goto label_2bb08c;
        }
    }
    ctx->pc = 0x2BB08Cu;
label_2bb08c:
    // 0x2bb08c: 0x18c0005b  blez        $a2, . + 4 + (0x5B << 2)
label_2bb090:
    if (ctx->pc == 0x2BB090u) {
        ctx->pc = 0x2BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB08Cu;
        // 0x2bb090: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB094u;
        goto label_2bb094;
    }
    ctx->pc = 0x2BB08Cu;
    {
        const bool branch_taken_0x2bb08c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB08Cu;
        // 0x2bb090: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb08c) {
            ctx->pc = 0x2BB1FCu;
            goto label_2bb1fc;
        }
    }
    ctx->pc = 0x2BB094u;
label_2bb094:
    // 0x2bb094: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2bb094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2bb098:
    // 0x2bb098: 0x3c0ef0ff  lui         $t6, 0xF0FF
    ctx->pc = 0x2bb098u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)61695 << 16));
label_2bb09c:
    // 0x2bb09c: 0x8f95b59c  lw          $s5, -0x4A64($gp)
    ctx->pc = 0x2bb09cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2bb0a0:
    // 0x2bb0a0: 0x24592058  addiu       $t9, $v0, 0x2058
    ctx->pc = 0x2bb0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 8280));
label_2bb0a4:
    // 0x2bb0a4: 0x8f98b230  lw          $t8, -0x4DD0($gp)
    ctx->pc = 0x2bb0a4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_2bb0a8:
    // 0x2bb0a8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x2bb0a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_2bb0ac:
    // 0x2bb0ac: 0x2412071c  addiu       $s2, $zero, 0x71C
    ctx->pc = 0x2bb0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_2bb0b0:
    // 0x2bb0b0: 0x3c140100  lui         $s4, 0x100
    ctx->pc = 0x2bb0b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)256 << 16));
label_2bb0b4:
    // 0x2bb0b4: 0x116880  sll         $t5, $s1, 2
    ctx->pc = 0x2bb0b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2bb0b8:
    // 0x2bb0b8: 0x1b91021  addu        $v0, $t5, $t9
    ctx->pc = 0x2bb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
label_2bb0bc:
    // 0x2bb0bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bb0c0:
    // 0x2bb0c0: 0x8c700160  lw          $s0, 0x160($v1)
    ctx->pc = 0x2bb0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2bb0c4:
    // 0x2bb0c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bb0c8:
    // 0x2bb0c8: 0x8e0b01b8  lw          $t3, 0x1B8($s0)
    ctx->pc = 0x2bb0c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_2bb0cc:
    // 0x2bb0cc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x2bb0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_2bb0d0:
    // 0x2bb0d0: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2bb0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0d4:
    // 0x2bb0d4: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
label_2bb0d8:
    if (ctx->pc == 0x2BB0D8u) {
        ctx->pc = 0x2BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D4u;
        // 0x2bb0d8: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0DCu;
        goto label_2bb0dc;
    }
    ctx->pc = 0x2BB0D4u;
    {
        const bool branch_taken_0x2bb0d4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D4u;
        // 0x2bb0d8: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0d4) {
            ctx->pc = 0x2BB0E8u;
            goto label_2bb0e8;
        }
    }
    ctx->pc = 0x2BB0DCu;
label_2bb0dc:
    // 0x2bb0dc: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2bb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_2bb0e0:
    // 0x2bb0e0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x2bb0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_2bb0e4:
    // 0x2bb0e4: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x2bb0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
label_2bb0e8:
    // 0x2bb0e8: 0x8e0a014c  lw          $t2, 0x14C($s0)
    ctx->pc = 0x2bb0e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_2bb0ec:
    // 0x2bb0ec: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_2bb0f0:
    if (ctx->pc == 0x2BB0F0u) {
        ctx->pc = 0x2BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0ECu;
        // 0x2bb0f0: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0F4u;
        goto label_2bb0f4;
    }
    ctx->pc = 0x2BB0ECu;
    {
        const bool branch_taken_0x2bb0ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0ECu;
        // 0x2bb0f0: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0ec) {
            ctx->pc = 0x2BB100u;
            goto label_2bb100;
        }
    }
    ctx->pc = 0x2BB0F4u;
label_2bb0f4:
    // 0x2bb0f4: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x2bb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_2bb0f8:
    // 0x2bb0f8: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x2bb0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_2bb0fc:
    // 0x2bb0fc: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x2bb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_2bb100:
    // 0x2bb100: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2bb100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2bb104:
    // 0x2bb104: 0x18a00038  blez        $a1, . + 4 + (0x38 << 2)
label_2bb108:
    if (ctx->pc == 0x2BB108u) {
        ctx->pc = 0x2BB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB104u;
        // 0x2bb108: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB10Cu;
        goto label_2bb10c;
    }
    ctx->pc = 0x2BB104u;
    {
        const bool branch_taken_0x2bb104 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2BB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB104u;
        // 0x2bb108: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb104) {
            ctx->pc = 0x2BB1E8u;
            goto label_2bb1e8;
        }
    }
    ctx->pc = 0x2BB10Cu;
label_2bb10c:
    // 0x2bb10c: 0x262f0001  addiu       $t7, $s1, 0x1
    ctx->pc = 0x2bb10cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bb110:
    // 0x2bb110: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x2bb110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2bb114:
    // 0x2bb114: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x2bb114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bb118:
    // 0x2bb118: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2bb118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2bb11c:
    // 0x2bb11c: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2bb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2bb120:
    // 0x2bb120: 0x8c62038c  lw          $v0, 0x38C($v1)
    ctx->pc = 0x2bb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
label_2bb124:
    // 0x2bb124: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
label_2bb128:
    if (ctx->pc == 0x2BB128u) {
        ctx->pc = 0x2BB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB124u;
        // 0x2bb128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB12Cu;
        goto label_2bb12c;
    }
    ctx->pc = 0x2BB124u;
    {
        const bool branch_taken_0x2bb124 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB124u;
        // 0x2bb128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb124) {
            ctx->pc = 0x2BB1CCu;
            goto label_2bb1cc;
        }
    }
    ctx->pc = 0x2BB12Cu;
label_2bb12c:
    // 0x2bb12c: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x2bb12cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2bb130:
    // 0x2bb130: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x2bb130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bb134:
    // 0x2bb134: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2bb134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2bb138:
    // 0x2bb138: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2bb138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bb13c:
    // 0x2bb13c: 0x1b91021  addu        $v0, $t5, $t9
    ctx->pc = 0x2bb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
label_2bb140:
    // 0x2bb140: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2bb144:
    // 0x2bb144: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2bb144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bb148:
    // 0x2bb148: 0x8c820390  lw          $v0, 0x390($a0)
    ctx->pc = 0x2bb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
label_2bb14c:
    // 0x2bb14c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2bb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2bb150:
    // 0x2bb150: 0x14450016  bne         $v0, $a1, . + 4 + (0x16 << 2)
label_2bb154:
    if (ctx->pc == 0x2BB154u) {
        ctx->pc = 0x2BB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB150u;
        // 0x2bb154: 0xf21018  mult        $v0, $a3, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB158u;
        goto label_2bb158;
    }
    ctx->pc = 0x2BB150u;
    {
        const bool branch_taken_0x2bb150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB150u;
        // 0x2bb154: 0xf21018  mult        $v0, $a3, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb150) {
            ctx->pc = 0x2BB1ACu;
            goto label_2bb1ac;
        }
    }
    ctx->pc = 0x2BB158u;
label_2bb158:
    // 0x2bb158: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2bb158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2bb15c:
    // 0x2bb15c: 0xf42004  sllv        $a0, $s4, $a3
    ctx->pc = 0x2bb15cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
label_2bb160:
    // 0x2bb160: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bb160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2bb164:
    // 0x2bb164: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2bb168:
    if (ctx->pc == 0x2BB168u) {
        ctx->pc = 0x2BB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB164u;
        // 0x2bb168: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB16Cu;
        goto label_2bb16c;
    }
    ctx->pc = 0x2BB164u;
    {
        const bool branch_taken_0x2bb164 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB164u;
        // 0x2bb168: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb164) {
            ctx->pc = 0x2BB178u;
            goto label_2bb178;
        }
    }
    ctx->pc = 0x2BB16Cu;
label_2bb16c:
    // 0x2bb16c: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_2bb170:
    // 0x2bb170: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bb170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2bb174:
    // 0x2bb174: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x2bb174u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
label_2bb178:
    // 0x2bb178: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_2bb17c:
    if (ctx->pc == 0x2BB17Cu) {
        ctx->pc = 0x2BB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB178u;
        // 0x2bb17c: 0x8cc200bc  lw          $v0, 0xBC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB180u;
        goto label_2bb180;
    }
    ctx->pc = 0x2BB178u;
    {
        const bool branch_taken_0x2bb178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb178) {
            ctx->pc = 0x2BB17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB178u;
            // 0x2bb17c: 0x8cc200bc  lw          $v0, 0xBC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB190u;
            goto label_2bb190;
        }
    }
    ctx->pc = 0x2BB180u;
label_2bb180:
    // 0x2bb180: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x2bb180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_2bb184:
    // 0x2bb184: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bb184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2bb188:
    // 0x2bb188: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x2bb188u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_2bb18c:
    // 0x2bb18c: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x2bb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_2bb190:
    // 0x2bb190: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2bb194:
    if (ctx->pc == 0x2BB194u) {
        ctx->pc = 0x2BB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB190u;
        // 0x2bb194: 0xf21018  mult        $v0, $a3, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB198u;
        goto label_2bb198;
    }
    ctx->pc = 0x2BB190u;
    {
        const bool branch_taken_0x2bb190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb190) {
            ctx->pc = 0x2BB194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB190u;
            // 0x2bb194: 0xf21018  mult        $v0, $a3, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB1ACu;
            goto label_2bb1ac;
        }
    }
    ctx->pc = 0x2BB198u;
label_2bb198:
    // 0x2bb198: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2bb198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2bb19c:
    // 0x2bb19c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bb1a0:
    // 0x2bb1a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2bb1a4:
    // 0x2bb1a4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2bb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2bb1a8:
    // 0x2bb1a8: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x2bb1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bb1ac:
    // 0x2bb1ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2bb1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2bb1b0:
    // 0x2bb1b0: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2bb1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2bb1b4:
    // 0x2bb1b4: 0x8c62038c  lw          $v0, 0x38C($v1)
    ctx->pc = 0x2bb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
label_2bb1b8:
    // 0x2bb1b8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2bb1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bb1bc:
    // 0x2bb1bc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2bb1c0:
    if (ctx->pc == 0x2BB1C0u) {
        ctx->pc = 0x2BB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1BCu;
        // 0x2bb1c0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1C4u;
        goto label_2bb1c4;
    }
    ctx->pc = 0x2BB1BCu;
    {
        const bool branch_taken_0x2bb1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1BCu;
        // 0x2bb1c0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1bc) {
            ctx->pc = 0x2BB130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb130;
        }
    }
    ctx->pc = 0x2BB1C4u;
label_2bb1c4:
    // 0x2bb1c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bb1c8:
    if (ctx->pc == 0x2BB1C8u) {
        ctx->pc = 0x2BB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C4u;
        // 0x2bb1c8: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1CCu;
        goto label_2bb1cc;
    }
    ctx->pc = 0x2BB1C4u;
    {
        const bool branch_taken_0x2bb1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C4u;
        // 0x2bb1c8: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1c4) {
            ctx->pc = 0x2BB1D0u;
            goto label_2bb1d0;
        }
    }
    ctx->pc = 0x2BB1CCu;
label_2bb1cc:
    // 0x2bb1cc: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x2bb1ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2bb1d0:
    // 0x2bb1d0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2bb1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1d4:
    // 0x2bb1d4: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2bb1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2bb1d8:
    // 0x2bb1d8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_2bb1dc:
    if (ctx->pc == 0x2BB1DCu) {
        ctx->pc = 0x2BB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1D8u;
        // 0x2bb1dc: 0xf21018  mult        $v0, $a3, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1E0u;
        goto label_2bb1e0;
    }
    ctx->pc = 0x2BB1D8u;
    {
        const bool branch_taken_0x2bb1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1D8u;
        // 0x2bb1dc: 0xf21018  mult        $v0, $a3, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1d8) {
            ctx->pc = 0x2BB118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb118;
        }
    }
    ctx->pc = 0x2BB1E0u;
label_2bb1e0:
    // 0x2bb1e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bb1e4:
    if (ctx->pc == 0x2BB1E4u) {
        ctx->pc = 0x2BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E0u;
        // 0x2bb1e4: 0x1e0882d  daddu       $s1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1E8u;
        goto label_2bb1e8;
    }
    ctx->pc = 0x2BB1E0u;
    {
        const bool branch_taken_0x2bb1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E0u;
        // 0x2bb1e4: 0x1e0882d  daddu       $s1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1e0) {
            ctx->pc = 0x2BB1F0u;
            goto label_2bb1f0;
        }
    }
    ctx->pc = 0x2BB1E8u;
label_2bb1e8:
    // 0x2bb1e8: 0x262f0001  addiu       $t7, $s1, 0x1
    ctx->pc = 0x2bb1e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bb1ec:
    // 0x2bb1ec: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x2bb1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1f0:
    // 0x2bb1f0: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2bb1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2bb1f4:
    // 0x2bb1f4: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_2bb1f8:
    if (ctx->pc == 0x2BB1F8u) {
        ctx->pc = 0x2BB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F4u;
        // 0x2bb1f8: 0x116880  sll         $t5, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1FCu;
        goto label_2bb1fc;
    }
    ctx->pc = 0x2BB1F4u;
    {
        const bool branch_taken_0x2bb1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F4u;
        // 0x2bb1f8: 0x116880  sll         $t5, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1f4) {
            ctx->pc = 0x2BB0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb0b8;
        }
    }
    ctx->pc = 0x2BB1FCu;
label_2bb1fc:
    // 0x2bb1fc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2bb1fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bb200:
    // 0x2bb200: 0x18a0003b  blez        $a1, . + 4 + (0x3B << 2)
label_2bb204:
    if (ctx->pc == 0x2BB204u) {
        ctx->pc = 0x2BB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB200u;
        // 0x2bb204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB208u;
        goto label_2bb208;
    }
    ctx->pc = 0x2BB200u;
    {
        const bool branch_taken_0x2bb200 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2BB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB200u;
        // 0x2bb204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb200) {
            ctx->pc = 0x2BB2F0u;
            goto label_2bb2f0;
        }
    }
    ctx->pc = 0x2BB208u;
label_2bb208:
    // 0x2bb208: 0x8f89b4cc  lw          $t1, -0x4B34($gp)
    ctx->pc = 0x2bb208u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
label_2bb20c:
    // 0x2bb20c: 0x0  nop
    ctx->pc = 0x2bb20cu;
    // NOP
label_2bb210:
    // 0x2bb210: 0x19200032  blez        $t1, . + 4 + (0x32 << 2)
label_2bb214:
    if (ctx->pc == 0x2BB214u) {
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB218u;
        goto label_2bb218;
    }
    ctx->pc = 0x2BB210u;
    {
        const bool branch_taken_0x2bb210 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb210) {
            ctx->pc = 0x2BB2DCu;
            goto label_2bb2dc;
        }
    }
    ctx->pc = 0x2BB218u;
label_2bb218:
    // 0x2bb218: 0x8f8fb238  lw          $t7, -0x4DC8($gp)
    ctx->pc = 0x2bb218u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_2bb21c:
    // 0x2bb21c: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x2bb21cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2bb220:
    // 0x2bb220: 0x3c0d01ff  lui         $t5, 0x1FF
    ctx->pc = 0x2bb220u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)511 << 16));
label_2bb224:
    // 0x2bb224: 0x240b1210  addiu       $t3, $zero, 0x1210
    ctx->pc = 0x2bb224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2bb228:
    // 0x2bb228: 0x25aadf00  addiu       $t2, $t5, -0x2100
    ctx->pc = 0x2bb228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 4294958848));
label_2bb22c:
    // 0x2bb22c: 0xeb1018  mult        $v0, $a3, $t3
    ctx->pc = 0x2bb22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bb230:
    // 0x2bb230: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2bb230u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2bb234:
    // 0x2bb234: 0x4f2821  addu        $a1, $v0, $t7
    ctx->pc = 0x2bb234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_2bb238:
    // 0x2bb238: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x2bb238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_2bb23c:
    // 0x2bb23c: 0x8ca302a8  lw          $v1, 0x2A8($a1)
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 680)));
label_2bb240:
    // 0x2bb240: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bb240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bb244:
    // 0x2bb244: 0x54640020  bnel        $v1, $a0, . + 4 + (0x20 << 2)
label_2bb248:
    if (ctx->pc == 0x2BB248u) {
        ctx->pc = 0x2BB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB244u;
        // 0x2bb248: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB24Cu;
        goto label_2bb24c;
    }
    ctx->pc = 0x2BB244u;
    {
        const bool branch_taken_0x2bb244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bb244) {
            ctx->pc = 0x2BB248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB244u;
            // 0x2bb248: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB2C8u;
            goto label_2bb2c8;
        }
    }
    ctx->pc = 0x2BB24Cu;
label_2bb24c:
    // 0x2bb24c: 0x1461021  addu        $v0, $t2, $a2
    ctx->pc = 0x2bb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_2bb250:
    // 0x2bb250: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2bb250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2bb254:
    // 0x2bb254: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bb254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2bb258:
    // 0x2bb258: 0xe32804  sllv        $a1, $v1, $a3
    ctx->pc = 0x2bb258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_2bb25c:
    // 0x2bb25c: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2bb25cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2bb260:
    // 0x2bb260: 0x8b1018  mult        $v0, $a0, $t3
    ctx->pc = 0x2bb260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bb264:
    // 0x2bb264: 0x4f8021  addu        $s0, $v0, $t7
    ctx->pc = 0x2bb264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_2bb268:
    // 0x2bb268: 0x8e040bcc  lw          $a0, 0xBCC($s0)
    ctx->pc = 0x2bb268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
label_2bb26c:
    // 0x2bb26c: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x2bb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_2bb270:
    // 0x2bb270: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2bb270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2bb274:
    // 0x2bb274: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2bb274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2bb278:
    // 0x2bb278: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2bb27c:
    if (ctx->pc == 0x2BB27Cu) {
        ctx->pc = 0x2BB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB278u;
        // 0x2bb27c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB280u;
        goto label_2bb280;
    }
    ctx->pc = 0x2BB278u;
    {
        const bool branch_taken_0x2bb278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB278u;
        // 0x2bb27c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb278) {
            ctx->pc = 0x2BB28Cu;
            goto label_2bb28c;
        }
    }
    ctx->pc = 0x2BB280u;
label_2bb280:
    // 0x2bb280: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bb280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bb284:
    // 0x2bb284: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2bb284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2bb288:
    // 0x2bb288: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2bb288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2bb28c:
    // 0x2bb28c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x2bb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_2bb290:
    // 0x2bb290: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2bb294:
    if (ctx->pc == 0x2BB294u) {
        ctx->pc = 0x2BB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB290u;
        // 0x2bb294: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB298u;
        goto label_2bb298;
    }
    ctx->pc = 0x2BB290u;
    {
        const bool branch_taken_0x2bb290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb290) {
            ctx->pc = 0x2BB294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB290u;
            // 0x2bb294: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB2A8u;
            goto label_2bb2a8;
        }
    }
    ctx->pc = 0x2BB298u;
label_2bb298:
    // 0x2bb298: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bb29c:
    // 0x2bb29c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2bb29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2bb2a0:
    // 0x2bb2a0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2bb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2bb2a4:
    // 0x2bb2a4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2bb2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2bb2a8:
    // 0x2bb2a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb2ac:
    if (ctx->pc == 0x2BB2ACu) {
        ctx->pc = 0x2BB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2A8u;
        // 0x2bb2ac: 0x8f89b4cc  lw          $t1, -0x4B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2B0u;
        goto label_2bb2b0;
    }
    ctx->pc = 0x2BB2A8u;
    {
        const bool branch_taken_0x2bb2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2A8u;
        // 0x2bb2ac: 0x8f89b4cc  lw          $t1, -0x4B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2a8) {
            ctx->pc = 0x2BB2C4u;
            goto label_2bb2c4;
        }
    }
    ctx->pc = 0x2BB2B0u;
label_2bb2b0:
    // 0x2bb2b0: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2bb2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2bb2b4:
    // 0x2bb2b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bb2b8:
    // 0x2bb2b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2bb2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2bb2bc:
    // 0x2bb2bc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2bb2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2bb2c0:
    // 0x2bb2c0: 0x8f89b4cc  lw          $t1, -0x4B34($gp)
    ctx->pc = 0x2bb2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
label_2bb2c4:
    // 0x2bb2c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2bb2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2bb2c8:
    // 0x2bb2c8: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x2bb2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2bb2cc:
    // 0x2bb2cc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_2bb2d0:
    if (ctx->pc == 0x2BB2D0u) {
        ctx->pc = 0x2BB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2CCu;
        // 0x2bb2d0: 0x240b1210  addiu       $t3, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2D4u;
        goto label_2bb2d4;
    }
    ctx->pc = 0x2BB2CCu;
    {
        const bool branch_taken_0x2bb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2CCu;
        // 0x2bb2d0: 0x240b1210  addiu       $t3, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2cc) {
            ctx->pc = 0x2BB228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb228;
        }
    }
    ctx->pc = 0x2BB2D4u;
label_2bb2d4:
    // 0x2bb2d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bb2d8:
    if (ctx->pc == 0x2BB2D8u) {
        ctx->pc = 0x2BB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D4u;
        // 0x2bb2d8: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2DCu;
        goto label_2bb2dc;
    }
    ctx->pc = 0x2BB2D4u;
    {
        const bool branch_taken_0x2bb2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D4u;
        // 0x2bb2d8: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2d4) {
            ctx->pc = 0x2BB2E0u;
            goto label_2bb2e0;
        }
    }
    ctx->pc = 0x2BB2DCu;
label_2bb2dc:
    // 0x2bb2dc: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x2bb2dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2bb2e0:
    // 0x2bb2e0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2bb2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2e4:
    // 0x2bb2e4: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2bb2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2bb2e8:
    // 0x2bb2e8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_2bb2ec:
    if (ctx->pc == 0x2BB2ECu) {
        ctx->pc = 0x2BB2F0u;
        goto label_2bb2f0;
    }
    ctx->pc = 0x2BB2E8u;
    {
        const bool branch_taken_0x2bb2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2e8) {
            ctx->pc = 0x2BB210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb210;
        }
    }
    ctx->pc = 0x2BB2F0u;
label_2bb2f0:
    // 0x2bb2f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bb2f4:
    // 0x2bb2f4: 0x11c20014  beq         $t6, $v0, . + 4 + (0x14 << 2)
label_2bb2f8:
    if (ctx->pc == 0x2BB2F8u) {
        ctx->pc = 0x2BB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F4u;
        // 0x2bb2f8: 0x8f89b4cc  lw          $t1, -0x4B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2FCu;
        goto label_2bb2fc;
    }
    ctx->pc = 0x2BB2F4u;
    {
        const bool branch_taken_0x2bb2f4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F4u;
        // 0x2bb2f8: 0x8f89b4cc  lw          $t1, -0x4B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2f4) {
            ctx->pc = 0x2BB348u;
            goto label_2bb348;
        }
    }
    ctx->pc = 0x2BB2FCu;
label_2bb2fc:
    // 0x2bb2fc: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2bb2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_2bb300:
    // 0x2bb300: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2bb304:
    if (ctx->pc == 0x2BB304u) {
        ctx->pc = 0x2BB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB300u;
        // 0x2bb304: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB308u;
        goto label_2bb308;
    }
    ctx->pc = 0x2BB300u;
    {
        const bool branch_taken_0x2bb300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb300) {
            ctx->pc = 0x2BB304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB300u;
            // 0x2bb304: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB344u;
            goto label_2bb344;
        }
    }
    ctx->pc = 0x2BB308u;
label_2bb308:
    // 0x2bb308: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2bb308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_2bb30c:
    // 0x2bb30c: 0x2524ffff  addiu       $a0, $t1, -0x1
    ctx->pc = 0x2bb30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2bb310:
    // 0x2bb310: 0x2442df00  addiu       $v0, $v0, -0x2100
    ctx->pc = 0x2bb310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
label_2bb314:
    // 0x2bb314: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2bb314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2bb318:
    // 0x2bb318: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2bb318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2bb31c:
    // 0x2bb31c: 0xe28c0  sll         $a1, $t6, 3
    ctx->pc = 0x2bb31cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_2bb320:
    // 0x2bb320: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2bb320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bb324:
    // 0x2bb324: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2bb324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2bb328:
    // 0x2bb328: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bb328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2bb32c:
    // 0x2bb32c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2bb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_2bb330:
    // 0x2bb330: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2bb330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2bb334:
    // 0x2bb334: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2bb334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2bb338:
    // 0x2bb338: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2bb338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb33c:
    // 0x2bb33c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2bb33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2bb340:
    // 0x2bb340: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2bb344:
    // 0x2bb344: 0xaf89b4cc  sw          $t1, -0x4B34($gp)
    ctx->pc = 0x2bb344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948044), GPR_U32(ctx, 9));
label_2bb348:
    // 0x2bb348: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58
    ctx->pc = 0x2bb348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
label_2bb34c:
    // 0x2bb34c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2bb34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2bb350:
    // 0x2bb350: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2bb350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2bb354:
    // 0x2bb354: 0x1464003d  bne         $v1, $a0, . + 4 + (0x3D << 2)
label_2bb358:
    if (ctx->pc == 0x2BB358u) {
        ctx->pc = 0x2BB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB354u;
        // 0x2bb358: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB35Cu;
        goto label_2bb35c;
    }
    ctx->pc = 0x2BB354u;
    {
        const bool branch_taken_0x2bb354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB354u;
        // 0x2bb358: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb354) {
            ctx->pc = 0x2BB44Cu;
            goto label_2bb44c;
        }
    }
    ctx->pc = 0x2BB35Cu;
label_2bb35c:
    // 0x2bb35c: 0xc08a62e  jal         func_2298B8
label_2bb360:
    if (ctx->pc == 0x2BB360u) {
        ctx->pc = 0x2BB364u;
        goto label_2bb364;
    }
    ctx->pc = 0x2BB35Cu;
    SET_GPR_U32(ctx, 31, 0x2BB364u);
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x2BB35Cu, 0x2BB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB364u;
label_2bb364:
    // 0x2bb364: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2bb368:
    if (ctx->pc == 0x2BB368u) {
        ctx->pc = 0x2BB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB364u;
        // 0x2bb368: 0x8f919f74  lw          $s1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB36Cu;
        goto label_2bb36c;
    }
    ctx->pc = 0x2BB364u;
    {
        const bool branch_taken_0x2bb364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB364u;
        // 0x2bb368: 0x8f919f74  lw          $s1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb364) {
            ctx->pc = 0x2BB448u;
            goto label_2bb448;
        }
    }
    ctx->pc = 0x2BB36Cu;
label_2bb36c:
    // 0x2bb36c: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2bb36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2bb370:
    // 0x2bb370: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2bb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_2bb374:
    // 0x2bb374: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2bb374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bb378:
    // 0x2bb378: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2bb37c:
    if (ctx->pc == 0x2BB37Cu) {
        ctx->pc = 0x2BB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB378u;
        // 0x2bb37c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB380u;
        goto label_2bb380;
    }
    ctx->pc = 0x2BB378u;
    {
        const bool branch_taken_0x2bb378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB378u;
        // 0x2bb37c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb378) {
            ctx->pc = 0x2BB448u;
            goto label_2bb448;
        }
    }
    ctx->pc = 0x2BB380u;
label_2bb380:
    // 0x2bb380: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2bb380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2bb384:
    // 0x2bb384: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x2bb384u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
label_2bb388:
    // 0x2bb388: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x2bb388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_2bb38c:
    // 0x2bb38c: 0x3673c84c  ori         $s3, $s3, 0xC84C
    ctx->pc = 0x2bb38cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)51276);
label_2bb390:
    // 0x2bb390: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2bb390u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
label_2bb394:
    // 0x2bb394: 0x3c150f00  lui         $s5, 0xF00
    ctx->pc = 0x2bb394u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3840 << 16));
label_2bb398:
    // 0x2bb398: 0x24142000  addiu       $s4, $zero, 0x2000
    ctx->pc = 0x2bb398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2bb39c:
    // 0x2bb39c: 0x0  nop
    ctx->pc = 0x2bb39cu;
    // NOP
label_2bb3a0:
    // 0x2bb3a0: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2bb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_2bb3a4:
    // 0x2bb3a4: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x2bb3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2bb3a8:
    // 0x2bb3a8: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2bb3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2bb3ac:
    // 0x2bb3ac: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x2bb3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
label_2bb3b0:
    // 0x2bb3b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2bb3b4:
    if (ctx->pc == 0x2BB3B4u) {
        ctx->pc = 0x2BB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B0u;
        // 0x2bb3b4: 0x8e020ae4  lw          $v0, 0xAE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3B8u;
        goto label_2bb3b8;
    }
    ctx->pc = 0x2BB3B0u;
    {
        const bool branch_taken_0x2bb3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3b0) {
            ctx->pc = 0x2BB3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3B0u;
            // 0x2bb3b4: 0x8e020ae4  lw          $v0, 0xAE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB3C4u;
            goto label_2bb3c4;
        }
    }
    ctx->pc = 0x2BB3B8u;
label_2bb3b8:
    // 0x2bb3b8: 0x5476001f  bnel        $v1, $s6, . + 4 + (0x1F << 2)
label_2bb3bc:
    if (ctx->pc == 0x2BB3BCu) {
        ctx->pc = 0x2BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B8u;
        // 0x2bb3bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3C0u;
        goto label_2bb3c0;
    }
    ctx->pc = 0x2BB3B8u;
    {
        const bool branch_taken_0x2bb3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2bb3b8) {
            ctx->pc = 0x2BB3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3B8u;
            // 0x2bb3bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB438u;
            goto label_2bb438;
        }
    }
    ctx->pc = 0x2BB3C0u;
label_2bb3c0:
    // 0x2bb3c0: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
label_2bb3c4:
    // 0x2bb3c4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2bb3c8:
    if (ctx->pc == 0x2BB3C8u) {
        ctx->pc = 0x2BB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3C4u;
        // 0x2bb3c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3CCu;
        goto label_2bb3cc;
    }
    ctx->pc = 0x2BB3C4u;
    {
        const bool branch_taken_0x2bb3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3c4) {
            ctx->pc = 0x2BB3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3C4u;
            // 0x2bb3c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB438u;
            goto label_2bb438;
        }
    }
    ctx->pc = 0x2BB3CCu;
label_2bb3cc:
    // 0x2bb3cc: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2bb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
label_2bb3d0:
    // 0x2bb3d0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2bb3d4:
    if (ctx->pc == 0x2BB3D4u) {
        ctx->pc = 0x2BB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3D0u;
        // 0x2bb3d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3D8u;
        goto label_2bb3d8;
    }
    ctx->pc = 0x2BB3D0u;
    {
        const bool branch_taken_0x2bb3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3d0) {
            ctx->pc = 0x2BB3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3D0u;
            // 0x2bb3d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB438u;
            goto label_2bb438;
        }
    }
    ctx->pc = 0x2BB3D8u;
label_2bb3d8:
    // 0x2bb3d8: 0x8e030bcc  lw          $v1, 0xBCC($s0)
    ctx->pc = 0x2bb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
label_2bb3dc:
    // 0x2bb3dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bb3e0:
    // 0x2bb3e0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2bb3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_2bb3e4:
    // 0x2bb3e4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_2bb3e8:
    if (ctx->pc == 0x2BB3E8u) {
        ctx->pc = 0x2BB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3E4u;
        // 0x2bb3e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3ECu;
        goto label_2bb3ec;
    }
    ctx->pc = 0x2BB3E4u;
    {
        const bool branch_taken_0x2bb3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3e4) {
            ctx->pc = 0x2BB3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3E4u;
            // 0x2bb3e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB438u;
            goto label_2bb438;
        }
    }
    ctx->pc = 0x2BB3ECu;
label_2bb3ec:
    // 0x2bb3ec: 0xc08a638  jal         func_2298E0
label_2bb3f0:
    if (ctx->pc == 0x2BB3F0u) {
        ctx->pc = 0x2BB3F4u;
        goto label_2bb3f4;
    }
    ctx->pc = 0x2BB3ECu;
    SET_GPR_U32(ctx, 31, 0x2BB3F4u);
    ctx->pc = 0x2298E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298E0u, 0x2BB3ECu, 0x2BB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3F4u;
label_2bb3f4:
    // 0x2bb3f4: 0xc6010b58  lwc1        $f1, 0xB58($s0)
    ctx->pc = 0x2bb3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bb3f8:
    // 0x2bb3f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bb3f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bb3fc:
    // 0x2bb3fc: 0x0  nop
    ctx->pc = 0x2bb3fcu;
    // NOP
label_2bb400:
    // 0x2bb400: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2bb404:
    if (ctx->pc == 0x2BB404u) {
        ctx->pc = 0x2BB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB400u;
        // 0x2bb404: 0x8f86b59c  lw          $a2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB408u;
        goto label_2bb408;
    }
    ctx->pc = 0x2BB400u;
    {
        const bool branch_taken_0x2bb400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB400u;
        // 0x2bb404: 0x8f86b59c  lw          $a2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb400) {
            ctx->pc = 0x2BB430u;
            goto label_2bb430;
        }
    }
    ctx->pc = 0x2BB408u;
label_2bb408:
    // 0x2bb408: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2bb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2bb40c:
    // 0x2bb40c: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2bb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2bb410:
    // 0x2bb410: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2bb410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_2bb414:
    // 0x2bb414: 0xae140a9c  sw          $s4, 0xA9C($s0)
    ctx->pc = 0x2bb414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 20));
label_2bb418:
    // 0x2bb418: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2bb418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
label_2bb41c:
    // 0x2bb41c: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2bb41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
label_2bb420:
    // 0x2bb420: 0xae030aa4  sw          $v1, 0xAA4($s0)
    ctx->pc = 0x2bb420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 3));
label_2bb424:
    // 0x2bb424: 0xae000b58  sw          $zero, 0xB58($s0)
    ctx->pc = 0x2bb424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2904), GPR_U32(ctx, 0));
label_2bb428:
    // 0x2bb428: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2bb428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2bb42c:
    // 0x2bb42c: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2bb430:
    // 0x2bb430: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2bb434:
    // 0x2bb434: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bb434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bb438:
    // 0x2bb438: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2bb438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2bb43c:
    // 0x2bb43c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2bb43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bb440:
    // 0x2bb440: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_2bb444:
    if (ctx->pc == 0x2BB444u) {
        ctx->pc = 0x2BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB440u;
        // 0x2bb444: 0x26521210  addiu       $s2, $s2, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB448u;
        goto label_2bb448;
    }
    ctx->pc = 0x2BB440u;
    {
        const bool branch_taken_0x2bb440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB440u;
        // 0x2bb444: 0x26521210  addiu       $s2, $s2, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb440) {
            ctx->pc = 0x2BB3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb3a0;
        }
    }
    ctx->pc = 0x2BB448u;
label_2bb448:
    // 0x2bb448: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2bb448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2bb44c:
    // 0x2bb44c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2bb44cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2bb450:
    // 0x2bb450: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2bb450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb454:
    // 0x2bb454: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2bb454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2bb458:
    // 0x2bb458: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2bb458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2bb45c:
    // 0x2bb45c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2bb45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bb460:
    // 0x2bb460: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2bb460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bb464:
    // 0x2bb464: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bb464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb468:
    // 0x2bb468: 0x3e00008  jr          $ra
label_2bb46c:
    if (ctx->pc == 0x2BB46Cu) {
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB468u;
        // 0x2bb46c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB470u;
        goto label_fallthrough_0x2bb468;
    }
    ctx->pc = 0x2BB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB468u;
        // 0x2bb46c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bb468:
    ctx->pc = 0x2BB470u;
}
