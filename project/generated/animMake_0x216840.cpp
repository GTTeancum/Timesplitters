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

// Function: animMake
// Address: 0x216840 - 0x219c04
void animMake_0x216840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animMake_0x216840");
#endif

    switch (ctx->pc) {
        case 0x21689cu: goto label_21689c;
        case 0x2168b8u: goto label_2168b8;
        case 0x2168c8u: goto label_2168c8;
        case 0x2168d8u: goto label_2168d8;
        case 0x2168e8u: goto label_2168e8;
        case 0x2168f8u: goto label_2168f8;
        case 0x216908u: goto label_216908;
        case 0x216918u: goto label_216918;
        case 0x216928u: goto label_216928;
        case 0x216938u: goto label_216938;
        case 0x216948u: goto label_216948;
        case 0x216958u: goto label_216958;
        case 0x216968u: goto label_216968;
        case 0x216978u: goto label_216978;
        case 0x216988u: goto label_216988;
        case 0x216998u: goto label_216998;
        case 0x2169a8u: goto label_2169a8;
        case 0x2169b8u: goto label_2169b8;
        case 0x2169c8u: goto label_2169c8;
        case 0x2169d8u: goto label_2169d8;
        case 0x2169e8u: goto label_2169e8;
        case 0x2169f8u: goto label_2169f8;
        case 0x216a08u: goto label_216a08;
        case 0x216a18u: goto label_216a18;
        case 0x216a28u: goto label_216a28;
        case 0x216a38u: goto label_216a38;
        case 0x216a48u: goto label_216a48;
        case 0x216a58u: goto label_216a58;
        case 0x216a68u: goto label_216a68;
        case 0x216a78u: goto label_216a78;
        case 0x216a88u: goto label_216a88;
        case 0x216a98u: goto label_216a98;
        case 0x216aa8u: goto label_216aa8;
        case 0x216ab8u: goto label_216ab8;
        case 0x216ac8u: goto label_216ac8;
        case 0x216ad8u: goto label_216ad8;
        case 0x216ae8u: goto label_216ae8;
        case 0x216af8u: goto label_216af8;
        case 0x216b08u: goto label_216b08;
        case 0x216b18u: goto label_216b18;
        case 0x216b28u: goto label_216b28;
        case 0x216b38u: goto label_216b38;
        case 0x216b48u: goto label_216b48;
        case 0x216b58u: goto label_216b58;
        case 0x216b68u: goto label_216b68;
        case 0x216b78u: goto label_216b78;
        case 0x216b88u: goto label_216b88;
        case 0x216b98u: goto label_216b98;
        case 0x216ba8u: goto label_216ba8;
        case 0x216bb8u: goto label_216bb8;
        case 0x216bc8u: goto label_216bc8;
        case 0x216bd8u: goto label_216bd8;
        case 0x216be8u: goto label_216be8;
        case 0x216bf8u: goto label_216bf8;
        case 0x216c08u: goto label_216c08;
        case 0x216c18u: goto label_216c18;
        case 0x216c28u: goto label_216c28;
        case 0x216c38u: goto label_216c38;
        case 0x216c48u: goto label_216c48;
        case 0x216c58u: goto label_216c58;
        case 0x216c68u: goto label_216c68;
        case 0x216c78u: goto label_216c78;
        case 0x216c88u: goto label_216c88;
        case 0x216c98u: goto label_216c98;
        case 0x216ca8u: goto label_216ca8;
        case 0x216cb8u: goto label_216cb8;
        case 0x216cc8u: goto label_216cc8;
        case 0x216cd8u: goto label_216cd8;
        case 0x216ce8u: goto label_216ce8;
        case 0x216cf8u: goto label_216cf8;
        case 0x216d08u: goto label_216d08;
        case 0x216d18u: goto label_216d18;
        case 0x216d28u: goto label_216d28;
        case 0x216d38u: goto label_216d38;
        case 0x216d48u: goto label_216d48;
        case 0x216d58u: goto label_216d58;
        case 0x216d68u: goto label_216d68;
        case 0x216d78u: goto label_216d78;
        case 0x216d88u: goto label_216d88;
        case 0x216d98u: goto label_216d98;
        case 0x216da8u: goto label_216da8;
        case 0x216db8u: goto label_216db8;
        case 0x216dc8u: goto label_216dc8;
        case 0x216dd8u: goto label_216dd8;
        case 0x216de8u: goto label_216de8;
        case 0x216df8u: goto label_216df8;
        case 0x216e08u: goto label_216e08;
        case 0x216e18u: goto label_216e18;
        case 0x216e28u: goto label_216e28;
        case 0x216e38u: goto label_216e38;
        case 0x216e48u: goto label_216e48;
        case 0x216e58u: goto label_216e58;
        case 0x216e68u: goto label_216e68;
        case 0x216e78u: goto label_216e78;
        case 0x216e88u: goto label_216e88;
        case 0x216e98u: goto label_216e98;
        case 0x216ea8u: goto label_216ea8;
        case 0x216eb8u: goto label_216eb8;
        case 0x216ec8u: goto label_216ec8;
        case 0x216ed8u: goto label_216ed8;
        case 0x216ee8u: goto label_216ee8;
        case 0x216ef8u: goto label_216ef8;
        case 0x216f08u: goto label_216f08;
        case 0x216f18u: goto label_216f18;
        case 0x216f28u: goto label_216f28;
        case 0x216f38u: goto label_216f38;
        case 0x216f48u: goto label_216f48;
        case 0x216f58u: goto label_216f58;
        case 0x216f68u: goto label_216f68;
        case 0x216f78u: goto label_216f78;
        case 0x216f88u: goto label_216f88;
        case 0x216f98u: goto label_216f98;
        case 0x216fa8u: goto label_216fa8;
        case 0x216fb8u: goto label_216fb8;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fd8u: goto label_216fd8;
        case 0x216fe8u: goto label_216fe8;
        case 0x216ff8u: goto label_216ff8;
        case 0x217008u: goto label_217008;
        case 0x217018u: goto label_217018;
        case 0x217028u: goto label_217028;
        case 0x217038u: goto label_217038;
        case 0x217048u: goto label_217048;
        case 0x217058u: goto label_217058;
        case 0x217068u: goto label_217068;
        case 0x217078u: goto label_217078;
        case 0x217088u: goto label_217088;
        case 0x217098u: goto label_217098;
        case 0x2170a8u: goto label_2170a8;
        case 0x2170b8u: goto label_2170b8;
        case 0x2170c8u: goto label_2170c8;
        case 0x2170d8u: goto label_2170d8;
        case 0x2170e8u: goto label_2170e8;
        case 0x2170f8u: goto label_2170f8;
        case 0x217108u: goto label_217108;
        case 0x217118u: goto label_217118;
        case 0x217128u: goto label_217128;
        case 0x217138u: goto label_217138;
        case 0x217148u: goto label_217148;
        case 0x217158u: goto label_217158;
        case 0x217168u: goto label_217168;
        case 0x217178u: goto label_217178;
        case 0x217188u: goto label_217188;
        case 0x217198u: goto label_217198;
        case 0x2171a8u: goto label_2171a8;
        case 0x2171b8u: goto label_2171b8;
        case 0x2171c8u: goto label_2171c8;
        case 0x2171d8u: goto label_2171d8;
        case 0x2171e8u: goto label_2171e8;
        case 0x2171f8u: goto label_2171f8;
        case 0x217208u: goto label_217208;
        case 0x217218u: goto label_217218;
        case 0x217228u: goto label_217228;
        case 0x217238u: goto label_217238;
        case 0x217248u: goto label_217248;
        case 0x217258u: goto label_217258;
        case 0x217268u: goto label_217268;
        case 0x217278u: goto label_217278;
        case 0x217288u: goto label_217288;
        case 0x217298u: goto label_217298;
        case 0x2172a8u: goto label_2172a8;
        case 0x2172b8u: goto label_2172b8;
        case 0x2172c8u: goto label_2172c8;
        case 0x2172d8u: goto label_2172d8;
        case 0x2172e8u: goto label_2172e8;
        case 0x2172f8u: goto label_2172f8;
        case 0x217308u: goto label_217308;
        case 0x217318u: goto label_217318;
        case 0x217328u: goto label_217328;
        case 0x217338u: goto label_217338;
        case 0x217348u: goto label_217348;
        case 0x217358u: goto label_217358;
        case 0x217368u: goto label_217368;
        case 0x217378u: goto label_217378;
        case 0x217388u: goto label_217388;
        case 0x217398u: goto label_217398;
        case 0x2173a8u: goto label_2173a8;
        case 0x2173b8u: goto label_2173b8;
        case 0x2173c8u: goto label_2173c8;
        case 0x2173d8u: goto label_2173d8;
        case 0x2173e8u: goto label_2173e8;
        case 0x2173f8u: goto label_2173f8;
        case 0x217408u: goto label_217408;
        case 0x217418u: goto label_217418;
        case 0x217428u: goto label_217428;
        case 0x217438u: goto label_217438;
        case 0x217448u: goto label_217448;
        case 0x217458u: goto label_217458;
        case 0x217468u: goto label_217468;
        case 0x217478u: goto label_217478;
        case 0x217488u: goto label_217488;
        case 0x217498u: goto label_217498;
        case 0x2174a8u: goto label_2174a8;
        case 0x2174b8u: goto label_2174b8;
        case 0x2174c8u: goto label_2174c8;
        case 0x2174d8u: goto label_2174d8;
        case 0x2174e8u: goto label_2174e8;
        case 0x2174f8u: goto label_2174f8;
        case 0x217508u: goto label_217508;
        case 0x217518u: goto label_217518;
        case 0x217528u: goto label_217528;
        case 0x217538u: goto label_217538;
        case 0x217548u: goto label_217548;
        case 0x217558u: goto label_217558;
        case 0x217568u: goto label_217568;
        case 0x217578u: goto label_217578;
        case 0x217588u: goto label_217588;
        case 0x217598u: goto label_217598;
        case 0x2175a8u: goto label_2175a8;
        case 0x2175b8u: goto label_2175b8;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175dcu: goto label_2175dc;
        case 0x2175e8u: goto label_2175e8;
        case 0x2175f8u: goto label_2175f8;
        case 0x217608u: goto label_217608;
        case 0x217618u: goto label_217618;
        case 0x217628u: goto label_217628;
        case 0x217638u: goto label_217638;
        case 0x217648u: goto label_217648;
        case 0x217658u: goto label_217658;
        case 0x21766cu: goto label_21766c;
        case 0x21767cu: goto label_21767c;
        case 0x217688u: goto label_217688;
        case 0x217698u: goto label_217698;
        case 0x2176a8u: goto label_2176a8;
        case 0x2176b8u: goto label_2176b8;
        case 0x2176c8u: goto label_2176c8;
        case 0x2176d8u: goto label_2176d8;
        case 0x2176e8u: goto label_2176e8;
        case 0x2176f8u: goto label_2176f8;
        case 0x217708u: goto label_217708;
        case 0x217718u: goto label_217718;
        case 0x217728u: goto label_217728;
        case 0x217738u: goto label_217738;
        case 0x217748u: goto label_217748;
        case 0x217758u: goto label_217758;
        case 0x217768u: goto label_217768;
        case 0x217778u: goto label_217778;
        case 0x217788u: goto label_217788;
        case 0x217798u: goto label_217798;
        case 0x2177a8u: goto label_2177a8;
        case 0x2177b8u: goto label_2177b8;
        case 0x2177c8u: goto label_2177c8;
        case 0x2177d8u: goto label_2177d8;
        case 0x2177e8u: goto label_2177e8;
        case 0x2177f8u: goto label_2177f8;
        case 0x217808u: goto label_217808;
        case 0x217818u: goto label_217818;
        case 0x217828u: goto label_217828;
        case 0x217838u: goto label_217838;
        case 0x217848u: goto label_217848;
        case 0x217858u: goto label_217858;
        case 0x217868u: goto label_217868;
        case 0x217878u: goto label_217878;
        case 0x217888u: goto label_217888;
        case 0x217898u: goto label_217898;
        case 0x2178a8u: goto label_2178a8;
        case 0x2178b8u: goto label_2178b8;
        case 0x2178c8u: goto label_2178c8;
        case 0x2178d8u: goto label_2178d8;
        case 0x2178e8u: goto label_2178e8;
        case 0x2178f8u: goto label_2178f8;
        case 0x217908u: goto label_217908;
        case 0x217918u: goto label_217918;
        case 0x217928u: goto label_217928;
        case 0x217938u: goto label_217938;
        case 0x217948u: goto label_217948;
        case 0x217958u: goto label_217958;
        case 0x217968u: goto label_217968;
        case 0x217978u: goto label_217978;
        case 0x217988u: goto label_217988;
        case 0x217998u: goto label_217998;
        case 0x2179a8u: goto label_2179a8;
        case 0x2179b8u: goto label_2179b8;
        case 0x2179c8u: goto label_2179c8;
        case 0x2179d8u: goto label_2179d8;
        case 0x2179e8u: goto label_2179e8;
        case 0x2179f8u: goto label_2179f8;
        case 0x217a08u: goto label_217a08;
        case 0x217a18u: goto label_217a18;
        case 0x217a28u: goto label_217a28;
        case 0x217a38u: goto label_217a38;
        case 0x217a48u: goto label_217a48;
        case 0x217a58u: goto label_217a58;
        case 0x217a68u: goto label_217a68;
        case 0x217a78u: goto label_217a78;
        case 0x217a88u: goto label_217a88;
        case 0x217a98u: goto label_217a98;
        case 0x217aa8u: goto label_217aa8;
        case 0x217ab8u: goto label_217ab8;
        case 0x217ac8u: goto label_217ac8;
        case 0x217ad8u: goto label_217ad8;
        case 0x217ae8u: goto label_217ae8;
        case 0x217af8u: goto label_217af8;
        case 0x217b08u: goto label_217b08;
        case 0x217b18u: goto label_217b18;
        case 0x217b28u: goto label_217b28;
        case 0x217b38u: goto label_217b38;
        case 0x217b48u: goto label_217b48;
        case 0x217b58u: goto label_217b58;
        case 0x217b68u: goto label_217b68;
        case 0x217b78u: goto label_217b78;
        case 0x217b88u: goto label_217b88;
        case 0x217b98u: goto label_217b98;
        case 0x217ba8u: goto label_217ba8;
        case 0x217bb8u: goto label_217bb8;
        case 0x217bc8u: goto label_217bc8;
        case 0x217bd8u: goto label_217bd8;
        case 0x217be8u: goto label_217be8;
        case 0x217bf8u: goto label_217bf8;
        case 0x217c08u: goto label_217c08;
        case 0x217c18u: goto label_217c18;
        case 0x217c28u: goto label_217c28;
        case 0x217c38u: goto label_217c38;
        case 0x217c48u: goto label_217c48;
        case 0x217c58u: goto label_217c58;
        case 0x217c68u: goto label_217c68;
        case 0x217c78u: goto label_217c78;
        case 0x217c88u: goto label_217c88;
        case 0x217c98u: goto label_217c98;
        case 0x217ca8u: goto label_217ca8;
        case 0x217cb8u: goto label_217cb8;
        case 0x217cc8u: goto label_217cc8;
        case 0x217cd8u: goto label_217cd8;
        case 0x217ce8u: goto label_217ce8;
        case 0x217cf8u: goto label_217cf8;
        case 0x217d08u: goto label_217d08;
        case 0x217d18u: goto label_217d18;
        case 0x217d28u: goto label_217d28;
        case 0x217d38u: goto label_217d38;
        case 0x217d48u: goto label_217d48;
        case 0x217d58u: goto label_217d58;
        case 0x217d68u: goto label_217d68;
        case 0x217d78u: goto label_217d78;
        case 0x217d88u: goto label_217d88;
        case 0x217d98u: goto label_217d98;
        case 0x217da8u: goto label_217da8;
        case 0x217db8u: goto label_217db8;
        case 0x217dc8u: goto label_217dc8;
        case 0x217dd8u: goto label_217dd8;
        case 0x217de8u: goto label_217de8;
        case 0x217df8u: goto label_217df8;
        case 0x217e08u: goto label_217e08;
        case 0x217e18u: goto label_217e18;
        case 0x217e28u: goto label_217e28;
        case 0x217e38u: goto label_217e38;
        case 0x217e48u: goto label_217e48;
        case 0x217e58u: goto label_217e58;
        case 0x217e68u: goto label_217e68;
        case 0x217e78u: goto label_217e78;
        case 0x217e88u: goto label_217e88;
        case 0x217e98u: goto label_217e98;
        case 0x217ea8u: goto label_217ea8;
        case 0x217eb8u: goto label_217eb8;
        case 0x217ec8u: goto label_217ec8;
        case 0x217ed8u: goto label_217ed8;
        case 0x217ee8u: goto label_217ee8;
        case 0x217ef8u: goto label_217ef8;
        case 0x217f08u: goto label_217f08;
        case 0x217f18u: goto label_217f18;
        case 0x217f28u: goto label_217f28;
        case 0x217f38u: goto label_217f38;
        case 0x217f48u: goto label_217f48;
        case 0x217f58u: goto label_217f58;
        case 0x217f68u: goto label_217f68;
        case 0x217f78u: goto label_217f78;
        case 0x217f88u: goto label_217f88;
        case 0x217f98u: goto label_217f98;
        case 0x217fa8u: goto label_217fa8;
        case 0x217fb8u: goto label_217fb8;
        case 0x217fc8u: goto label_217fc8;
        case 0x217fd8u: goto label_217fd8;
        case 0x217fe8u: goto label_217fe8;
        case 0x217ff8u: goto label_217ff8;
        case 0x218008u: goto label_218008;
        case 0x218018u: goto label_218018;
        case 0x218028u: goto label_218028;
        case 0x218038u: goto label_218038;
        case 0x218048u: goto label_218048;
        case 0x218058u: goto label_218058;
        case 0x218068u: goto label_218068;
        case 0x218078u: goto label_218078;
        case 0x218088u: goto label_218088;
        case 0x218098u: goto label_218098;
        case 0x2180a8u: goto label_2180a8;
        case 0x2180b8u: goto label_2180b8;
        case 0x2180c8u: goto label_2180c8;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180e8u: goto label_2180e8;
        case 0x2180f8u: goto label_2180f8;
        case 0x218108u: goto label_218108;
        case 0x218118u: goto label_218118;
        case 0x218128u: goto label_218128;
        case 0x218138u: goto label_218138;
        case 0x218148u: goto label_218148;
        case 0x218158u: goto label_218158;
        case 0x218168u: goto label_218168;
        case 0x218178u: goto label_218178;
        case 0x218188u: goto label_218188;
        case 0x218198u: goto label_218198;
        case 0x2181a8u: goto label_2181a8;
        case 0x2181b8u: goto label_2181b8;
        case 0x2181c8u: goto label_2181c8;
        case 0x2181d8u: goto label_2181d8;
        case 0x2181e8u: goto label_2181e8;
        case 0x2181f8u: goto label_2181f8;
        case 0x218208u: goto label_218208;
        case 0x218218u: goto label_218218;
        case 0x218228u: goto label_218228;
        case 0x218238u: goto label_218238;
        case 0x218248u: goto label_218248;
        case 0x218258u: goto label_218258;
        case 0x218268u: goto label_218268;
        case 0x218278u: goto label_218278;
        case 0x218288u: goto label_218288;
        case 0x218298u: goto label_218298;
        case 0x2182a8u: goto label_2182a8;
        case 0x2182b8u: goto label_2182b8;
        case 0x2182c8u: goto label_2182c8;
        case 0x2182d8u: goto label_2182d8;
        case 0x2182e8u: goto label_2182e8;
        case 0x2182f8u: goto label_2182f8;
        case 0x218308u: goto label_218308;
        case 0x218318u: goto label_218318;
        case 0x218328u: goto label_218328;
        case 0x218338u: goto label_218338;
        case 0x218348u: goto label_218348;
        case 0x218358u: goto label_218358;
        case 0x218368u: goto label_218368;
        case 0x218378u: goto label_218378;
        case 0x218388u: goto label_218388;
        case 0x218398u: goto label_218398;
        case 0x2183a8u: goto label_2183a8;
        case 0x2183b8u: goto label_2183b8;
        case 0x2183c8u: goto label_2183c8;
        case 0x2183d8u: goto label_2183d8;
        case 0x2183e8u: goto label_2183e8;
        case 0x2183f8u: goto label_2183f8;
        case 0x218408u: goto label_218408;
        case 0x218418u: goto label_218418;
        case 0x218428u: goto label_218428;
        case 0x218438u: goto label_218438;
        case 0x218448u: goto label_218448;
        case 0x218458u: goto label_218458;
        case 0x218468u: goto label_218468;
        case 0x218478u: goto label_218478;
        case 0x218488u: goto label_218488;
        case 0x218498u: goto label_218498;
        case 0x2184a8u: goto label_2184a8;
        case 0x2184b8u: goto label_2184b8;
        case 0x2184c8u: goto label_2184c8;
        case 0x2184d8u: goto label_2184d8;
        case 0x2184e8u: goto label_2184e8;
        case 0x2184f8u: goto label_2184f8;
        case 0x218508u: goto label_218508;
        case 0x218518u: goto label_218518;
        case 0x218528u: goto label_218528;
        case 0x218538u: goto label_218538;
        case 0x218548u: goto label_218548;
        case 0x218558u: goto label_218558;
        case 0x218564u: goto label_218564;
        case 0x218570u: goto label_218570;
        case 0x21857cu: goto label_21857c;
        case 0x218588u: goto label_218588;
        case 0x218594u: goto label_218594;
        case 0x2185a0u: goto label_2185a0;
        case 0x2185acu: goto label_2185ac;
        case 0x2185b8u: goto label_2185b8;
        case 0x2185c4u: goto label_2185c4;
        case 0x2185d0u: goto label_2185d0;
        case 0x2185dcu: goto label_2185dc;
        case 0x2185e8u: goto label_2185e8;
        case 0x2185f4u: goto label_2185f4;
        case 0x218600u: goto label_218600;
        case 0x21860cu: goto label_21860c;
        case 0x218618u: goto label_218618;
        case 0x218624u: goto label_218624;
        case 0x218628u: goto label_218628;
        case 0x21868cu: goto label_21868c;
        case 0x2186bcu: goto label_2186bc;
        case 0x2186ccu: goto label_2186cc;
        case 0x218710u: goto label_218710;
        case 0x218778u: goto label_218778;
        case 0x2187a4u: goto label_2187a4;
        case 0x2187b4u: goto label_2187b4;
        case 0x2187d4u: goto label_2187d4;
        case 0x2187e0u: goto label_2187e0;
        case 0x2187ecu: goto label_2187ec;
        case 0x2187f8u: goto label_2187f8;
        case 0x218804u: goto label_218804;
        case 0x218810u: goto label_218810;
        case 0x21881cu: goto label_21881c;
        case 0x218828u: goto label_218828;
        case 0x218834u: goto label_218834;
        case 0x218840u: goto label_218840;
        case 0x21884cu: goto label_21884c;
        case 0x218858u: goto label_218858;
        case 0x218864u: goto label_218864;
        case 0x218870u: goto label_218870;
        case 0x21887cu: goto label_21887c;
        case 0x218888u: goto label_218888;
        case 0x218894u: goto label_218894;
        case 0x2188a0u: goto label_2188a0;
        case 0x2188acu: goto label_2188ac;
        case 0x2188b8u: goto label_2188b8;
        case 0x2188c4u: goto label_2188c4;
        case 0x2188d0u: goto label_2188d0;
        case 0x2188dcu: goto label_2188dc;
        case 0x2188e8u: goto label_2188e8;
        case 0x2188f4u: goto label_2188f4;
        case 0x218900u: goto label_218900;
        case 0x21890cu: goto label_21890c;
        case 0x218918u: goto label_218918;
        case 0x218924u: goto label_218924;
        case 0x218930u: goto label_218930;
        case 0x21893cu: goto label_21893c;
        case 0x218948u: goto label_218948;
        case 0x218954u: goto label_218954;
        case 0x218960u: goto label_218960;
        case 0x21896cu: goto label_21896c;
        case 0x218978u: goto label_218978;
        case 0x218984u: goto label_218984;
        case 0x218990u: goto label_218990;
        case 0x21899cu: goto label_21899c;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189b4u: goto label_2189b4;
        case 0x2189c0u: goto label_2189c0;
        case 0x2189ccu: goto label_2189cc;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189e4u: goto label_2189e4;
        case 0x2189f0u: goto label_2189f0;
        case 0x2189fcu: goto label_2189fc;
        case 0x218a08u: goto label_218a08;
        case 0x218a14u: goto label_218a14;
        case 0x218a20u: goto label_218a20;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a38u: goto label_218a38;
        case 0x218a44u: goto label_218a44;
        case 0x218a50u: goto label_218a50;
        case 0x218a5cu: goto label_218a5c;
        case 0x218a68u: goto label_218a68;
        case 0x218a74u: goto label_218a74;
        case 0x218a80u: goto label_218a80;
        case 0x218a8cu: goto label_218a8c;
        case 0x218a98u: goto label_218a98;
        case 0x218aa4u: goto label_218aa4;
        case 0x218ab0u: goto label_218ab0;
        case 0x218abcu: goto label_218abc;
        case 0x218ac8u: goto label_218ac8;
        case 0x218ad4u: goto label_218ad4;
        case 0x218ae0u: goto label_218ae0;
        case 0x218aecu: goto label_218aec;
        case 0x218af8u: goto label_218af8;
        case 0x218b04u: goto label_218b04;
        case 0x218b10u: goto label_218b10;
        case 0x218b1cu: goto label_218b1c;
        case 0x218b28u: goto label_218b28;
        case 0x218b34u: goto label_218b34;
        case 0x218b40u: goto label_218b40;
        case 0x218b4cu: goto label_218b4c;
        case 0x218b58u: goto label_218b58;
        case 0x218b64u: goto label_218b64;
        case 0x218b70u: goto label_218b70;
        case 0x218b7cu: goto label_218b7c;
        case 0x218b88u: goto label_218b88;
        case 0x218b98u: goto label_218b98;
        case 0x218ba8u: goto label_218ba8;
        case 0x218bb8u: goto label_218bb8;
        case 0x218bc8u: goto label_218bc8;
        case 0x218bd8u: goto label_218bd8;
        case 0x218be8u: goto label_218be8;
        case 0x218bf8u: goto label_218bf8;
        case 0x218c08u: goto label_218c08;
        case 0x218c18u: goto label_218c18;
        case 0x218c28u: goto label_218c28;
        case 0x218c38u: goto label_218c38;
        case 0x218c48u: goto label_218c48;
        case 0x218c58u: goto label_218c58;
        case 0x218c68u: goto label_218c68;
        case 0x218c78u: goto label_218c78;
        case 0x218c88u: goto label_218c88;
        case 0x218c98u: goto label_218c98;
        case 0x218ca8u: goto label_218ca8;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cc8u: goto label_218cc8;
        case 0x218cd8u: goto label_218cd8;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cf8u: goto label_218cf8;
        case 0x218d08u: goto label_218d08;
        case 0x218d18u: goto label_218d18;
        case 0x218d28u: goto label_218d28;
        case 0x218d38u: goto label_218d38;
        case 0x218d48u: goto label_218d48;
        case 0x218d58u: goto label_218d58;
        case 0x218d68u: goto label_218d68;
        case 0x218d78u: goto label_218d78;
        case 0x218d88u: goto label_218d88;
        case 0x218d98u: goto label_218d98;
        case 0x218da8u: goto label_218da8;
        case 0x218db8u: goto label_218db8;
        case 0x218dc8u: goto label_218dc8;
        case 0x218dd8u: goto label_218dd8;
        case 0x218de8u: goto label_218de8;
        case 0x218df8u: goto label_218df8;
        case 0x218e08u: goto label_218e08;
        case 0x218e18u: goto label_218e18;
        case 0x218e28u: goto label_218e28;
        case 0x218e38u: goto label_218e38;
        case 0x218e48u: goto label_218e48;
        case 0x218e58u: goto label_218e58;
        case 0x218e68u: goto label_218e68;
        case 0x218e78u: goto label_218e78;
        case 0x218e88u: goto label_218e88;
        case 0x218e98u: goto label_218e98;
        case 0x218ea8u: goto label_218ea8;
        case 0x218eb8u: goto label_218eb8;
        case 0x218ec8u: goto label_218ec8;
        case 0x218ed8u: goto label_218ed8;
        case 0x218ee8u: goto label_218ee8;
        case 0x218ef8u: goto label_218ef8;
        case 0x218f08u: goto label_218f08;
        case 0x218f18u: goto label_218f18;
        case 0x218f28u: goto label_218f28;
        case 0x218f38u: goto label_218f38;
        case 0x218f48u: goto label_218f48;
        case 0x218f58u: goto label_218f58;
        case 0x218f68u: goto label_218f68;
        case 0x218f78u: goto label_218f78;
        case 0x218f88u: goto label_218f88;
        case 0x218f98u: goto label_218f98;
        case 0x218fa8u: goto label_218fa8;
        case 0x218fb8u: goto label_218fb8;
        case 0x218fc8u: goto label_218fc8;
        case 0x218fd8u: goto label_218fd8;
        case 0x218fe8u: goto label_218fe8;
        case 0x218ff8u: goto label_218ff8;
        case 0x219008u: goto label_219008;
        case 0x219018u: goto label_219018;
        case 0x219028u: goto label_219028;
        case 0x219038u: goto label_219038;
        case 0x219048u: goto label_219048;
        case 0x219058u: goto label_219058;
        case 0x219068u: goto label_219068;
        case 0x219078u: goto label_219078;
        case 0x219088u: goto label_219088;
        case 0x219098u: goto label_219098;
        case 0x2190a4u: goto label_2190a4;
        case 0x2190b0u: goto label_2190b0;
        case 0x2190bcu: goto label_2190bc;
        case 0x2190c8u: goto label_2190c8;
        case 0x2190d4u: goto label_2190d4;
        case 0x2190e0u: goto label_2190e0;
        case 0x2190ecu: goto label_2190ec;
        case 0x2190f8u: goto label_2190f8;
        case 0x219104u: goto label_219104;
        case 0x219110u: goto label_219110;
        case 0x21911cu: goto label_21911c;
        case 0x219128u: goto label_219128;
        case 0x219134u: goto label_219134;
        case 0x219140u: goto label_219140;
        case 0x21914cu: goto label_21914c;
        case 0x219158u: goto label_219158;
        case 0x219164u: goto label_219164;
        case 0x219170u: goto label_219170;
        case 0x21917cu: goto label_21917c;
        case 0x219188u: goto label_219188;
        case 0x219194u: goto label_219194;
        case 0x2191a0u: goto label_2191a0;
        case 0x2191acu: goto label_2191ac;
        case 0x2191b8u: goto label_2191b8;
        case 0x2191c4u: goto label_2191c4;
        case 0x2191d0u: goto label_2191d0;
        case 0x2191dcu: goto label_2191dc;
        case 0x2191e8u: goto label_2191e8;
        case 0x2191f4u: goto label_2191f4;
        case 0x219200u: goto label_219200;
        case 0x21920cu: goto label_21920c;
        case 0x219218u: goto label_219218;
        case 0x219224u: goto label_219224;
        case 0x219230u: goto label_219230;
        case 0x21923cu: goto label_21923c;
        case 0x219248u: goto label_219248;
        case 0x219254u: goto label_219254;
        case 0x219260u: goto label_219260;
        case 0x21926cu: goto label_21926c;
        case 0x219278u: goto label_219278;
        case 0x219284u: goto label_219284;
        case 0x219290u: goto label_219290;
        case 0x21929cu: goto label_21929c;
        case 0x2192a8u: goto label_2192a8;
        case 0x2192b4u: goto label_2192b4;
        case 0x2192c0u: goto label_2192c0;
        case 0x2192ccu: goto label_2192cc;
        case 0x2192d8u: goto label_2192d8;
        case 0x2192e4u: goto label_2192e4;
        case 0x2192f0u: goto label_2192f0;
        case 0x2192fcu: goto label_2192fc;
        case 0x219308u: goto label_219308;
        case 0x219314u: goto label_219314;
        case 0x219320u: goto label_219320;
        case 0x21932cu: goto label_21932c;
        case 0x219338u: goto label_219338;
        case 0x219344u: goto label_219344;
        case 0x219350u: goto label_219350;
        case 0x21935cu: goto label_21935c;
        case 0x219368u: goto label_219368;
        case 0x219374u: goto label_219374;
        case 0x219380u: goto label_219380;
        case 0x21938cu: goto label_21938c;
        case 0x219398u: goto label_219398;
        case 0x2193a4u: goto label_2193a4;
        case 0x2193b0u: goto label_2193b0;
        case 0x2193bcu: goto label_2193bc;
        case 0x2193c8u: goto label_2193c8;
        case 0x2193d4u: goto label_2193d4;
        case 0x2193e0u: goto label_2193e0;
        case 0x2193ecu: goto label_2193ec;
        case 0x2193f8u: goto label_2193f8;
        case 0x219404u: goto label_219404;
        case 0x219410u: goto label_219410;
        case 0x21941cu: goto label_21941c;
        case 0x219428u: goto label_219428;
        case 0x219434u: goto label_219434;
        case 0x219440u: goto label_219440;
        case 0x21944cu: goto label_21944c;
        case 0x219458u: goto label_219458;
        case 0x219464u: goto label_219464;
        case 0x219474u: goto label_219474;
        case 0x219484u: goto label_219484;
        case 0x219494u: goto label_219494;
        case 0x2194a4u: goto label_2194a4;
        case 0x2194b4u: goto label_2194b4;
        case 0x2194c4u: goto label_2194c4;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194f4u: goto label_2194f4;
        case 0x219504u: goto label_219504;
        case 0x219514u: goto label_219514;
        case 0x219524u: goto label_219524;
        case 0x219534u: goto label_219534;
        case 0x219544u: goto label_219544;
        case 0x219554u: goto label_219554;
        case 0x219564u: goto label_219564;
        case 0x219574u: goto label_219574;
        case 0x219584u: goto label_219584;
        case 0x219594u: goto label_219594;
        case 0x2195a4u: goto label_2195a4;
        case 0x2195b4u: goto label_2195b4;
        case 0x2195c4u: goto label_2195c4;
        case 0x2195d4u: goto label_2195d4;
        case 0x2195e4u: goto label_2195e4;
        case 0x2195f4u: goto label_2195f4;
        case 0x219604u: goto label_219604;
        case 0x219614u: goto label_219614;
        case 0x219624u: goto label_219624;
        case 0x219634u: goto label_219634;
        case 0x219644u: goto label_219644;
        case 0x219654u: goto label_219654;
        case 0x219664u: goto label_219664;
        case 0x219674u: goto label_219674;
        case 0x219684u: goto label_219684;
        case 0x219694u: goto label_219694;
        case 0x2196a0u: goto label_2196a0;
        case 0x2196acu: goto label_2196ac;
        case 0x2196b8u: goto label_2196b8;
        case 0x2196c4u: goto label_2196c4;
        case 0x2196d0u: goto label_2196d0;
        case 0x2196dcu: goto label_2196dc;
        case 0x2196e8u: goto label_2196e8;
        case 0x2196f4u: goto label_2196f4;
        case 0x219700u: goto label_219700;
        case 0x21970cu: goto label_21970c;
        case 0x219718u: goto label_219718;
        case 0x219724u: goto label_219724;
        case 0x219730u: goto label_219730;
        case 0x21973cu: goto label_21973c;
        case 0x219748u: goto label_219748;
        case 0x219754u: goto label_219754;
        case 0x219760u: goto label_219760;
        case 0x21976cu: goto label_21976c;
        case 0x219778u: goto label_219778;
        case 0x219784u: goto label_219784;
        case 0x219790u: goto label_219790;
        case 0x21979cu: goto label_21979c;
        case 0x2197a8u: goto label_2197a8;
        case 0x2197b4u: goto label_2197b4;
        case 0x2197c0u: goto label_2197c0;
        case 0x2197ccu: goto label_2197cc;
        case 0x2197d8u: goto label_2197d8;
        case 0x2197e4u: goto label_2197e4;
        case 0x2197f0u: goto label_2197f0;
        case 0x2197fcu: goto label_2197fc;
        case 0x219808u: goto label_219808;
        case 0x219814u: goto label_219814;
        case 0x219820u: goto label_219820;
        case 0x21982cu: goto label_21982c;
        case 0x219838u: goto label_219838;
        case 0x219848u: goto label_219848;
        case 0x219858u: goto label_219858;
        case 0x219868u: goto label_219868;
        case 0x219878u: goto label_219878;
        case 0x219888u: goto label_219888;
        case 0x219898u: goto label_219898;
        case 0x2198a8u: goto label_2198a8;
        case 0x2198b8u: goto label_2198b8;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198d8u: goto label_2198d8;
        case 0x2198e8u: goto label_2198e8;
        case 0x2198f8u: goto label_2198f8;
        case 0x219908u: goto label_219908;
        case 0x219918u: goto label_219918;
        case 0x219928u: goto label_219928;
        case 0x219938u: goto label_219938;
        case 0x219948u: goto label_219948;
        case 0x219958u: goto label_219958;
        case 0x219968u: goto label_219968;
        case 0x219978u: goto label_219978;
        case 0x219988u: goto label_219988;
        case 0x219998u: goto label_219998;
        case 0x2199a8u: goto label_2199a8;
        case 0x2199b8u: goto label_2199b8;
        case 0x2199c8u: goto label_2199c8;
        case 0x2199d8u: goto label_2199d8;
        case 0x2199e8u: goto label_2199e8;
        case 0x2199f8u: goto label_2199f8;
        case 0x219a08u: goto label_219a08;
        case 0x219a18u: goto label_219a18;
        case 0x219a28u: goto label_219a28;
        case 0x219a38u: goto label_219a38;
        case 0x219a48u: goto label_219a48;
        case 0x219a54u: goto label_219a54;
        case 0x219a60u: goto label_219a60;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a78u: goto label_219a78;
        case 0x219a84u: goto label_219a84;
        case 0x219a90u: goto label_219a90;
        case 0x219a9cu: goto label_219a9c;
        case 0x219aa8u: goto label_219aa8;
        case 0x219ab4u: goto label_219ab4;
        case 0x219ac0u: goto label_219ac0;
        case 0x219accu: goto label_219acc;
        case 0x219ad8u: goto label_219ad8;
        case 0x219ae4u: goto label_219ae4;
        case 0x219af0u: goto label_219af0;
        case 0x219afcu: goto label_219afc;
        case 0x219b08u: goto label_219b08;
        case 0x219b14u: goto label_219b14;
        case 0x219b20u: goto label_219b20;
        case 0x219b2cu: goto label_219b2c;
        case 0x219b38u: goto label_219b38;
        case 0x219b44u: goto label_219b44;
        case 0x219b50u: goto label_219b50;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b68u: goto label_219b68;
        case 0x219b74u: goto label_219b74;
        case 0x219b80u: goto label_219b80;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b98u: goto label_219b98;
        case 0x219ba4u: goto label_219ba4;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bbcu: goto label_219bbc;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bd4u: goto label_219bd4;
        default: break;
    }

    ctx->pc = 0x216840u;

    // 0x216840: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x216840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x216844: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216848: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x216848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x21684c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21684cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216850: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x216850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x216854: 0x2484b578  addiu       $a0, $a0, -0x4A88
    ctx->pc = 0x216854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948216));
    // 0x216858: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x216858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x21685c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21685cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216860: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x216860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x216864: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x216864u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x216868: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x216868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x21686c: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x216870: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x216870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x216874: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x216874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216878: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x216878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21687c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x21687cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216880: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x216880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x216884: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x216884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216888: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21688c: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x21688cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x216890: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x216890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x216894: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x216894u;
    SET_GPR_U32(ctx, 31, 0x21689Cu);
    ctx->pc = 0x216898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216894u;
    // 0x216898: 0x2417000e  addiu       $s7, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F10u, 0x216894u, 0x21689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21689Cu;
label_21689c:
    // 0x21689c: 0x241e0012  addiu       $fp, $zero, 0x12
    ctx->pc = 0x21689cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2168a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2168a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2168a4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2168a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2168a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2168a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2168ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2168acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168b0: 0xc08572e  jal         func_215CB8
    ctx->pc = 0x2168B0u;
    SET_GPR_U32(ctx, 31, 0x2168B8u);
    ctx->pc = 0x2168B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168B0u;
    // 0x2168b4: 0x24a5b590  addiu       $a1, $a1, -0x4A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CB8u, 0x2168B0u, 0x2168B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168B8u;
label_2168b8:
    // 0x2168b8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2168b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2168bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2168bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2168c0: 0xc08572e  jal         func_215CB8
    ctx->pc = 0x2168C0u;
    SET_GPR_U32(ctx, 31, 0x2168C8u);
    ctx->pc = 0x2168C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168C0u;
    // 0x2168c4: 0x24a5b5b8  addiu       $a1, $a1, -0x4A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CB8u, 0x2168C0u, 0x2168C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168C8u;
label_2168c8:
    // 0x2168c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2168c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2168cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2168ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2168d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2168D0u;
    SET_GPR_U32(ctx, 31, 0x2168D8u);
    ctx->pc = 0x2168D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168D0u;
    // 0x2168d4: 0x2484b5e0  addiu       $a0, $a0, -0x4A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2168D0u, 0x2168D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168D8u;
label_2168d8:
    // 0x2168d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2168d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2168dc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2168dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2168e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2168E0u;
    SET_GPR_U32(ctx, 31, 0x2168E8u);
    ctx->pc = 0x2168E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168E0u;
    // 0x2168e4: 0x2484b600  addiu       $a0, $a0, -0x4A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2168E0u, 0x2168E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168E8u;
label_2168e8:
    // 0x2168e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2168e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2168ec: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2168ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2168f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2168F0u;
    SET_GPR_U32(ctx, 31, 0x2168F8u);
    ctx->pc = 0x2168F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168F0u;
    // 0x2168f4: 0x2484b620  addiu       $a0, $a0, -0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2168F0u, 0x2168F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168F8u;
label_2168f8:
    // 0x2168f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2168f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2168fc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2168fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x216900: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216900u;
    SET_GPR_U32(ctx, 31, 0x216908u);
    ctx->pc = 0x216904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216900u;
    // 0x216904: 0x2484b640  addiu       $a0, $a0, -0x49C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216900u, 0x216908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216908u;
label_216908:
    // 0x216908: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21690c: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x21690cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x216910: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216910u;
    SET_GPR_U32(ctx, 31, 0x216918u);
    ctx->pc = 0x216914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216910u;
    // 0x216914: 0x2484b660  addiu       $a0, $a0, -0x49A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216910u, 0x216918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216918u;
label_216918:
    // 0x216918: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21691c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x21691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x216920: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216920u;
    SET_GPR_U32(ctx, 31, 0x216928u);
    ctx->pc = 0x216924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216920u;
    // 0x216924: 0x2484b680  addiu       $a0, $a0, -0x4980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216920u, 0x216928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216928u;
label_216928:
    // 0x216928: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21692c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x21692cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x216930: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216930u;
    SET_GPR_U32(ctx, 31, 0x216938u);
    ctx->pc = 0x216934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216930u;
    // 0x216934: 0x2484b6a0  addiu       $a0, $a0, -0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216930u, 0x216938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216938u;
label_216938:
    // 0x216938: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21693c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x21693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x216940: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216940u;
    SET_GPR_U32(ctx, 31, 0x216948u);
    ctx->pc = 0x216944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216940u;
    // 0x216944: 0x2484b6c0  addiu       $a0, $a0, -0x4940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216940u, 0x216948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216948u;
label_216948:
    // 0x216948: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21694c: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x21694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x216950: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216950u;
    SET_GPR_U32(ctx, 31, 0x216958u);
    ctx->pc = 0x216954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216950u;
    // 0x216954: 0x2484b6e0  addiu       $a0, $a0, -0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216950u, 0x216958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216958u;
label_216958:
    // 0x216958: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21695c: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x21695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x216960: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216960u;
    SET_GPR_U32(ctx, 31, 0x216968u);
    ctx->pc = 0x216964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216960u;
    // 0x216964: 0x2484b700  addiu       $a0, $a0, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216960u, 0x216968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216968u;
label_216968:
    // 0x216968: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21696c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216970: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216970u;
    SET_GPR_U32(ctx, 31, 0x216978u);
    ctx->pc = 0x216974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216970u;
    // 0x216974: 0x2484b720  addiu       $a0, $a0, -0x48E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216970u, 0x216978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216978u;
label_216978:
    // 0x216978: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21697c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x216980: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216980u;
    SET_GPR_U32(ctx, 31, 0x216988u);
    ctx->pc = 0x216984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216980u;
    // 0x216984: 0x2484b740  addiu       $a0, $a0, -0x48C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216980u, 0x216988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216988u;
label_216988:
    // 0x216988: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21698c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x21698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x216990: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216990u;
    SET_GPR_U32(ctx, 31, 0x216998u);
    ctx->pc = 0x216994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216990u;
    // 0x216994: 0x2484b760  addiu       $a0, $a0, -0x48A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216990u, 0x216998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216998u;
label_216998:
    // 0x216998: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21699c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x21699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2169a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2169A0u;
    SET_GPR_U32(ctx, 31, 0x2169A8u);
    ctx->pc = 0x2169A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169A0u;
    // 0x2169a4: 0x2484b780  addiu       $a0, $a0, -0x4880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2169A0u, 0x2169A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169A8u;
label_2169a8:
    // 0x2169a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2169a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2169ac: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x2169acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2169b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2169B0u;
    SET_GPR_U32(ctx, 31, 0x2169B8u);
    ctx->pc = 0x2169B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169B0u;
    // 0x2169b4: 0x2484b7a0  addiu       $a0, $a0, -0x4860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2169B0u, 0x2169B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169B8u;
label_2169b8:
    // 0x2169b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2169b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2169bc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2169bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2169c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2169C0u;
    SET_GPR_U32(ctx, 31, 0x2169C8u);
    ctx->pc = 0x2169C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169C0u;
    // 0x2169c4: 0x2484b7c0  addiu       $a0, $a0, -0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2169C0u, 0x2169C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169C8u;
label_2169c8:
    // 0x2169c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2169c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2169cc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2169ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2169d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2169D0u;
    SET_GPR_U32(ctx, 31, 0x2169D8u);
    ctx->pc = 0x2169D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169D0u;
    // 0x2169d4: 0x2484b7e0  addiu       $a0, $a0, -0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2169D0u, 0x2169D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169D8u;
label_2169d8:
    // 0x2169d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2169d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2169dc: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x2169dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2169e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2169E0u;
    SET_GPR_U32(ctx, 31, 0x2169E8u);
    ctx->pc = 0x2169E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169E0u;
    // 0x2169e4: 0x2484b800  addiu       $a0, $a0, -0x4800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2169E0u, 0x2169E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169E8u;
label_2169e8:
    // 0x2169e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2169e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2169ec: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x2169ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2169f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2169F0u;
    SET_GPR_U32(ctx, 31, 0x2169F8u);
    ctx->pc = 0x2169F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169F0u;
    // 0x2169f4: 0x2484b820  addiu       $a0, $a0, -0x47E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2169F0u, 0x2169F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169F8u;
label_2169f8:
    // 0x2169f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2169f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2169fc: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2169fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x216a00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A00u;
    SET_GPR_U32(ctx, 31, 0x216A08u);
    ctx->pc = 0x216A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A00u;
    // 0x216a04: 0x2484b840  addiu       $a0, $a0, -0x47C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A00u, 0x216A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A08u;
label_216a08:
    // 0x216a08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a0c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x216a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216a10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A10u;
    SET_GPR_U32(ctx, 31, 0x216A18u);
    ctx->pc = 0x216A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A10u;
    // 0x216a14: 0x2484b860  addiu       $a0, $a0, -0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A10u, 0x216A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A18u;
label_216a18:
    // 0x216a18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a1c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x216a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x216a20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A20u;
    SET_GPR_U32(ctx, 31, 0x216A28u);
    ctx->pc = 0x216A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A20u;
    // 0x216a24: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A20u, 0x216A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A28u;
label_216a28:
    // 0x216a28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a2c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x216a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x216a30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A30u;
    SET_GPR_U32(ctx, 31, 0x216A38u);
    ctx->pc = 0x216A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A30u;
    // 0x216a34: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A30u, 0x216A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A38u;
label_216a38:
    // 0x216a38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a3c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x216a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x216a40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A40u;
    SET_GPR_U32(ctx, 31, 0x216A48u);
    ctx->pc = 0x216A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A40u;
    // 0x216a44: 0x2484b8c0  addiu       $a0, $a0, -0x4740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A40u, 0x216A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A48u;
label_216a48:
    // 0x216a48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a4c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x216a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x216a50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A50u;
    SET_GPR_U32(ctx, 31, 0x216A58u);
    ctx->pc = 0x216A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A50u;
    // 0x216a54: 0x2484b8e0  addiu       $a0, $a0, -0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A50u, 0x216A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A58u;
label_216a58:
    // 0x216a58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a5c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x216a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x216a60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A60u;
    SET_GPR_U32(ctx, 31, 0x216A68u);
    ctx->pc = 0x216A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A60u;
    // 0x216a64: 0x2484b900  addiu       $a0, $a0, -0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A60u, 0x216A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A68u;
label_216a68:
    // 0x216a68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a6c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x216a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x216a70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A70u;
    SET_GPR_U32(ctx, 31, 0x216A78u);
    ctx->pc = 0x216A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A70u;
    // 0x216a74: 0x2484b920  addiu       $a0, $a0, -0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A70u, 0x216A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A78u;
label_216a78:
    // 0x216a78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a7c: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x216a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x216a80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A80u;
    SET_GPR_U32(ctx, 31, 0x216A88u);
    ctx->pc = 0x216A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A80u;
    // 0x216a84: 0x2484b940  addiu       $a0, $a0, -0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A80u, 0x216A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A88u;
label_216a88:
    // 0x216a88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a8c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x216a90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216A90u;
    SET_GPR_U32(ctx, 31, 0x216A98u);
    ctx->pc = 0x216A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A90u;
    // 0x216a94: 0x2484b960  addiu       $a0, $a0, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216A90u, 0x216A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A98u;
label_216a98:
    // 0x216a98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216a9c: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x216a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x216aa0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216AA0u;
    SET_GPR_U32(ctx, 31, 0x216AA8u);
    ctx->pc = 0x216AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AA0u;
    // 0x216aa4: 0x2484b980  addiu       $a0, $a0, -0x4680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216AA0u, 0x216AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AA8u;
label_216aa8:
    // 0x216aa8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216aac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x216aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x216ab0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216AB0u;
    SET_GPR_U32(ctx, 31, 0x216AB8u);
    ctx->pc = 0x216AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AB0u;
    // 0x216ab4: 0x2484b9a0  addiu       $a0, $a0, -0x4660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216AB0u, 0x216AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AB8u;
label_216ab8:
    // 0x216ab8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216abc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x216abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x216ac0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216AC0u;
    SET_GPR_U32(ctx, 31, 0x216AC8u);
    ctx->pc = 0x216AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AC0u;
    // 0x216ac4: 0x2484b9c0  addiu       $a0, $a0, -0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216AC0u, 0x216AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AC8u;
label_216ac8:
    // 0x216ac8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216acc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x216accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x216ad0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216AD0u;
    SET_GPR_U32(ctx, 31, 0x216AD8u);
    ctx->pc = 0x216AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AD0u;
    // 0x216ad4: 0x2484b9e0  addiu       $a0, $a0, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216AD0u, 0x216AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AD8u;
label_216ad8:
    // 0x216ad8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216adc: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x216adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x216ae0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216AE0u;
    SET_GPR_U32(ctx, 31, 0x216AE8u);
    ctx->pc = 0x216AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AE0u;
    // 0x216ae4: 0x2484ba00  addiu       $a0, $a0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216AE0u, 0x216AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AE8u;
label_216ae8:
    // 0x216ae8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216aec: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x216aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x216af0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216AF0u;
    SET_GPR_U32(ctx, 31, 0x216AF8u);
    ctx->pc = 0x216AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AF0u;
    // 0x216af4: 0x2484ba20  addiu       $a0, $a0, -0x45E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216AF0u, 0x216AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AF8u;
label_216af8:
    // 0x216af8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216afc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x216afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x216b00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B00u;
    SET_GPR_U32(ctx, 31, 0x216B08u);
    ctx->pc = 0x216B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B00u;
    // 0x216b04: 0x2484ba40  addiu       $a0, $a0, -0x45C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B00u, 0x216B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B08u;
label_216b08:
    // 0x216b08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b0c: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x216b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x216b10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B10u;
    SET_GPR_U32(ctx, 31, 0x216B18u);
    ctx->pc = 0x216B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B10u;
    // 0x216b14: 0x2484ba60  addiu       $a0, $a0, -0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B10u, 0x216B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B18u;
label_216b18:
    // 0x216b18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b1c: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x216b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x216b20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B20u;
    SET_GPR_U32(ctx, 31, 0x216B28u);
    ctx->pc = 0x216B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B20u;
    // 0x216b24: 0x2484ba80  addiu       $a0, $a0, -0x4580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B20u, 0x216B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B28u;
label_216b28:
    // 0x216b28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b2c: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x216b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x216b30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B30u;
    SET_GPR_U32(ctx, 31, 0x216B38u);
    ctx->pc = 0x216B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B30u;
    // 0x216b34: 0x2484baa0  addiu       $a0, $a0, -0x4560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B30u, 0x216B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B38u;
label_216b38:
    // 0x216b38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b3c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x216b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x216b40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B40u;
    SET_GPR_U32(ctx, 31, 0x216B48u);
    ctx->pc = 0x216B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B40u;
    // 0x216b44: 0x2484bac0  addiu       $a0, $a0, -0x4540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B40u, 0x216B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B48u;
label_216b48:
    // 0x216b48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x216b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x216b50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B50u;
    SET_GPR_U32(ctx, 31, 0x216B58u);
    ctx->pc = 0x216B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B50u;
    // 0x216b54: 0x2484bae0  addiu       $a0, $a0, -0x4520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B50u, 0x216B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B58u;
label_216b58:
    // 0x216b58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b5c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x216b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x216b60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B60u;
    SET_GPR_U32(ctx, 31, 0x216B68u);
    ctx->pc = 0x216B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B60u;
    // 0x216b64: 0x2484bb00  addiu       $a0, $a0, -0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B60u, 0x216B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B68u;
label_216b68:
    // 0x216b68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b6c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x216b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x216b70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B70u;
    SET_GPR_U32(ctx, 31, 0x216B78u);
    ctx->pc = 0x216B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B70u;
    // 0x216b74: 0x2484bb20  addiu       $a0, $a0, -0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B70u, 0x216B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B78u;
label_216b78:
    // 0x216b78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b7c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x216b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x216b80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B80u;
    SET_GPR_U32(ctx, 31, 0x216B88u);
    ctx->pc = 0x216B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B80u;
    // 0x216b84: 0x2484bb40  addiu       $a0, $a0, -0x44C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B80u, 0x216B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B88u;
label_216b88:
    // 0x216b88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b8c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x216b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x216b90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216B90u;
    SET_GPR_U32(ctx, 31, 0x216B98u);
    ctx->pc = 0x216B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B90u;
    // 0x216b94: 0x2484bb60  addiu       $a0, $a0, -0x44A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216B90u, 0x216B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B98u;
label_216b98:
    // 0x216b98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216b9c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x216b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x216ba0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216BA0u;
    SET_GPR_U32(ctx, 31, 0x216BA8u);
    ctx->pc = 0x216BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BA0u;
    // 0x216ba4: 0x2484bb80  addiu       $a0, $a0, -0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216BA0u, 0x216BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BA8u;
label_216ba8:
    // 0x216ba8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216bac: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x216bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x216bb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216BB0u;
    SET_GPR_U32(ctx, 31, 0x216BB8u);
    ctx->pc = 0x216BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BB0u;
    // 0x216bb4: 0x2484bba0  addiu       $a0, $a0, -0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216BB0u, 0x216BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BB8u;
label_216bb8:
    // 0x216bb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216bbc: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x216bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x216bc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216BC0u;
    SET_GPR_U32(ctx, 31, 0x216BC8u);
    ctx->pc = 0x216BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BC0u;
    // 0x216bc4: 0x2484bbc0  addiu       $a0, $a0, -0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216BC0u, 0x216BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BC8u;
label_216bc8:
    // 0x216bc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216bcc: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x216bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x216bd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216BD0u;
    SET_GPR_U32(ctx, 31, 0x216BD8u);
    ctx->pc = 0x216BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BD0u;
    // 0x216bd4: 0x2484bbe0  addiu       $a0, $a0, -0x4420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216BD0u, 0x216BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BD8u;
label_216bd8:
    // 0x216bd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216bdc: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x216be0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216BE0u;
    SET_GPR_U32(ctx, 31, 0x216BE8u);
    ctx->pc = 0x216BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BE0u;
    // 0x216be4: 0x2484bc00  addiu       $a0, $a0, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216BE0u, 0x216BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BE8u;
label_216be8:
    // 0x216be8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216bec: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x216becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x216bf0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216BF0u;
    SET_GPR_U32(ctx, 31, 0x216BF8u);
    ctx->pc = 0x216BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BF0u;
    // 0x216bf4: 0x2484bc20  addiu       $a0, $a0, -0x43E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216BF0u, 0x216BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BF8u;
label_216bf8:
    // 0x216bf8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216bfc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x216bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x216c00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C00u;
    SET_GPR_U32(ctx, 31, 0x216C08u);
    ctx->pc = 0x216C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C00u;
    // 0x216c04: 0x2484bc40  addiu       $a0, $a0, -0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C00u, 0x216C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C08u;
label_216c08:
    // 0x216c08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c0c: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x216c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x216c10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C10u;
    SET_GPR_U32(ctx, 31, 0x216C18u);
    ctx->pc = 0x216C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C10u;
    // 0x216c14: 0x2484bc60  addiu       $a0, $a0, -0x43A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C10u, 0x216C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C18u;
label_216c18:
    // 0x216c18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c1c: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x216c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x216c20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C20u;
    SET_GPR_U32(ctx, 31, 0x216C28u);
    ctx->pc = 0x216C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C20u;
    // 0x216c24: 0x2484bc80  addiu       $a0, $a0, -0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C20u, 0x216C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C28u;
label_216c28:
    // 0x216c28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c2c: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x216c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x216c30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C30u;
    SET_GPR_U32(ctx, 31, 0x216C38u);
    ctx->pc = 0x216C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C30u;
    // 0x216c34: 0x2484bca0  addiu       $a0, $a0, -0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C30u, 0x216C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C38u;
label_216c38:
    // 0x216c38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c3c: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x216c40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C40u;
    SET_GPR_U32(ctx, 31, 0x216C48u);
    ctx->pc = 0x216C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C40u;
    // 0x216c44: 0x2484bcc0  addiu       $a0, $a0, -0x4340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C40u, 0x216C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C48u;
label_216c48:
    // 0x216c48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c4c: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x216c50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C50u;
    SET_GPR_U32(ctx, 31, 0x216C58u);
    ctx->pc = 0x216C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C50u;
    // 0x216c54: 0x2484bce0  addiu       $a0, $a0, -0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C50u, 0x216C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C58u;
label_216c58:
    // 0x216c58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c5c: 0x240500c2  addiu       $a1, $zero, 0xC2
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x216c60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C60u;
    SET_GPR_U32(ctx, 31, 0x216C68u);
    ctx->pc = 0x216C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C60u;
    // 0x216c64: 0x2484bd00  addiu       $a0, $a0, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C60u, 0x216C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C68u;
label_216c68:
    // 0x216c68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c6c: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x216c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x216c70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C70u;
    SET_GPR_U32(ctx, 31, 0x216C78u);
    ctx->pc = 0x216C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C70u;
    // 0x216c74: 0x2484bd20  addiu       $a0, $a0, -0x42E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C70u, 0x216C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C78u;
label_216c78:
    // 0x216c78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c7c: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x216c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x216c80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C80u;
    SET_GPR_U32(ctx, 31, 0x216C88u);
    ctx->pc = 0x216C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C80u;
    // 0x216c84: 0x2484bd40  addiu       $a0, $a0, -0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C80u, 0x216C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C88u;
label_216c88:
    // 0x216c88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x216c90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216C90u;
    SET_GPR_U32(ctx, 31, 0x216C98u);
    ctx->pc = 0x216C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C90u;
    // 0x216c94: 0x2484bd60  addiu       $a0, $a0, -0x42A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216C90u, 0x216C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C98u;
label_216c98:
    // 0x216c98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216c9c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x216c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x216ca0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216CA0u;
    SET_GPR_U32(ctx, 31, 0x216CA8u);
    ctx->pc = 0x216CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CA0u;
    // 0x216ca4: 0x2484bd80  addiu       $a0, $a0, -0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216CA0u, 0x216CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CA8u;
label_216ca8:
    // 0x216ca8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216cac: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x216cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x216cb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216CB0u;
    SET_GPR_U32(ctx, 31, 0x216CB8u);
    ctx->pc = 0x216CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CB0u;
    // 0x216cb4: 0x2484bda0  addiu       $a0, $a0, -0x4260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216CB0u, 0x216CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CB8u;
label_216cb8:
    // 0x216cb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216cbc: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x216cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x216cc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216CC0u;
    SET_GPR_U32(ctx, 31, 0x216CC8u);
    ctx->pc = 0x216CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CC0u;
    // 0x216cc4: 0x2484bdc0  addiu       $a0, $a0, -0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216CC0u, 0x216CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CC8u;
label_216cc8:
    // 0x216cc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216ccc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x216cd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216CD0u;
    SET_GPR_U32(ctx, 31, 0x216CD8u);
    ctx->pc = 0x216CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CD0u;
    // 0x216cd4: 0x2484bde0  addiu       $a0, $a0, -0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216CD0u, 0x216CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CD8u;
label_216cd8:
    // 0x216cd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216cdc: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x216cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x216ce0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216CE0u;
    SET_GPR_U32(ctx, 31, 0x216CE8u);
    ctx->pc = 0x216CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CE0u;
    // 0x216ce4: 0x2484be00  addiu       $a0, $a0, -0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216CE0u, 0x216CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CE8u;
label_216ce8:
    // 0x216ce8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216cec: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x216cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x216cf0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216CF0u;
    SET_GPR_U32(ctx, 31, 0x216CF8u);
    ctx->pc = 0x216CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CF0u;
    // 0x216cf4: 0x2484be20  addiu       $a0, $a0, -0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216CF0u, 0x216CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CF8u;
label_216cf8:
    // 0x216cf8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216cfc: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x216cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x216d00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D00u;
    SET_GPR_U32(ctx, 31, 0x216D08u);
    ctx->pc = 0x216D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D00u;
    // 0x216d04: 0x2484be40  addiu       $a0, $a0, -0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D00u, 0x216D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D08u;
label_216d08:
    // 0x216d08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d0c: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x216d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x216d10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D10u;
    SET_GPR_U32(ctx, 31, 0x216D18u);
    ctx->pc = 0x216D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D10u;
    // 0x216d14: 0x2484be60  addiu       $a0, $a0, -0x41A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D10u, 0x216D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D18u;
label_216d18:
    // 0x216d18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d1c: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x216d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x216d20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D20u;
    SET_GPR_U32(ctx, 31, 0x216D28u);
    ctx->pc = 0x216D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D20u;
    // 0x216d24: 0x2484be80  addiu       $a0, $a0, -0x4180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D20u, 0x216D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D28u;
label_216d28:
    // 0x216d28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x216d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x216d30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D30u;
    SET_GPR_U32(ctx, 31, 0x216D38u);
    ctx->pc = 0x216D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D30u;
    // 0x216d34: 0x2484bea0  addiu       $a0, $a0, -0x4160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D30u, 0x216D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D38u;
label_216d38:
    // 0x216d38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d3c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x216d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x216d40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D40u;
    SET_GPR_U32(ctx, 31, 0x216D48u);
    ctx->pc = 0x216D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D40u;
    // 0x216d44: 0x2484bec0  addiu       $a0, $a0, -0x4140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D40u, 0x216D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D48u;
label_216d48:
    // 0x216d48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d4c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x216d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216d50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D50u;
    SET_GPR_U32(ctx, 31, 0x216D58u);
    ctx->pc = 0x216D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D50u;
    // 0x216d54: 0x2484bee0  addiu       $a0, $a0, -0x4120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D50u, 0x216D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D58u;
label_216d58:
    // 0x216d58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d5c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x216d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x216d60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D60u;
    SET_GPR_U32(ctx, 31, 0x216D68u);
    ctx->pc = 0x216D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D60u;
    // 0x216d64: 0x2484bf00  addiu       $a0, $a0, -0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D60u, 0x216D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D68u;
label_216d68:
    // 0x216d68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d6c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x216d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x216d70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D70u;
    SET_GPR_U32(ctx, 31, 0x216D78u);
    ctx->pc = 0x216D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D70u;
    // 0x216d74: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D70u, 0x216D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D78u;
label_216d78:
    // 0x216d78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d7c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x216d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x216d80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D80u;
    SET_GPR_U32(ctx, 31, 0x216D88u);
    ctx->pc = 0x216D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D80u;
    // 0x216d84: 0x2484bf40  addiu       $a0, $a0, -0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D80u, 0x216D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D88u;
label_216d88:
    // 0x216d88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d8c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x216d90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216D90u;
    SET_GPR_U32(ctx, 31, 0x216D98u);
    ctx->pc = 0x216D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D90u;
    // 0x216d94: 0x2484bf60  addiu       $a0, $a0, -0x40A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216D90u, 0x216D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D98u;
label_216d98:
    // 0x216d98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216d9c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x216da0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216DA0u;
    SET_GPR_U32(ctx, 31, 0x216DA8u);
    ctx->pc = 0x216DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DA0u;
    // 0x216da4: 0x2484bf80  addiu       $a0, $a0, -0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216DA0u, 0x216DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DA8u;
label_216da8:
    // 0x216da8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216dac: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x216dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x216db0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216DB0u;
    SET_GPR_U32(ctx, 31, 0x216DB8u);
    ctx->pc = 0x216DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DB0u;
    // 0x216db4: 0x2484bfa0  addiu       $a0, $a0, -0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216DB0u, 0x216DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DB8u;
label_216db8:
    // 0x216db8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216dbc: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x216dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x216dc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216DC0u;
    SET_GPR_U32(ctx, 31, 0x216DC8u);
    ctx->pc = 0x216DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DC0u;
    // 0x216dc4: 0x2484bfc0  addiu       $a0, $a0, -0x4040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216DC0u, 0x216DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DC8u;
label_216dc8:
    // 0x216dc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216dcc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x216dd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216DD0u;
    SET_GPR_U32(ctx, 31, 0x216DD8u);
    ctx->pc = 0x216DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DD0u;
    // 0x216dd4: 0x2484bfe0  addiu       $a0, $a0, -0x4020 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216DD0u, 0x216DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DD8u;
label_216dd8:
    // 0x216dd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216ddc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x216de0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216DE0u;
    SET_GPR_U32(ctx, 31, 0x216DE8u);
    ctx->pc = 0x216DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DE0u;
    // 0x216de4: 0x2484c000  addiu       $a0, $a0, -0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216DE0u, 0x216DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DE8u;
label_216de8:
    // 0x216de8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216dec: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x216decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x216df0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216DF0u;
    SET_GPR_U32(ctx, 31, 0x216DF8u);
    ctx->pc = 0x216DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DF0u;
    // 0x216df4: 0x2484c020  addiu       $a0, $a0, -0x3FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216DF0u, 0x216DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DF8u;
label_216df8:
    // 0x216df8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216dfc: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x216dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x216e00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E00u;
    SET_GPR_U32(ctx, 31, 0x216E08u);
    ctx->pc = 0x216E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E00u;
    // 0x216e04: 0x2484c040  addiu       $a0, $a0, -0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E00u, 0x216E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E08u;
label_216e08:
    // 0x216e08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e0c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x216e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x216e10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E10u;
    SET_GPR_U32(ctx, 31, 0x216E18u);
    ctx->pc = 0x216E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E10u;
    // 0x216e14: 0x2484c060  addiu       $a0, $a0, -0x3FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E10u, 0x216E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E18u;
label_216e18:
    // 0x216e18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e1c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x216e20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E20u;
    SET_GPR_U32(ctx, 31, 0x216E28u);
    ctx->pc = 0x216E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E20u;
    // 0x216e24: 0x2484c080  addiu       $a0, $a0, -0x3F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E20u, 0x216E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E28u;
label_216e28:
    // 0x216e28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e2c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x216e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x216e30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E30u;
    SET_GPR_U32(ctx, 31, 0x216E38u);
    ctx->pc = 0x216E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E30u;
    // 0x216e34: 0x2484c0a0  addiu       $a0, $a0, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E30u, 0x216E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E38u;
label_216e38:
    // 0x216e38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e3c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x216e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x216e40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E40u;
    SET_GPR_U32(ctx, 31, 0x216E48u);
    ctx->pc = 0x216E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E40u;
    // 0x216e44: 0x2484c0c0  addiu       $a0, $a0, -0x3F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E40u, 0x216E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E48u;
label_216e48:
    // 0x216e48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e4c: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x216e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x216e50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E50u;
    SET_GPR_U32(ctx, 31, 0x216E58u);
    ctx->pc = 0x216E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E50u;
    // 0x216e54: 0x2484c0e0  addiu       $a0, $a0, -0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E50u, 0x216E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E58u;
label_216e58:
    // 0x216e58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e5c: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x216e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x216e60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E60u;
    SET_GPR_U32(ctx, 31, 0x216E68u);
    ctx->pc = 0x216E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E60u;
    // 0x216e64: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E60u, 0x216E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E68u;
label_216e68:
    // 0x216e68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x216e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216e70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E70u;
    SET_GPR_U32(ctx, 31, 0x216E78u);
    ctx->pc = 0x216E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E70u;
    // 0x216e74: 0x2484a4c0  addiu       $a0, $a0, -0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E70u, 0x216E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E78u;
label_216e78:
    // 0x216e78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e7c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x216e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x216e80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E80u;
    SET_GPR_U32(ctx, 31, 0x216E88u);
    ctx->pc = 0x216E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E80u;
    // 0x216e84: 0x2484c120  addiu       $a0, $a0, -0x3EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E80u, 0x216E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E88u;
label_216e88:
    // 0x216e88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e8c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x216e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x216e90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216E90u;
    SET_GPR_U32(ctx, 31, 0x216E98u);
    ctx->pc = 0x216E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E90u;
    // 0x216e94: 0x2484c140  addiu       $a0, $a0, -0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216E90u, 0x216E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E98u;
label_216e98:
    // 0x216e98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216e9c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x216e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x216ea0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216EA0u;
    SET_GPR_U32(ctx, 31, 0x216EA8u);
    ctx->pc = 0x216EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EA0u;
    // 0x216ea4: 0x2484c160  addiu       $a0, $a0, -0x3EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216EA0u, 0x216EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EA8u;
label_216ea8:
    // 0x216ea8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216eac: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x216eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x216eb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216EB0u;
    SET_GPR_U32(ctx, 31, 0x216EB8u);
    ctx->pc = 0x216EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EB0u;
    // 0x216eb4: 0x2484c180  addiu       $a0, $a0, -0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216EB0u, 0x216EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EB8u;
label_216eb8:
    // 0x216eb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216ebc: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x216ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x216ec0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216EC0u;
    SET_GPR_U32(ctx, 31, 0x216EC8u);
    ctx->pc = 0x216EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EC0u;
    // 0x216ec4: 0x2484c1a0  addiu       $a0, $a0, -0x3E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216EC0u, 0x216EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EC8u;
label_216ec8:
    // 0x216ec8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216ecc: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x216eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x216ed0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216ED0u;
    SET_GPR_U32(ctx, 31, 0x216ED8u);
    ctx->pc = 0x216ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216ED0u;
    // 0x216ed4: 0x2484c1c0  addiu       $a0, $a0, -0x3E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216ED0u, 0x216ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216ED8u;
label_216ed8:
    // 0x216ed8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216edc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x216edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x216ee0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216EE0u;
    SET_GPR_U32(ctx, 31, 0x216EE8u);
    ctx->pc = 0x216EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EE0u;
    // 0x216ee4: 0x2484c1e0  addiu       $a0, $a0, -0x3E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216EE0u, 0x216EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EE8u;
label_216ee8:
    // 0x216ee8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216eec: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x216eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x216ef0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216EF0u;
    SET_GPR_U32(ctx, 31, 0x216EF8u);
    ctx->pc = 0x216EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EF0u;
    // 0x216ef4: 0x2484c200  addiu       $a0, $a0, -0x3E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216EF0u, 0x216EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EF8u;
label_216ef8:
    // 0x216ef8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216efc: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x216f00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F00u;
    SET_GPR_U32(ctx, 31, 0x216F08u);
    ctx->pc = 0x216F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F00u;
    // 0x216f04: 0x2484c220  addiu       $a0, $a0, -0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F00u, 0x216F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F08u;
label_216f08:
    // 0x216f08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f0c: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x216f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x216f10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F10u;
    SET_GPR_U32(ctx, 31, 0x216F18u);
    ctx->pc = 0x216F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F10u;
    // 0x216f14: 0x2484c240  addiu       $a0, $a0, -0x3DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F10u, 0x216F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F18u;
label_216f18:
    // 0x216f18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f1c: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x216f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x216f20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F20u;
    SET_GPR_U32(ctx, 31, 0x216F28u);
    ctx->pc = 0x216F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F20u;
    // 0x216f24: 0x2484c260  addiu       $a0, $a0, -0x3DA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F20u, 0x216F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F28u;
label_216f28:
    // 0x216f28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f2c: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x216f30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F30u;
    SET_GPR_U32(ctx, 31, 0x216F38u);
    ctx->pc = 0x216F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F30u;
    // 0x216f34: 0x2484c280  addiu       $a0, $a0, -0x3D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F30u, 0x216F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F38u;
label_216f38:
    // 0x216f38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f3c: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x216f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x216f40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F40u;
    SET_GPR_U32(ctx, 31, 0x216F48u);
    ctx->pc = 0x216F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F40u;
    // 0x216f44: 0x2484c2a0  addiu       $a0, $a0, -0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F40u, 0x216F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F48u;
label_216f48:
    // 0x216f48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f4c: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x216f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x216f50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F50u;
    SET_GPR_U32(ctx, 31, 0x216F58u);
    ctx->pc = 0x216F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F50u;
    // 0x216f54: 0x2484c2c0  addiu       $a0, $a0, -0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F50u, 0x216F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F58u;
label_216f58:
    // 0x216f58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f5c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x216f60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F60u;
    SET_GPR_U32(ctx, 31, 0x216F68u);
    ctx->pc = 0x216F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F60u;
    // 0x216f64: 0x2484c2e0  addiu       $a0, $a0, -0x3D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F60u, 0x216F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F68u;
label_216f68:
    // 0x216f68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f6c: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x216f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x216f70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F70u;
    SET_GPR_U32(ctx, 31, 0x216F78u);
    ctx->pc = 0x216F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F70u;
    // 0x216f74: 0x2484c300  addiu       $a0, $a0, -0x3D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F70u, 0x216F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F78u;
label_216f78:
    // 0x216f78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f7c: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x216f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x216f80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F80u;
    SET_GPR_U32(ctx, 31, 0x216F88u);
    ctx->pc = 0x216F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F80u;
    // 0x216f84: 0x2484c320  addiu       $a0, $a0, -0x3CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F80u, 0x216F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F88u;
label_216f88:
    // 0x216f88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f8c: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x216f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x216f90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216F90u;
    SET_GPR_U32(ctx, 31, 0x216F98u);
    ctx->pc = 0x216F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F90u;
    // 0x216f94: 0x2484c340  addiu       $a0, $a0, -0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216F90u, 0x216F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F98u;
label_216f98:
    // 0x216f98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216f9c: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x216fa0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216FA0u;
    SET_GPR_U32(ctx, 31, 0x216FA8u);
    ctx->pc = 0x216FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FA0u;
    // 0x216fa4: 0x2484c360  addiu       $a0, $a0, -0x3CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216FA0u, 0x216FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FA8u;
label_216fa8:
    // 0x216fa8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216fac: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x216facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x216fb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216FB0u;
    SET_GPR_U32(ctx, 31, 0x216FB8u);
    ctx->pc = 0x216FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FB0u;
    // 0x216fb4: 0x2484c380  addiu       $a0, $a0, -0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216FB0u, 0x216FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FB8u;
label_216fb8:
    // 0x216fb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216fbc: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x216fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x216fc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216FC0u;
    SET_GPR_U32(ctx, 31, 0x216FC8u);
    ctx->pc = 0x216FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FC0u;
    // 0x216fc4: 0x2484c3a0  addiu       $a0, $a0, -0x3C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216FC0u, 0x216FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FC8u;
label_216fc8:
    // 0x216fc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216fcc: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x216fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x216fd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216FD0u;
    SET_GPR_U32(ctx, 31, 0x216FD8u);
    ctx->pc = 0x216FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FD0u;
    // 0x216fd4: 0x2484c3c0  addiu       $a0, $a0, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216FD0u, 0x216FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FD8u;
label_216fd8:
    // 0x216fd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216fdc: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x216fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x216fe0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216FE0u;
    SET_GPR_U32(ctx, 31, 0x216FE8u);
    ctx->pc = 0x216FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FE0u;
    // 0x216fe4: 0x2484c3e0  addiu       $a0, $a0, -0x3C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216FE0u, 0x216FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FE8u;
label_216fe8:
    // 0x216fe8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216fec: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x216fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x216ff0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216FF0u;
    SET_GPR_U32(ctx, 31, 0x216FF8u);
    ctx->pc = 0x216FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FF0u;
    // 0x216ff4: 0x2484c400  addiu       $a0, $a0, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216FF0u, 0x216FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FF8u;
label_216ff8:
    // 0x216ff8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x216ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216ffc: 0x240500a9  addiu       $a1, $zero, 0xA9
    ctx->pc = 0x216ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x217000: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217000u;
    SET_GPR_U32(ctx, 31, 0x217008u);
    ctx->pc = 0x217004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217000u;
    // 0x217004: 0x2484c420  addiu       $a0, $a0, -0x3BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217000u, 0x217008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217008u;
label_217008:
    // 0x217008: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21700c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x21700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x217010: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217010u;
    SET_GPR_U32(ctx, 31, 0x217018u);
    ctx->pc = 0x217014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217010u;
    // 0x217014: 0x2484c440  addiu       $a0, $a0, -0x3BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217010u, 0x217018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217018u;
label_217018:
    // 0x217018: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21701c: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x21701cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x217020: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217020u;
    SET_GPR_U32(ctx, 31, 0x217028u);
    ctx->pc = 0x217024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217020u;
    // 0x217024: 0x2484c460  addiu       $a0, $a0, -0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217020u, 0x217028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217028u;
label_217028:
    // 0x217028: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21702c: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x217030: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217030u;
    SET_GPR_U32(ctx, 31, 0x217038u);
    ctx->pc = 0x217034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217030u;
    // 0x217034: 0x2484c480  addiu       $a0, $a0, -0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217030u, 0x217038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217038u;
label_217038:
    // 0x217038: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21703c: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x21703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x217040: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217040u;
    SET_GPR_U32(ctx, 31, 0x217048u);
    ctx->pc = 0x217044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217040u;
    // 0x217044: 0x2484c4a0  addiu       $a0, $a0, -0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217040u, 0x217048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217048u;
label_217048:
    // 0x217048: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21704c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x217050: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217050u;
    SET_GPR_U32(ctx, 31, 0x217058u);
    ctx->pc = 0x217054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217050u;
    // 0x217054: 0x2484c4c0  addiu       $a0, $a0, -0x3B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217050u, 0x217058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217058u;
label_217058:
    // 0x217058: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21705c: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x21705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x217060: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217060u;
    SET_GPR_U32(ctx, 31, 0x217068u);
    ctx->pc = 0x217064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217060u;
    // 0x217064: 0x2484c4e0  addiu       $a0, $a0, -0x3B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217060u, 0x217068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217068u;
label_217068:
    // 0x217068: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21706c: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x21706cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x217070: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217070u;
    SET_GPR_U32(ctx, 31, 0x217078u);
    ctx->pc = 0x217074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217070u;
    // 0x217074: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217070u, 0x217078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217078u;
label_217078:
    // 0x217078: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21707c: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x21707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x217080: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217080u;
    SET_GPR_U32(ctx, 31, 0x217088u);
    ctx->pc = 0x217084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217080u;
    // 0x217084: 0x2484c520  addiu       $a0, $a0, -0x3AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217080u, 0x217088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217088u;
label_217088:
    // 0x217088: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21708c: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x21708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x217090: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217090u;
    SET_GPR_U32(ctx, 31, 0x217098u);
    ctx->pc = 0x217094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217090u;
    // 0x217094: 0x2484c540  addiu       $a0, $a0, -0x3AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217090u, 0x217098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217098u;
label_217098:
    // 0x217098: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21709c: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x21709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2170a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2170A0u;
    SET_GPR_U32(ctx, 31, 0x2170A8u);
    ctx->pc = 0x2170A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170A0u;
    // 0x2170a4: 0x2484c560  addiu       $a0, $a0, -0x3AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2170A0u, 0x2170A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170A8u;
label_2170a8:
    // 0x2170a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2170a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2170ac: 0x240500b5  addiu       $a1, $zero, 0xB5
    ctx->pc = 0x2170acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x2170b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2170B0u;
    SET_GPR_U32(ctx, 31, 0x2170B8u);
    ctx->pc = 0x2170B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170B0u;
    // 0x2170b4: 0x2484c580  addiu       $a0, $a0, -0x3A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2170B0u, 0x2170B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170B8u;
label_2170b8:
    // 0x2170b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2170bc: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2170bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2170c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2170C0u;
    SET_GPR_U32(ctx, 31, 0x2170C8u);
    ctx->pc = 0x2170C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170C0u;
    // 0x2170c4: 0x2484c5a0  addiu       $a0, $a0, -0x3A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2170C0u, 0x2170C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170C8u;
label_2170c8:
    // 0x2170c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2170c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2170cc: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x2170ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x2170d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2170D0u;
    SET_GPR_U32(ctx, 31, 0x2170D8u);
    ctx->pc = 0x2170D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170D0u;
    // 0x2170d4: 0x2484c5c0  addiu       $a0, $a0, -0x3A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2170D0u, 0x2170D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170D8u;
label_2170d8:
    // 0x2170d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2170d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2170dc: 0x240500d6  addiu       $a1, $zero, 0xD6
    ctx->pc = 0x2170dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x2170e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2170E0u;
    SET_GPR_U32(ctx, 31, 0x2170E8u);
    ctx->pc = 0x2170E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170E0u;
    // 0x2170e4: 0x2484c5e0  addiu       $a0, $a0, -0x3A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2170E0u, 0x2170E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170E8u;
label_2170e8:
    // 0x2170e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2170e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2170ec: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x2170ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2170f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2170F0u;
    SET_GPR_U32(ctx, 31, 0x2170F8u);
    ctx->pc = 0x2170F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170F0u;
    // 0x2170f4: 0x2484c600  addiu       $a0, $a0, -0x3A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2170F0u, 0x2170F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170F8u;
label_2170f8:
    // 0x2170f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2170f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2170fc: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x217100: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217100u;
    SET_GPR_U32(ctx, 31, 0x217108u);
    ctx->pc = 0x217104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217100u;
    // 0x217104: 0x2484c620  addiu       $a0, $a0, -0x39E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217100u, 0x217108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217108u;
label_217108:
    // 0x217108: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21710c: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x21710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x217110: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217110u;
    SET_GPR_U32(ctx, 31, 0x217118u);
    ctx->pc = 0x217114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217110u;
    // 0x217114: 0x2484c640  addiu       $a0, $a0, -0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217110u, 0x217118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217118u;
label_217118:
    // 0x217118: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21711c: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x21711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x217120: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217120u;
    SET_GPR_U32(ctx, 31, 0x217128u);
    ctx->pc = 0x217124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217120u;
    // 0x217124: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217120u, 0x217128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217128u;
label_217128:
    // 0x217128: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21712c: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x21712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x217130: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217130u;
    SET_GPR_U32(ctx, 31, 0x217138u);
    ctx->pc = 0x217134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217130u;
    // 0x217134: 0x2484c680  addiu       $a0, $a0, -0x3980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217130u, 0x217138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217138u;
label_217138:
    // 0x217138: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21713c: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x21713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x217140: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217140u;
    SET_GPR_U32(ctx, 31, 0x217148u);
    ctx->pc = 0x217144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217140u;
    // 0x217144: 0x2484c6a0  addiu       $a0, $a0, -0x3960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217140u, 0x217148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217148u;
label_217148:
    // 0x217148: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21714c: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x21714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x217150: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217150u;
    SET_GPR_U32(ctx, 31, 0x217158u);
    ctx->pc = 0x217154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217150u;
    // 0x217154: 0x2484c6c0  addiu       $a0, $a0, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217150u, 0x217158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217158u;
label_217158:
    // 0x217158: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21715c: 0x240500c3  addiu       $a1, $zero, 0xC3
    ctx->pc = 0x21715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x217160: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217160u;
    SET_GPR_U32(ctx, 31, 0x217168u);
    ctx->pc = 0x217164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217160u;
    // 0x217164: 0x2484c6e0  addiu       $a0, $a0, -0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217160u, 0x217168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217168u;
label_217168:
    // 0x217168: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21716c: 0x240500ce  addiu       $a1, $zero, 0xCE
    ctx->pc = 0x21716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x217170: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217170u;
    SET_GPR_U32(ctx, 31, 0x217178u);
    ctx->pc = 0x217174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217170u;
    // 0x217174: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217170u, 0x217178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217178u;
label_217178:
    // 0x217178: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21717c: 0x240500d9  addiu       $a1, $zero, 0xD9
    ctx->pc = 0x21717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x217180: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217180u;
    SET_GPR_U32(ctx, 31, 0x217188u);
    ctx->pc = 0x217184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217180u;
    // 0x217184: 0x2484c720  addiu       $a0, $a0, -0x38E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217180u, 0x217188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217188u;
label_217188:
    // 0x217188: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21718c: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x21718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x217190: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217190u;
    SET_GPR_U32(ctx, 31, 0x217198u);
    ctx->pc = 0x217194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217190u;
    // 0x217194: 0x2484c740  addiu       $a0, $a0, -0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217190u, 0x217198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217198u;
label_217198:
    // 0x217198: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21719c: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x21719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2171a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2171A0u;
    SET_GPR_U32(ctx, 31, 0x2171A8u);
    ctx->pc = 0x2171A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171A0u;
    // 0x2171a4: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2171A0u, 0x2171A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171A8u;
label_2171a8:
    // 0x2171a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2171ac: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2171b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2171B0u;
    SET_GPR_U32(ctx, 31, 0x2171B8u);
    ctx->pc = 0x2171B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171B0u;
    // 0x2171b4: 0x2484c780  addiu       $a0, $a0, -0x3880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2171B0u, 0x2171B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171B8u;
label_2171b8:
    // 0x2171b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2171b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2171bc: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2171c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2171C0u;
    SET_GPR_U32(ctx, 31, 0x2171C8u);
    ctx->pc = 0x2171C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171C0u;
    // 0x2171c4: 0x2484c7a0  addiu       $a0, $a0, -0x3860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2171C0u, 0x2171C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171C8u;
label_2171c8:
    // 0x2171c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2171c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2171cc: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x2171ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2171d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2171D0u;
    SET_GPR_U32(ctx, 31, 0x2171D8u);
    ctx->pc = 0x2171D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171D0u;
    // 0x2171d4: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2171D0u, 0x2171D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171D8u;
label_2171d8:
    // 0x2171d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2171d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2171dc: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x2171dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x2171e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2171E0u;
    SET_GPR_U32(ctx, 31, 0x2171E8u);
    ctx->pc = 0x2171E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171E0u;
    // 0x2171e4: 0x2484c7e0  addiu       $a0, $a0, -0x3820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2171E0u, 0x2171E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171E8u;
label_2171e8:
    // 0x2171e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2171ec: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x2171ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x2171f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2171F0u;
    SET_GPR_U32(ctx, 31, 0x2171F8u);
    ctx->pc = 0x2171F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171F0u;
    // 0x2171f4: 0x2484c800  addiu       $a0, $a0, -0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2171F0u, 0x2171F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171F8u;
label_2171f8:
    // 0x2171f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2171fc: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x2171fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x217200: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217200u;
    SET_GPR_U32(ctx, 31, 0x217208u);
    ctx->pc = 0x217204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217200u;
    // 0x217204: 0x2484c820  addiu       $a0, $a0, -0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217200u, 0x217208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217208u;
label_217208:
    // 0x217208: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21720c: 0x240500cf  addiu       $a1, $zero, 0xCF
    ctx->pc = 0x21720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x217210: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217210u;
    SET_GPR_U32(ctx, 31, 0x217218u);
    ctx->pc = 0x217214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217210u;
    // 0x217214: 0x2484c840  addiu       $a0, $a0, -0x37C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217210u, 0x217218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217218u;
label_217218:
    // 0x217218: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21721c: 0x240500da  addiu       $a1, $zero, 0xDA
    ctx->pc = 0x21721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x217220: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217220u;
    SET_GPR_U32(ctx, 31, 0x217228u);
    ctx->pc = 0x217224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217220u;
    // 0x217224: 0x2484c860  addiu       $a0, $a0, -0x37A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217220u, 0x217228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217228u;
label_217228:
    // 0x217228: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21722c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x21722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x217230: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217230u;
    SET_GPR_U32(ctx, 31, 0x217238u);
    ctx->pc = 0x217234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217230u;
    // 0x217234: 0x2484c880  addiu       $a0, $a0, -0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217230u, 0x217238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217238u;
label_217238:
    // 0x217238: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21723c: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x217240: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217240u;
    SET_GPR_U32(ctx, 31, 0x217248u);
    ctx->pc = 0x217244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217240u;
    // 0x217244: 0x2484c8a0  addiu       $a0, $a0, -0x3760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217240u, 0x217248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217248u;
label_217248:
    // 0x217248: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21724c: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x21724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x217250: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217250u;
    SET_GPR_U32(ctx, 31, 0x217258u);
    ctx->pc = 0x217254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217250u;
    // 0x217254: 0x2484c8c0  addiu       $a0, $a0, -0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217250u, 0x217258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217258u;
label_217258:
    // 0x217258: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21725c: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x217260: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217260u;
    SET_GPR_U32(ctx, 31, 0x217268u);
    ctx->pc = 0x217264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217260u;
    // 0x217264: 0x2484c8e0  addiu       $a0, $a0, -0x3720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217260u, 0x217268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217268u;
label_217268:
    // 0x217268: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21726c: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x21726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x217270: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217270u;
    SET_GPR_U32(ctx, 31, 0x217278u);
    ctx->pc = 0x217274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217270u;
    // 0x217274: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217270u, 0x217278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217278u;
label_217278:
    // 0x217278: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21727c: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x21727cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x217280: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217280u;
    SET_GPR_U32(ctx, 31, 0x217288u);
    ctx->pc = 0x217284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217280u;
    // 0x217284: 0x2484c920  addiu       $a0, $a0, -0x36E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217280u, 0x217288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217288u;
label_217288:
    // 0x217288: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21728c: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x21728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x217290: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217290u;
    SET_GPR_U32(ctx, 31, 0x217298u);
    ctx->pc = 0x217294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217290u;
    // 0x217294: 0x2484c940  addiu       $a0, $a0, -0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217290u, 0x217298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217298u;
label_217298:
    // 0x217298: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21729c: 0x240500c5  addiu       $a1, $zero, 0xC5
    ctx->pc = 0x21729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x2172a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2172A0u;
    SET_GPR_U32(ctx, 31, 0x2172A8u);
    ctx->pc = 0x2172A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172A0u;
    // 0x2172a4: 0x2484c960  addiu       $a0, $a0, -0x36A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2172A0u, 0x2172A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172A8u;
label_2172a8:
    // 0x2172a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2172ac: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2172acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2172b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2172B0u;
    SET_GPR_U32(ctx, 31, 0x2172B8u);
    ctx->pc = 0x2172B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172B0u;
    // 0x2172b4: 0x2484c980  addiu       $a0, $a0, -0x3680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2172B0u, 0x2172B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172B8u;
label_2172b8:
    // 0x2172b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2172b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2172bc: 0x240500db  addiu       $a1, $zero, 0xDB
    ctx->pc = 0x2172bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x2172c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2172C0u;
    SET_GPR_U32(ctx, 31, 0x2172C8u);
    ctx->pc = 0x2172C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172C0u;
    // 0x2172c4: 0x2484c9a0  addiu       $a0, $a0, -0x3660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2172C0u, 0x2172C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172C8u;
label_2172c8:
    // 0x2172c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2172c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2172cc: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2172ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x2172d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2172D0u;
    SET_GPR_U32(ctx, 31, 0x2172D8u);
    ctx->pc = 0x2172D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172D0u;
    // 0x2172d4: 0x2484c9c0  addiu       $a0, $a0, -0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2172D0u, 0x2172D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172D8u;
label_2172d8:
    // 0x2172d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2172d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2172dc: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2172dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2172e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2172E0u;
    SET_GPR_U32(ctx, 31, 0x2172E8u);
    ctx->pc = 0x2172E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172E0u;
    // 0x2172e4: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2172E0u, 0x2172E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172E8u;
label_2172e8:
    // 0x2172e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2172e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2172ec: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x2172f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2172F0u;
    SET_GPR_U32(ctx, 31, 0x2172F8u);
    ctx->pc = 0x2172F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172F0u;
    // 0x2172f4: 0x2484ca00  addiu       $a0, $a0, -0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2172F0u, 0x2172F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172F8u;
label_2172f8:
    // 0x2172f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2172f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2172fc: 0x240500a5  addiu       $a1, $zero, 0xA5
    ctx->pc = 0x2172fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x217300: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217300u;
    SET_GPR_U32(ctx, 31, 0x217308u);
    ctx->pc = 0x217304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217300u;
    // 0x217304: 0x2484ca20  addiu       $a0, $a0, -0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217300u, 0x217308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217308u;
label_217308:
    // 0x217308: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21730c: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x21730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x217310: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217310u;
    SET_GPR_U32(ctx, 31, 0x217318u);
    ctx->pc = 0x217314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217310u;
    // 0x217314: 0x2484ca40  addiu       $a0, $a0, -0x35C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217310u, 0x217318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217318u;
label_217318:
    // 0x217318: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21731c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x21731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x217320: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217320u;
    SET_GPR_U32(ctx, 31, 0x217328u);
    ctx->pc = 0x217324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217320u;
    // 0x217324: 0x2484ca60  addiu       $a0, $a0, -0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217320u, 0x217328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217328u;
label_217328:
    // 0x217328: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21732c: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x21732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x217330: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217330u;
    SET_GPR_U32(ctx, 31, 0x217338u);
    ctx->pc = 0x217334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217330u;
    // 0x217334: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217330u, 0x217338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217338u;
label_217338:
    // 0x217338: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21733c: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x21733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x217340: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217340u;
    SET_GPR_U32(ctx, 31, 0x217348u);
    ctx->pc = 0x217344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217340u;
    // 0x217344: 0x2484caa0  addiu       $a0, $a0, -0x3560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217340u, 0x217348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217348u;
label_217348:
    // 0x217348: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21734c: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x21734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x217350: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217350u;
    SET_GPR_U32(ctx, 31, 0x217358u);
    ctx->pc = 0x217354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217350u;
    // 0x217354: 0x2484cac0  addiu       $a0, $a0, -0x3540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217350u, 0x217358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217358u;
label_217358:
    // 0x217358: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21735c: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x217360: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217360u;
    SET_GPR_U32(ctx, 31, 0x217368u);
    ctx->pc = 0x217364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217360u;
    // 0x217364: 0x2484cae0  addiu       $a0, $a0, -0x3520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217360u, 0x217368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217368u;
label_217368:
    // 0x217368: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21736c: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x217370: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217370u;
    SET_GPR_U32(ctx, 31, 0x217378u);
    ctx->pc = 0x217374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217370u;
    // 0x217374: 0x2484cb00  addiu       $a0, $a0, -0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217370u, 0x217378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217378u;
label_217378:
    // 0x217378: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21737c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x21737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x217380: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217380u;
    SET_GPR_U32(ctx, 31, 0x217388u);
    ctx->pc = 0x217384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217380u;
    // 0x217384: 0x2484cb20  addiu       $a0, $a0, -0x34E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217380u, 0x217388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217388u;
label_217388:
    // 0x217388: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21738c: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x217390: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217390u;
    SET_GPR_U32(ctx, 31, 0x217398u);
    ctx->pc = 0x217394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217390u;
    // 0x217394: 0x2484cb40  addiu       $a0, $a0, -0x34C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217390u, 0x217398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217398u;
label_217398:
    // 0x217398: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21739c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x21739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2173a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2173A0u;
    SET_GPR_U32(ctx, 31, 0x2173A8u);
    ctx->pc = 0x2173A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173A0u;
    // 0x2173a4: 0x2484cb60  addiu       $a0, $a0, -0x34A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2173A0u, 0x2173A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173A8u;
label_2173a8:
    // 0x2173a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2173ac: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2173acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x2173b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2173B0u;
    SET_GPR_U32(ctx, 31, 0x2173B8u);
    ctx->pc = 0x2173B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173B0u;
    // 0x2173b4: 0x2484cb80  addiu       $a0, $a0, -0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2173B0u, 0x2173B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173B8u;
label_2173b8:
    // 0x2173b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2173b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2173bc: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x2173bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x2173c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2173C0u;
    SET_GPR_U32(ctx, 31, 0x2173C8u);
    ctx->pc = 0x2173C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173C0u;
    // 0x2173c4: 0x2484cba0  addiu       $a0, $a0, -0x3460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2173C0u, 0x2173C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173C8u;
label_2173c8:
    // 0x2173c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2173c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2173cc: 0x240500b6  addiu       $a1, $zero, 0xB6
    ctx->pc = 0x2173ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2173d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2173D0u;
    SET_GPR_U32(ctx, 31, 0x2173D8u);
    ctx->pc = 0x2173D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173D0u;
    // 0x2173d4: 0x2484cbc0  addiu       $a0, $a0, -0x3440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2173D0u, 0x2173D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173D8u;
label_2173d8:
    // 0x2173d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2173d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2173dc: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x2173dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x2173e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2173E0u;
    SET_GPR_U32(ctx, 31, 0x2173E8u);
    ctx->pc = 0x2173E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173E0u;
    // 0x2173e4: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2173E0u, 0x2173E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173E8u;
label_2173e8:
    // 0x2173e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2173e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2173ec: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x2173ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x2173f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2173F0u;
    SET_GPR_U32(ctx, 31, 0x2173F8u);
    ctx->pc = 0x2173F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173F0u;
    // 0x2173f4: 0x2484cc00  addiu       $a0, $a0, -0x3400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2173F0u, 0x2173F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173F8u;
label_2173f8:
    // 0x2173f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2173f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2173fc: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x2173fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x217400: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217400u;
    SET_GPR_U32(ctx, 31, 0x217408u);
    ctx->pc = 0x217404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217400u;
    // 0x217404: 0x2484cc20  addiu       $a0, $a0, -0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217400u, 0x217408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217408u;
label_217408:
    // 0x217408: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21740c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x217410: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217410u;
    SET_GPR_U32(ctx, 31, 0x217418u);
    ctx->pc = 0x217414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217410u;
    // 0x217414: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217410u, 0x217418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217418u;
label_217418:
    // 0x217418: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21741c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x217420: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217420u;
    SET_GPR_U32(ctx, 31, 0x217428u);
    ctx->pc = 0x217424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217420u;
    // 0x217424: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217420u, 0x217428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217428u;
label_217428:
    // 0x217428: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21742c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x21742cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x217430: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217430u;
    SET_GPR_U32(ctx, 31, 0x217438u);
    ctx->pc = 0x217434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217430u;
    // 0x217434: 0x2484cc80  addiu       $a0, $a0, -0x3380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217430u, 0x217438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217438u;
label_217438:
    // 0x217438: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21743c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x217440: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217440u;
    SET_GPR_U32(ctx, 31, 0x217448u);
    ctx->pc = 0x217444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217440u;
    // 0x217444: 0x2484cca0  addiu       $a0, $a0, -0x3360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217440u, 0x217448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217448u;
label_217448:
    // 0x217448: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21744c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x217450: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217450u;
    SET_GPR_U32(ctx, 31, 0x217458u);
    ctx->pc = 0x217454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217450u;
    // 0x217454: 0x2484ccc0  addiu       $a0, $a0, -0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217450u, 0x217458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217458u;
label_217458:
    // 0x217458: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21745c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x217460: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217460u;
    SET_GPR_U32(ctx, 31, 0x217468u);
    ctx->pc = 0x217464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217460u;
    // 0x217464: 0x2484cce0  addiu       $a0, $a0, -0x3320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217460u, 0x217468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217468u;
label_217468:
    // 0x217468: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21746c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x21746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x217470: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217470u;
    SET_GPR_U32(ctx, 31, 0x217478u);
    ctx->pc = 0x217474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217470u;
    // 0x217474: 0x2484cd00  addiu       $a0, $a0, -0x3300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217470u, 0x217478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217478u;
label_217478:
    // 0x217478: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21747c: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x21747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x217480: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217480u;
    SET_GPR_U32(ctx, 31, 0x217488u);
    ctx->pc = 0x217484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217480u;
    // 0x217484: 0x2484cd20  addiu       $a0, $a0, -0x32E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217480u, 0x217488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217488u;
label_217488:
    // 0x217488: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21748c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x21748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x217490: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217490u;
    SET_GPR_U32(ctx, 31, 0x217498u);
    ctx->pc = 0x217494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217490u;
    // 0x217494: 0x2484cd40  addiu       $a0, $a0, -0x32C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217490u, 0x217498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217498u;
label_217498:
    // 0x217498: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21749c: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x21749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2174a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2174A0u;
    SET_GPR_U32(ctx, 31, 0x2174A8u);
    ctx->pc = 0x2174A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174A0u;
    // 0x2174a4: 0x2484cd60  addiu       $a0, $a0, -0x32A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2174A0u, 0x2174A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174A8u;
label_2174a8:
    // 0x2174a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2174ac: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x2174acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2174b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2174B0u;
    SET_GPR_U32(ctx, 31, 0x2174B8u);
    ctx->pc = 0x2174B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174B0u;
    // 0x2174b4: 0x2484cd80  addiu       $a0, $a0, -0x3280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2174B0u, 0x2174B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174B8u;
label_2174b8:
    // 0x2174b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2174b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2174bc: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x2174bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x2174c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2174C0u;
    SET_GPR_U32(ctx, 31, 0x2174C8u);
    ctx->pc = 0x2174C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174C0u;
    // 0x2174c4: 0x2484cda0  addiu       $a0, $a0, -0x3260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2174C0u, 0x2174C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174C8u;
label_2174c8:
    // 0x2174c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2174c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2174cc: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2174ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2174d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2174D0u;
    SET_GPR_U32(ctx, 31, 0x2174D8u);
    ctx->pc = 0x2174D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174D0u;
    // 0x2174d4: 0x2484cdc0  addiu       $a0, $a0, -0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2174D0u, 0x2174D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174D8u;
label_2174d8:
    // 0x2174d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2174d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2174dc: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x2174dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2174e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2174E0u;
    SET_GPR_U32(ctx, 31, 0x2174E8u);
    ctx->pc = 0x2174E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174E0u;
    // 0x2174e4: 0x2484cde0  addiu       $a0, $a0, -0x3220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2174E0u, 0x2174E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174E8u;
label_2174e8:
    // 0x2174e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2174e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2174ec: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x2174ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x2174f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2174F0u;
    SET_GPR_U32(ctx, 31, 0x2174F8u);
    ctx->pc = 0x2174F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174F0u;
    // 0x2174f4: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2174F0u, 0x2174F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174F8u;
label_2174f8:
    // 0x2174f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2174f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2174fc: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x2174fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x217500: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217500u;
    SET_GPR_U32(ctx, 31, 0x217508u);
    ctx->pc = 0x217504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217500u;
    // 0x217504: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217500u, 0x217508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217508u;
label_217508:
    // 0x217508: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21750c: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x21750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x217510: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217510u;
    SET_GPR_U32(ctx, 31, 0x217518u);
    ctx->pc = 0x217514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217510u;
    // 0x217514: 0x2484ce40  addiu       $a0, $a0, -0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217510u, 0x217518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217518u;
label_217518:
    // 0x217518: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21751c: 0x240500c7  addiu       $a1, $zero, 0xC7
    ctx->pc = 0x21751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x217520: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217520u;
    SET_GPR_U32(ctx, 31, 0x217528u);
    ctx->pc = 0x217524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217520u;
    // 0x217524: 0x2484ce60  addiu       $a0, $a0, -0x31A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217520u, 0x217528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217528u;
label_217528:
    // 0x217528: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21752c: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x21752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x217530: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217530u;
    SET_GPR_U32(ctx, 31, 0x217538u);
    ctx->pc = 0x217534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217530u;
    // 0x217534: 0x2484ce80  addiu       $a0, $a0, -0x3180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217530u, 0x217538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217538u;
label_217538:
    // 0x217538: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21753c: 0x240500dd  addiu       $a1, $zero, 0xDD
    ctx->pc = 0x21753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x217540: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217540u;
    SET_GPR_U32(ctx, 31, 0x217548u);
    ctx->pc = 0x217544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217540u;
    // 0x217544: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217540u, 0x217548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217548u;
label_217548:
    // 0x217548: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21754c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x21754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x217550: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217550u;
    SET_GPR_U32(ctx, 31, 0x217558u);
    ctx->pc = 0x217554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217550u;
    // 0x217554: 0x2484cec0  addiu       $a0, $a0, -0x3140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217550u, 0x217558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217558u;
label_217558:
    // 0x217558: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21755c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x21755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x217560: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217560u;
    SET_GPR_U32(ctx, 31, 0x217568u);
    ctx->pc = 0x217564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217560u;
    // 0x217564: 0x2484cee0  addiu       $a0, $a0, -0x3120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217560u, 0x217568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217568u;
label_217568:
    // 0x217568: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21756c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x21756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x217570: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217570u;
    SET_GPR_U32(ctx, 31, 0x217578u);
    ctx->pc = 0x217574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217570u;
    // 0x217574: 0x2484cf00  addiu       $a0, $a0, -0x3100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217570u, 0x217578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217578u;
label_217578:
    // 0x217578: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21757c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x21757cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x217580: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217580u;
    SET_GPR_U32(ctx, 31, 0x217588u);
    ctx->pc = 0x217584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217580u;
    // 0x217584: 0x2484cf20  addiu       $a0, $a0, -0x30E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217580u, 0x217588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217588u;
label_217588:
    // 0x217588: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21758c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x21758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x217590: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217590u;
    SET_GPR_U32(ctx, 31, 0x217598u);
    ctx->pc = 0x217594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217590u;
    // 0x217594: 0x2484cf40  addiu       $a0, $a0, -0x30C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217590u, 0x217598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217598u;
label_217598:
    // 0x217598: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21759c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x21759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2175a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2175A0u;
    SET_GPR_U32(ctx, 31, 0x2175A8u);
    ctx->pc = 0x2175A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175A0u;
    // 0x2175a4: 0x2484cf60  addiu       $a0, $a0, -0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2175A0u, 0x2175A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175A8u;
label_2175a8:
    // 0x2175a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2175a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2175ac: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x2175acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2175b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2175B0u;
    SET_GPR_U32(ctx, 31, 0x2175B8u);
    ctx->pc = 0x2175B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175B0u;
    // 0x2175b4: 0x2484cf80  addiu       $a0, $a0, -0x3080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2175B0u, 0x2175B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175B8u;
label_2175b8:
    // 0x2175b8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2175b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2175bc: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x2175bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2175c0: 0x2610cfa0  addiu       $s0, $s0, -0x3060
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954912));
    // 0x2175c4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2175C4u;
    SET_GPR_U32(ctx, 31, 0x2175CCu);
    ctx->pc = 0x2175C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175C4u;
    // 0x2175c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2175C4u, 0x2175CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175CCu;
label_2175cc:
    // 0x2175cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2175ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2175d0: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x2175d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2175d4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2175D4u;
    SET_GPR_U32(ctx, 31, 0x2175DCu);
    ctx->pc = 0x2175D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175D4u;
    // 0x2175d8: 0x2484cfc0  addiu       $a0, $a0, -0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2175D4u, 0x2175DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175DCu;
label_2175dc:
    // 0x2175dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2175dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2175E0u;
    SET_GPR_U32(ctx, 31, 0x2175E8u);
    ctx->pc = 0x2175E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175E0u;
    // 0x2175e4: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2175E0u, 0x2175E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175E8u;
label_2175e8:
    // 0x2175e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2175e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2175ec: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x2175ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2175f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2175F0u;
    SET_GPR_U32(ctx, 31, 0x2175F8u);
    ctx->pc = 0x2175F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175F0u;
    // 0x2175f4: 0x2484cfe0  addiu       $a0, $a0, -0x3020 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2175F0u, 0x2175F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175F8u;
label_2175f8:
    // 0x2175f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2175f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2175fc: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x2175fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x217600: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217600u;
    SET_GPR_U32(ctx, 31, 0x217608u);
    ctx->pc = 0x217604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217600u;
    // 0x217604: 0x2484d000  addiu       $a0, $a0, -0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217600u, 0x217608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217608u;
label_217608:
    // 0x217608: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21760c: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x217610: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217610u;
    SET_GPR_U32(ctx, 31, 0x217618u);
    ctx->pc = 0x217614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217610u;
    // 0x217614: 0x2484d020  addiu       $a0, $a0, -0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217610u, 0x217618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217618u;
label_217618:
    // 0x217618: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21761c: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x21761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x217620: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217620u;
    SET_GPR_U32(ctx, 31, 0x217628u);
    ctx->pc = 0x217624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217620u;
    // 0x217624: 0x2484d040  addiu       $a0, $a0, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217620u, 0x217628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217628u;
label_217628:
    // 0x217628: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21762c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x21762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x217630: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217630u;
    SET_GPR_U32(ctx, 31, 0x217638u);
    ctx->pc = 0x217634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217630u;
    // 0x217634: 0x2484d060  addiu       $a0, $a0, -0x2FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217630u, 0x217638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217638u;
label_217638:
    // 0x217638: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21763c: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x21763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x217640: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217640u;
    SET_GPR_U32(ctx, 31, 0x217648u);
    ctx->pc = 0x217644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217640u;
    // 0x217644: 0x2484d080  addiu       $a0, $a0, -0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217640u, 0x217648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217648u;
label_217648:
    // 0x217648: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21764c: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x21764cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x217650: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217650u;
    SET_GPR_U32(ctx, 31, 0x217658u);
    ctx->pc = 0x217654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217650u;
    // 0x217654: 0x2484d0a0  addiu       $a0, $a0, -0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217650u, 0x217658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217658u;
label_217658:
    // 0x217658: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x217658u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21765c: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x21765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x217660: 0x2610d0c0  addiu       $s0, $s0, -0x2F40
    ctx->pc = 0x217660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955200));
    // 0x217664: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217664u;
    SET_GPR_U32(ctx, 31, 0x21766Cu);
    ctx->pc = 0x217668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217664u;
    // 0x217668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217664u, 0x21766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21766Cu;
label_21766c:
    // 0x21766c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21766cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217670: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x217670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x217674: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217674u;
    SET_GPR_U32(ctx, 31, 0x21767Cu);
    ctx->pc = 0x217678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217674u;
    // 0x217678: 0x2484d0e0  addiu       $a0, $a0, -0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217674u, 0x21767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21767Cu;
label_21767c:
    // 0x21767c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217680: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217680u;
    SET_GPR_U32(ctx, 31, 0x217688u);
    ctx->pc = 0x217684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217680u;
    // 0x217684: 0x240500de  addiu       $a1, $zero, 0xDE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217680u, 0x217688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217688u;
label_217688:
    // 0x217688: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21768c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x217690: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217690u;
    SET_GPR_U32(ctx, 31, 0x217698u);
    ctx->pc = 0x217694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217690u;
    // 0x217694: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217690u, 0x217698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217698u;
label_217698:
    // 0x217698: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21769c: 0x240500eb  addiu       $a1, $zero, 0xEB
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x2176a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2176A0u;
    SET_GPR_U32(ctx, 31, 0x2176A8u);
    ctx->pc = 0x2176A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176A0u;
    // 0x2176a4: 0x2484d120  addiu       $a0, $a0, -0x2EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2176A0u, 0x2176A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176A8u;
label_2176a8:
    // 0x2176a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2176ac: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x2176acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2176b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2176B0u;
    SET_GPR_U32(ctx, 31, 0x2176B8u);
    ctx->pc = 0x2176B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176B0u;
    // 0x2176b4: 0x2484d140  addiu       $a0, $a0, -0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2176B0u, 0x2176B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176B8u;
label_2176b8:
    // 0x2176b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2176b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2176bc: 0x2405010c  addiu       $a1, $zero, 0x10C
    ctx->pc = 0x2176bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2176c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2176C0u;
    SET_GPR_U32(ctx, 31, 0x2176C8u);
    ctx->pc = 0x2176C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176C0u;
    // 0x2176c4: 0x2484d160  addiu       $a0, $a0, -0x2EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2176C0u, 0x2176C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176C8u;
label_2176c8:
    // 0x2176c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2176c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2176cc: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x2176ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2176d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2176D0u;
    SET_GPR_U32(ctx, 31, 0x2176D8u);
    ctx->pc = 0x2176D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176D0u;
    // 0x2176d4: 0x2484d180  addiu       $a0, $a0, -0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2176D0u, 0x2176D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176D8u;
label_2176d8:
    // 0x2176d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2176d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2176dc: 0x24050117  addiu       $a1, $zero, 0x117
    ctx->pc = 0x2176dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x2176e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2176E0u;
    SET_GPR_U32(ctx, 31, 0x2176E8u);
    ctx->pc = 0x2176E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176E0u;
    // 0x2176e4: 0x2484d1a0  addiu       $a0, $a0, -0x2E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2176E0u, 0x2176E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176E8u;
label_2176e8:
    // 0x2176e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2176e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2176ec: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x2176ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x2176f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2176F0u;
    SET_GPR_U32(ctx, 31, 0x2176F8u);
    ctx->pc = 0x2176F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176F0u;
    // 0x2176f4: 0x2484d1c0  addiu       $a0, $a0, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2176F0u, 0x2176F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176F8u;
label_2176f8:
    // 0x2176f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2176f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2176fc: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x217700: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217700u;
    SET_GPR_U32(ctx, 31, 0x217708u);
    ctx->pc = 0x217704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217700u;
    // 0x217704: 0x2484d1e0  addiu       $a0, $a0, -0x2E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217700u, 0x217708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217708u;
label_217708:
    // 0x217708: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21770c: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x21770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x217710: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217710u;
    SET_GPR_U32(ctx, 31, 0x217718u);
    ctx->pc = 0x217714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217710u;
    // 0x217714: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217710u, 0x217718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217718u;
label_217718:
    // 0x217718: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21771c: 0x24050143  addiu       $a1, $zero, 0x143
    ctx->pc = 0x21771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    // 0x217720: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217720u;
    SET_GPR_U32(ctx, 31, 0x217728u);
    ctx->pc = 0x217724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217720u;
    // 0x217724: 0x2484d220  addiu       $a0, $a0, -0x2DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217720u, 0x217728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217728u;
label_217728:
    // 0x217728: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21772c: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x21772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x217730: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217730u;
    SET_GPR_U32(ctx, 31, 0x217738u);
    ctx->pc = 0x217734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217730u;
    // 0x217734: 0x2484d240  addiu       $a0, $a0, -0x2DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217730u, 0x217738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217738u;
label_217738:
    // 0x217738: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21773c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x21773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x217740: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217740u;
    SET_GPR_U32(ctx, 31, 0x217748u);
    ctx->pc = 0x217744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217740u;
    // 0x217744: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217740u, 0x217748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217748u;
label_217748:
    // 0x217748: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21774c: 0x240500f7  addiu       $a1, $zero, 0xF7
    ctx->pc = 0x21774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x217750: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217750u;
    SET_GPR_U32(ctx, 31, 0x217758u);
    ctx->pc = 0x217754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217750u;
    // 0x217754: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217750u, 0x217758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217758u;
label_217758:
    // 0x217758: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21775c: 0x2405010d  addiu       $a1, $zero, 0x10D
    ctx->pc = 0x21775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    // 0x217760: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217760u;
    SET_GPR_U32(ctx, 31, 0x217768u);
    ctx->pc = 0x217764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217760u;
    // 0x217764: 0x2484d2a0  addiu       $a0, $a0, -0x2D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217760u, 0x217768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217768u;
label_217768:
    // 0x217768: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21776c: 0x24050102  addiu       $a1, $zero, 0x102
    ctx->pc = 0x21776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x217770: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217770u;
    SET_GPR_U32(ctx, 31, 0x217778u);
    ctx->pc = 0x217774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217770u;
    // 0x217774: 0x2484d2c0  addiu       $a0, $a0, -0x2D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217770u, 0x217778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217778u;
label_217778:
    // 0x217778: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21777c: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x21777cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x217780: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217780u;
    SET_GPR_U32(ctx, 31, 0x217788u);
    ctx->pc = 0x217784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217780u;
    // 0x217784: 0x2484d2e0  addiu       $a0, $a0, -0x2D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217780u, 0x217788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217788u;
label_217788:
    // 0x217788: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21778c: 0x24050123  addiu       $a1, $zero, 0x123
    ctx->pc = 0x21778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x217790: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217790u;
    SET_GPR_U32(ctx, 31, 0x217798u);
    ctx->pc = 0x217794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217790u;
    // 0x217794: 0x2484d300  addiu       $a0, $a0, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217790u, 0x217798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217798u;
label_217798:
    // 0x217798: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21779c: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x21779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x2177a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2177A0u;
    SET_GPR_U32(ctx, 31, 0x2177A8u);
    ctx->pc = 0x2177A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177A0u;
    // 0x2177a4: 0x2484d320  addiu       $a0, $a0, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2177A0u, 0x2177A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177A8u;
label_2177a8:
    // 0x2177a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2177a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2177ac: 0x24050139  addiu       $a1, $zero, 0x139
    ctx->pc = 0x2177acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    // 0x2177b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2177B0u;
    SET_GPR_U32(ctx, 31, 0x2177B8u);
    ctx->pc = 0x2177B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177B0u;
    // 0x2177b4: 0x2484d340  addiu       $a0, $a0, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2177B0u, 0x2177B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177B8u;
label_2177b8:
    // 0x2177b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2177b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2177bc: 0x24050144  addiu       $a1, $zero, 0x144
    ctx->pc = 0x2177bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x2177c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2177C0u;
    SET_GPR_U32(ctx, 31, 0x2177C8u);
    ctx->pc = 0x2177C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177C0u;
    // 0x2177c4: 0x2484d360  addiu       $a0, $a0, -0x2CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2177C0u, 0x2177C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177C8u;
label_2177c8:
    // 0x2177c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2177c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2177cc: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x2177ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x2177d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2177D0u;
    SET_GPR_U32(ctx, 31, 0x2177D8u);
    ctx->pc = 0x2177D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177D0u;
    // 0x2177d4: 0x2484d380  addiu       $a0, $a0, -0x2C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2177D0u, 0x2177D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177D8u;
label_2177d8:
    // 0x2177d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2177d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2177dc: 0x240500ef  addiu       $a1, $zero, 0xEF
    ctx->pc = 0x2177dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x2177e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2177E0u;
    SET_GPR_U32(ctx, 31, 0x2177E8u);
    ctx->pc = 0x2177E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177E0u;
    // 0x2177e4: 0x2484d3a0  addiu       $a0, $a0, -0x2C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2177E0u, 0x2177E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177E8u;
label_2177e8:
    // 0x2177e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2177e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2177ec: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x2177ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2177f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2177F0u;
    SET_GPR_U32(ctx, 31, 0x2177F8u);
    ctx->pc = 0x2177F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177F0u;
    // 0x2177f4: 0x2484d3c0  addiu       $a0, $a0, -0x2C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2177F0u, 0x2177F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177F8u;
label_2177f8:
    // 0x2177f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2177f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2177fc: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x2177fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x217800: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217800u;
    SET_GPR_U32(ctx, 31, 0x217808u);
    ctx->pc = 0x217804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217800u;
    // 0x217804: 0x2484d3e0  addiu       $a0, $a0, -0x2C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217800u, 0x217808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217808u;
label_217808:
    // 0x217808: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21780c: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x21780cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x217810: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217810u;
    SET_GPR_U32(ctx, 31, 0x217818u);
    ctx->pc = 0x217814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217810u;
    // 0x217814: 0x2484d400  addiu       $a0, $a0, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217810u, 0x217818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217818u;
label_217818:
    // 0x217818: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21781c: 0x2405011b  addiu       $a1, $zero, 0x11B
    ctx->pc = 0x21781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    // 0x217820: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217820u;
    SET_GPR_U32(ctx, 31, 0x217828u);
    ctx->pc = 0x217824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217820u;
    // 0x217824: 0x2484d420  addiu       $a0, $a0, -0x2BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217820u, 0x217828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217828u;
label_217828:
    // 0x217828: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21782c: 0x24050126  addiu       $a1, $zero, 0x126
    ctx->pc = 0x21782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x217830: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217830u;
    SET_GPR_U32(ctx, 31, 0x217838u);
    ctx->pc = 0x217834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217830u;
    // 0x217834: 0x2484d440  addiu       $a0, $a0, -0x2BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217830u, 0x217838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217838u;
label_217838:
    // 0x217838: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21783c: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x21783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x217840: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217840u;
    SET_GPR_U32(ctx, 31, 0x217848u);
    ctx->pc = 0x217844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217840u;
    // 0x217844: 0x2484d460  addiu       $a0, $a0, -0x2BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217840u, 0x217848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217848u;
label_217848:
    // 0x217848: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21784c: 0x2405013c  addiu       $a1, $zero, 0x13C
    ctx->pc = 0x21784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x217850: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217850u;
    SET_GPR_U32(ctx, 31, 0x217858u);
    ctx->pc = 0x217854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217850u;
    // 0x217854: 0x2484d480  addiu       $a0, $a0, -0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217850u, 0x217858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217858u;
label_217858:
    // 0x217858: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21785c: 0x24050147  addiu       $a1, $zero, 0x147
    ctx->pc = 0x21785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x217860: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217860u;
    SET_GPR_U32(ctx, 31, 0x217868u);
    ctx->pc = 0x217864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217860u;
    // 0x217864: 0x2484d4a0  addiu       $a0, $a0, -0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217860u, 0x217868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217868u;
label_217868:
    // 0x217868: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21786c: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x21786cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x217870: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217870u;
    SET_GPR_U32(ctx, 31, 0x217878u);
    ctx->pc = 0x217874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217870u;
    // 0x217874: 0x2484d4c0  addiu       $a0, $a0, -0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217870u, 0x217878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217878u;
label_217878:
    // 0x217878: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21787c: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x21787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x217880: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217880u;
    SET_GPR_U32(ctx, 31, 0x217888u);
    ctx->pc = 0x217884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217880u;
    // 0x217884: 0x2484d4e0  addiu       $a0, $a0, -0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217880u, 0x217888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217888u;
label_217888:
    // 0x217888: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21788c: 0x240500fb  addiu       $a1, $zero, 0xFB
    ctx->pc = 0x21788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x217890: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217890u;
    SET_GPR_U32(ctx, 31, 0x217898u);
    ctx->pc = 0x217894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217890u;
    // 0x217894: 0x2484d500  addiu       $a0, $a0, -0x2B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217890u, 0x217898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217898u;
label_217898:
    // 0x217898: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21789c: 0x24050111  addiu       $a1, $zero, 0x111
    ctx->pc = 0x21789cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x2178a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2178A0u;
    SET_GPR_U32(ctx, 31, 0x2178A8u);
    ctx->pc = 0x2178A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178A0u;
    // 0x2178a4: 0x2484d520  addiu       $a0, $a0, -0x2AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2178A0u, 0x2178A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178A8u;
label_2178a8:
    // 0x2178a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2178a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2178ac: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x2178acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x2178b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2178B0u;
    SET_GPR_U32(ctx, 31, 0x2178B8u);
    ctx->pc = 0x2178B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178B0u;
    // 0x2178b4: 0x2484d540  addiu       $a0, $a0, -0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2178B0u, 0x2178B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178B8u;
label_2178b8:
    // 0x2178b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2178b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2178bc: 0x2405011c  addiu       $a1, $zero, 0x11C
    ctx->pc = 0x2178bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x2178c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2178C0u;
    SET_GPR_U32(ctx, 31, 0x2178C8u);
    ctx->pc = 0x2178C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178C0u;
    // 0x2178c4: 0x2484d560  addiu       $a0, $a0, -0x2AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2178C0u, 0x2178C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178C8u;
label_2178c8:
    // 0x2178c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2178c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2178cc: 0x24050127  addiu       $a1, $zero, 0x127
    ctx->pc = 0x2178ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x2178d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2178D0u;
    SET_GPR_U32(ctx, 31, 0x2178D8u);
    ctx->pc = 0x2178D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178D0u;
    // 0x2178d4: 0x2484d580  addiu       $a0, $a0, -0x2A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2178D0u, 0x2178D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178D8u;
label_2178d8:
    // 0x2178d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2178d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2178dc: 0x24050132  addiu       $a1, $zero, 0x132
    ctx->pc = 0x2178dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x2178e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2178E0u;
    SET_GPR_U32(ctx, 31, 0x2178E8u);
    ctx->pc = 0x2178E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178E0u;
    // 0x2178e4: 0x2484d5a0  addiu       $a0, $a0, -0x2A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2178E0u, 0x2178E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178E8u;
label_2178e8:
    // 0x2178e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2178e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2178ec: 0x2405013d  addiu       $a1, $zero, 0x13D
    ctx->pc = 0x2178ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
    // 0x2178f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2178F0u;
    SET_GPR_U32(ctx, 31, 0x2178F8u);
    ctx->pc = 0x2178F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178F0u;
    // 0x2178f4: 0x2484d5c0  addiu       $a0, $a0, -0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2178F0u, 0x2178F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178F8u;
label_2178f8:
    // 0x2178f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2178f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2178fc: 0x24050148  addiu       $a1, $zero, 0x148
    ctx->pc = 0x2178fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x217900: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217900u;
    SET_GPR_U32(ctx, 31, 0x217908u);
    ctx->pc = 0x217904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217900u;
    // 0x217904: 0x2484d5e0  addiu       $a0, $a0, -0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217900u, 0x217908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217908u;
label_217908:
    // 0x217908: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21790c: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x21790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x217910: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217910u;
    SET_GPR_U32(ctx, 31, 0x217918u);
    ctx->pc = 0x217914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217910u;
    // 0x217914: 0x2484d600  addiu       $a0, $a0, -0x2A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217910u, 0x217918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217918u;
label_217918:
    // 0x217918: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21791c: 0x240500ed  addiu       $a1, $zero, 0xED
    ctx->pc = 0x21791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x217920: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217920u;
    SET_GPR_U32(ctx, 31, 0x217928u);
    ctx->pc = 0x217924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217920u;
    // 0x217924: 0x2484d620  addiu       $a0, $a0, -0x29E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217920u, 0x217928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217928u;
label_217928:
    // 0x217928: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21792c: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x21792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x217930: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217930u;
    SET_GPR_U32(ctx, 31, 0x217938u);
    ctx->pc = 0x217934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217930u;
    // 0x217934: 0x2484d640  addiu       $a0, $a0, -0x29C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217930u, 0x217938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217938u;
label_217938:
    // 0x217938: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21793c: 0x2405010e  addiu       $a1, $zero, 0x10E
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x217940: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217940u;
    SET_GPR_U32(ctx, 31, 0x217948u);
    ctx->pc = 0x217944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217940u;
    // 0x217944: 0x2484d660  addiu       $a0, $a0, -0x29A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217940u, 0x217948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217948u;
label_217948:
    // 0x217948: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21794c: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x21794cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x217950: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217950u;
    SET_GPR_U32(ctx, 31, 0x217958u);
    ctx->pc = 0x217954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217950u;
    // 0x217954: 0x2484d680  addiu       $a0, $a0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217950u, 0x217958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217958u;
label_217958:
    // 0x217958: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21795c: 0x24050119  addiu       $a1, $zero, 0x119
    ctx->pc = 0x21795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x217960: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217960u;
    SET_GPR_U32(ctx, 31, 0x217968u);
    ctx->pc = 0x217964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217960u;
    // 0x217964: 0x2484d6a0  addiu       $a0, $a0, -0x2960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217960u, 0x217968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217968u;
label_217968:
    // 0x217968: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21796c: 0x24050124  addiu       $a1, $zero, 0x124
    ctx->pc = 0x21796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x217970: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217970u;
    SET_GPR_U32(ctx, 31, 0x217978u);
    ctx->pc = 0x217974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217970u;
    // 0x217974: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217970u, 0x217978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217978u;
label_217978:
    // 0x217978: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21797c: 0x2405012f  addiu       $a1, $zero, 0x12F
    ctx->pc = 0x21797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x217980: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217980u;
    SET_GPR_U32(ctx, 31, 0x217988u);
    ctx->pc = 0x217984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217980u;
    // 0x217984: 0x2484d6e0  addiu       $a0, $a0, -0x2920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217980u, 0x217988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217988u;
label_217988:
    // 0x217988: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21798c: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x21798cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x217990: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217990u;
    SET_GPR_U32(ctx, 31, 0x217998u);
    ctx->pc = 0x217994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217990u;
    // 0x217994: 0x2484d700  addiu       $a0, $a0, -0x2900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217990u, 0x217998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217998u;
label_217998:
    // 0x217998: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21799c: 0x24050145  addiu       $a1, $zero, 0x145
    ctx->pc = 0x21799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x2179a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2179A0u;
    SET_GPR_U32(ctx, 31, 0x2179A8u);
    ctx->pc = 0x2179A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179A0u;
    // 0x2179a4: 0x2484d720  addiu       $a0, $a0, -0x28E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2179A0u, 0x2179A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179A8u;
label_2179a8:
    // 0x2179a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2179a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2179ac: 0x24050151  addiu       $a1, $zero, 0x151
    ctx->pc = 0x2179acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x2179b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2179B0u;
    SET_GPR_U32(ctx, 31, 0x2179B8u);
    ctx->pc = 0x2179B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179B0u;
    // 0x2179b4: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2179B0u, 0x2179B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179B8u;
label_2179b8:
    // 0x2179b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2179b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2179bc: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x2179bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2179c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2179C0u;
    SET_GPR_U32(ctx, 31, 0x2179C8u);
    ctx->pc = 0x2179C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179C0u;
    // 0x2179c4: 0x2484d760  addiu       $a0, $a0, -0x28A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2179C0u, 0x2179C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179C8u;
label_2179c8:
    // 0x2179c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2179c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2179cc: 0x24050167  addiu       $a1, $zero, 0x167
    ctx->pc = 0x2179ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
    // 0x2179d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2179D0u;
    SET_GPR_U32(ctx, 31, 0x2179D8u);
    ctx->pc = 0x2179D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179D0u;
    // 0x2179d4: 0x2484d780  addiu       $a0, $a0, -0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2179D0u, 0x2179D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179D8u;
label_2179d8:
    // 0x2179d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2179d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2179dc: 0x2405017d  addiu       $a1, $zero, 0x17D
    ctx->pc = 0x2179dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x2179e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2179E0u;
    SET_GPR_U32(ctx, 31, 0x2179E8u);
    ctx->pc = 0x2179E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179E0u;
    // 0x2179e4: 0x2484d7a0  addiu       $a0, $a0, -0x2860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2179E0u, 0x2179E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179E8u;
label_2179e8:
    // 0x2179e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2179e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2179ec: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x2179ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x2179f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2179F0u;
    SET_GPR_U32(ctx, 31, 0x2179F8u);
    ctx->pc = 0x2179F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179F0u;
    // 0x2179f4: 0x2484d7c0  addiu       $a0, $a0, -0x2840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2179F0u, 0x2179F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179F8u;
label_2179f8:
    // 0x2179f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2179f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2179fc: 0x24050188  addiu       $a1, $zero, 0x188
    ctx->pc = 0x2179fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x217a00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A00u;
    SET_GPR_U32(ctx, 31, 0x217A08u);
    ctx->pc = 0x217A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A00u;
    // 0x217a04: 0x2484d7e0  addiu       $a0, $a0, -0x2820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A00u, 0x217A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A08u;
label_217a08:
    // 0x217a08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a0c: 0x24050193  addiu       $a1, $zero, 0x193
    ctx->pc = 0x217a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
    // 0x217a10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A10u;
    SET_GPR_U32(ctx, 31, 0x217A18u);
    ctx->pc = 0x217A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A10u;
    // 0x217a14: 0x2484d800  addiu       $a0, $a0, -0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A10u, 0x217A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A18u;
label_217a18:
    // 0x217a18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a1c: 0x2405019e  addiu       $a1, $zero, 0x19E
    ctx->pc = 0x217a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
    // 0x217a20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A20u;
    SET_GPR_U32(ctx, 31, 0x217A28u);
    ctx->pc = 0x217A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A20u;
    // 0x217a24: 0x2484d820  addiu       $a0, $a0, -0x27E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A20u, 0x217A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A28u;
label_217a28:
    // 0x217a28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a2c: 0x240501a9  addiu       $a1, $zero, 0x1A9
    ctx->pc = 0x217a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x217a30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A30u;
    SET_GPR_U32(ctx, 31, 0x217A38u);
    ctx->pc = 0x217A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A30u;
    // 0x217a34: 0x2484d840  addiu       $a0, $a0, -0x27C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A30u, 0x217A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A38u;
label_217a38:
    // 0x217a38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a3c: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x217a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x217a40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A40u;
    SET_GPR_U32(ctx, 31, 0x217A48u);
    ctx->pc = 0x217A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A40u;
    // 0x217a44: 0x2484d860  addiu       $a0, $a0, -0x27A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A40u, 0x217A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A48u;
label_217a48:
    // 0x217a48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a4c: 0x240500e3  addiu       $a1, $zero, 0xE3
    ctx->pc = 0x217a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x217a50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A50u;
    SET_GPR_U32(ctx, 31, 0x217A58u);
    ctx->pc = 0x217A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A50u;
    // 0x217a54: 0x2484d880  addiu       $a0, $a0, -0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A50u, 0x217A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A58u;
label_217a58:
    // 0x217a58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a5c: 0x240500ee  addiu       $a1, $zero, 0xEE
    ctx->pc = 0x217a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x217a60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A60u;
    SET_GPR_U32(ctx, 31, 0x217A68u);
    ctx->pc = 0x217A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A60u;
    // 0x217a64: 0x2484d8a0  addiu       $a0, $a0, -0x2760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A60u, 0x217A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A68u;
label_217a68:
    // 0x217a68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a6c: 0x240500f9  addiu       $a1, $zero, 0xF9
    ctx->pc = 0x217a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x217a70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A70u;
    SET_GPR_U32(ctx, 31, 0x217A78u);
    ctx->pc = 0x217A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A70u;
    // 0x217a74: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A70u, 0x217A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A78u;
label_217a78:
    // 0x217a78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a7c: 0x2405010f  addiu       $a1, $zero, 0x10F
    ctx->pc = 0x217a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x217a80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A80u;
    SET_GPR_U32(ctx, 31, 0x217A88u);
    ctx->pc = 0x217A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A80u;
    // 0x217a84: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A80u, 0x217A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A88u;
label_217a88:
    // 0x217a88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a8c: 0x24050104  addiu       $a1, $zero, 0x104
    ctx->pc = 0x217a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x217a90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217A90u;
    SET_GPR_U32(ctx, 31, 0x217A98u);
    ctx->pc = 0x217A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A90u;
    // 0x217a94: 0x2484d900  addiu       $a0, $a0, -0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217A90u, 0x217A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A98u;
label_217a98:
    // 0x217a98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217a9c: 0x2405011a  addiu       $a1, $zero, 0x11A
    ctx->pc = 0x217a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    // 0x217aa0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217AA0u;
    SET_GPR_U32(ctx, 31, 0x217AA8u);
    ctx->pc = 0x217AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AA0u;
    // 0x217aa4: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217AA0u, 0x217AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AA8u;
label_217aa8:
    // 0x217aa8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217aac: 0x24050125  addiu       $a1, $zero, 0x125
    ctx->pc = 0x217aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x217ab0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217AB0u;
    SET_GPR_U32(ctx, 31, 0x217AB8u);
    ctx->pc = 0x217AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AB0u;
    // 0x217ab4: 0x2484d940  addiu       $a0, $a0, -0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217AB0u, 0x217AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AB8u;
label_217ab8:
    // 0x217ab8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217abc: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x217abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x217ac0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217AC0u;
    SET_GPR_U32(ctx, 31, 0x217AC8u);
    ctx->pc = 0x217AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AC0u;
    // 0x217ac4: 0x2484d960  addiu       $a0, $a0, -0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217AC0u, 0x217AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AC8u;
label_217ac8:
    // 0x217ac8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217acc: 0x2405013b  addiu       $a1, $zero, 0x13B
    ctx->pc = 0x217accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
    // 0x217ad0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217AD0u;
    SET_GPR_U32(ctx, 31, 0x217AD8u);
    ctx->pc = 0x217AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AD0u;
    // 0x217ad4: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217AD0u, 0x217AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AD8u;
label_217ad8:
    // 0x217ad8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217adc: 0x24050146  addiu       $a1, $zero, 0x146
    ctx->pc = 0x217adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    // 0x217ae0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217AE0u;
    SET_GPR_U32(ctx, 31, 0x217AE8u);
    ctx->pc = 0x217AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AE0u;
    // 0x217ae4: 0x2484d9a0  addiu       $a0, $a0, -0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217AE0u, 0x217AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AE8u;
label_217ae8:
    // 0x217ae8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217aec: 0x240500e6  addiu       $a1, $zero, 0xE6
    ctx->pc = 0x217aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x217af0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217AF0u;
    SET_GPR_U32(ctx, 31, 0x217AF8u);
    ctx->pc = 0x217AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AF0u;
    // 0x217af4: 0x2484d9c0  addiu       $a0, $a0, -0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217AF0u, 0x217AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AF8u;
label_217af8:
    // 0x217af8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217afc: 0x240500f1  addiu       $a1, $zero, 0xF1
    ctx->pc = 0x217afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x217b00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B00u;
    SET_GPR_U32(ctx, 31, 0x217B08u);
    ctx->pc = 0x217B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B00u;
    // 0x217b04: 0x2484d9e0  addiu       $a0, $a0, -0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B00u, 0x217B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B08u;
label_217b08:
    // 0x217b08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b0c: 0x240500fc  addiu       $a1, $zero, 0xFC
    ctx->pc = 0x217b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x217b10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B10u;
    SET_GPR_U32(ctx, 31, 0x217B18u);
    ctx->pc = 0x217B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B10u;
    // 0x217b14: 0x2484da00  addiu       $a0, $a0, -0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B10u, 0x217B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B18u;
label_217b18:
    // 0x217b18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b1c: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x217b20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B20u;
    SET_GPR_U32(ctx, 31, 0x217B28u);
    ctx->pc = 0x217B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B20u;
    // 0x217b24: 0x2484da20  addiu       $a0, $a0, -0x25E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B20u, 0x217B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B28u;
label_217b28:
    // 0x217b28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b2c: 0x24050107  addiu       $a1, $zero, 0x107
    ctx->pc = 0x217b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x217b30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B30u;
    SET_GPR_U32(ctx, 31, 0x217B38u);
    ctx->pc = 0x217B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B30u;
    // 0x217b34: 0x2484da40  addiu       $a0, $a0, -0x25C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B30u, 0x217B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B38u;
label_217b38:
    // 0x217b38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b3c: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x217b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x217b40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B40u;
    SET_GPR_U32(ctx, 31, 0x217B48u);
    ctx->pc = 0x217B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B40u;
    // 0x217b44: 0x2484da60  addiu       $a0, $a0, -0x25A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B40u, 0x217B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B48u;
label_217b48:
    // 0x217b48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b4c: 0x24050128  addiu       $a1, $zero, 0x128
    ctx->pc = 0x217b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x217b50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B50u;
    SET_GPR_U32(ctx, 31, 0x217B58u);
    ctx->pc = 0x217B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B50u;
    // 0x217b54: 0x2484da80  addiu       $a0, $a0, -0x2580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B50u, 0x217B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B58u;
label_217b58:
    // 0x217b58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b5c: 0x24050133  addiu       $a1, $zero, 0x133
    ctx->pc = 0x217b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
    // 0x217b60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B60u;
    SET_GPR_U32(ctx, 31, 0x217B68u);
    ctx->pc = 0x217B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B60u;
    // 0x217b64: 0x2484daa0  addiu       $a0, $a0, -0x2560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B60u, 0x217B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B68u;
label_217b68:
    // 0x217b68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b6c: 0x2405013e  addiu       $a1, $zero, 0x13E
    ctx->pc = 0x217b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x217b70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B70u;
    SET_GPR_U32(ctx, 31, 0x217B78u);
    ctx->pc = 0x217B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B70u;
    // 0x217b74: 0x2484dac0  addiu       $a0, $a0, -0x2540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B70u, 0x217B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B78u;
label_217b78:
    // 0x217b78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b7c: 0x24050149  addiu       $a1, $zero, 0x149
    ctx->pc = 0x217b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x217b80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B80u;
    SET_GPR_U32(ctx, 31, 0x217B88u);
    ctx->pc = 0x217B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B80u;
    // 0x217b84: 0x2484dae0  addiu       $a0, $a0, -0x2520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B80u, 0x217B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B88u;
label_217b88:
    // 0x217b88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b8c: 0x240500e7  addiu       $a1, $zero, 0xE7
    ctx->pc = 0x217b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x217b90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217B90u;
    SET_GPR_U32(ctx, 31, 0x217B98u);
    ctx->pc = 0x217B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B90u;
    // 0x217b94: 0x2484db00  addiu       $a0, $a0, -0x2500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217B90u, 0x217B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B98u;
label_217b98:
    // 0x217b98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217b9c: 0x240500f2  addiu       $a1, $zero, 0xF2
    ctx->pc = 0x217b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x217ba0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217BA0u;
    SET_GPR_U32(ctx, 31, 0x217BA8u);
    ctx->pc = 0x217BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BA0u;
    // 0x217ba4: 0x2484db20  addiu       $a0, $a0, -0x24E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217BA0u, 0x217BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BA8u;
label_217ba8:
    // 0x217ba8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217bac: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x217bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x217bb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217BB0u;
    SET_GPR_U32(ctx, 31, 0x217BB8u);
    ctx->pc = 0x217BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BB0u;
    // 0x217bb4: 0x2484db40  addiu       $a0, $a0, -0x24C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217BB0u, 0x217BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BB8u;
label_217bb8:
    // 0x217bb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217bbc: 0x24050113  addiu       $a1, $zero, 0x113
    ctx->pc = 0x217bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x217bc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217BC0u;
    SET_GPR_U32(ctx, 31, 0x217BC8u);
    ctx->pc = 0x217BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BC0u;
    // 0x217bc4: 0x2484db60  addiu       $a0, $a0, -0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217BC0u, 0x217BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BC8u;
label_217bc8:
    // 0x217bc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217bcc: 0x24050108  addiu       $a1, $zero, 0x108
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x217bd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217BD0u;
    SET_GPR_U32(ctx, 31, 0x217BD8u);
    ctx->pc = 0x217BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BD0u;
    // 0x217bd4: 0x2484db80  addiu       $a0, $a0, -0x2480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217BD0u, 0x217BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BD8u;
label_217bd8:
    // 0x217bd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217bdc: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x217bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x217be0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217BE0u;
    SET_GPR_U32(ctx, 31, 0x217BE8u);
    ctx->pc = 0x217BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BE0u;
    // 0x217be4: 0x2484dba0  addiu       $a0, $a0, -0x2460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217BE0u, 0x217BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BE8u;
label_217be8:
    // 0x217be8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217bec: 0x24050129  addiu       $a1, $zero, 0x129
    ctx->pc = 0x217becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
    // 0x217bf0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217BF0u;
    SET_GPR_U32(ctx, 31, 0x217BF8u);
    ctx->pc = 0x217BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF0u;
    // 0x217bf4: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217BF0u, 0x217BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BF8u;
label_217bf8:
    // 0x217bf8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217bfc: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x217bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x217c00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C00u;
    SET_GPR_U32(ctx, 31, 0x217C08u);
    ctx->pc = 0x217C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C00u;
    // 0x217c04: 0x2484dbe0  addiu       $a0, $a0, -0x2420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C00u, 0x217C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C08u;
label_217c08:
    // 0x217c08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c0c: 0x2405013f  addiu       $a1, $zero, 0x13F
    ctx->pc = 0x217c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
    // 0x217c10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C10u;
    SET_GPR_U32(ctx, 31, 0x217C18u);
    ctx->pc = 0x217C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C10u;
    // 0x217c14: 0x2484dc00  addiu       $a0, $a0, -0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C10u, 0x217C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C18u;
label_217c18:
    // 0x217c18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c1c: 0x2405014a  addiu       $a1, $zero, 0x14A
    ctx->pc = 0x217c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x217c20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C20u;
    SET_GPR_U32(ctx, 31, 0x217C28u);
    ctx->pc = 0x217C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C20u;
    // 0x217c24: 0x2484dc20  addiu       $a0, $a0, -0x23E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C20u, 0x217C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C28u;
label_217c28:
    // 0x217c28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c2c: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x217c30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C30u;
    SET_GPR_U32(ctx, 31, 0x217C38u);
    ctx->pc = 0x217C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C30u;
    // 0x217c34: 0x2484a4e0  addiu       $a0, $a0, -0x5B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C30u, 0x217C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C38u;
label_217c38:
    // 0x217c38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c3c: 0x240500ea  addiu       $a1, $zero, 0xEA
    ctx->pc = 0x217c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x217c40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C40u;
    SET_GPR_U32(ctx, 31, 0x217C48u);
    ctx->pc = 0x217C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C40u;
    // 0x217c44: 0x2484dc40  addiu       $a0, $a0, -0x23C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C40u, 0x217C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C48u;
label_217c48:
    // 0x217c48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c4c: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x217c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x217c50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C50u;
    SET_GPR_U32(ctx, 31, 0x217C58u);
    ctx->pc = 0x217C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C50u;
    // 0x217c54: 0x2484dc60  addiu       $a0, $a0, -0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C50u, 0x217C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C58u;
label_217c58:
    // 0x217c58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c5c: 0x2405010b  addiu       $a1, $zero, 0x10B
    ctx->pc = 0x217c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x217c60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C60u;
    SET_GPR_U32(ctx, 31, 0x217C68u);
    ctx->pc = 0x217C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C60u;
    // 0x217c64: 0x2484dc80  addiu       $a0, $a0, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C60u, 0x217C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C68u;
label_217c68:
    // 0x217c68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c6c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x217c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x217c70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C70u;
    SET_GPR_U32(ctx, 31, 0x217C78u);
    ctx->pc = 0x217C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C70u;
    // 0x217c74: 0x2484dca0  addiu       $a0, $a0, -0x2360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C70u, 0x217C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C78u;
label_217c78:
    // 0x217c78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c7c: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x217c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x217c80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C80u;
    SET_GPR_U32(ctx, 31, 0x217C88u);
    ctx->pc = 0x217C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C80u;
    // 0x217c84: 0x2484dcc0  addiu       $a0, $a0, -0x2340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C80u, 0x217C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C88u;
label_217c88:
    // 0x217c88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c8c: 0x24050121  addiu       $a1, $zero, 0x121
    ctx->pc = 0x217c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
    // 0x217c90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217C90u;
    SET_GPR_U32(ctx, 31, 0x217C98u);
    ctx->pc = 0x217C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C90u;
    // 0x217c94: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217C90u, 0x217C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C98u;
label_217c98:
    // 0x217c98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217c9c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x217c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x217ca0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217CA0u;
    SET_GPR_U32(ctx, 31, 0x217CA8u);
    ctx->pc = 0x217CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CA0u;
    // 0x217ca4: 0x2484dd00  addiu       $a0, $a0, -0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217CA0u, 0x217CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CA8u;
label_217ca8:
    // 0x217ca8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217cac: 0x24050137  addiu       $a1, $zero, 0x137
    ctx->pc = 0x217cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x217cb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217CB0u;
    SET_GPR_U32(ctx, 31, 0x217CB8u);
    ctx->pc = 0x217CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CB0u;
    // 0x217cb4: 0x2484dd20  addiu       $a0, $a0, -0x22E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217CB0u, 0x217CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CB8u;
label_217cb8:
    // 0x217cb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217cbc: 0x24050142  addiu       $a1, $zero, 0x142
    ctx->pc = 0x217cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x217cc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217CC0u;
    SET_GPR_U32(ctx, 31, 0x217CC8u);
    ctx->pc = 0x217CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CC0u;
    // 0x217cc4: 0x2484dd40  addiu       $a0, $a0, -0x22C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217CC0u, 0x217CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CC8u;
label_217cc8:
    // 0x217cc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217ccc: 0x2405014d  addiu       $a1, $zero, 0x14D
    ctx->pc = 0x217cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x217cd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217CD0u;
    SET_GPR_U32(ctx, 31, 0x217CD8u);
    ctx->pc = 0x217CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CD0u;
    // 0x217cd4: 0x2484dd60  addiu       $a0, $a0, -0x22A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217CD0u, 0x217CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CD8u;
label_217cd8:
    // 0x217cd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217cdc: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x217cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x217ce0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217CE0u;
    SET_GPR_U32(ctx, 31, 0x217CE8u);
    ctx->pc = 0x217CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CE0u;
    // 0x217ce4: 0x2484dd80  addiu       $a0, $a0, -0x2280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217CE0u, 0x217CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CE8u;
label_217ce8:
    // 0x217ce8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217cec: 0x24050163  addiu       $a1, $zero, 0x163
    ctx->pc = 0x217cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
    // 0x217cf0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217CF0u;
    SET_GPR_U32(ctx, 31, 0x217CF8u);
    ctx->pc = 0x217CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CF0u;
    // 0x217cf4: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217CF0u, 0x217CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CF8u;
label_217cf8:
    // 0x217cf8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217cfc: 0x24050179  addiu       $a1, $zero, 0x179
    ctx->pc = 0x217cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 377));
    // 0x217d00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D00u;
    SET_GPR_U32(ctx, 31, 0x217D08u);
    ctx->pc = 0x217D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D00u;
    // 0x217d04: 0x2484ddc8  addiu       $a0, $a0, -0x2238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D00u, 0x217D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D08u;
label_217d08:
    // 0x217d08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d0c: 0x2405016e  addiu       $a1, $zero, 0x16E
    ctx->pc = 0x217d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    // 0x217d10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D10u;
    SET_GPR_U32(ctx, 31, 0x217D18u);
    ctx->pc = 0x217D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D10u;
    // 0x217d14: 0x2484dde8  addiu       $a0, $a0, -0x2218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D10u, 0x217D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D18u;
label_217d18:
    // 0x217d18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d1c: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x217d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x217d20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D20u;
    SET_GPR_U32(ctx, 31, 0x217D28u);
    ctx->pc = 0x217D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D20u;
    // 0x217d24: 0x2484de10  addiu       $a0, $a0, -0x21F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D20u, 0x217D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D28u;
label_217d28:
    // 0x217d28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d2c: 0x2405018f  addiu       $a1, $zero, 0x18F
    ctx->pc = 0x217d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x217d30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D30u;
    SET_GPR_U32(ctx, 31, 0x217D38u);
    ctx->pc = 0x217D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D30u;
    // 0x217d34: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D30u, 0x217D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D38u;
label_217d38:
    // 0x217d38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d3c: 0x2405019a  addiu       $a1, $zero, 0x19A
    ctx->pc = 0x217d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
    // 0x217d40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D40u;
    SET_GPR_U32(ctx, 31, 0x217D48u);
    ctx->pc = 0x217D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D40u;
    // 0x217d44: 0x2484de60  addiu       $a0, $a0, -0x21A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D40u, 0x217D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D48u;
label_217d48:
    // 0x217d48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d4c: 0x240501a5  addiu       $a1, $zero, 0x1A5
    ctx->pc = 0x217d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
    // 0x217d50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D50u;
    SET_GPR_U32(ctx, 31, 0x217D58u);
    ctx->pc = 0x217D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D50u;
    // 0x217d54: 0x2484de88  addiu       $a0, $a0, -0x2178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D50u, 0x217D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D58u;
label_217d58:
    // 0x217d58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d5c: 0x240501b0  addiu       $a1, $zero, 0x1B0
    ctx->pc = 0x217d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x217d60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D60u;
    SET_GPR_U32(ctx, 31, 0x217D68u);
    ctx->pc = 0x217D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D60u;
    // 0x217d64: 0x2484deb0  addiu       $a0, $a0, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D60u, 0x217D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D68u;
label_217d68:
    // 0x217d68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d6c: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x217d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x217d70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D70u;
    SET_GPR_U32(ctx, 31, 0x217D78u);
    ctx->pc = 0x217D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D70u;
    // 0x217d74: 0x2484ded8  addiu       $a0, $a0, -0x2128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D70u, 0x217D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D78u;
label_217d78:
    // 0x217d78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d7c: 0x24050159  addiu       $a1, $zero, 0x159
    ctx->pc = 0x217d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
    // 0x217d80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D80u;
    SET_GPR_U32(ctx, 31, 0x217D88u);
    ctx->pc = 0x217D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D80u;
    // 0x217d84: 0x2484def8  addiu       $a0, $a0, -0x2108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D80u, 0x217D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D88u;
label_217d88:
    // 0x217d88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d8c: 0x24050164  addiu       $a1, $zero, 0x164
    ctx->pc = 0x217d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x217d90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217D90u;
    SET_GPR_U32(ctx, 31, 0x217D98u);
    ctx->pc = 0x217D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D90u;
    // 0x217d94: 0x2484df18  addiu       $a0, $a0, -0x20E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217D90u, 0x217D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D98u;
label_217d98:
    // 0x217d98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217d9c: 0x2405017a  addiu       $a1, $zero, 0x17A
    ctx->pc = 0x217d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 378));
    // 0x217da0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217DA0u;
    SET_GPR_U32(ctx, 31, 0x217DA8u);
    ctx->pc = 0x217DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DA0u;
    // 0x217da4: 0x2484df38  addiu       $a0, $a0, -0x20C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217DA0u, 0x217DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DA8u;
label_217da8:
    // 0x217da8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217dac: 0x2405016f  addiu       $a1, $zero, 0x16F
    ctx->pc = 0x217dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
    // 0x217db0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217DB0u;
    SET_GPR_U32(ctx, 31, 0x217DB8u);
    ctx->pc = 0x217DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DB0u;
    // 0x217db4: 0x2484df58  addiu       $a0, $a0, -0x20A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217DB0u, 0x217DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DB8u;
label_217db8:
    // 0x217db8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217dbc: 0x24050185  addiu       $a1, $zero, 0x185
    ctx->pc = 0x217dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x217dc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217DC0u;
    SET_GPR_U32(ctx, 31, 0x217DC8u);
    ctx->pc = 0x217DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DC0u;
    // 0x217dc4: 0x2484df78  addiu       $a0, $a0, -0x2088 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217DC0u, 0x217DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DC8u;
label_217dc8:
    // 0x217dc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217dcc: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x217dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x217dd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217DD0u;
    SET_GPR_U32(ctx, 31, 0x217DD8u);
    ctx->pc = 0x217DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DD0u;
    // 0x217dd4: 0x2484df98  addiu       $a0, $a0, -0x2068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217DD0u, 0x217DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DD8u;
label_217dd8:
    // 0x217dd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217ddc: 0x2405019b  addiu       $a1, $zero, 0x19B
    ctx->pc = 0x217ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    // 0x217de0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217DE0u;
    SET_GPR_U32(ctx, 31, 0x217DE8u);
    ctx->pc = 0x217DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DE0u;
    // 0x217de4: 0x2484dfb8  addiu       $a0, $a0, -0x2048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217DE0u, 0x217DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DE8u;
label_217de8:
    // 0x217de8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217dec: 0x240501a6  addiu       $a1, $zero, 0x1A6
    ctx->pc = 0x217decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x217df0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217DF0u;
    SET_GPR_U32(ctx, 31, 0x217DF8u);
    ctx->pc = 0x217DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DF0u;
    // 0x217df4: 0x2484dfd8  addiu       $a0, $a0, -0x2028 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217DF0u, 0x217DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DF8u;
label_217df8:
    // 0x217df8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217dfc: 0x240501b1  addiu       $a1, $zero, 0x1B1
    ctx->pc = 0x217dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 433));
    // 0x217e00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E00u;
    SET_GPR_U32(ctx, 31, 0x217E08u);
    ctx->pc = 0x217E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E00u;
    // 0x217e04: 0x2484dff8  addiu       $a0, $a0, -0x2008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E00u, 0x217E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E08u;
label_217e08:
    // 0x217e08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e0c: 0x2405014f  addiu       $a1, $zero, 0x14F
    ctx->pc = 0x217e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x217e10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E10u;
    SET_GPR_U32(ctx, 31, 0x217E18u);
    ctx->pc = 0x217E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E10u;
    // 0x217e14: 0x2484e018  addiu       $a0, $a0, -0x1FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E10u, 0x217E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E18u;
label_217e18:
    // 0x217e18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e1c: 0x2405015a  addiu       $a1, $zero, 0x15A
    ctx->pc = 0x217e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
    // 0x217e20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E20u;
    SET_GPR_U32(ctx, 31, 0x217E28u);
    ctx->pc = 0x217E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E20u;
    // 0x217e24: 0x2484e038  addiu       $a0, $a0, -0x1FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E20u, 0x217E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E28u;
label_217e28:
    // 0x217e28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e2c: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x217e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x217e30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E30u;
    SET_GPR_U32(ctx, 31, 0x217E38u);
    ctx->pc = 0x217E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E30u;
    // 0x217e34: 0x2484e058  addiu       $a0, $a0, -0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E30u, 0x217E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E38u;
label_217e38:
    // 0x217e38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e3c: 0x2405017b  addiu       $a1, $zero, 0x17B
    ctx->pc = 0x217e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 379));
    // 0x217e40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E40u;
    SET_GPR_U32(ctx, 31, 0x217E48u);
    ctx->pc = 0x217E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E40u;
    // 0x217e44: 0x2484e078  addiu       $a0, $a0, -0x1F88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E40u, 0x217E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E48u;
label_217e48:
    // 0x217e48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e4c: 0x24050170  addiu       $a1, $zero, 0x170
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x217e50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E50u;
    SET_GPR_U32(ctx, 31, 0x217E58u);
    ctx->pc = 0x217E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E50u;
    // 0x217e54: 0x2484e098  addiu       $a0, $a0, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E50u, 0x217E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E58u;
label_217e58:
    // 0x217e58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e5c: 0x24050186  addiu       $a1, $zero, 0x186
    ctx->pc = 0x217e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x217e60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E60u;
    SET_GPR_U32(ctx, 31, 0x217E68u);
    ctx->pc = 0x217E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E60u;
    // 0x217e64: 0x2484e0b8  addiu       $a0, $a0, -0x1F48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E60u, 0x217E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E68u;
label_217e68:
    // 0x217e68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e6c: 0x24050191  addiu       $a1, $zero, 0x191
    ctx->pc = 0x217e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
    // 0x217e70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E70u;
    SET_GPR_U32(ctx, 31, 0x217E78u);
    ctx->pc = 0x217E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E70u;
    // 0x217e74: 0x2484e0d8  addiu       $a0, $a0, -0x1F28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E70u, 0x217E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E78u;
label_217e78:
    // 0x217e78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e7c: 0x2405019c  addiu       $a1, $zero, 0x19C
    ctx->pc = 0x217e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
    // 0x217e80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E80u;
    SET_GPR_U32(ctx, 31, 0x217E88u);
    ctx->pc = 0x217E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E80u;
    // 0x217e84: 0x2484e0f8  addiu       $a0, $a0, -0x1F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E80u, 0x217E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E88u;
label_217e88:
    // 0x217e88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e8c: 0x240501a7  addiu       $a1, $zero, 0x1A7
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x217e90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217E90u;
    SET_GPR_U32(ctx, 31, 0x217E98u);
    ctx->pc = 0x217E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E90u;
    // 0x217e94: 0x2484e118  addiu       $a0, $a0, -0x1EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217E90u, 0x217E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E98u;
label_217e98:
    // 0x217e98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217e9c: 0x240501b2  addiu       $a1, $zero, 0x1B2
    ctx->pc = 0x217e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
    // 0x217ea0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217EA0u;
    SET_GPR_U32(ctx, 31, 0x217EA8u);
    ctx->pc = 0x217EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EA0u;
    // 0x217ea4: 0x2484e138  addiu       $a0, $a0, -0x1EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217EA0u, 0x217EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EA8u;
label_217ea8:
    // 0x217ea8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217eac: 0x24050152  addiu       $a1, $zero, 0x152
    ctx->pc = 0x217eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    // 0x217eb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217EB0u;
    SET_GPR_U32(ctx, 31, 0x217EB8u);
    ctx->pc = 0x217EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EB0u;
    // 0x217eb4: 0x2484e158  addiu       $a0, $a0, -0x1EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217EB0u, 0x217EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EB8u;
label_217eb8:
    // 0x217eb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217ebc: 0x2405015d  addiu       $a1, $zero, 0x15D
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
    // 0x217ec0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217EC0u;
    SET_GPR_U32(ctx, 31, 0x217EC8u);
    ctx->pc = 0x217EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EC0u;
    // 0x217ec4: 0x2484e178  addiu       $a0, $a0, -0x1E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217EC0u, 0x217EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EC8u;
label_217ec8:
    // 0x217ec8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217ecc: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x217ed0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217ED0u;
    SET_GPR_U32(ctx, 31, 0x217ED8u);
    ctx->pc = 0x217ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217ED0u;
    // 0x217ed4: 0x2484e198  addiu       $a0, $a0, -0x1E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217ED0u, 0x217ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217ED8u;
label_217ed8:
    // 0x217ed8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217edc: 0x2405017e  addiu       $a1, $zero, 0x17E
    ctx->pc = 0x217edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x217ee0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217EE0u;
    SET_GPR_U32(ctx, 31, 0x217EE8u);
    ctx->pc = 0x217EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EE0u;
    // 0x217ee4: 0x2484e1b8  addiu       $a0, $a0, -0x1E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217EE0u, 0x217EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EE8u;
label_217ee8:
    // 0x217ee8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217eec: 0x24050173  addiu       $a1, $zero, 0x173
    ctx->pc = 0x217eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x217ef0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217EF0u;
    SET_GPR_U32(ctx, 31, 0x217EF8u);
    ctx->pc = 0x217EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EF0u;
    // 0x217ef4: 0x2484e1d8  addiu       $a0, $a0, -0x1E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217EF0u, 0x217EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EF8u;
label_217ef8:
    // 0x217ef8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217efc: 0x24050189  addiu       $a1, $zero, 0x189
    ctx->pc = 0x217efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    // 0x217f00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F00u;
    SET_GPR_U32(ctx, 31, 0x217F08u);
    ctx->pc = 0x217F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F00u;
    // 0x217f04: 0x2484e1f8  addiu       $a0, $a0, -0x1E08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F00u, 0x217F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F08u;
label_217f08:
    // 0x217f08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f0c: 0x24050194  addiu       $a1, $zero, 0x194
    ctx->pc = 0x217f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x217f10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F10u;
    SET_GPR_U32(ctx, 31, 0x217F18u);
    ctx->pc = 0x217F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F10u;
    // 0x217f14: 0x2484e218  addiu       $a0, $a0, -0x1DE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F10u, 0x217F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F18u;
label_217f18:
    // 0x217f18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f1c: 0x2405019f  addiu       $a1, $zero, 0x19F
    ctx->pc = 0x217f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x217f20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F20u;
    SET_GPR_U32(ctx, 31, 0x217F28u);
    ctx->pc = 0x217F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F20u;
    // 0x217f24: 0x2484e238  addiu       $a0, $a0, -0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F20u, 0x217F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F28u;
label_217f28:
    // 0x217f28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f2c: 0x240501aa  addiu       $a1, $zero, 0x1AA
    ctx->pc = 0x217f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x217f30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F30u;
    SET_GPR_U32(ctx, 31, 0x217F38u);
    ctx->pc = 0x217F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F30u;
    // 0x217f34: 0x2484e258  addiu       $a0, $a0, -0x1DA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F30u, 0x217F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F38u;
label_217f38:
    // 0x217f38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f3c: 0x240501b5  addiu       $a1, $zero, 0x1B5
    ctx->pc = 0x217f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x217f40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F40u;
    SET_GPR_U32(ctx, 31, 0x217F48u);
    ctx->pc = 0x217F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F40u;
    // 0x217f44: 0x2484e278  addiu       $a0, $a0, -0x1D88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F40u, 0x217F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F48u;
label_217f48:
    // 0x217f48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f4c: 0x24050153  addiu       $a1, $zero, 0x153
    ctx->pc = 0x217f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
    // 0x217f50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F50u;
    SET_GPR_U32(ctx, 31, 0x217F58u);
    ctx->pc = 0x217F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F50u;
    // 0x217f54: 0x2484e298  addiu       $a0, $a0, -0x1D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F50u, 0x217F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F58u;
label_217f58:
    // 0x217f58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f5c: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x217f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x217f60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F60u;
    SET_GPR_U32(ctx, 31, 0x217F68u);
    ctx->pc = 0x217F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F60u;
    // 0x217f64: 0x2484e2b8  addiu       $a0, $a0, -0x1D48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F60u, 0x217F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F68u;
label_217f68:
    // 0x217f68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f6c: 0x24050169  addiu       $a1, $zero, 0x169
    ctx->pc = 0x217f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
    // 0x217f70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F70u;
    SET_GPR_U32(ctx, 31, 0x217F78u);
    ctx->pc = 0x217F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F70u;
    // 0x217f74: 0x2484e2d8  addiu       $a0, $a0, -0x1D28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F70u, 0x217F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F78u;
label_217f78:
    // 0x217f78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f7c: 0x2405017f  addiu       $a1, $zero, 0x17F
    ctx->pc = 0x217f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x217f80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F80u;
    SET_GPR_U32(ctx, 31, 0x217F88u);
    ctx->pc = 0x217F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F80u;
    // 0x217f84: 0x2484e2f8  addiu       $a0, $a0, -0x1D08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F80u, 0x217F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F88u;
label_217f88:
    // 0x217f88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f8c: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x217f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x217f90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217F90u;
    SET_GPR_U32(ctx, 31, 0x217F98u);
    ctx->pc = 0x217F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F90u;
    // 0x217f94: 0x2484e318  addiu       $a0, $a0, -0x1CE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217F90u, 0x217F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F98u;
label_217f98:
    // 0x217f98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217f9c: 0x2405018a  addiu       $a1, $zero, 0x18A
    ctx->pc = 0x217f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
    // 0x217fa0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217FA0u;
    SET_GPR_U32(ctx, 31, 0x217FA8u);
    ctx->pc = 0x217FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FA0u;
    // 0x217fa4: 0x2484e338  addiu       $a0, $a0, -0x1CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217FA0u, 0x217FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FA8u;
label_217fa8:
    // 0x217fa8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217fac: 0x24050195  addiu       $a1, $zero, 0x195
    ctx->pc = 0x217facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x217fb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217FB0u;
    SET_GPR_U32(ctx, 31, 0x217FB8u);
    ctx->pc = 0x217FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FB0u;
    // 0x217fb4: 0x2484e358  addiu       $a0, $a0, -0x1CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217FB0u, 0x217FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FB8u;
label_217fb8:
    // 0x217fb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217fbc: 0x240501a0  addiu       $a1, $zero, 0x1A0
    ctx->pc = 0x217fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x217fc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217FC0u;
    SET_GPR_U32(ctx, 31, 0x217FC8u);
    ctx->pc = 0x217FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FC0u;
    // 0x217fc4: 0x2484e378  addiu       $a0, $a0, -0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217FC0u, 0x217FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FC8u;
label_217fc8:
    // 0x217fc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217fcc: 0x240501ab  addiu       $a1, $zero, 0x1AB
    ctx->pc = 0x217fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
    // 0x217fd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217FD0u;
    SET_GPR_U32(ctx, 31, 0x217FD8u);
    ctx->pc = 0x217FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FD0u;
    // 0x217fd4: 0x2484e398  addiu       $a0, $a0, -0x1C68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217FD0u, 0x217FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FD8u;
label_217fd8:
    // 0x217fd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217fdc: 0x240501b6  addiu       $a1, $zero, 0x1B6
    ctx->pc = 0x217fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    // 0x217fe0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217FE0u;
    SET_GPR_U32(ctx, 31, 0x217FE8u);
    ctx->pc = 0x217FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FE0u;
    // 0x217fe4: 0x2484e3b8  addiu       $a0, $a0, -0x1C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217FE0u, 0x217FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FE8u;
label_217fe8:
    // 0x217fe8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217fec: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x217fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x217ff0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x217FF0u;
    SET_GPR_U32(ctx, 31, 0x217FF8u);
    ctx->pc = 0x217FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FF0u;
    // 0x217ff4: 0x2484e3d8  addiu       $a0, $a0, -0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x217FF0u, 0x217FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FF8u;
label_217ff8:
    // 0x217ff8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x217ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x217ffc: 0x2405015f  addiu       $a1, $zero, 0x15F
    ctx->pc = 0x217ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x218000: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218000u;
    SET_GPR_U32(ctx, 31, 0x218008u);
    ctx->pc = 0x218004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218000u;
    // 0x218004: 0x2484e3f8  addiu       $a0, $a0, -0x1C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218000u, 0x218008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218008u;
label_218008:
    // 0x218008: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21800c: 0x2405016a  addiu       $a1, $zero, 0x16A
    ctx->pc = 0x21800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x218010: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218010u;
    SET_GPR_U32(ctx, 31, 0x218018u);
    ctx->pc = 0x218014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218010u;
    // 0x218014: 0x2484e418  addiu       $a0, $a0, -0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218010u, 0x218018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218018u;
label_218018:
    // 0x218018: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21801c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x21801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x218020: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218020u;
    SET_GPR_U32(ctx, 31, 0x218028u);
    ctx->pc = 0x218024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218020u;
    // 0x218024: 0x2484e438  addiu       $a0, $a0, -0x1BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218020u, 0x218028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218028u;
label_218028:
    // 0x218028: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21802c: 0x24050175  addiu       $a1, $zero, 0x175
    ctx->pc = 0x21802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
    // 0x218030: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218030u;
    SET_GPR_U32(ctx, 31, 0x218038u);
    ctx->pc = 0x218034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218030u;
    // 0x218034: 0x2484e458  addiu       $a0, $a0, -0x1BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218030u, 0x218038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218038u;
label_218038:
    // 0x218038: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21803c: 0x2405018b  addiu       $a1, $zero, 0x18B
    ctx->pc = 0x21803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
    // 0x218040: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218040u;
    SET_GPR_U32(ctx, 31, 0x218048u);
    ctx->pc = 0x218044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218040u;
    // 0x218044: 0x2484e478  addiu       $a0, $a0, -0x1B88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218040u, 0x218048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218048u;
label_218048:
    // 0x218048: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21804c: 0x24050196  addiu       $a1, $zero, 0x196
    ctx->pc = 0x21804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
    // 0x218050: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218050u;
    SET_GPR_U32(ctx, 31, 0x218058u);
    ctx->pc = 0x218054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218050u;
    // 0x218054: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218050u, 0x218058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218058u;
label_218058:
    // 0x218058: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21805c: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x21805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x218060: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218060u;
    SET_GPR_U32(ctx, 31, 0x218068u);
    ctx->pc = 0x218064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218060u;
    // 0x218064: 0x2484e4b8  addiu       $a0, $a0, -0x1B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218060u, 0x218068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218068u;
label_218068:
    // 0x218068: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21806c: 0x240501ac  addiu       $a1, $zero, 0x1AC
    ctx->pc = 0x21806cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    // 0x218070: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218070u;
    SET_GPR_U32(ctx, 31, 0x218078u);
    ctx->pc = 0x218074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218070u;
    // 0x218074: 0x2484e4d8  addiu       $a0, $a0, -0x1B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218070u, 0x218078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218078u;
label_218078:
    // 0x218078: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21807c: 0x240501b7  addiu       $a1, $zero, 0x1B7
    ctx->pc = 0x21807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x218080: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218080u;
    SET_GPR_U32(ctx, 31, 0x218088u);
    ctx->pc = 0x218084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218080u;
    // 0x218084: 0x2484e4f8  addiu       $a0, $a0, -0x1B08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218080u, 0x218088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218088u;
label_218088:
    // 0x218088: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21808c: 0x24050155  addiu       $a1, $zero, 0x155
    ctx->pc = 0x21808cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    // 0x218090: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218090u;
    SET_GPR_U32(ctx, 31, 0x218098u);
    ctx->pc = 0x218094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218090u;
    // 0x218094: 0x2484e518  addiu       $a0, $a0, -0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218090u, 0x218098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218098u;
label_218098:
    // 0x218098: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21809c: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x21809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2180a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2180A0u;
    SET_GPR_U32(ctx, 31, 0x2180A8u);
    ctx->pc = 0x2180A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180A0u;
    // 0x2180a4: 0x2484e538  addiu       $a0, $a0, -0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2180A0u, 0x2180A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180A8u;
label_2180a8:
    // 0x2180a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2180a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2180ac: 0x2405016b  addiu       $a1, $zero, 0x16B
    ctx->pc = 0x2180acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 363));
    // 0x2180b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2180B0u;
    SET_GPR_U32(ctx, 31, 0x2180B8u);
    ctx->pc = 0x2180B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180B0u;
    // 0x2180b4: 0x2484e558  addiu       $a0, $a0, -0x1AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2180B0u, 0x2180B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180B8u;
label_2180b8:
    // 0x2180b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2180b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2180bc: 0x24050181  addiu       $a1, $zero, 0x181
    ctx->pc = 0x2180bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x2180c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2180C0u;
    SET_GPR_U32(ctx, 31, 0x2180C8u);
    ctx->pc = 0x2180C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180C0u;
    // 0x2180c4: 0x2484e578  addiu       $a0, $a0, -0x1A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2180C0u, 0x2180C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180C8u;
label_2180c8:
    // 0x2180c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2180c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2180cc: 0x24050176  addiu       $a1, $zero, 0x176
    ctx->pc = 0x2180ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x2180d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2180D0u;
    SET_GPR_U32(ctx, 31, 0x2180D8u);
    ctx->pc = 0x2180D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180D0u;
    // 0x2180d4: 0x2484e598  addiu       $a0, $a0, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2180D0u, 0x2180D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180D8u;
label_2180d8:
    // 0x2180d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2180d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2180dc: 0x2405018c  addiu       $a1, $zero, 0x18C
    ctx->pc = 0x2180dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
    // 0x2180e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2180E0u;
    SET_GPR_U32(ctx, 31, 0x2180E8u);
    ctx->pc = 0x2180E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180E0u;
    // 0x2180e4: 0x2484e5b8  addiu       $a0, $a0, -0x1A48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2180E0u, 0x2180E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E8u;
label_2180e8:
    // 0x2180e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2180e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2180ec: 0x24050197  addiu       $a1, $zero, 0x197
    ctx->pc = 0x2180ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x2180f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180F0u;
    // 0x2180f4: 0x2484e5d8  addiu       $a0, $a0, -0x1A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2180F0u, 0x2180F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180F8u;
label_2180f8:
    // 0x2180f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2180f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2180fc: 0x240501a2  addiu       $a1, $zero, 0x1A2
    ctx->pc = 0x2180fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    // 0x218100: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218100u;
    SET_GPR_U32(ctx, 31, 0x218108u);
    ctx->pc = 0x218104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218100u;
    // 0x218104: 0x2484e5f8  addiu       $a0, $a0, -0x1A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218100u, 0x218108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218108u;
label_218108:
    // 0x218108: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21810c: 0x240501ad  addiu       $a1, $zero, 0x1AD
    ctx->pc = 0x21810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
    // 0x218110: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218110u;
    SET_GPR_U32(ctx, 31, 0x218118u);
    ctx->pc = 0x218114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218110u;
    // 0x218114: 0x2484e618  addiu       $a0, $a0, -0x19E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218110u, 0x218118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218118u;
label_218118:
    // 0x218118: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21811c: 0x240501b8  addiu       $a1, $zero, 0x1B8
    ctx->pc = 0x21811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x218120: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218120u;
    SET_GPR_U32(ctx, 31, 0x218128u);
    ctx->pc = 0x218124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218120u;
    // 0x218124: 0x2484e638  addiu       $a0, $a0, -0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218120u, 0x218128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218128u;
label_218128:
    // 0x218128: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21812c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x21812cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x218130: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218130u;
    SET_GPR_U32(ctx, 31, 0x218138u);
    ctx->pc = 0x218134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218130u;
    // 0x218134: 0x2484e658  addiu       $a0, $a0, -0x19A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218130u, 0x218138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218138u;
label_218138:
    // 0x218138: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21813c: 0x2405015b  addiu       $a1, $zero, 0x15B
    ctx->pc = 0x21813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x218140: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218140u;
    SET_GPR_U32(ctx, 31, 0x218148u);
    ctx->pc = 0x218144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218140u;
    // 0x218144: 0x2484e678  addiu       $a0, $a0, -0x1988 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218140u, 0x218148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218148u;
label_218148:
    // 0x218148: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21814c: 0x24050166  addiu       $a1, $zero, 0x166
    ctx->pc = 0x21814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x218150: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218150u;
    SET_GPR_U32(ctx, 31, 0x218158u);
    ctx->pc = 0x218154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218150u;
    // 0x218154: 0x2484e698  addiu       $a0, $a0, -0x1968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218150u, 0x218158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218158u;
label_218158:
    // 0x218158: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21815c: 0x2405017c  addiu       $a1, $zero, 0x17C
    ctx->pc = 0x21815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x218160: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218160u;
    SET_GPR_U32(ctx, 31, 0x218168u);
    ctx->pc = 0x218164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218160u;
    // 0x218164: 0x2484e6b8  addiu       $a0, $a0, -0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218160u, 0x218168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218168u;
label_218168:
    // 0x218168: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21816c: 0x24050171  addiu       $a1, $zero, 0x171
    ctx->pc = 0x21816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
    // 0x218170: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218170u;
    SET_GPR_U32(ctx, 31, 0x218178u);
    ctx->pc = 0x218174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218170u;
    // 0x218174: 0x2484e6d8  addiu       $a0, $a0, -0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218170u, 0x218178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218178u;
label_218178:
    // 0x218178: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21817c: 0x24050187  addiu       $a1, $zero, 0x187
    ctx->pc = 0x21817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x218180: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218180u;
    SET_GPR_U32(ctx, 31, 0x218188u);
    ctx->pc = 0x218184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218180u;
    // 0x218184: 0x2484e6f8  addiu       $a0, $a0, -0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218180u, 0x218188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218188u;
label_218188:
    // 0x218188: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21818c: 0x24050192  addiu       $a1, $zero, 0x192
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
    // 0x218190: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218190u;
    SET_GPR_U32(ctx, 31, 0x218198u);
    ctx->pc = 0x218194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218190u;
    // 0x218194: 0x2484e718  addiu       $a0, $a0, -0x18E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218190u, 0x218198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218198u;
label_218198:
    // 0x218198: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21819c: 0x2405019d  addiu       $a1, $zero, 0x19D
    ctx->pc = 0x21819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
    // 0x2181a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2181A0u;
    SET_GPR_U32(ctx, 31, 0x2181A8u);
    ctx->pc = 0x2181A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181A0u;
    // 0x2181a4: 0x2484e738  addiu       $a0, $a0, -0x18C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2181A0u, 0x2181A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181A8u;
label_2181a8:
    // 0x2181a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2181a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2181ac: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x2181acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2181b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2181B0u;
    SET_GPR_U32(ctx, 31, 0x2181B8u);
    ctx->pc = 0x2181B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181B0u;
    // 0x2181b4: 0x2484e758  addiu       $a0, $a0, -0x18A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2181B0u, 0x2181B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181B8u;
label_2181b8:
    // 0x2181b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2181b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2181bc: 0x240501b3  addiu       $a1, $zero, 0x1B3
    ctx->pc = 0x2181bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x2181c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2181C0u;
    SET_GPR_U32(ctx, 31, 0x2181C8u);
    ctx->pc = 0x2181C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181C0u;
    // 0x2181c4: 0x2484e778  addiu       $a0, $a0, -0x1888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2181C0u, 0x2181C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181C8u;
label_2181c8:
    // 0x2181c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2181c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2181cc: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2181ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2181d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2181D0u;
    SET_GPR_U32(ctx, 31, 0x2181D8u);
    ctx->pc = 0x2181D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181D0u;
    // 0x2181d4: 0x2484e798  addiu       $a0, $a0, -0x1868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2181D0u, 0x2181D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181D8u;
label_2181d8:
    // 0x2181d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2181d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2181dc: 0x240500f3  addiu       $a1, $zero, 0xF3
    ctx->pc = 0x2181dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2181e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2181E0u;
    SET_GPR_U32(ctx, 31, 0x2181E8u);
    ctx->pc = 0x2181E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181E0u;
    // 0x2181e4: 0x2484e7b8  addiu       $a0, $a0, -0x1848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2181E0u, 0x2181E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181E8u;
label_2181e8:
    // 0x2181e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2181e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2181ec: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x2181ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2181f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2181F0u;
    SET_GPR_U32(ctx, 31, 0x2181F8u);
    ctx->pc = 0x2181F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181F0u;
    // 0x2181f4: 0x2484e7d8  addiu       $a0, $a0, -0x1828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2181F0u, 0x2181F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181F8u;
label_2181f8:
    // 0x2181f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2181f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2181fc: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x218200: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218200u;
    SET_GPR_U32(ctx, 31, 0x218208u);
    ctx->pc = 0x218204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218200u;
    // 0x218204: 0x2484e7f8  addiu       $a0, $a0, -0x1808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218200u, 0x218208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218208u;
label_218208:
    // 0x218208: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21820c: 0x24050109  addiu       $a1, $zero, 0x109
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x218210: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218210u;
    SET_GPR_U32(ctx, 31, 0x218218u);
    ctx->pc = 0x218214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218210u;
    // 0x218214: 0x2484e818  addiu       $a0, $a0, -0x17E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218210u, 0x218218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218218u;
label_218218:
    // 0x218218: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21821c: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x21821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x218220: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218220u;
    SET_GPR_U32(ctx, 31, 0x218228u);
    ctx->pc = 0x218224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218220u;
    // 0x218224: 0x2484e838  addiu       $a0, $a0, -0x17C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218220u, 0x218228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218228u;
label_218228:
    // 0x218228: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21822c: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x218230: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218230u;
    SET_GPR_U32(ctx, 31, 0x218238u);
    ctx->pc = 0x218234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218230u;
    // 0x218234: 0x2484e858  addiu       $a0, $a0, -0x17A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218230u, 0x218238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218238u;
label_218238:
    // 0x218238: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21823c: 0x24050135  addiu       $a1, $zero, 0x135
    ctx->pc = 0x21823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x218240: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218240u;
    SET_GPR_U32(ctx, 31, 0x218248u);
    ctx->pc = 0x218244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218240u;
    // 0x218244: 0x2484e878  addiu       $a0, $a0, -0x1788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218240u, 0x218248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218248u;
label_218248:
    // 0x218248: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21824c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x21824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x218250: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218250u;
    SET_GPR_U32(ctx, 31, 0x218258u);
    ctx->pc = 0x218254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218250u;
    // 0x218254: 0x2484e898  addiu       $a0, $a0, -0x1768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218250u, 0x218258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218258u;
label_218258:
    // 0x218258: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21825c: 0x2405014b  addiu       $a1, $zero, 0x14B
    ctx->pc = 0x21825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
    // 0x218260: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218260u;
    SET_GPR_U32(ctx, 31, 0x218268u);
    ctx->pc = 0x218264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218260u;
    // 0x218264: 0x2484e8b8  addiu       $a0, $a0, -0x1748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218260u, 0x218268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218268u;
label_218268:
    // 0x218268: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21826c: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x21826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x218270: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218270u;
    SET_GPR_U32(ctx, 31, 0x218278u);
    ctx->pc = 0x218274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218270u;
    // 0x218274: 0x2484e8d8  addiu       $a0, $a0, -0x1728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218270u, 0x218278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218278u;
label_218278:
    // 0x218278: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21827c: 0x24050161  addiu       $a1, $zero, 0x161
    ctx->pc = 0x21827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x218280: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218280u;
    SET_GPR_U32(ctx, 31, 0x218288u);
    ctx->pc = 0x218284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218280u;
    // 0x218284: 0x2484e8f8  addiu       $a0, $a0, -0x1708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218280u, 0x218288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218288u;
label_218288:
    // 0x218288: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21828c: 0x2405016c  addiu       $a1, $zero, 0x16C
    ctx->pc = 0x21828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x218290: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218290u;
    SET_GPR_U32(ctx, 31, 0x218298u);
    ctx->pc = 0x218294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218290u;
    // 0x218294: 0x2484e918  addiu       $a0, $a0, -0x16E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218290u, 0x218298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218298u;
label_218298:
    // 0x218298: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21829c: 0x24050182  addiu       $a1, $zero, 0x182
    ctx->pc = 0x21829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x2182a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2182A0u;
    SET_GPR_U32(ctx, 31, 0x2182A8u);
    ctx->pc = 0x2182A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182A0u;
    // 0x2182a4: 0x2484e938  addiu       $a0, $a0, -0x16C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2182A0u, 0x2182A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182A8u;
label_2182a8:
    // 0x2182a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2182a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2182ac: 0x24050177  addiu       $a1, $zero, 0x177
    ctx->pc = 0x2182acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x2182b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2182B0u;
    SET_GPR_U32(ctx, 31, 0x2182B8u);
    ctx->pc = 0x2182B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182B0u;
    // 0x2182b4: 0x2484e958  addiu       $a0, $a0, -0x16A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2182B0u, 0x2182B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182B8u;
label_2182b8:
    // 0x2182b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2182b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2182bc: 0x2405018d  addiu       $a1, $zero, 0x18D
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
    // 0x2182c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2182C0u;
    SET_GPR_U32(ctx, 31, 0x2182C8u);
    ctx->pc = 0x2182C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182C0u;
    // 0x2182c4: 0x2484e978  addiu       $a0, $a0, -0x1688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2182C0u, 0x2182C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182C8u;
label_2182c8:
    // 0x2182c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2182c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2182cc: 0x24050198  addiu       $a1, $zero, 0x198
    ctx->pc = 0x2182ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x2182d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2182D0u;
    SET_GPR_U32(ctx, 31, 0x2182D8u);
    ctx->pc = 0x2182D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182D0u;
    // 0x2182d4: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2182D0u, 0x2182D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182D8u;
label_2182d8:
    // 0x2182d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2182dc: 0x240501a3  addiu       $a1, $zero, 0x1A3
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    // 0x2182e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2182E0u;
    SET_GPR_U32(ctx, 31, 0x2182E8u);
    ctx->pc = 0x2182E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182E0u;
    // 0x2182e4: 0x2484e9b8  addiu       $a0, $a0, -0x1648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2182E0u, 0x2182E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182E8u;
label_2182e8:
    // 0x2182e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2182e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2182ec: 0x240501ae  addiu       $a1, $zero, 0x1AE
    ctx->pc = 0x2182ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2182f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2182F0u;
    SET_GPR_U32(ctx, 31, 0x2182F8u);
    ctx->pc = 0x2182F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182F0u;
    // 0x2182f4: 0x2484e9d8  addiu       $a0, $a0, -0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2182F0u, 0x2182F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182F8u;
label_2182f8:
    // 0x2182f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2182f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2182fc: 0x240501b9  addiu       $a1, $zero, 0x1B9
    ctx->pc = 0x2182fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x218300: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218300u;
    SET_GPR_U32(ctx, 31, 0x218308u);
    ctx->pc = 0x218304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218300u;
    // 0x218304: 0x2484e9f8  addiu       $a0, $a0, -0x1608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218300u, 0x218308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218308u;
label_218308:
    // 0x218308: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21830c: 0x240500e9  addiu       $a1, $zero, 0xE9
    ctx->pc = 0x21830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x218310: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218310u;
    SET_GPR_U32(ctx, 31, 0x218318u);
    ctx->pc = 0x218314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218310u;
    // 0x218314: 0x2484ea18  addiu       $a0, $a0, -0x15E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218310u, 0x218318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218318u;
label_218318:
    // 0x218318: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21831c: 0x240500f4  addiu       $a1, $zero, 0xF4
    ctx->pc = 0x21831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x218320: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218320u;
    SET_GPR_U32(ctx, 31, 0x218328u);
    ctx->pc = 0x218324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218320u;
    // 0x218324: 0x2484ea38  addiu       $a0, $a0, -0x15C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218320u, 0x218328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218328u;
label_218328:
    // 0x218328: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21832c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x21832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218330: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218330u;
    SET_GPR_U32(ctx, 31, 0x218338u);
    ctx->pc = 0x218334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218330u;
    // 0x218334: 0x2484ea58  addiu       $a0, $a0, -0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218330u, 0x218338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218338u;
label_218338:
    // 0x218338: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21833c: 0x24050115  addiu       $a1, $zero, 0x115
    ctx->pc = 0x21833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x218340: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218340u;
    SET_GPR_U32(ctx, 31, 0x218348u);
    ctx->pc = 0x218344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218340u;
    // 0x218344: 0x2484ea78  addiu       $a0, $a0, -0x1588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218340u, 0x218348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218348u;
label_218348:
    // 0x218348: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21834c: 0x2405010a  addiu       $a1, $zero, 0x10A
    ctx->pc = 0x21834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x218350: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218350u;
    SET_GPR_U32(ctx, 31, 0x218358u);
    ctx->pc = 0x218354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218350u;
    // 0x218354: 0x2484ea98  addiu       $a0, $a0, -0x1568 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218350u, 0x218358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218358u;
label_218358:
    // 0x218358: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21835c: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x21835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x218360: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218360u;
    SET_GPR_U32(ctx, 31, 0x218368u);
    ctx->pc = 0x218364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218360u;
    // 0x218364: 0x2484eab8  addiu       $a0, $a0, -0x1548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218360u, 0x218368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218368u;
label_218368:
    // 0x218368: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21836c: 0x2405012b  addiu       $a1, $zero, 0x12B
    ctx->pc = 0x21836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x218370: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218370u;
    SET_GPR_U32(ctx, 31, 0x218378u);
    ctx->pc = 0x218374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218370u;
    // 0x218374: 0x2484ead8  addiu       $a0, $a0, -0x1528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218370u, 0x218378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218378u;
label_218378:
    // 0x218378: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21837c: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x21837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x218380: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218380u;
    SET_GPR_U32(ctx, 31, 0x218388u);
    ctx->pc = 0x218384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218380u;
    // 0x218384: 0x2484eaf8  addiu       $a0, $a0, -0x1508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218380u, 0x218388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218388u;
label_218388:
    // 0x218388: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21838c: 0x24050141  addiu       $a1, $zero, 0x141
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x218390: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218390u;
    SET_GPR_U32(ctx, 31, 0x218398u);
    ctx->pc = 0x218394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218390u;
    // 0x218394: 0x2484eb18  addiu       $a0, $a0, -0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218390u, 0x218398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218398u;
label_218398:
    // 0x218398: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21839c: 0x2405014c  addiu       $a1, $zero, 0x14C
    ctx->pc = 0x21839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x2183a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2183A0u;
    SET_GPR_U32(ctx, 31, 0x2183A8u);
    ctx->pc = 0x2183A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183A0u;
    // 0x2183a4: 0x2484eb38  addiu       $a0, $a0, -0x14C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2183A0u, 0x2183A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183A8u;
label_2183a8:
    // 0x2183a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2183a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2183ac: 0x24050157  addiu       $a1, $zero, 0x157
    ctx->pc = 0x2183acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x2183b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2183B0u;
    SET_GPR_U32(ctx, 31, 0x2183B8u);
    ctx->pc = 0x2183B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183B0u;
    // 0x2183b4: 0x2484eb58  addiu       $a0, $a0, -0x14A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2183B0u, 0x2183B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183B8u;
label_2183b8:
    // 0x2183b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2183b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2183bc: 0x24050162  addiu       $a1, $zero, 0x162
    ctx->pc = 0x2183bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
    // 0x2183c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2183C0u;
    SET_GPR_U32(ctx, 31, 0x2183C8u);
    ctx->pc = 0x2183C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183C0u;
    // 0x2183c4: 0x2484eb78  addiu       $a0, $a0, -0x1488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2183C0u, 0x2183C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183C8u;
label_2183c8:
    // 0x2183c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2183cc: 0x2405016d  addiu       $a1, $zero, 0x16D
    ctx->pc = 0x2183ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x2183d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2183D0u;
    SET_GPR_U32(ctx, 31, 0x2183D8u);
    ctx->pc = 0x2183D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183D0u;
    // 0x2183d4: 0x2484eb98  addiu       $a0, $a0, -0x1468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2183D0u, 0x2183D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183D8u;
label_2183d8:
    // 0x2183d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2183d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2183dc: 0x24050183  addiu       $a1, $zero, 0x183
    ctx->pc = 0x2183dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x2183e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2183E0u;
    SET_GPR_U32(ctx, 31, 0x2183E8u);
    ctx->pc = 0x2183E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183E0u;
    // 0x2183e4: 0x2484ebb8  addiu       $a0, $a0, -0x1448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2183E0u, 0x2183E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183E8u;
label_2183e8:
    // 0x2183e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2183e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2183ec: 0x24050178  addiu       $a1, $zero, 0x178
    ctx->pc = 0x2183ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x2183f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2183F0u;
    SET_GPR_U32(ctx, 31, 0x2183F8u);
    ctx->pc = 0x2183F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183F0u;
    // 0x2183f4: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2183F0u, 0x2183F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183F8u;
label_2183f8:
    // 0x2183f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2183f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2183fc: 0x2405018e  addiu       $a1, $zero, 0x18E
    ctx->pc = 0x2183fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
    // 0x218400: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218400u;
    SET_GPR_U32(ctx, 31, 0x218408u);
    ctx->pc = 0x218404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218400u;
    // 0x218404: 0x2484ebf8  addiu       $a0, $a0, -0x1408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218400u, 0x218408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218408u;
label_218408:
    // 0x218408: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21840c: 0x24050199  addiu       $a1, $zero, 0x199
    ctx->pc = 0x21840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x218410: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218410u;
    SET_GPR_U32(ctx, 31, 0x218418u);
    ctx->pc = 0x218414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218410u;
    // 0x218414: 0x2484ec18  addiu       $a0, $a0, -0x13E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218410u, 0x218418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218418u;
label_218418:
    // 0x218418: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21841c: 0x240501a4  addiu       $a1, $zero, 0x1A4
    ctx->pc = 0x21841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x218420: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218420u;
    SET_GPR_U32(ctx, 31, 0x218428u);
    ctx->pc = 0x218424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218420u;
    // 0x218424: 0x2484ec38  addiu       $a0, $a0, -0x13C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218420u, 0x218428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218428u;
label_218428:
    // 0x218428: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21842c: 0x240501af  addiu       $a1, $zero, 0x1AF
    ctx->pc = 0x21842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 431));
    // 0x218430: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218430u;
    SET_GPR_U32(ctx, 31, 0x218438u);
    ctx->pc = 0x218434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218430u;
    // 0x218434: 0x2484ec58  addiu       $a0, $a0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218430u, 0x218438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218438u;
label_218438:
    // 0x218438: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21843c: 0x240501ba  addiu       $a1, $zero, 0x1BA
    ctx->pc = 0x21843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x218440: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218440u;
    SET_GPR_U32(ctx, 31, 0x218448u);
    ctx->pc = 0x218444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218440u;
    // 0x218444: 0x2484ec78  addiu       $a0, $a0, -0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218440u, 0x218448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218448u;
label_218448:
    // 0x218448: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21844c: 0x2405020c  addiu       $a1, $zero, 0x20C
    ctx->pc = 0x21844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    // 0x218450: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218450u;
    SET_GPR_U32(ctx, 31, 0x218458u);
    ctx->pc = 0x218454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218450u;
    // 0x218454: 0x2484ec98  addiu       $a0, $a0, -0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218450u, 0x218458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218458u;
label_218458:
    // 0x218458: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21845c: 0x2405020d  addiu       $a1, $zero, 0x20D
    ctx->pc = 0x21845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    // 0x218460: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218460u;
    SET_GPR_U32(ctx, 31, 0x218468u);
    ctx->pc = 0x218464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218460u;
    // 0x218464: 0x2484ecc0  addiu       $a0, $a0, -0x1340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218460u, 0x218468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218468u;
label_218468:
    // 0x218468: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21846c: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x21846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x218470: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218470u;
    SET_GPR_U32(ctx, 31, 0x218478u);
    ctx->pc = 0x218474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218470u;
    // 0x218474: 0x2484ece8  addiu       $a0, $a0, -0x1318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218470u, 0x218478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218478u;
label_218478:
    // 0x218478: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21847c: 0x24050202  addiu       $a1, $zero, 0x202
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x218480: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218480u;
    SET_GPR_U32(ctx, 31, 0x218488u);
    ctx->pc = 0x218484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218480u;
    // 0x218484: 0x2484ed10  addiu       $a0, $a0, -0x12F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218480u, 0x218488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218488u;
label_218488:
    // 0x218488: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21848c: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x21848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x218490: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218490u;
    SET_GPR_U32(ctx, 31, 0x218498u);
    ctx->pc = 0x218494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218490u;
    // 0x218494: 0x2484ed38  addiu       $a0, $a0, -0x12C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218490u, 0x218498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218498u;
label_218498:
    // 0x218498: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21849c: 0x24050204  addiu       $a1, $zero, 0x204
    ctx->pc = 0x21849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x2184a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2184A0u;
    SET_GPR_U32(ctx, 31, 0x2184A8u);
    ctx->pc = 0x2184A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184A0u;
    // 0x2184a4: 0x2484ed60  addiu       $a0, $a0, -0x12A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2184A0u, 0x2184A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184A8u;
label_2184a8:
    // 0x2184a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2184a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2184ac: 0x24050205  addiu       $a1, $zero, 0x205
    ctx->pc = 0x2184acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x2184b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2184B0u;
    SET_GPR_U32(ctx, 31, 0x2184B8u);
    ctx->pc = 0x2184B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184B0u;
    // 0x2184b4: 0x2484ed88  addiu       $a0, $a0, -0x1278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2184B0u, 0x2184B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184B8u;
label_2184b8:
    // 0x2184b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2184b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2184bc: 0x24050206  addiu       $a1, $zero, 0x206
    ctx->pc = 0x2184bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2184c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2184C0u;
    SET_GPR_U32(ctx, 31, 0x2184C8u);
    ctx->pc = 0x2184C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184C0u;
    // 0x2184c4: 0x2484edb0  addiu       $a0, $a0, -0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2184C0u, 0x2184C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184C8u;
label_2184c8:
    // 0x2184c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2184c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2184cc: 0x24050207  addiu       $a1, $zero, 0x207
    ctx->pc = 0x2184ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    // 0x2184d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2184D0u;
    SET_GPR_U32(ctx, 31, 0x2184D8u);
    ctx->pc = 0x2184D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184D0u;
    // 0x2184d4: 0x2484edd8  addiu       $a0, $a0, -0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2184D0u, 0x2184D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184D8u;
label_2184d8:
    // 0x2184d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2184d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2184dc: 0x24050208  addiu       $a1, $zero, 0x208
    ctx->pc = 0x2184dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2184e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2184E0u;
    SET_GPR_U32(ctx, 31, 0x2184E8u);
    ctx->pc = 0x2184E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184E0u;
    // 0x2184e4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2184E0u, 0x2184E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184E8u;
label_2184e8:
    // 0x2184e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2184e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2184ec: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x2184ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2184f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2184F0u;
    SET_GPR_U32(ctx, 31, 0x2184F8u);
    ctx->pc = 0x2184F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184F0u;
    // 0x2184f4: 0x2484ee28  addiu       $a0, $a0, -0x11D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2184F0u, 0x2184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184F8u;
label_2184f8:
    // 0x2184f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2184f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2184fc: 0x2405020a  addiu       $a1, $zero, 0x20A
    ctx->pc = 0x2184fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x218500: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218500u;
    SET_GPR_U32(ctx, 31, 0x218508u);
    ctx->pc = 0x218504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218500u;
    // 0x218504: 0x2484ee50  addiu       $a0, $a0, -0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218500u, 0x218508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218508u;
label_218508:
    // 0x218508: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21850c: 0x2405020b  addiu       $a1, $zero, 0x20B
    ctx->pc = 0x21850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x218510: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218510u;
    SET_GPR_U32(ctx, 31, 0x218518u);
    ctx->pc = 0x218514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218510u;
    // 0x218514: 0x2484ee78  addiu       $a0, $a0, -0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218510u, 0x218518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218518u;
label_218518:
    // 0x218518: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21851c: 0x2405020e  addiu       $a1, $zero, 0x20E
    ctx->pc = 0x21851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    // 0x218520: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218520u;
    SET_GPR_U32(ctx, 31, 0x218528u);
    ctx->pc = 0x218524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218520u;
    // 0x218524: 0x2484eea0  addiu       $a0, $a0, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218520u, 0x218528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218528u;
label_218528:
    // 0x218528: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21852c: 0x2405020f  addiu       $a1, $zero, 0x20F
    ctx->pc = 0x21852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x218530: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218530u;
    SET_GPR_U32(ctx, 31, 0x218538u);
    ctx->pc = 0x218534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218530u;
    // 0x218534: 0x2484eec8  addiu       $a0, $a0, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218530u, 0x218538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218538u;
label_218538:
    // 0x218538: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21853c: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x21853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x218540: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218540u;
    SET_GPR_U32(ctx, 31, 0x218548u);
    ctx->pc = 0x218544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218540u;
    // 0x218544: 0x2484eef0  addiu       $a0, $a0, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218540u, 0x218548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218548u;
label_218548:
    // 0x218548: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21854c: 0x24050211  addiu       $a1, $zero, 0x211
    ctx->pc = 0x21854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    // 0x218550: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218550u;
    SET_GPR_U32(ctx, 31, 0x218558u);
    ctx->pc = 0x218554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218550u;
    // 0x218554: 0x2484ef18  addiu       $a0, $a0, -0x10E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218550u, 0x218558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218558u;
label_218558:
    // 0x218558: 0x2404020c  addiu       $a0, $zero, 0x20C
    ctx->pc = 0x218558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    // 0x21855c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21855Cu;
    SET_GPR_U32(ctx, 31, 0x218564u);
    ctx->pc = 0x218560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21855Cu;
    // 0x218560: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21855Cu, 0x218564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218564u;
label_218564:
    // 0x218564: 0x2404020d  addiu       $a0, $zero, 0x20D
    ctx->pc = 0x218564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    // 0x218568: 0xc08525e  jal         func_214978
    ctx->pc = 0x218568u;
    SET_GPR_U32(ctx, 31, 0x218570u);
    ctx->pc = 0x21856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218568u;
    // 0x21856c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218568u, 0x218570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218570u;
label_218570:
    // 0x218570: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x218570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x218574: 0xc08525e  jal         func_214978
    ctx->pc = 0x218574u;
    SET_GPR_U32(ctx, 31, 0x21857Cu);
    ctx->pc = 0x218578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218574u;
    // 0x218578: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218574u, 0x21857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21857Cu;
label_21857c:
    // 0x21857c: 0x24040202  addiu       $a0, $zero, 0x202
    ctx->pc = 0x21857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x218580: 0xc08525e  jal         func_214978
    ctx->pc = 0x218580u;
    SET_GPR_U32(ctx, 31, 0x218588u);
    ctx->pc = 0x218584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218580u;
    // 0x218584: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218580u, 0x218588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218588u;
label_218588:
    // 0x218588: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x218588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x21858c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21858Cu;
    SET_GPR_U32(ctx, 31, 0x218594u);
    ctx->pc = 0x218590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21858Cu;
    // 0x218590: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21858Cu, 0x218594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218594u;
label_218594:
    // 0x218594: 0x24040204  addiu       $a0, $zero, 0x204
    ctx->pc = 0x218594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x218598: 0xc08525e  jal         func_214978
    ctx->pc = 0x218598u;
    SET_GPR_U32(ctx, 31, 0x2185A0u);
    ctx->pc = 0x21859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218598u;
    // 0x21859c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218598u, 0x2185A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185A0u;
label_2185a0:
    // 0x2185a0: 0x24040205  addiu       $a0, $zero, 0x205
    ctx->pc = 0x2185a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x2185a4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185A4u;
    SET_GPR_U32(ctx, 31, 0x2185ACu);
    ctx->pc = 0x2185A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185A4u;
    // 0x2185a8: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185A4u, 0x2185ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185ACu;
label_2185ac:
    // 0x2185ac: 0x24040206  addiu       $a0, $zero, 0x206
    ctx->pc = 0x2185acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2185b0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185B0u;
    SET_GPR_U32(ctx, 31, 0x2185B8u);
    ctx->pc = 0x2185B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185B0u;
    // 0x2185b4: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185B0u, 0x2185B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185B8u;
label_2185b8:
    // 0x2185b8: 0x24040207  addiu       $a0, $zero, 0x207
    ctx->pc = 0x2185b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    // 0x2185bc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185BCu;
    SET_GPR_U32(ctx, 31, 0x2185C4u);
    ctx->pc = 0x2185C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185BCu;
    // 0x2185c0: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185BCu, 0x2185C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185C4u;
label_2185c4:
    // 0x2185c4: 0x24040208  addiu       $a0, $zero, 0x208
    ctx->pc = 0x2185c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2185c8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185C8u;
    SET_GPR_U32(ctx, 31, 0x2185D0u);
    ctx->pc = 0x2185CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185C8u;
    // 0x2185cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185C8u, 0x2185D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185D0u;
label_2185d0:
    // 0x2185d0: 0x24040209  addiu       $a0, $zero, 0x209
    ctx->pc = 0x2185d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2185d4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185D4u;
    SET_GPR_U32(ctx, 31, 0x2185DCu);
    ctx->pc = 0x2185D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185D4u;
    // 0x2185d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185D4u, 0x2185DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185DCu;
label_2185dc:
    // 0x2185dc: 0x2404020a  addiu       $a0, $zero, 0x20A
    ctx->pc = 0x2185dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x2185e0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185E0u;
    SET_GPR_U32(ctx, 31, 0x2185E8u);
    ctx->pc = 0x2185E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185E0u;
    // 0x2185e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185E0u, 0x2185E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185E8u;
label_2185e8:
    // 0x2185e8: 0x2404020b  addiu       $a0, $zero, 0x20B
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x2185ec: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185ECu;
    SET_GPR_U32(ctx, 31, 0x2185F4u);
    ctx->pc = 0x2185F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185ECu;
    // 0x2185f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185ECu, 0x2185F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185F4u;
label_2185f4:
    // 0x2185f4: 0x2404020e  addiu       $a0, $zero, 0x20E
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    // 0x2185f8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2185F8u;
    SET_GPR_U32(ctx, 31, 0x218600u);
    ctx->pc = 0x2185FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185F8u;
    // 0x2185fc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2185F8u, 0x218600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218600u;
label_218600:
    // 0x218600: 0x2404020f  addiu       $a0, $zero, 0x20F
    ctx->pc = 0x218600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x218604: 0xc08525e  jal         func_214978
    ctx->pc = 0x218604u;
    SET_GPR_U32(ctx, 31, 0x21860Cu);
    ctx->pc = 0x218608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218604u;
    // 0x218608: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218604u, 0x21860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21860Cu;
label_21860c:
    // 0x21860c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x21860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x218610: 0xc08525e  jal         func_214978
    ctx->pc = 0x218610u;
    SET_GPR_U32(ctx, 31, 0x218618u);
    ctx->pc = 0x218614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218610u;
    // 0x218614: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218610u, 0x218618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218618u;
label_218618:
    // 0x218618: 0x24040211  addiu       $a0, $zero, 0x211
    ctx->pc = 0x218618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    // 0x21861c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21861Cu;
    SET_GPR_U32(ctx, 31, 0x218624u);
    ctx->pc = 0x218620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21861Cu;
    // 0x218620: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21861Cu, 0x218624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218624u;
label_218624:
    // 0x218624: 0x0  nop
    ctx->pc = 0x218624u;
    // NOP
label_218628:
    // 0x218628: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x218628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21862c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21862Cu;
    {
        const bool branch_taken_0x21862c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21862c) {
            ctx->pc = 0x218630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21862Cu;
            // 0x218630: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x218634u;
            goto label_218634;
        }
    }
    ctx->pc = 0x218634u;
label_218634:
    // 0x218634: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x218634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x218638: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x218638u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21863c: 0x1812  mflo        $v1
    ctx->pc = 0x21863cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x218640: 0x10720010  beq         $v1, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x218640u;
    {
        const bool branch_taken_0x218640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x218644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218640u;
        // 0x218644: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218640) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218648u;
    // 0x218648: 0x1073000e  beq         $v1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x218648u;
    {
        const bool branch_taken_0x218648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x218648) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218650u;
    // 0x218650: 0x1074000c  beq         $v1, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x218650u;
    {
        const bool branch_taken_0x218650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x218650) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218658u;
    // 0x218658: 0x1075000a  beq         $v1, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x218658u;
    {
        const bool branch_taken_0x218658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x218658) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218660u;
    // 0x218660: 0x10760008  beq         $v1, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x218660u;
    {
        const bool branch_taken_0x218660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x218660) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218668u;
    // 0x218668: 0x10770006  beq         $v1, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x218668u;
    {
        const bool branch_taken_0x218668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x218668) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218670u;
    // 0x218670: 0x107e0004  beq         $v1, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x218670u;
    {
        const bool branch_taken_0x218670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x218674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218670u;
        // 0x218674: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218670) {
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218678u;
    // 0x218678: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x218678u;
    {
        const bool branch_taken_0x218678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218678u;
        // 0x21867c: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218678) {
            ctx->pc = 0x218694u;
            goto label_218694;
        }
    }
    ctx->pc = 0x218680u;
    // 0x218680: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x218680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_218684:
    // 0x218684: 0xc08525e  jal         func_214978
    ctx->pc = 0x218684u;
    SET_GPR_U32(ctx, 31, 0x21868Cu);
    ctx->pc = 0x218688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218684u;
    // 0x218688: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218684u, 0x21868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21868Cu;
label_21868c:
    // 0x21868c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21868Cu;
    {
        const bool branch_taken_0x21868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21868Cu;
        // 0x218690: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21868c) {
            ctx->pc = 0x2186D0u;
            goto label_2186d0;
        }
    }
    ctx->pc = 0x218694u;
label_218694:
    // 0x218694: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x218694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x218698: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x218698u;
    {
        const bool branch_taken_0x218698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218698u;
        // 0x21869c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218698) {
            ctx->pc = 0x2186B4u;
            goto label_2186b4;
        }
    }
    ctx->pc = 0x2186A0u;
    // 0x2186a0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2186a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2186a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2186A4u;
    {
        const bool branch_taken_0x2186a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2186A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186A4u;
        // 0x2186a8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186a4) {
            ctx->pc = 0x2186B4u;
            goto label_2186b4;
        }
    }
    ctx->pc = 0x2186ACu;
    // 0x2186ac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2186ACu;
    {
        const bool branch_taken_0x2186ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2186ac) {
            ctx->pc = 0x2186C4u;
            goto label_2186c4;
        }
    }
    ctx->pc = 0x2186B4u;
label_2186b4:
    // 0x2186b4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2186B4u;
    SET_GPR_U32(ctx, 31, 0x2186BCu);
    ctx->pc = 0x2186B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186B4u;
    // 0x2186b8: 0x240500c3  addiu       $a1, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2186B4u, 0x2186BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186BCu;
label_2186bc:
    // 0x2186bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2186BCu;
    {
        const bool branch_taken_0x2186bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186BCu;
        // 0x2186c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186bc) {
            ctx->pc = 0x2186D0u;
            goto label_2186d0;
        }
    }
    ctx->pc = 0x2186C4u;
label_2186c4:
    // 0x2186c4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2186C4u;
    SET_GPR_U32(ctx, 31, 0x2186CCu);
    ctx->pc = 0x2186C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186C4u;
    // 0x2186c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2186C4u, 0x2186CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186CCu;
label_2186cc:
    // 0x2186cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2186ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2186d0:
    // 0x2186d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2186d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2186d4: 0x286200df  slti        $v0, $v1, 0xDF
    ctx->pc = 0x2186d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)223) ? 1 : 0);
    // 0x2186d8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2186D8u;
    {
        const bool branch_taken_0x2186d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2186DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186D8u;
        // 0x2186dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186d8) {
            ctx->pc = 0x218628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218628;
        }
    }
    ctx->pc = 0x2186E0u;
    // 0x2186e0: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2186e4: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x2186e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2186e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2186e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2186ec: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x2186ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2186f0: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2186f4: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2186f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2186f8: 0x2415000e  addiu       $s5, $zero, 0xE
    ctx->pc = 0x2186f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2186fc: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x218700: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x218704: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x218704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x218708: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x218708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21870c: 0x0  nop
    ctx->pc = 0x21870cu;
    // NOP
label_218710:
    // 0x218710: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x218710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218714: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x218714u;
    {
        const bool branch_taken_0x218714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x218714) {
            ctx->pc = 0x218718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218714u;
            // 0x218718: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21871Cu;
            goto label_21871c;
        }
    }
    ctx->pc = 0x21871Cu;
label_21871c:
    // 0x21871c: 0x2462ff21  addiu       $v0, $v1, -0xDF
    ctx->pc = 0x21871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967073));
    // 0x218720: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x218720u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x218724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218728: 0x1812  mflo        $v1
    ctx->pc = 0x218728u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x21872c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21872Cu;
    {
        const bool branch_taken_0x21872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21872Cu;
        // 0x218730: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21872c) {
            ctx->pc = 0x21876Cu;
            goto label_21876c;
        }
    }
    ctx->pc = 0x218734u;
    // 0x218734: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x218734u;
    {
        const bool branch_taken_0x218734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218734u;
        // 0x218738: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218734) {
            ctx->pc = 0x218770u;
            goto label_218770;
        }
    }
    ctx->pc = 0x21873Cu;
    // 0x21873c: 0x107e000c  beq         $v1, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x21873Cu;
    {
        const bool branch_taken_0x21873c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x21873c) {
            ctx->pc = 0x218770u;
            goto label_218770;
        }
    }
    ctx->pc = 0x218744u;
    // 0x218744: 0x1077000a  beq         $v1, $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x218744u;
    {
        const bool branch_taken_0x218744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x218744) {
            ctx->pc = 0x218770u;
            goto label_218770;
        }
    }
    ctx->pc = 0x21874Cu;
    // 0x21874c: 0x10760008  beq         $v1, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x21874Cu;
    {
        const bool branch_taken_0x21874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x21874c) {
            ctx->pc = 0x218770u;
            goto label_218770;
        }
    }
    ctx->pc = 0x218754u;
    // 0x218754: 0x10750006  beq         $v1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x218754u;
    {
        const bool branch_taken_0x218754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x218754) {
            ctx->pc = 0x218770u;
            goto label_218770;
        }
    }
    ctx->pc = 0x21875Cu;
    // 0x21875c: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x21875Cu;
    {
        const bool branch_taken_0x21875c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x21875c) {
            ctx->pc = 0x218770u;
            goto label_218770;
        }
    }
    ctx->pc = 0x218764u;
    // 0x218764: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x218764u;
    {
        const bool branch_taken_0x218764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x218768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218764u;
        // 0x218768: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218764) {
            ctx->pc = 0x218780u;
            goto label_218780;
        }
    }
    ctx->pc = 0x21876Cu;
label_21876c:
    // 0x21876c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_218770:
    // 0x218770: 0xc08525e  jal         func_214978
    ctx->pc = 0x218770u;
    SET_GPR_U32(ctx, 31, 0x218778u);
    ctx->pc = 0x218774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218770u;
    // 0x218774: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218770u, 0x218778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218778u;
label_218778:
    // 0x218778: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x218778u;
    {
        const bool branch_taken_0x218778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218778u;
        // 0x21877c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218778) {
            ctx->pc = 0x2187B8u;
            goto label_2187b8;
        }
    }
    ctx->pc = 0x218780u;
label_218780:
    // 0x218780: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x218780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x218784: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218784u;
    {
        const bool branch_taken_0x218784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218784u;
        // 0x218788: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218784) {
            ctx->pc = 0x21879Cu;
            goto label_21879c;
        }
    }
    ctx->pc = 0x21878Cu;
    // 0x21878c: 0x10720003  beq         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21878Cu;
    {
        const bool branch_taken_0x21878c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x21878c) {
            ctx->pc = 0x21879Cu;
            goto label_21879c;
        }
    }
    ctx->pc = 0x218794u;
    // 0x218794: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218794u;
    {
        const bool branch_taken_0x218794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x218794) {
            ctx->pc = 0x2187ACu;
            goto label_2187ac;
        }
    }
    ctx->pc = 0x21879Cu;
label_21879c:
    // 0x21879c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21879Cu;
    SET_GPR_U32(ctx, 31, 0x2187A4u);
    ctx->pc = 0x2187A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21879Cu;
    // 0x2187a0: 0x240500c3  addiu       $a1, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21879Cu, 0x2187A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187A4u;
label_2187a4:
    // 0x2187a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2187A4u;
    {
        const bool branch_taken_0x2187a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2187A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187A4u;
        // 0x2187a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187a4) {
            ctx->pc = 0x2187B8u;
            goto label_2187b8;
        }
    }
    ctx->pc = 0x2187ACu;
label_2187ac:
    // 0x2187ac: 0xc08525e  jal         func_214978
    ctx->pc = 0x2187ACu;
    SET_GPR_U32(ctx, 31, 0x2187B4u);
    ctx->pc = 0x2187B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187ACu;
    // 0x2187b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2187ACu, 0x2187B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187B4u;
label_2187b4:
    // 0x2187b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2187b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2187b8:
    // 0x2187b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2187b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2187bc: 0x286201bb  slti        $v0, $v1, 0x1BB
    ctx->pc = 0x2187bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)443) ? 1 : 0);
    // 0x2187c0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2187C0u;
    {
        const bool branch_taken_0x2187c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2187C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187C0u;
        // 0x2187c4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187c0) {
            ctx->pc = 0x218710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218710;
        }
    }
    ctx->pc = 0x2187C8u;
    // 0x2187c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2187c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2187cc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2187CCu;
    SET_GPR_U32(ctx, 31, 0x2187D4u);
    ctx->pc = 0x2187D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187CCu;
    // 0x2187d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2187CCu, 0x2187D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187D4u;
label_2187d4:
    // 0x2187d4: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2187d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2187d8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2187D8u;
    SET_GPR_U32(ctx, 31, 0x2187E0u);
    ctx->pc = 0x2187DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187D8u;
    // 0x2187dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2187D8u, 0x2187E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187E0u;
label_2187e0:
    // 0x2187e0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2187e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2187e4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2187E4u;
    SET_GPR_U32(ctx, 31, 0x2187ECu);
    ctx->pc = 0x2187E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187E4u;
    // 0x2187e8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2187E4u, 0x2187ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187ECu;
label_2187ec:
    // 0x2187ec: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x2187ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2187f0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2187F0u;
    SET_GPR_U32(ctx, 31, 0x2187F8u);
    ctx->pc = 0x2187F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187F0u;
    // 0x2187f4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2187F0u, 0x2187F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187F8u;
label_2187f8:
    // 0x2187f8: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2187fc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2187FCu;
    SET_GPR_U32(ctx, 31, 0x218804u);
    ctx->pc = 0x218800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187FCu;
    // 0x218800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2187FCu, 0x218804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218804u;
label_218804:
    // 0x218804: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x218804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x218808: 0xc08525e  jal         func_214978
    ctx->pc = 0x218808u;
    SET_GPR_U32(ctx, 31, 0x218810u);
    ctx->pc = 0x21880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218808u;
    // 0x21880c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218808u, 0x218810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218810u;
label_218810:
    // 0x218810: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x218814: 0xc08525e  jal         func_214978
    ctx->pc = 0x218814u;
    SET_GPR_U32(ctx, 31, 0x21881Cu);
    ctx->pc = 0x218818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218814u;
    // 0x218818: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218814u, 0x21881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21881Cu;
label_21881c:
    // 0x21881c: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x21881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x218820: 0xc08525e  jal         func_214978
    ctx->pc = 0x218820u;
    SET_GPR_U32(ctx, 31, 0x218828u);
    ctx->pc = 0x218824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218820u;
    // 0x218824: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218820u, 0x218828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218828u;
label_218828:
    // 0x218828: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x218828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21882c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21882Cu;
    SET_GPR_U32(ctx, 31, 0x218834u);
    ctx->pc = 0x218830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21882Cu;
    // 0x218830: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21882Cu, 0x218834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218834u;
label_218834:
    // 0x218834: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x218834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x218838: 0xc08525e  jal         func_214978
    ctx->pc = 0x218838u;
    SET_GPR_U32(ctx, 31, 0x218840u);
    ctx->pc = 0x21883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218838u;
    // 0x21883c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218838u, 0x218840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218840u;
label_218840:
    // 0x218840: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x218840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x218844: 0xc08525e  jal         func_214978
    ctx->pc = 0x218844u;
    SET_GPR_U32(ctx, 31, 0x21884Cu);
    ctx->pc = 0x218848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218844u;
    // 0x218848: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218844u, 0x21884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21884Cu;
label_21884c:
    // 0x21884c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x21884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x218850: 0xc08525e  jal         func_214978
    ctx->pc = 0x218850u;
    SET_GPR_U32(ctx, 31, 0x218858u);
    ctx->pc = 0x218854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218850u;
    // 0x218854: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218850u, 0x218858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218858u;
label_218858:
    // 0x218858: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x218858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x21885c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21885Cu;
    SET_GPR_U32(ctx, 31, 0x218864u);
    ctx->pc = 0x218860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21885Cu;
    // 0x218860: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21885Cu, 0x218864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218864u;
label_218864:
    // 0x218864: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x218864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x218868: 0xc08525e  jal         func_214978
    ctx->pc = 0x218868u;
    SET_GPR_U32(ctx, 31, 0x218870u);
    ctx->pc = 0x21886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218868u;
    // 0x21886c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218868u, 0x218870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218870u;
label_218870:
    // 0x218870: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x218870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x218874: 0xc08525e  jal         func_214978
    ctx->pc = 0x218874u;
    SET_GPR_U32(ctx, 31, 0x21887Cu);
    ctx->pc = 0x218878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218874u;
    // 0x218878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218874u, 0x21887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21887Cu;
label_21887c:
    // 0x21887c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x21887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x218880: 0xc08525e  jal         func_214978
    ctx->pc = 0x218880u;
    SET_GPR_U32(ctx, 31, 0x218888u);
    ctx->pc = 0x218884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218880u;
    // 0x218884: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218880u, 0x218888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218888u;
label_218888:
    // 0x218888: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x218888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x21888c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21888Cu;
    SET_GPR_U32(ctx, 31, 0x218894u);
    ctx->pc = 0x218890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21888Cu;
    // 0x218890: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21888Cu, 0x218894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218894u;
label_218894:
    // 0x218894: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x218894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x218898: 0xc08525e  jal         func_214978
    ctx->pc = 0x218898u;
    SET_GPR_U32(ctx, 31, 0x2188A0u);
    ctx->pc = 0x21889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218898u;
    // 0x21889c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218898u, 0x2188A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188A0u;
label_2188a0:
    // 0x2188a0: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x2188a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2188a4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188A4u;
    SET_GPR_U32(ctx, 31, 0x2188ACu);
    ctx->pc = 0x2188A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188A4u;
    // 0x2188a8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188A4u, 0x2188ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188ACu;
label_2188ac:
    // 0x2188ac: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2188acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2188b0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188B0u;
    SET_GPR_U32(ctx, 31, 0x2188B8u);
    ctx->pc = 0x2188B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188B0u;
    // 0x2188b4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188B0u, 0x2188B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188B8u;
label_2188b8:
    // 0x2188b8: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x2188b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2188bc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188BCu;
    SET_GPR_U32(ctx, 31, 0x2188C4u);
    ctx->pc = 0x2188C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188BCu;
    // 0x2188c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188BCu, 0x2188C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188C4u;
label_2188c4:
    // 0x2188c4: 0x24040085  addiu       $a0, $zero, 0x85
    ctx->pc = 0x2188c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x2188c8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188C8u;
    SET_GPR_U32(ctx, 31, 0x2188D0u);
    ctx->pc = 0x2188CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188C8u;
    // 0x2188cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188C8u, 0x2188D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188D0u;
label_2188d0:
    // 0x2188d0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2188d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2188d4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188D4u;
    SET_GPR_U32(ctx, 31, 0x2188DCu);
    ctx->pc = 0x2188D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188D4u;
    // 0x2188d8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188D4u, 0x2188DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188DCu;
label_2188dc:
    // 0x2188dc: 0x240400a6  addiu       $a0, $zero, 0xA6
    ctx->pc = 0x2188dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2188e0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188E0u;
    SET_GPR_U32(ctx, 31, 0x2188E8u);
    ctx->pc = 0x2188E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188E0u;
    // 0x2188e4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188E0u, 0x2188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E8u;
label_2188e8:
    // 0x2188e8: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x2188e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x2188ec: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188ECu;
    SET_GPR_U32(ctx, 31, 0x2188F4u);
    ctx->pc = 0x2188F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188ECu;
    // 0x2188f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188ECu, 0x2188F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188F4u;
label_2188f4:
    // 0x2188f4: 0x240400b1  addiu       $a0, $zero, 0xB1
    ctx->pc = 0x2188f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2188f8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2188F8u;
    SET_GPR_U32(ctx, 31, 0x218900u);
    ctx->pc = 0x2188FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188F8u;
    // 0x2188fc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2188F8u, 0x218900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218900u;
label_218900:
    // 0x218900: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x218900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x218904: 0xc08525e  jal         func_214978
    ctx->pc = 0x218904u;
    SET_GPR_U32(ctx, 31, 0x21890Cu);
    ctx->pc = 0x218908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218904u;
    // 0x218908: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218904u, 0x21890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21890Cu;
label_21890c:
    // 0x21890c: 0x240400c7  addiu       $a0, $zero, 0xC7
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x218910: 0xc08525e  jal         func_214978
    ctx->pc = 0x218910u;
    SET_GPR_U32(ctx, 31, 0x218918u);
    ctx->pc = 0x218914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218910u;
    // 0x218914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218910u, 0x218918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218918u;
label_218918:
    // 0x218918: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x218918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x21891c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21891Cu;
    SET_GPR_U32(ctx, 31, 0x218924u);
    ctx->pc = 0x218920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21891Cu;
    // 0x218920: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21891Cu, 0x218924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218924u;
label_218924:
    // 0x218924: 0x240400dd  addiu       $a0, $zero, 0xDD
    ctx->pc = 0x218924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x218928: 0xc08525e  jal         func_214978
    ctx->pc = 0x218928u;
    SET_GPR_U32(ctx, 31, 0x218930u);
    ctx->pc = 0x21892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218928u;
    // 0x21892c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218928u, 0x218930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218930u;
label_218930:
    // 0x218930: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x218930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x218934: 0xc08525e  jal         func_214978
    ctx->pc = 0x218934u;
    SET_GPR_U32(ctx, 31, 0x21893Cu);
    ctx->pc = 0x218938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218934u;
    // 0x218938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218934u, 0x21893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21893Cu;
label_21893c:
    // 0x21893c: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x218940: 0xc08525e  jal         func_214978
    ctx->pc = 0x218940u;
    SET_GPR_U32(ctx, 31, 0x218948u);
    ctx->pc = 0x218944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218940u;
    // 0x218944: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218940u, 0x218948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218948u;
label_218948:
    // 0x218948: 0x24040091  addiu       $a0, $zero, 0x91
    ctx->pc = 0x218948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x21894c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21894Cu;
    SET_GPR_U32(ctx, 31, 0x218954u);
    ctx->pc = 0x218950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21894Cu;
    // 0x218950: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21894Cu, 0x218954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218954u;
label_218954:
    // 0x218954: 0x240400a7  addiu       $a0, $zero, 0xA7
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x218958: 0xc08525e  jal         func_214978
    ctx->pc = 0x218958u;
    SET_GPR_U32(ctx, 31, 0x218960u);
    ctx->pc = 0x21895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218958u;
    // 0x21895c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218958u, 0x218960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218960u;
label_218960:
    // 0x218960: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x218960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x218964: 0xc08525e  jal         func_214978
    ctx->pc = 0x218964u;
    SET_GPR_U32(ctx, 31, 0x21896Cu);
    ctx->pc = 0x218968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218964u;
    // 0x218968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218964u, 0x21896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21896Cu;
label_21896c:
    // 0x21896c: 0x240400b2  addiu       $a0, $zero, 0xB2
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x218970: 0xc08525e  jal         func_214978
    ctx->pc = 0x218970u;
    SET_GPR_U32(ctx, 31, 0x218978u);
    ctx->pc = 0x218974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218970u;
    // 0x218974: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218970u, 0x218978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218978u;
label_218978:
    // 0x218978: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x218978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x21897c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21897Cu;
    SET_GPR_U32(ctx, 31, 0x218984u);
    ctx->pc = 0x218980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21897Cu;
    // 0x218980: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21897Cu, 0x218984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218984u;
label_218984:
    // 0x218984: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x218984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x218988: 0xc08525e  jal         func_214978
    ctx->pc = 0x218988u;
    SET_GPR_U32(ctx, 31, 0x218990u);
    ctx->pc = 0x21898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218988u;
    // 0x21898c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218988u, 0x218990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218990u;
label_218990:
    // 0x218990: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x218990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x218994: 0xc08525e  jal         func_214978
    ctx->pc = 0x218994u;
    SET_GPR_U32(ctx, 31, 0x21899Cu);
    ctx->pc = 0x218998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218994u;
    // 0x218998: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218994u, 0x21899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21899Cu;
label_21899c:
    // 0x21899c: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x21899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x2189a0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189A0u;
    SET_GPR_U32(ctx, 31, 0x2189A8u);
    ctx->pc = 0x2189A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189A0u;
    // 0x2189a4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189A0u, 0x2189A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189A8u;
label_2189a8:
    // 0x2189a8: 0x240400e8  addiu       $a0, $zero, 0xE8
    ctx->pc = 0x2189a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2189ac: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189ACu;
    SET_GPR_U32(ctx, 31, 0x2189B4u);
    ctx->pc = 0x2189B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189ACu;
    // 0x2189b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189ACu, 0x2189B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189B4u;
label_2189b4:
    // 0x2189b4: 0x240400f3  addiu       $a0, $zero, 0xF3
    ctx->pc = 0x2189b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2189b8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189B8u;
    SET_GPR_U32(ctx, 31, 0x2189C0u);
    ctx->pc = 0x2189BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189B8u;
    // 0x2189bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189B8u, 0x2189C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189C0u;
label_2189c0:
    // 0x2189c0: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2189c4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189C4u;
    SET_GPR_U32(ctx, 31, 0x2189CCu);
    ctx->pc = 0x2189C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189C4u;
    // 0x2189c8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189C4u, 0x2189CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189CCu;
label_2189cc:
    // 0x2189cc: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x2189ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x2189d0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189D0u;
    SET_GPR_U32(ctx, 31, 0x2189D8u);
    ctx->pc = 0x2189D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189D0u;
    // 0x2189d4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189D0u, 0x2189D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189D8u;
label_2189d8:
    // 0x2189d8: 0x24040109  addiu       $a0, $zero, 0x109
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x2189dc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189DCu;
    SET_GPR_U32(ctx, 31, 0x2189E4u);
    ctx->pc = 0x2189E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189DCu;
    // 0x2189e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189DCu, 0x2189E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189E4u;
label_2189e4:
    // 0x2189e4: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x2189e8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189E8u;
    SET_GPR_U32(ctx, 31, 0x2189F0u);
    ctx->pc = 0x2189ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189E8u;
    // 0x2189ec: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189E8u, 0x2189F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189F0u;
label_2189f0:
    // 0x2189f0: 0x2404012a  addiu       $a0, $zero, 0x12A
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x2189f4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2189F4u;
    SET_GPR_U32(ctx, 31, 0x2189FCu);
    ctx->pc = 0x2189F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189F4u;
    // 0x2189f8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2189F4u, 0x2189FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189FCu;
label_2189fc:
    // 0x2189fc: 0x24040135  addiu       $a0, $zero, 0x135
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x218a00: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A00u;
    SET_GPR_U32(ctx, 31, 0x218A08u);
    ctx->pc = 0x218A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A00u;
    // 0x218a04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A00u, 0x218A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A08u;
label_218a08:
    // 0x218a08: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x218a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x218a0c: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A0Cu;
    SET_GPR_U32(ctx, 31, 0x218A14u);
    ctx->pc = 0x218A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A0Cu;
    // 0x218a10: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A0Cu, 0x218A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A14u;
label_218a14:
    // 0x218a14: 0x2404014b  addiu       $a0, $zero, 0x14B
    ctx->pc = 0x218a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
    // 0x218a18: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A18u;
    SET_GPR_U32(ctx, 31, 0x218A20u);
    ctx->pc = 0x218A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A18u;
    // 0x218a1c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A18u, 0x218A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A20u;
label_218a20:
    // 0x218a20: 0x240400e9  addiu       $a0, $zero, 0xE9
    ctx->pc = 0x218a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x218a24: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A24u;
    SET_GPR_U32(ctx, 31, 0x218A2Cu);
    ctx->pc = 0x218A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A24u;
    // 0x218a28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A24u, 0x218A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A2Cu;
label_218a2c:
    // 0x218a2c: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x218a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x218a30: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A30u;
    SET_GPR_U32(ctx, 31, 0x218A38u);
    ctx->pc = 0x218A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A30u;
    // 0x218a34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A30u, 0x218A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A38u;
label_218a38:
    // 0x218a38: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x218a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218a3c: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A3Cu;
    SET_GPR_U32(ctx, 31, 0x218A44u);
    ctx->pc = 0x218A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A3Cu;
    // 0x218a40: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A3Cu, 0x218A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A44u;
label_218a44:
    // 0x218a44: 0x24040115  addiu       $a0, $zero, 0x115
    ctx->pc = 0x218a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x218a48: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A48u;
    SET_GPR_U32(ctx, 31, 0x218A50u);
    ctx->pc = 0x218A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A48u;
    // 0x218a4c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A48u, 0x218A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A50u;
label_218a50:
    // 0x218a50: 0x2404010a  addiu       $a0, $zero, 0x10A
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x218a54: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A54u;
    SET_GPR_U32(ctx, 31, 0x218A5Cu);
    ctx->pc = 0x218A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A54u;
    // 0x218a58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A54u, 0x218A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A5Cu;
label_218a5c:
    // 0x218a5c: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x218a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x218a60: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A60u;
    SET_GPR_U32(ctx, 31, 0x218A68u);
    ctx->pc = 0x218A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A60u;
    // 0x218a64: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A60u, 0x218A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A68u;
label_218a68:
    // 0x218a68: 0x2404012b  addiu       $a0, $zero, 0x12B
    ctx->pc = 0x218a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x218a6c: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A6Cu;
    SET_GPR_U32(ctx, 31, 0x218A74u);
    ctx->pc = 0x218A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A6Cu;
    // 0x218a70: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A6Cu, 0x218A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A74u;
label_218a74:
    // 0x218a74: 0x24040136  addiu       $a0, $zero, 0x136
    ctx->pc = 0x218a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x218a78: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A78u;
    SET_GPR_U32(ctx, 31, 0x218A80u);
    ctx->pc = 0x218A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A78u;
    // 0x218a7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A78u, 0x218A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A80u;
label_218a80:
    // 0x218a80: 0x24040141  addiu       $a0, $zero, 0x141
    ctx->pc = 0x218a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x218a84: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A84u;
    SET_GPR_U32(ctx, 31, 0x218A8Cu);
    ctx->pc = 0x218A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A84u;
    // 0x218a88: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A84u, 0x218A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A8Cu;
label_218a8c:
    // 0x218a8c: 0x2404014c  addiu       $a0, $zero, 0x14C
    ctx->pc = 0x218a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x218a90: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A90u;
    SET_GPR_U32(ctx, 31, 0x218A98u);
    ctx->pc = 0x218A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A90u;
    // 0x218a94: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A90u, 0x218A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A98u;
label_218a98:
    // 0x218a98: 0x24040156  addiu       $a0, $zero, 0x156
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x218a9c: 0xc08525e  jal         func_214978
    ctx->pc = 0x218A9Cu;
    SET_GPR_U32(ctx, 31, 0x218AA4u);
    ctx->pc = 0x218AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A9Cu;
    // 0x218aa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218A9Cu, 0x218AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AA4u;
label_218aa4:
    // 0x218aa4: 0x24040161  addiu       $a0, $zero, 0x161
    ctx->pc = 0x218aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x218aa8: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AA8u;
    SET_GPR_U32(ctx, 31, 0x218AB0u);
    ctx->pc = 0x218AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AA8u;
    // 0x218aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AA8u, 0x218AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AB0u;
label_218ab0:
    // 0x218ab0: 0x2404016c  addiu       $a0, $zero, 0x16C
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x218ab4: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AB4u;
    SET_GPR_U32(ctx, 31, 0x218ABCu);
    ctx->pc = 0x218AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AB4u;
    // 0x218ab8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AB4u, 0x218ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218ABCu;
label_218abc:
    // 0x218abc: 0x24040182  addiu       $a0, $zero, 0x182
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x218ac0: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AC0u;
    SET_GPR_U32(ctx, 31, 0x218AC8u);
    ctx->pc = 0x218AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AC0u;
    // 0x218ac4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AC0u, 0x218AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AC8u;
label_218ac8:
    // 0x218ac8: 0x24040177  addiu       $a0, $zero, 0x177
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x218acc: 0xc08525e  jal         func_214978
    ctx->pc = 0x218ACCu;
    SET_GPR_U32(ctx, 31, 0x218AD4u);
    ctx->pc = 0x218AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218ACCu;
    // 0x218ad0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218ACCu, 0x218AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AD4u;
label_218ad4:
    // 0x218ad4: 0x2404018d  addiu       $a0, $zero, 0x18D
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
    // 0x218ad8: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AD8u;
    SET_GPR_U32(ctx, 31, 0x218AE0u);
    ctx->pc = 0x218ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AD8u;
    // 0x218adc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AD8u, 0x218AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AE0u;
label_218ae0:
    // 0x218ae0: 0x24040198  addiu       $a0, $zero, 0x198
    ctx->pc = 0x218ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x218ae4: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AE4u;
    SET_GPR_U32(ctx, 31, 0x218AECu);
    ctx->pc = 0x218AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AE4u;
    // 0x218ae8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AE4u, 0x218AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AECu;
label_218aec:
    // 0x218aec: 0x240401a3  addiu       $a0, $zero, 0x1A3
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    // 0x218af0: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AF0u;
    SET_GPR_U32(ctx, 31, 0x218AF8u);
    ctx->pc = 0x218AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AF0u;
    // 0x218af4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AF0u, 0x218AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AF8u;
label_218af8:
    // 0x218af8: 0x240401ae  addiu       $a0, $zero, 0x1AE
    ctx->pc = 0x218af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x218afc: 0xc08525e  jal         func_214978
    ctx->pc = 0x218AFCu;
    SET_GPR_U32(ctx, 31, 0x218B04u);
    ctx->pc = 0x218B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AFCu;
    // 0x218b00: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218AFCu, 0x218B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B04u;
label_218b04:
    // 0x218b04: 0x240401b9  addiu       $a0, $zero, 0x1B9
    ctx->pc = 0x218b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x218b08: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B08u;
    SET_GPR_U32(ctx, 31, 0x218B10u);
    ctx->pc = 0x218B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B08u;
    // 0x218b0c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B08u, 0x218B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B10u;
label_218b10:
    // 0x218b10: 0x24040157  addiu       $a0, $zero, 0x157
    ctx->pc = 0x218b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x218b14: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B14u;
    SET_GPR_U32(ctx, 31, 0x218B1Cu);
    ctx->pc = 0x218B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B14u;
    // 0x218b18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B14u, 0x218B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B1Cu;
label_218b1c:
    // 0x218b1c: 0x24040162  addiu       $a0, $zero, 0x162
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
    // 0x218b20: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B20u;
    SET_GPR_U32(ctx, 31, 0x218B28u);
    ctx->pc = 0x218B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B20u;
    // 0x218b24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B20u, 0x218B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B28u;
label_218b28:
    // 0x218b28: 0x2404016d  addiu       $a0, $zero, 0x16D
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x218b2c: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B2Cu;
    SET_GPR_U32(ctx, 31, 0x218B34u);
    ctx->pc = 0x218B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B2Cu;
    // 0x218b30: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B2Cu, 0x218B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B34u;
label_218b34:
    // 0x218b34: 0x24040183  addiu       $a0, $zero, 0x183
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x218b38: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B38u;
    SET_GPR_U32(ctx, 31, 0x218B40u);
    ctx->pc = 0x218B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B38u;
    // 0x218b3c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B38u, 0x218B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B40u;
label_218b40:
    // 0x218b40: 0x24040178  addiu       $a0, $zero, 0x178
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x218b44: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B44u;
    SET_GPR_U32(ctx, 31, 0x218B4Cu);
    ctx->pc = 0x218B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B44u;
    // 0x218b48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B44u, 0x218B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B4Cu;
label_218b4c:
    // 0x218b4c: 0x2404018e  addiu       $a0, $zero, 0x18E
    ctx->pc = 0x218b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
    // 0x218b50: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B50u;
    SET_GPR_U32(ctx, 31, 0x218B58u);
    ctx->pc = 0x218B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B50u;
    // 0x218b54: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B50u, 0x218B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B58u;
label_218b58:
    // 0x218b58: 0x24040199  addiu       $a0, $zero, 0x199
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x218b5c: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B5Cu;
    SET_GPR_U32(ctx, 31, 0x218B64u);
    ctx->pc = 0x218B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B5Cu;
    // 0x218b60: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B5Cu, 0x218B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B64u;
label_218b64:
    // 0x218b64: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x218b68: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B68u;
    SET_GPR_U32(ctx, 31, 0x218B70u);
    ctx->pc = 0x218B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B68u;
    // 0x218b6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B68u, 0x218B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B70u;
label_218b70:
    // 0x218b70: 0x240401af  addiu       $a0, $zero, 0x1AF
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 431));
    // 0x218b74: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B74u;
    SET_GPR_U32(ctx, 31, 0x218B7Cu);
    ctx->pc = 0x218B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B74u;
    // 0x218b78: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B74u, 0x218B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B7Cu;
label_218b7c:
    // 0x218b7c: 0x240401ba  addiu       $a0, $zero, 0x1BA
    ctx->pc = 0x218b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x218b80: 0xc08525e  jal         func_214978
    ctx->pc = 0x218B80u;
    SET_GPR_U32(ctx, 31, 0x218B88u);
    ctx->pc = 0x218B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B80u;
    // 0x218b84: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x218B80u, 0x218B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B88u;
label_218b88:
    // 0x218b88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218b8c: 0x24050236  addiu       $a1, $zero, 0x236
    ctx->pc = 0x218b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 566));
    // 0x218b90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218B90u;
    SET_GPR_U32(ctx, 31, 0x218B98u);
    ctx->pc = 0x218B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B90u;
    // 0x218b94: 0x2484ef40  addiu       $a0, $a0, -0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218B90u, 0x218B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B98u;
label_218b98:
    // 0x218b98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218b9c: 0x24050237  addiu       $a1, $zero, 0x237
    ctx->pc = 0x218b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 567));
    // 0x218ba0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218BA0u;
    SET_GPR_U32(ctx, 31, 0x218BA8u);
    ctx->pc = 0x218BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BA0u;
    // 0x218ba4: 0x2484ef70  addiu       $a0, $a0, -0x1090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218BA0u, 0x218BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BA8u;
label_218ba8:
    // 0x218ba8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218bac: 0x24050238  addiu       $a1, $zero, 0x238
    ctx->pc = 0x218bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x218bb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218BB0u;
    SET_GPR_U32(ctx, 31, 0x218BB8u);
    ctx->pc = 0x218BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BB0u;
    // 0x218bb4: 0x2484ef98  addiu       $a0, $a0, -0x1068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218BB0u, 0x218BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BB8u;
label_218bb8:
    // 0x218bb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218bbc: 0x24050239  addiu       $a1, $zero, 0x239
    ctx->pc = 0x218bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 569));
    // 0x218bc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218BC0u;
    SET_GPR_U32(ctx, 31, 0x218BC8u);
    ctx->pc = 0x218BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BC0u;
    // 0x218bc4: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218BC0u, 0x218BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BC8u;
label_218bc8:
    // 0x218bc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218bcc: 0x2405023a  addiu       $a1, $zero, 0x23A
    ctx->pc = 0x218bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x218bd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218BD0u;
    SET_GPR_U32(ctx, 31, 0x218BD8u);
    ctx->pc = 0x218BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BD0u;
    // 0x218bd4: 0x2484eff8  addiu       $a0, $a0, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218BD0u, 0x218BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BD8u;
label_218bd8:
    // 0x218bd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218bdc: 0x2405023b  addiu       $a1, $zero, 0x23B
    ctx->pc = 0x218bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
    // 0x218be0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218BE0u;
    SET_GPR_U32(ctx, 31, 0x218BE8u);
    ctx->pc = 0x218BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BE0u;
    // 0x218be4: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218BE0u, 0x218BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BE8u;
label_218be8:
    // 0x218be8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218bec: 0x2405023c  addiu       $a1, $zero, 0x23C
    ctx->pc = 0x218becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x218bf0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218BF0u;
    SET_GPR_U32(ctx, 31, 0x218BF8u);
    ctx->pc = 0x218BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BF0u;
    // 0x218bf4: 0x2484f048  addiu       $a0, $a0, -0xFB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218BF0u, 0x218BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BF8u;
label_218bf8:
    // 0x218bf8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218bfc: 0x2405023d  addiu       $a1, $zero, 0x23D
    ctx->pc = 0x218bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 573));
    // 0x218c00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C00u;
    SET_GPR_U32(ctx, 31, 0x218C08u);
    ctx->pc = 0x218C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C00u;
    // 0x218c04: 0x2484f070  addiu       $a0, $a0, -0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C00u, 0x218C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C08u;
label_218c08:
    // 0x218c08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c0c: 0x2405023e  addiu       $a1, $zero, 0x23E
    ctx->pc = 0x218c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 574));
    // 0x218c10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C10u;
    SET_GPR_U32(ctx, 31, 0x218C18u);
    ctx->pc = 0x218C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C10u;
    // 0x218c14: 0x2484f098  addiu       $a0, $a0, -0xF68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C10u, 0x218C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C18u;
label_218c18:
    // 0x218c18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c1c: 0x2405023f  addiu       $a1, $zero, 0x23F
    ctx->pc = 0x218c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x218c20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C20u;
    SET_GPR_U32(ctx, 31, 0x218C28u);
    ctx->pc = 0x218C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C20u;
    // 0x218c24: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C20u, 0x218C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C28u;
label_218c28:
    // 0x218c28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c2c: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x218c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x218c30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C30u;
    SET_GPR_U32(ctx, 31, 0x218C38u);
    ctx->pc = 0x218C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C30u;
    // 0x218c34: 0x2484f0e8  addiu       $a0, $a0, -0xF18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C30u, 0x218C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C38u;
label_218c38:
    // 0x218c38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c3c: 0x24050241  addiu       $a1, $zero, 0x241
    ctx->pc = 0x218c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x218c40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C40u;
    SET_GPR_U32(ctx, 31, 0x218C48u);
    ctx->pc = 0x218C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C40u;
    // 0x218c44: 0x2484f110  addiu       $a0, $a0, -0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C40u, 0x218C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C48u;
label_218c48:
    // 0x218c48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c4c: 0x24050242  addiu       $a1, $zero, 0x242
    ctx->pc = 0x218c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x218c50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C50u;
    SET_GPR_U32(ctx, 31, 0x218C58u);
    ctx->pc = 0x218C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C50u;
    // 0x218c54: 0x2484f138  addiu       $a0, $a0, -0xEC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C50u, 0x218C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C58u;
label_218c58:
    // 0x218c58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c5c: 0x24050243  addiu       $a1, $zero, 0x243
    ctx->pc = 0x218c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x218c60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C60u;
    SET_GPR_U32(ctx, 31, 0x218C68u);
    ctx->pc = 0x218C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C60u;
    // 0x218c64: 0x2484f160  addiu       $a0, $a0, -0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C60u, 0x218C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C68u;
label_218c68:
    // 0x218c68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c6c: 0x24050244  addiu       $a1, $zero, 0x244
    ctx->pc = 0x218c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x218c70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C70u;
    SET_GPR_U32(ctx, 31, 0x218C78u);
    ctx->pc = 0x218C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C70u;
    // 0x218c74: 0x2484f188  addiu       $a0, $a0, -0xE78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C70u, 0x218C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C78u;
label_218c78:
    // 0x218c78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c7c: 0x24050245  addiu       $a1, $zero, 0x245
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    // 0x218c80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C80u;
    SET_GPR_U32(ctx, 31, 0x218C88u);
    ctx->pc = 0x218C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C80u;
    // 0x218c84: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C80u, 0x218C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C88u;
label_218c88:
    // 0x218c88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c8c: 0x24050246  addiu       $a1, $zero, 0x246
    ctx->pc = 0x218c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x218c90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218C90u;
    SET_GPR_U32(ctx, 31, 0x218C98u);
    ctx->pc = 0x218C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C90u;
    // 0x218c94: 0x2484f1d8  addiu       $a0, $a0, -0xE28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218C90u, 0x218C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C98u;
label_218c98:
    // 0x218c98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218c9c: 0x24050247  addiu       $a1, $zero, 0x247
    ctx->pc = 0x218c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    // 0x218ca0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218CA0u;
    SET_GPR_U32(ctx, 31, 0x218CA8u);
    ctx->pc = 0x218CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CA0u;
    // 0x218ca4: 0x2484f200  addiu       $a0, $a0, -0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218CA0u, 0x218CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CA8u;
label_218ca8:
    // 0x218ca8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218cac: 0x24050248  addiu       $a1, $zero, 0x248
    ctx->pc = 0x218cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x218cb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218CB0u;
    SET_GPR_U32(ctx, 31, 0x218CB8u);
    ctx->pc = 0x218CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CB0u;
    // 0x218cb4: 0x2484f228  addiu       $a0, $a0, -0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218CB0u, 0x218CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CB8u;
label_218cb8:
    // 0x218cb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218cbc: 0x24050249  addiu       $a1, $zero, 0x249
    ctx->pc = 0x218cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    // 0x218cc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218CC0u;
    SET_GPR_U32(ctx, 31, 0x218CC8u);
    ctx->pc = 0x218CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CC0u;
    // 0x218cc4: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218CC0u, 0x218CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CC8u;
label_218cc8:
    // 0x218cc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218ccc: 0x2405024b  addiu       $a1, $zero, 0x24B
    ctx->pc = 0x218cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    // 0x218cd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218CD0u;
    SET_GPR_U32(ctx, 31, 0x218CD8u);
    ctx->pc = 0x218CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CD0u;
    // 0x218cd4: 0x2484f278  addiu       $a0, $a0, -0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218CD0u, 0x218CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CD8u;
label_218cd8:
    // 0x218cd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218cdc: 0x2405024c  addiu       $a1, $zero, 0x24C
    ctx->pc = 0x218cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    // 0x218ce0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218CE0u;
    SET_GPR_U32(ctx, 31, 0x218CE8u);
    ctx->pc = 0x218CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CE0u;
    // 0x218ce4: 0x2484f2a0  addiu       $a0, $a0, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218CE0u, 0x218CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CE8u;
label_218ce8:
    // 0x218ce8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218cec: 0x2405024d  addiu       $a1, $zero, 0x24D
    ctx->pc = 0x218cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
    // 0x218cf0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218CF0u;
    SET_GPR_U32(ctx, 31, 0x218CF8u);
    ctx->pc = 0x218CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CF0u;
    // 0x218cf4: 0x2484f2c8  addiu       $a0, $a0, -0xD38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218CF0u, 0x218CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CF8u;
label_218cf8:
    // 0x218cf8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218cfc: 0x2405024e  addiu       $a1, $zero, 0x24E
    ctx->pc = 0x218cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x218d00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D00u;
    SET_GPR_U32(ctx, 31, 0x218D08u);
    ctx->pc = 0x218D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D00u;
    // 0x218d04: 0x2484f2f8  addiu       $a0, $a0, -0xD08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D00u, 0x218D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D08u;
label_218d08:
    // 0x218d08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d0c: 0x2405024f  addiu       $a1, $zero, 0x24F
    ctx->pc = 0x218d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
    // 0x218d10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D10u;
    SET_GPR_U32(ctx, 31, 0x218D18u);
    ctx->pc = 0x218D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D10u;
    // 0x218d14: 0x2484f320  addiu       $a0, $a0, -0xCE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D10u, 0x218D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D18u;
label_218d18:
    // 0x218d18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d1c: 0x24050250  addiu       $a1, $zero, 0x250
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x218d20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D20u;
    SET_GPR_U32(ctx, 31, 0x218D28u);
    ctx->pc = 0x218D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D20u;
    // 0x218d24: 0x2484f348  addiu       $a0, $a0, -0xCB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D20u, 0x218D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D28u;
label_218d28:
    // 0x218d28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d2c: 0x24050251  addiu       $a1, $zero, 0x251
    ctx->pc = 0x218d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x218d30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D30u;
    SET_GPR_U32(ctx, 31, 0x218D38u);
    ctx->pc = 0x218D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D30u;
    // 0x218d34: 0x2484f368  addiu       $a0, $a0, -0xC98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D30u, 0x218D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D38u;
label_218d38:
    // 0x218d38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d3c: 0x24050252  addiu       $a1, $zero, 0x252
    ctx->pc = 0x218d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x218d40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D40u;
    SET_GPR_U32(ctx, 31, 0x218D48u);
    ctx->pc = 0x218D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D40u;
    // 0x218d44: 0x2484f398  addiu       $a0, $a0, -0xC68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D40u, 0x218D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D48u;
label_218d48:
    // 0x218d48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d4c: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x218d50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D50u;
    SET_GPR_U32(ctx, 31, 0x218D58u);
    ctx->pc = 0x218D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D50u;
    // 0x218d54: 0x2484f3c0  addiu       $a0, $a0, -0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D50u, 0x218D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D58u;
label_218d58:
    // 0x218d58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d5c: 0x24050254  addiu       $a1, $zero, 0x254
    ctx->pc = 0x218d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
    // 0x218d60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D60u;
    SET_GPR_U32(ctx, 31, 0x218D68u);
    ctx->pc = 0x218D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D60u;
    // 0x218d64: 0x2484f3e8  addiu       $a0, $a0, -0xC18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D60u, 0x218D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D68u;
label_218d68:
    // 0x218d68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d6c: 0x24050255  addiu       $a1, $zero, 0x255
    ctx->pc = 0x218d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 597));
    // 0x218d70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D70u;
    SET_GPR_U32(ctx, 31, 0x218D78u);
    ctx->pc = 0x218D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D70u;
    // 0x218d74: 0x2484f410  addiu       $a0, $a0, -0xBF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D70u, 0x218D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D78u;
label_218d78:
    // 0x218d78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d7c: 0x24050256  addiu       $a1, $zero, 0x256
    ctx->pc = 0x218d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x218d80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D80u;
    SET_GPR_U32(ctx, 31, 0x218D88u);
    ctx->pc = 0x218D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D80u;
    // 0x218d84: 0x2484f440  addiu       $a0, $a0, -0xBC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D80u, 0x218D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D88u;
label_218d88:
    // 0x218d88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d8c: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x218d90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218D90u;
    SET_GPR_U32(ctx, 31, 0x218D98u);
    ctx->pc = 0x218D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D90u;
    // 0x218d94: 0x2484f468  addiu       $a0, $a0, -0xB98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218D90u, 0x218D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D98u;
label_218d98:
    // 0x218d98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218d9c: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x218d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x218da0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218DA0u;
    SET_GPR_U32(ctx, 31, 0x218DA8u);
    ctx->pc = 0x218DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DA0u;
    // 0x218da4: 0x2484f488  addiu       $a0, $a0, -0xB78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218DA0u, 0x218DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DA8u;
label_218da8:
    // 0x218da8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218dac: 0x24050259  addiu       $a1, $zero, 0x259
    ctx->pc = 0x218dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x218db0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218DB0u;
    SET_GPR_U32(ctx, 31, 0x218DB8u);
    ctx->pc = 0x218DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DB0u;
    // 0x218db4: 0x2484f4b0  addiu       $a0, $a0, -0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218DB0u, 0x218DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DB8u;
label_218db8:
    // 0x218db8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218dbc: 0x2405025a  addiu       $a1, $zero, 0x25A
    ctx->pc = 0x218dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x218dc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218DC0u;
    SET_GPR_U32(ctx, 31, 0x218DC8u);
    ctx->pc = 0x218DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DC0u;
    // 0x218dc4: 0x2484f4d8  addiu       $a0, $a0, -0xB28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218DC0u, 0x218DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DC8u;
label_218dc8:
    // 0x218dc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218dcc: 0x2405025b  addiu       $a1, $zero, 0x25B
    ctx->pc = 0x218dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x218dd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218DD0u;
    SET_GPR_U32(ctx, 31, 0x218DD8u);
    ctx->pc = 0x218DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DD0u;
    // 0x218dd4: 0x2484f500  addiu       $a0, $a0, -0xB00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218DD0u, 0x218DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DD8u;
label_218dd8:
    // 0x218dd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218ddc: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x218ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x218de0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218DE0u;
    SET_GPR_U32(ctx, 31, 0x218DE8u);
    ctx->pc = 0x218DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DE0u;
    // 0x218de4: 0x2484f528  addiu       $a0, $a0, -0xAD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218DE0u, 0x218DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DE8u;
label_218de8:
    // 0x218de8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218dec: 0x2405025d  addiu       $a1, $zero, 0x25D
    ctx->pc = 0x218decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 605));
    // 0x218df0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218DF0u;
    SET_GPR_U32(ctx, 31, 0x218DF8u);
    ctx->pc = 0x218DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DF0u;
    // 0x218df4: 0x2484f550  addiu       $a0, $a0, -0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218DF0u, 0x218DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DF8u;
label_218df8:
    // 0x218df8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218dfc: 0x2405025e  addiu       $a1, $zero, 0x25E
    ctx->pc = 0x218dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 606));
    // 0x218e00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E00u;
    SET_GPR_U32(ctx, 31, 0x218E08u);
    ctx->pc = 0x218E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E00u;
    // 0x218e04: 0x2484f578  addiu       $a0, $a0, -0xA88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E00u, 0x218E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E08u;
label_218e08:
    // 0x218e08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e0c: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x218e10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E10u;
    SET_GPR_U32(ctx, 31, 0x218E18u);
    ctx->pc = 0x218E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E10u;
    // 0x218e14: 0x2484f5a0  addiu       $a0, $a0, -0xA60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E10u, 0x218E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E18u;
label_218e18:
    // 0x218e18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e1c: 0x24050261  addiu       $a1, $zero, 0x261
    ctx->pc = 0x218e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x218e20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E20u;
    SET_GPR_U32(ctx, 31, 0x218E28u);
    ctx->pc = 0x218E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E20u;
    // 0x218e24: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E20u, 0x218E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E28u;
label_218e28:
    // 0x218e28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e2c: 0x24050262  addiu       $a1, $zero, 0x262
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
    // 0x218e30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E30u;
    SET_GPR_U32(ctx, 31, 0x218E38u);
    ctx->pc = 0x218E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E30u;
    // 0x218e34: 0x2484f5e0  addiu       $a0, $a0, -0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E30u, 0x218E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E38u;
label_218e38:
    // 0x218e38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e3c: 0x240501bb  addiu       $a1, $zero, 0x1BB
    ctx->pc = 0x218e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x218e40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E40u;
    SET_GPR_U32(ctx, 31, 0x218E48u);
    ctx->pc = 0x218E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E40u;
    // 0x218e44: 0x2484f600  addiu       $a0, $a0, -0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E40u, 0x218E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E48u;
label_218e48:
    // 0x218e48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e4c: 0x240501cc  addiu       $a1, $zero, 0x1CC
    ctx->pc = 0x218e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x218e50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E50u;
    SET_GPR_U32(ctx, 31, 0x218E58u);
    ctx->pc = 0x218E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E50u;
    // 0x218e54: 0x2484f620  addiu       $a0, $a0, -0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E50u, 0x218E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E58u;
label_218e58:
    // 0x218e58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e5c: 0x240501cd  addiu       $a1, $zero, 0x1CD
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
    // 0x218e60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E60u;
    SET_GPR_U32(ctx, 31, 0x218E68u);
    ctx->pc = 0x218E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E60u;
    // 0x218e64: 0x2484f640  addiu       $a0, $a0, -0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E60u, 0x218E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E68u;
label_218e68:
    // 0x218e68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e6c: 0x240501ce  addiu       $a1, $zero, 0x1CE
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    // 0x218e70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E70u;
    SET_GPR_U32(ctx, 31, 0x218E78u);
    ctx->pc = 0x218E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E70u;
    // 0x218e74: 0x2484f660  addiu       $a0, $a0, -0x9A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E70u, 0x218E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E78u;
label_218e78:
    // 0x218e78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e7c: 0x240501cf  addiu       $a1, $zero, 0x1CF
    ctx->pc = 0x218e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    // 0x218e80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E80u;
    SET_GPR_U32(ctx, 31, 0x218E88u);
    ctx->pc = 0x218E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E80u;
    // 0x218e84: 0x2484f680  addiu       $a0, $a0, -0x980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E80u, 0x218E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E88u;
label_218e88:
    // 0x218e88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e8c: 0x240501d0  addiu       $a1, $zero, 0x1D0
    ctx->pc = 0x218e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x218e90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218E90u;
    SET_GPR_U32(ctx, 31, 0x218E98u);
    ctx->pc = 0x218E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E90u;
    // 0x218e94: 0x2484f6a0  addiu       $a0, $a0, -0x960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218E90u, 0x218E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E98u;
label_218e98:
    // 0x218e98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218e9c: 0x240501bc  addiu       $a1, $zero, 0x1BC
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x218ea0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218EA0u;
    SET_GPR_U32(ctx, 31, 0x218EA8u);
    ctx->pc = 0x218EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EA0u;
    // 0x218ea4: 0x2484f6c0  addiu       $a0, $a0, -0x940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218EA0u, 0x218EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EA8u;
label_218ea8:
    // 0x218ea8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218eac: 0x240501bd  addiu       $a1, $zero, 0x1BD
    ctx->pc = 0x218eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
    // 0x218eb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218EB0u;
    SET_GPR_U32(ctx, 31, 0x218EB8u);
    ctx->pc = 0x218EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EB0u;
    // 0x218eb4: 0x2484f6e0  addiu       $a0, $a0, -0x920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218EB0u, 0x218EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EB8u;
label_218eb8:
    // 0x218eb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218ebc: 0x240501be  addiu       $a1, $zero, 0x1BE
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    // 0x218ec0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218EC0u;
    SET_GPR_U32(ctx, 31, 0x218EC8u);
    ctx->pc = 0x218EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EC0u;
    // 0x218ec4: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218EC0u, 0x218EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EC8u;
label_218ec8:
    // 0x218ec8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218ecc: 0x240501bf  addiu       $a1, $zero, 0x1BF
    ctx->pc = 0x218eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x218ed0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218ED0u;
    SET_GPR_U32(ctx, 31, 0x218ED8u);
    ctx->pc = 0x218ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218ED0u;
    // 0x218ed4: 0x2484f720  addiu       $a0, $a0, -0x8E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218ED0u, 0x218ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218ED8u;
label_218ed8:
    // 0x218ed8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218edc: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x218edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x218ee0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218EE0u;
    SET_GPR_U32(ctx, 31, 0x218EE8u);
    ctx->pc = 0x218EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EE0u;
    // 0x218ee4: 0x2484f740  addiu       $a0, $a0, -0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218EE0u, 0x218EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EE8u;
label_218ee8:
    // 0x218ee8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218eec: 0x240501d9  addiu       $a1, $zero, 0x1D9
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x218ef0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218EF0u;
    SET_GPR_U32(ctx, 31, 0x218EF8u);
    ctx->pc = 0x218EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EF0u;
    // 0x218ef4: 0x2484f760  addiu       $a0, $a0, -0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218EF0u, 0x218EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EF8u;
label_218ef8:
    // 0x218ef8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218efc: 0x240501da  addiu       $a1, $zero, 0x1DA
    ctx->pc = 0x218efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
    // 0x218f00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F00u;
    SET_GPR_U32(ctx, 31, 0x218F08u);
    ctx->pc = 0x218F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F00u;
    // 0x218f04: 0x2484f788  addiu       $a0, $a0, -0x878 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F00u, 0x218F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F08u;
label_218f08:
    // 0x218f08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f0c: 0x240501d6  addiu       $a1, $zero, 0x1D6
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x218f10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F10u;
    SET_GPR_U32(ctx, 31, 0x218F18u);
    ctx->pc = 0x218F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F10u;
    // 0x218f14: 0x2484f7b0  addiu       $a0, $a0, -0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F10u, 0x218F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F18u;
label_218f18:
    // 0x218f18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f1c: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x218f20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F20u;
    SET_GPR_U32(ctx, 31, 0x218F28u);
    ctx->pc = 0x218F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F20u;
    // 0x218f24: 0x2484f7d0  addiu       $a0, $a0, -0x830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F20u, 0x218F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F28u;
label_218f28:
    // 0x218f28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f2c: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    // 0x218f30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F30u;
    SET_GPR_U32(ctx, 31, 0x218F38u);
    ctx->pc = 0x218F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F30u;
    // 0x218f34: 0x2484f7f0  addiu       $a0, $a0, -0x810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F30u, 0x218F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F38u;
label_218f38:
    // 0x218f38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f3c: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x218f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x218f40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F40u;
    SET_GPR_U32(ctx, 31, 0x218F48u);
    ctx->pc = 0x218F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F40u;
    // 0x218f44: 0x2484f810  addiu       $a0, $a0, -0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F40u, 0x218F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F48u;
label_218f48:
    // 0x218f48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f4c: 0x240501c5  addiu       $a1, $zero, 0x1C5
    ctx->pc = 0x218f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    // 0x218f50: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F50u;
    SET_GPR_U32(ctx, 31, 0x218F58u);
    ctx->pc = 0x218F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F50u;
    // 0x218f54: 0x2484f830  addiu       $a0, $a0, -0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F50u, 0x218F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F58u;
label_218f58:
    // 0x218f58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f5c: 0x240501c6  addiu       $a1, $zero, 0x1C6
    ctx->pc = 0x218f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    // 0x218f60: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F60u;
    SET_GPR_U32(ctx, 31, 0x218F68u);
    ctx->pc = 0x218F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F60u;
    // 0x218f64: 0x2484f850  addiu       $a0, $a0, -0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F60u, 0x218F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F68u;
label_218f68:
    // 0x218f68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f6c: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x218f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    // 0x218f70: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F70u;
    SET_GPR_U32(ctx, 31, 0x218F78u);
    ctx->pc = 0x218F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F70u;
    // 0x218f74: 0x2484f870  addiu       $a0, $a0, -0x790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F70u, 0x218F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F78u;
label_218f78:
    // 0x218f78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f7c: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x218f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x218f80: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F80u;
    SET_GPR_U32(ctx, 31, 0x218F88u);
    ctx->pc = 0x218F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F80u;
    // 0x218f84: 0x2484f890  addiu       $a0, $a0, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F80u, 0x218F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F88u;
label_218f88:
    // 0x218f88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f8c: 0x240501c8  addiu       $a1, $zero, 0x1C8
    ctx->pc = 0x218f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    // 0x218f90: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218F90u;
    SET_GPR_U32(ctx, 31, 0x218F98u);
    ctx->pc = 0x218F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F90u;
    // 0x218f94: 0x2484f8b0  addiu       $a0, $a0, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218F90u, 0x218F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F98u;
label_218f98:
    // 0x218f98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218f9c: 0x240501c9  addiu       $a1, $zero, 0x1C9
    ctx->pc = 0x218f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    // 0x218fa0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218FA0u;
    SET_GPR_U32(ctx, 31, 0x218FA8u);
    ctx->pc = 0x218FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FA0u;
    // 0x218fa4: 0x2484f8d0  addiu       $a0, $a0, -0x730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218FA0u, 0x218FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FA8u;
label_218fa8:
    // 0x218fa8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218fac: 0x240501ca  addiu       $a1, $zero, 0x1CA
    ctx->pc = 0x218facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
    // 0x218fb0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218FB0u;
    SET_GPR_U32(ctx, 31, 0x218FB8u);
    ctx->pc = 0x218FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FB0u;
    // 0x218fb4: 0x2484f8f0  addiu       $a0, $a0, -0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218FB0u, 0x218FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FB8u;
label_218fb8:
    // 0x218fb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218fbc: 0x240501df  addiu       $a1, $zero, 0x1DF
    ctx->pc = 0x218fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 479));
    // 0x218fc0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218FC0u;
    SET_GPR_U32(ctx, 31, 0x218FC8u);
    ctx->pc = 0x218FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FC0u;
    // 0x218fc4: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218FC0u, 0x218FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FC8u;
label_218fc8:
    // 0x218fc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218fcc: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x218fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x218fd0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218FD0u;
    SET_GPR_U32(ctx, 31, 0x218FD8u);
    ctx->pc = 0x218FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FD0u;
    // 0x218fd4: 0x2484f938  addiu       $a0, $a0, -0x6C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218FD0u, 0x218FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FD8u;
label_218fd8:
    // 0x218fd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218fdc: 0x240501cb  addiu       $a1, $zero, 0x1CB
    ctx->pc = 0x218fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
    // 0x218fe0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218FE0u;
    SET_GPR_U32(ctx, 31, 0x218FE8u);
    ctx->pc = 0x218FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FE0u;
    // 0x218fe4: 0x2484f960  addiu       $a0, $a0, -0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218FE0u, 0x218FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FE8u;
label_218fe8:
    // 0x218fe8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218fec: 0x240501d2  addiu       $a1, $zero, 0x1D2
    ctx->pc = 0x218fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    // 0x218ff0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x218FF0u;
    SET_GPR_U32(ctx, 31, 0x218FF8u);
    ctx->pc = 0x218FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FF0u;
    // 0x218ff4: 0x2484f988  addiu       $a0, $a0, -0x678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x218FF0u, 0x218FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FF8u;
label_218ff8:
    // 0x218ff8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x218ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x218ffc: 0x240501d3  addiu       $a1, $zero, 0x1D3
    ctx->pc = 0x218ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    // 0x219000: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219000u;
    SET_GPR_U32(ctx, 31, 0x219008u);
    ctx->pc = 0x219004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219000u;
    // 0x219004: 0x2484f9b8  addiu       $a0, $a0, -0x648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219000u, 0x219008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219008u;
label_219008:
    // 0x219008: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21900c: 0x240501d4  addiu       $a1, $zero, 0x1D4
    ctx->pc = 0x21900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    // 0x219010: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219010u;
    SET_GPR_U32(ctx, 31, 0x219018u);
    ctx->pc = 0x219014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219010u;
    // 0x219014: 0x2484f9e8  addiu       $a0, $a0, -0x618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219010u, 0x219018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219018u;
label_219018:
    // 0x219018: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21901c: 0x240501db  addiu       $a1, $zero, 0x1DB
    ctx->pc = 0x21901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
    // 0x219020: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219020u;
    SET_GPR_U32(ctx, 31, 0x219028u);
    ctx->pc = 0x219024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219020u;
    // 0x219024: 0x2484fa18  addiu       $a0, $a0, -0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219020u, 0x219028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219028u;
label_219028:
    // 0x219028: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21902c: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x21902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x219030: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219030u;
    SET_GPR_U32(ctx, 31, 0x219038u);
    ctx->pc = 0x219034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219030u;
    // 0x219034: 0x2484fa48  addiu       $a0, $a0, -0x5B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219030u, 0x219038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219038u;
label_219038:
    // 0x219038: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21903c: 0x240501d7  addiu       $a1, $zero, 0x1D7
    ctx->pc = 0x21903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    // 0x219040: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219040u;
    SET_GPR_U32(ctx, 31, 0x219048u);
    ctx->pc = 0x219044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219040u;
    // 0x219044: 0x2484fa78  addiu       $a0, $a0, -0x588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219040u, 0x219048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219048u;
label_219048:
    // 0x219048: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21904c: 0x240501d8  addiu       $a1, $zero, 0x1D8
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x219050: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219050u;
    SET_GPR_U32(ctx, 31, 0x219058u);
    ctx->pc = 0x219054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219050u;
    // 0x219054: 0x2484faa0  addiu       $a0, $a0, -0x560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219050u, 0x219058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219058u;
label_219058:
    // 0x219058: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21905c: 0x240501d1  addiu       $a1, $zero, 0x1D1
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
    // 0x219060: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219060u;
    SET_GPR_U32(ctx, 31, 0x219068u);
    ctx->pc = 0x219064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219060u;
    // 0x219064: 0x2484fac8  addiu       $a0, $a0, -0x538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219060u, 0x219068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219068u;
label_219068:
    // 0x219068: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21906c: 0x240501d5  addiu       $a1, $zero, 0x1D5
    ctx->pc = 0x21906cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    // 0x219070: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219070u;
    SET_GPR_U32(ctx, 31, 0x219078u);
    ctx->pc = 0x219074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219070u;
    // 0x219074: 0x2484fae8  addiu       $a0, $a0, -0x518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219070u, 0x219078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219078u;
label_219078:
    // 0x219078: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21907c: 0x240501dd  addiu       $a1, $zero, 0x1DD
    ctx->pc = 0x21907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    // 0x219080: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219080u;
    SET_GPR_U32(ctx, 31, 0x219088u);
    ctx->pc = 0x219084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219080u;
    // 0x219084: 0x2484fb08  addiu       $a0, $a0, -0x4F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219080u, 0x219088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219088u;
label_219088:
    // 0x219088: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21908c: 0x240501de  addiu       $a1, $zero, 0x1DE
    ctx->pc = 0x21908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    // 0x219090: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219090u;
    SET_GPR_U32(ctx, 31, 0x219098u);
    ctx->pc = 0x219094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219090u;
    // 0x219094: 0x2484fb30  addiu       $a0, $a0, -0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219090u, 0x219098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219098u;
label_219098:
    // 0x219098: 0x24040236  addiu       $a0, $zero, 0x236
    ctx->pc = 0x219098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 566));
    // 0x21909c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21909Cu;
    SET_GPR_U32(ctx, 31, 0x2190A4u);
    ctx->pc = 0x2190A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21909Cu;
    // 0x2190a0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21909Cu, 0x2190A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190A4u;
label_2190a4:
    // 0x2190a4: 0x24040237  addiu       $a0, $zero, 0x237
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 567));
    // 0x2190a8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190A8u;
    SET_GPR_U32(ctx, 31, 0x2190B0u);
    ctx->pc = 0x2190ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190A8u;
    // 0x2190ac: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190A8u, 0x2190B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190B0u;
label_2190b0:
    // 0x2190b0: 0x24040238  addiu       $a0, $zero, 0x238
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x2190b4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190B4u;
    SET_GPR_U32(ctx, 31, 0x2190BCu);
    ctx->pc = 0x2190B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190B4u;
    // 0x2190b8: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190B4u, 0x2190BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190BCu;
label_2190bc:
    // 0x2190bc: 0x24040239  addiu       $a0, $zero, 0x239
    ctx->pc = 0x2190bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 569));
    // 0x2190c0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190C0u;
    SET_GPR_U32(ctx, 31, 0x2190C8u);
    ctx->pc = 0x2190C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190C0u;
    // 0x2190c4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190C0u, 0x2190C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190C8u;
label_2190c8:
    // 0x2190c8: 0x2404023a  addiu       $a0, $zero, 0x23A
    ctx->pc = 0x2190c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x2190cc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190CCu;
    SET_GPR_U32(ctx, 31, 0x2190D4u);
    ctx->pc = 0x2190D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190CCu;
    // 0x2190d0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190CCu, 0x2190D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190D4u;
label_2190d4:
    // 0x2190d4: 0x2404023b  addiu       $a0, $zero, 0x23B
    ctx->pc = 0x2190d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
    // 0x2190d8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190D8u;
    SET_GPR_U32(ctx, 31, 0x2190E0u);
    ctx->pc = 0x2190DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190D8u;
    // 0x2190dc: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190D8u, 0x2190E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190E0u;
label_2190e0:
    // 0x2190e0: 0x2404023c  addiu       $a0, $zero, 0x23C
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x2190e4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190E4u;
    SET_GPR_U32(ctx, 31, 0x2190ECu);
    ctx->pc = 0x2190E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190E4u;
    // 0x2190e8: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190E4u, 0x2190ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190ECu;
label_2190ec:
    // 0x2190ec: 0x2404023d  addiu       $a0, $zero, 0x23D
    ctx->pc = 0x2190ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 573));
    // 0x2190f0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190F0u;
    SET_GPR_U32(ctx, 31, 0x2190F8u);
    ctx->pc = 0x2190F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190F0u;
    // 0x2190f4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190F0u, 0x2190F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190F8u;
label_2190f8:
    // 0x2190f8: 0x2404023e  addiu       $a0, $zero, 0x23E
    ctx->pc = 0x2190f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 574));
    // 0x2190fc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2190FCu;
    SET_GPR_U32(ctx, 31, 0x219104u);
    ctx->pc = 0x219100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190FCu;
    // 0x219100: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2190FCu, 0x219104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219104u;
label_219104:
    // 0x219104: 0x2404023f  addiu       $a0, $zero, 0x23F
    ctx->pc = 0x219104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x219108: 0xc08525e  jal         func_214978
    ctx->pc = 0x219108u;
    SET_GPR_U32(ctx, 31, 0x219110u);
    ctx->pc = 0x21910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219108u;
    // 0x21910c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219108u, 0x219110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219110u;
label_219110:
    // 0x219110: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x219114: 0xc08525e  jal         func_214978
    ctx->pc = 0x219114u;
    SET_GPR_U32(ctx, 31, 0x21911Cu);
    ctx->pc = 0x219118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219114u;
    // 0x219118: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219114u, 0x21911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21911Cu;
label_21911c:
    // 0x21911c: 0x24040241  addiu       $a0, $zero, 0x241
    ctx->pc = 0x21911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x219120: 0xc08525e  jal         func_214978
    ctx->pc = 0x219120u;
    SET_GPR_U32(ctx, 31, 0x219128u);
    ctx->pc = 0x219124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219120u;
    // 0x219124: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219120u, 0x219128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219128u;
label_219128:
    // 0x219128: 0x24040242  addiu       $a0, $zero, 0x242
    ctx->pc = 0x219128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x21912c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21912Cu;
    SET_GPR_U32(ctx, 31, 0x219134u);
    ctx->pc = 0x219130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21912Cu;
    // 0x219130: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21912Cu, 0x219134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219134u;
label_219134:
    // 0x219134: 0x24040243  addiu       $a0, $zero, 0x243
    ctx->pc = 0x219134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x219138: 0xc08525e  jal         func_214978
    ctx->pc = 0x219138u;
    SET_GPR_U32(ctx, 31, 0x219140u);
    ctx->pc = 0x21913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219138u;
    // 0x21913c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219138u, 0x219140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219140u;
label_219140:
    // 0x219140: 0x24040244  addiu       $a0, $zero, 0x244
    ctx->pc = 0x219140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x219144: 0xc08525e  jal         func_214978
    ctx->pc = 0x219144u;
    SET_GPR_U32(ctx, 31, 0x21914Cu);
    ctx->pc = 0x219148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219144u;
    // 0x219148: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219144u, 0x21914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21914Cu;
label_21914c:
    // 0x21914c: 0x24040245  addiu       $a0, $zero, 0x245
    ctx->pc = 0x21914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    // 0x219150: 0xc08525e  jal         func_214978
    ctx->pc = 0x219150u;
    SET_GPR_U32(ctx, 31, 0x219158u);
    ctx->pc = 0x219154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219150u;
    // 0x219154: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219150u, 0x219158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219158u;
label_219158:
    // 0x219158: 0x24040246  addiu       $a0, $zero, 0x246
    ctx->pc = 0x219158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x21915c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21915Cu;
    SET_GPR_U32(ctx, 31, 0x219164u);
    ctx->pc = 0x219160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21915Cu;
    // 0x219160: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21915Cu, 0x219164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219164u;
label_219164:
    // 0x219164: 0x24040247  addiu       $a0, $zero, 0x247
    ctx->pc = 0x219164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    // 0x219168: 0xc08525e  jal         func_214978
    ctx->pc = 0x219168u;
    SET_GPR_U32(ctx, 31, 0x219170u);
    ctx->pc = 0x21916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219168u;
    // 0x21916c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219168u, 0x219170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219170u;
label_219170:
    // 0x219170: 0x24040248  addiu       $a0, $zero, 0x248
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x219174: 0xc08525e  jal         func_214978
    ctx->pc = 0x219174u;
    SET_GPR_U32(ctx, 31, 0x21917Cu);
    ctx->pc = 0x219178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219174u;
    // 0x219178: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219174u, 0x21917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21917Cu;
label_21917c:
    // 0x21917c: 0x24040249  addiu       $a0, $zero, 0x249
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    // 0x219180: 0xc08525e  jal         func_214978
    ctx->pc = 0x219180u;
    SET_GPR_U32(ctx, 31, 0x219188u);
    ctx->pc = 0x219184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219180u;
    // 0x219184: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219180u, 0x219188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219188u;
label_219188:
    // 0x219188: 0x2404024b  addiu       $a0, $zero, 0x24B
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    // 0x21918c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21918Cu;
    SET_GPR_U32(ctx, 31, 0x219194u);
    ctx->pc = 0x219190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21918Cu;
    // 0x219190: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21918Cu, 0x219194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219194u;
label_219194:
    // 0x219194: 0x2404024c  addiu       $a0, $zero, 0x24C
    ctx->pc = 0x219194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    // 0x219198: 0xc08525e  jal         func_214978
    ctx->pc = 0x219198u;
    SET_GPR_U32(ctx, 31, 0x2191A0u);
    ctx->pc = 0x21919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219198u;
    // 0x21919c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219198u, 0x2191A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191A0u;
label_2191a0:
    // 0x2191a0: 0x2404024d  addiu       $a0, $zero, 0x24D
    ctx->pc = 0x2191a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
    // 0x2191a4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191A4u;
    SET_GPR_U32(ctx, 31, 0x2191ACu);
    ctx->pc = 0x2191A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191A4u;
    // 0x2191a8: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191A4u, 0x2191ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191ACu;
label_2191ac:
    // 0x2191ac: 0x2404024e  addiu       $a0, $zero, 0x24E
    ctx->pc = 0x2191acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x2191b0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191B0u;
    SET_GPR_U32(ctx, 31, 0x2191B8u);
    ctx->pc = 0x2191B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191B0u;
    // 0x2191b4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191B0u, 0x2191B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191B8u;
label_2191b8:
    // 0x2191b8: 0x2404024f  addiu       $a0, $zero, 0x24F
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
    // 0x2191bc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191BCu;
    SET_GPR_U32(ctx, 31, 0x2191C4u);
    ctx->pc = 0x2191C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191BCu;
    // 0x2191c0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191BCu, 0x2191C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191C4u;
label_2191c4:
    // 0x2191c4: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x2191c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2191c8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191C8u;
    SET_GPR_U32(ctx, 31, 0x2191D0u);
    ctx->pc = 0x2191CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191C8u;
    // 0x2191cc: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191C8u, 0x2191D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191D0u;
label_2191d0:
    // 0x2191d0: 0x24040251  addiu       $a0, $zero, 0x251
    ctx->pc = 0x2191d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x2191d4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191D4u;
    SET_GPR_U32(ctx, 31, 0x2191DCu);
    ctx->pc = 0x2191D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191D4u;
    // 0x2191d8: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191D4u, 0x2191DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191DCu;
label_2191dc:
    // 0x2191dc: 0x24040252  addiu       $a0, $zero, 0x252
    ctx->pc = 0x2191dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x2191e0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191E0u;
    SET_GPR_U32(ctx, 31, 0x2191E8u);
    ctx->pc = 0x2191E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191E0u;
    // 0x2191e4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191E0u, 0x2191E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191E8u;
label_2191e8:
    // 0x2191e8: 0x24040253  addiu       $a0, $zero, 0x253
    ctx->pc = 0x2191e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x2191ec: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191ECu;
    SET_GPR_U32(ctx, 31, 0x2191F4u);
    ctx->pc = 0x2191F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191ECu;
    // 0x2191f0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191ECu, 0x2191F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191F4u;
label_2191f4:
    // 0x2191f4: 0x24040254  addiu       $a0, $zero, 0x254
    ctx->pc = 0x2191f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
    // 0x2191f8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2191F8u;
    SET_GPR_U32(ctx, 31, 0x219200u);
    ctx->pc = 0x2191FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191F8u;
    // 0x2191fc: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2191F8u, 0x219200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219200u;
label_219200:
    // 0x219200: 0x24040255  addiu       $a0, $zero, 0x255
    ctx->pc = 0x219200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 597));
    // 0x219204: 0xc08525e  jal         func_214978
    ctx->pc = 0x219204u;
    SET_GPR_U32(ctx, 31, 0x21920Cu);
    ctx->pc = 0x219208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219204u;
    // 0x219208: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219204u, 0x21920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21920Cu;
label_21920c:
    // 0x21920c: 0x24040256  addiu       $a0, $zero, 0x256
    ctx->pc = 0x21920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x219210: 0xc08525e  jal         func_214978
    ctx->pc = 0x219210u;
    SET_GPR_U32(ctx, 31, 0x219218u);
    ctx->pc = 0x219214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219210u;
    // 0x219214: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219210u, 0x219218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219218u;
label_219218:
    // 0x219218: 0x24040257  addiu       $a0, $zero, 0x257
    ctx->pc = 0x219218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x21921c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21921Cu;
    SET_GPR_U32(ctx, 31, 0x219224u);
    ctx->pc = 0x219220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21921Cu;
    // 0x219220: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21921Cu, 0x219224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219224u;
label_219224:
    // 0x219224: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x219224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x219228: 0xc08525e  jal         func_214978
    ctx->pc = 0x219228u;
    SET_GPR_U32(ctx, 31, 0x219230u);
    ctx->pc = 0x21922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219228u;
    // 0x21922c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219228u, 0x219230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219230u;
label_219230:
    // 0x219230: 0x24040259  addiu       $a0, $zero, 0x259
    ctx->pc = 0x219230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x219234: 0xc08525e  jal         func_214978
    ctx->pc = 0x219234u;
    SET_GPR_U32(ctx, 31, 0x21923Cu);
    ctx->pc = 0x219238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219234u;
    // 0x219238: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219234u, 0x21923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21923Cu;
label_21923c:
    // 0x21923c: 0x2404025a  addiu       $a0, $zero, 0x25A
    ctx->pc = 0x21923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x219240: 0xc08525e  jal         func_214978
    ctx->pc = 0x219240u;
    SET_GPR_U32(ctx, 31, 0x219248u);
    ctx->pc = 0x219244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219240u;
    // 0x219244: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219240u, 0x219248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219248u;
label_219248:
    // 0x219248: 0x2404025b  addiu       $a0, $zero, 0x25B
    ctx->pc = 0x219248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x21924c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21924Cu;
    SET_GPR_U32(ctx, 31, 0x219254u);
    ctx->pc = 0x219250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21924Cu;
    // 0x219250: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21924Cu, 0x219254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219254u;
label_219254:
    // 0x219254: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x219254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x219258: 0xc08525e  jal         func_214978
    ctx->pc = 0x219258u;
    SET_GPR_U32(ctx, 31, 0x219260u);
    ctx->pc = 0x21925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219258u;
    // 0x21925c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219258u, 0x219260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219260u;
label_219260:
    // 0x219260: 0x2404025d  addiu       $a0, $zero, 0x25D
    ctx->pc = 0x219260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 605));
    // 0x219264: 0xc08525e  jal         func_214978
    ctx->pc = 0x219264u;
    SET_GPR_U32(ctx, 31, 0x21926Cu);
    ctx->pc = 0x219268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219264u;
    // 0x219268: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219264u, 0x21926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21926Cu;
label_21926c:
    // 0x21926c: 0x2404025e  addiu       $a0, $zero, 0x25E
    ctx->pc = 0x21926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 606));
    // 0x219270: 0xc08525e  jal         func_214978
    ctx->pc = 0x219270u;
    SET_GPR_U32(ctx, 31, 0x219278u);
    ctx->pc = 0x219274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219270u;
    // 0x219274: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219270u, 0x219278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219278u;
label_219278:
    // 0x219278: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x219278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x21927c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21927Cu;
    SET_GPR_U32(ctx, 31, 0x219284u);
    ctx->pc = 0x219280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21927Cu;
    // 0x219280: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21927Cu, 0x219284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219284u;
label_219284:
    // 0x219284: 0x24040261  addiu       $a0, $zero, 0x261
    ctx->pc = 0x219284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x219288: 0xc08525e  jal         func_214978
    ctx->pc = 0x219288u;
    SET_GPR_U32(ctx, 31, 0x219290u);
    ctx->pc = 0x21928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219288u;
    // 0x21928c: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219288u, 0x219290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219290u;
label_219290:
    // 0x219290: 0x24040262  addiu       $a0, $zero, 0x262
    ctx->pc = 0x219290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
    // 0x219294: 0xc08525e  jal         func_214978
    ctx->pc = 0x219294u;
    SET_GPR_U32(ctx, 31, 0x21929Cu);
    ctx->pc = 0x219298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219294u;
    // 0x219298: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219294u, 0x21929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21929Cu;
label_21929c:
    // 0x21929c: 0x240401bb  addiu       $a0, $zero, 0x1BB
    ctx->pc = 0x21929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x2192a0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192A0u;
    SET_GPR_U32(ctx, 31, 0x2192A8u);
    ctx->pc = 0x2192A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192A0u;
    // 0x2192a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192A0u, 0x2192A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192A8u;
label_2192a8:
    // 0x2192a8: 0x240401cc  addiu       $a0, $zero, 0x1CC
    ctx->pc = 0x2192a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x2192ac: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192ACu;
    SET_GPR_U32(ctx, 31, 0x2192B4u);
    ctx->pc = 0x2192B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192ACu;
    // 0x2192b0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192ACu, 0x2192B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192B4u;
label_2192b4:
    // 0x2192b4: 0x240401cd  addiu       $a0, $zero, 0x1CD
    ctx->pc = 0x2192b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
    // 0x2192b8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192B8u;
    SET_GPR_U32(ctx, 31, 0x2192C0u);
    ctx->pc = 0x2192BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192B8u;
    // 0x2192bc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192B8u, 0x2192C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192C0u;
label_2192c0:
    // 0x2192c0: 0x240401ce  addiu       $a0, $zero, 0x1CE
    ctx->pc = 0x2192c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    // 0x2192c4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192C4u;
    SET_GPR_U32(ctx, 31, 0x2192CCu);
    ctx->pc = 0x2192C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192C4u;
    // 0x2192c8: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192C4u, 0x2192CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192CCu;
label_2192cc:
    // 0x2192cc: 0x240401cf  addiu       $a0, $zero, 0x1CF
    ctx->pc = 0x2192ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    // 0x2192d0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192D0u;
    SET_GPR_U32(ctx, 31, 0x2192D8u);
    ctx->pc = 0x2192D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192D0u;
    // 0x2192d4: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192D0u, 0x2192D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192D8u;
label_2192d8:
    // 0x2192d8: 0x240401d0  addiu       $a0, $zero, 0x1D0
    ctx->pc = 0x2192d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x2192dc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192DCu;
    SET_GPR_U32(ctx, 31, 0x2192E4u);
    ctx->pc = 0x2192E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192DCu;
    // 0x2192e0: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192DCu, 0x2192E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192E4u;
label_2192e4:
    // 0x2192e4: 0x240401bc  addiu       $a0, $zero, 0x1BC
    ctx->pc = 0x2192e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x2192e8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192E8u;
    SET_GPR_U32(ctx, 31, 0x2192F0u);
    ctx->pc = 0x2192ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192E8u;
    // 0x2192ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192E8u, 0x2192F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192F0u;
label_2192f0:
    // 0x2192f0: 0x240401bd  addiu       $a0, $zero, 0x1BD
    ctx->pc = 0x2192f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
    // 0x2192f4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2192F4u;
    SET_GPR_U32(ctx, 31, 0x2192FCu);
    ctx->pc = 0x2192F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192F4u;
    // 0x2192f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2192F4u, 0x2192FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192FCu;
label_2192fc:
    // 0x2192fc: 0x240401be  addiu       $a0, $zero, 0x1BE
    ctx->pc = 0x2192fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    // 0x219300: 0xc08525e  jal         func_214978
    ctx->pc = 0x219300u;
    SET_GPR_U32(ctx, 31, 0x219308u);
    ctx->pc = 0x219304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219300u;
    // 0x219304: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219300u, 0x219308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219308u;
label_219308:
    // 0x219308: 0x240401bf  addiu       $a0, $zero, 0x1BF
    ctx->pc = 0x219308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x21930c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21930Cu;
    SET_GPR_U32(ctx, 31, 0x219314u);
    ctx->pc = 0x219310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21930Cu;
    // 0x219310: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21930Cu, 0x219314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219314u;
label_219314:
    // 0x219314: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x219314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x219318: 0xc08525e  jal         func_214978
    ctx->pc = 0x219318u;
    SET_GPR_U32(ctx, 31, 0x219320u);
    ctx->pc = 0x21931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219318u;
    // 0x21931c: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219318u, 0x219320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219320u;
label_219320:
    // 0x219320: 0x240401d9  addiu       $a0, $zero, 0x1D9
    ctx->pc = 0x219320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x219324: 0xc08525e  jal         func_214978
    ctx->pc = 0x219324u;
    SET_GPR_U32(ctx, 31, 0x21932Cu);
    ctx->pc = 0x219328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219324u;
    // 0x219328: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219324u, 0x21932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21932Cu;
label_21932c:
    // 0x21932c: 0x240401da  addiu       $a0, $zero, 0x1DA
    ctx->pc = 0x21932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
    // 0x219330: 0xc08525e  jal         func_214978
    ctx->pc = 0x219330u;
    SET_GPR_U32(ctx, 31, 0x219338u);
    ctx->pc = 0x219334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219330u;
    // 0x219334: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219330u, 0x219338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219338u;
label_219338:
    // 0x219338: 0x240401d6  addiu       $a0, $zero, 0x1D6
    ctx->pc = 0x219338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x21933c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21933Cu;
    SET_GPR_U32(ctx, 31, 0x219344u);
    ctx->pc = 0x219340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21933Cu;
    // 0x219340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21933Cu, 0x219344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219344u;
label_219344:
    // 0x219344: 0x240401c2  addiu       $a0, $zero, 0x1C2
    ctx->pc = 0x219344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x219348: 0xc08525e  jal         func_214978
    ctx->pc = 0x219348u;
    SET_GPR_U32(ctx, 31, 0x219350u);
    ctx->pc = 0x21934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219348u;
    // 0x21934c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219348u, 0x219350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219350u;
label_219350:
    // 0x219350: 0x240401c3  addiu       $a0, $zero, 0x1C3
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    // 0x219354: 0xc08525e  jal         func_214978
    ctx->pc = 0x219354u;
    SET_GPR_U32(ctx, 31, 0x21935Cu);
    ctx->pc = 0x219358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219354u;
    // 0x219358: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219354u, 0x21935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21935Cu;
label_21935c:
    // 0x21935c: 0x240401c4  addiu       $a0, $zero, 0x1C4
    ctx->pc = 0x21935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x219360: 0xc08525e  jal         func_214978
    ctx->pc = 0x219360u;
    SET_GPR_U32(ctx, 31, 0x219368u);
    ctx->pc = 0x219364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219360u;
    // 0x219364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219360u, 0x219368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219368u;
label_219368:
    // 0x219368: 0x240401c5  addiu       $a0, $zero, 0x1C5
    ctx->pc = 0x219368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    // 0x21936c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21936Cu;
    SET_GPR_U32(ctx, 31, 0x219374u);
    ctx->pc = 0x219370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21936Cu;
    // 0x219370: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21936Cu, 0x219374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219374u;
label_219374:
    // 0x219374: 0x240401c6  addiu       $a0, $zero, 0x1C6
    ctx->pc = 0x219374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    // 0x219378: 0xc08525e  jal         func_214978
    ctx->pc = 0x219378u;
    SET_GPR_U32(ctx, 31, 0x219380u);
    ctx->pc = 0x21937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219378u;
    // 0x21937c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219378u, 0x219380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219380u;
label_219380:
    // 0x219380: 0x240401c1  addiu       $a0, $zero, 0x1C1
    ctx->pc = 0x219380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    // 0x219384: 0xc08525e  jal         func_214978
    ctx->pc = 0x219384u;
    SET_GPR_U32(ctx, 31, 0x21938Cu);
    ctx->pc = 0x219388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219384u;
    // 0x219388: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219384u, 0x21938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21938Cu;
label_21938c:
    // 0x21938c: 0x240401c7  addiu       $a0, $zero, 0x1C7
    ctx->pc = 0x21938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x219390: 0xc08525e  jal         func_214978
    ctx->pc = 0x219390u;
    SET_GPR_U32(ctx, 31, 0x219398u);
    ctx->pc = 0x219394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219390u;
    // 0x219394: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219390u, 0x219398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219398u;
label_219398:
    // 0x219398: 0x240401c8  addiu       $a0, $zero, 0x1C8
    ctx->pc = 0x219398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    // 0x21939c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21939Cu;
    SET_GPR_U32(ctx, 31, 0x2193A4u);
    ctx->pc = 0x2193A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21939Cu;
    // 0x2193a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21939Cu, 0x2193A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193A4u;
label_2193a4:
    // 0x2193a4: 0x240401c9  addiu       $a0, $zero, 0x1C9
    ctx->pc = 0x2193a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    // 0x2193a8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193A8u;
    SET_GPR_U32(ctx, 31, 0x2193B0u);
    ctx->pc = 0x2193ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193A8u;
    // 0x2193ac: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193A8u, 0x2193B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193B0u;
label_2193b0:
    // 0x2193b0: 0x240401ca  addiu       $a0, $zero, 0x1CA
    ctx->pc = 0x2193b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
    // 0x2193b4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193B4u;
    SET_GPR_U32(ctx, 31, 0x2193BCu);
    ctx->pc = 0x2193B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193B4u;
    // 0x2193b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193B4u, 0x2193BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193BCu;
label_2193bc:
    // 0x2193bc: 0x240401df  addiu       $a0, $zero, 0x1DF
    ctx->pc = 0x2193bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 479));
    // 0x2193c0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193C0u;
    SET_GPR_U32(ctx, 31, 0x2193C8u);
    ctx->pc = 0x2193C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193C0u;
    // 0x2193c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193C0u, 0x2193C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193C8u;
label_2193c8:
    // 0x2193c8: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x2193c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2193cc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193CCu;
    SET_GPR_U32(ctx, 31, 0x2193D4u);
    ctx->pc = 0x2193D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193CCu;
    // 0x2193d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193CCu, 0x2193D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193D4u;
label_2193d4:
    // 0x2193d4: 0x240401cb  addiu       $a0, $zero, 0x1CB
    ctx->pc = 0x2193d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
    // 0x2193d8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193D8u;
    SET_GPR_U32(ctx, 31, 0x2193E0u);
    ctx->pc = 0x2193DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193D8u;
    // 0x2193dc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193D8u, 0x2193E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193E0u;
label_2193e0:
    // 0x2193e0: 0x240401d5  addiu       $a0, $zero, 0x1D5
    ctx->pc = 0x2193e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    // 0x2193e4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193E4u;
    SET_GPR_U32(ctx, 31, 0x2193ECu);
    ctx->pc = 0x2193E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193E4u;
    // 0x2193e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193E4u, 0x2193ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193ECu;
label_2193ec:
    // 0x2193ec: 0x240401d2  addiu       $a0, $zero, 0x1D2
    ctx->pc = 0x2193ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    // 0x2193f0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193F0u;
    SET_GPR_U32(ctx, 31, 0x2193F8u);
    ctx->pc = 0x2193F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193F0u;
    // 0x2193f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193F0u, 0x2193F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193F8u;
label_2193f8:
    // 0x2193f8: 0x240401d3  addiu       $a0, $zero, 0x1D3
    ctx->pc = 0x2193f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    // 0x2193fc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2193FCu;
    SET_GPR_U32(ctx, 31, 0x219404u);
    ctx->pc = 0x219400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193FCu;
    // 0x219400: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2193FCu, 0x219404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219404u;
label_219404:
    // 0x219404: 0x240401d4  addiu       $a0, $zero, 0x1D4
    ctx->pc = 0x219404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    // 0x219408: 0xc08525e  jal         func_214978
    ctx->pc = 0x219408u;
    SET_GPR_U32(ctx, 31, 0x219410u);
    ctx->pc = 0x21940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219408u;
    // 0x21940c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219408u, 0x219410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219410u;
label_219410:
    // 0x219410: 0x240401db  addiu       $a0, $zero, 0x1DB
    ctx->pc = 0x219410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
    // 0x219414: 0xc08525e  jal         func_214978
    ctx->pc = 0x219414u;
    SET_GPR_U32(ctx, 31, 0x21941Cu);
    ctx->pc = 0x219418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219414u;
    // 0x219418: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219414u, 0x21941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21941Cu;
label_21941c:
    // 0x21941c: 0x240401dc  addiu       $a0, $zero, 0x1DC
    ctx->pc = 0x21941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x219420: 0xc08525e  jal         func_214978
    ctx->pc = 0x219420u;
    SET_GPR_U32(ctx, 31, 0x219428u);
    ctx->pc = 0x219424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219420u;
    // 0x219424: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219420u, 0x219428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219428u;
label_219428:
    // 0x219428: 0x240401d7  addiu       $a0, $zero, 0x1D7
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    // 0x21942c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21942Cu;
    SET_GPR_U32(ctx, 31, 0x219434u);
    ctx->pc = 0x219430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21942Cu;
    // 0x219430: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21942Cu, 0x219434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219434u;
label_219434:
    // 0x219434: 0x240401d8  addiu       $a0, $zero, 0x1D8
    ctx->pc = 0x219434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x219438: 0xc08525e  jal         func_214978
    ctx->pc = 0x219438u;
    SET_GPR_U32(ctx, 31, 0x219440u);
    ctx->pc = 0x21943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219438u;
    // 0x21943c: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219438u, 0x219440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219440u;
label_219440:
    // 0x219440: 0x240401d1  addiu       $a0, $zero, 0x1D1
    ctx->pc = 0x219440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
    // 0x219444: 0xc08525e  jal         func_214978
    ctx->pc = 0x219444u;
    SET_GPR_U32(ctx, 31, 0x21944Cu);
    ctx->pc = 0x219448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219444u;
    // 0x219448: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219444u, 0x21944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21944Cu;
label_21944c:
    // 0x21944c: 0x240401dd  addiu       $a0, $zero, 0x1DD
    ctx->pc = 0x21944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    // 0x219450: 0xc08525e  jal         func_214978
    ctx->pc = 0x219450u;
    SET_GPR_U32(ctx, 31, 0x219458u);
    ctx->pc = 0x219454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219450u;
    // 0x219454: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219450u, 0x219458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219458u;
label_219458:
    // 0x219458: 0x240401de  addiu       $a0, $zero, 0x1DE
    ctx->pc = 0x219458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    // 0x21945c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21945Cu;
    SET_GPR_U32(ctx, 31, 0x219464u);
    ctx->pc = 0x219460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21945Cu;
    // 0x219460: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21945Cu, 0x219464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219464u;
label_219464:
    // 0x219464: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219468: 0x240501f1  addiu       $a1, $zero, 0x1F1
    ctx->pc = 0x219468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 497));
    // 0x21946c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21946Cu;
    SET_GPR_U32(ctx, 31, 0x219474u);
    ctx->pc = 0x219470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21946Cu;
    // 0x219470: 0x2484fb60  addiu       $a0, $a0, -0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21946Cu, 0x219474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219474u;
label_219474:
    // 0x219474: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219478: 0x240501e8  addiu       $a1, $zero, 0x1E8
    ctx->pc = 0x219478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x21947c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21947Cu;
    SET_GPR_U32(ctx, 31, 0x219484u);
    ctx->pc = 0x219480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21947Cu;
    // 0x219480: 0x2484fb88  addiu       $a0, $a0, -0x478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21947Cu, 0x219484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219488: 0x240501e9  addiu       $a1, $zero, 0x1E9
    ctx->pc = 0x219488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x21948c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21948Cu;
    SET_GPR_U32(ctx, 31, 0x219494u);
    ctx->pc = 0x219490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21948Cu;
    // 0x219490: 0x2484fbb0  addiu       $a0, $a0, -0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21948Cu, 0x219494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219494u;
label_219494:
    // 0x219494: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219498: 0x24050263  addiu       $a1, $zero, 0x263
    ctx->pc = 0x219498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    // 0x21949c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21949Cu;
    SET_GPR_U32(ctx, 31, 0x2194A4u);
    ctx->pc = 0x2194A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21949Cu;
    // 0x2194a0: 0x2484fbd8  addiu       $a0, $a0, -0x428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21949Cu, 0x2194A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194A4u;
label_2194a4:
    // 0x2194a4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2194a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2194a8: 0x24050265  addiu       $a1, $zero, 0x265
    ctx->pc = 0x2194a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x2194ac: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2194ACu;
    SET_GPR_U32(ctx, 31, 0x2194B4u);
    ctx->pc = 0x2194B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194ACu;
    // 0x2194b0: 0x2484fc00  addiu       $a0, $a0, -0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2194ACu, 0x2194B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194B4u;
label_2194b4:
    // 0x2194b4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2194b8: 0x24050264  addiu       $a1, $zero, 0x264
    ctx->pc = 0x2194b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x2194bc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2194BCu;
    SET_GPR_U32(ctx, 31, 0x2194C4u);
    ctx->pc = 0x2194C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194BCu;
    // 0x2194c0: 0x2484fc30  addiu       $a0, $a0, -0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2194BCu, 0x2194C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194C4u;
label_2194c4:
    // 0x2194c4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2194c8: 0x240501ea  addiu       $a1, $zero, 0x1EA
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x2194cc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2194CCu;
    SET_GPR_U32(ctx, 31, 0x2194D4u);
    ctx->pc = 0x2194D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194CCu;
    // 0x2194d0: 0x2484fc58  addiu       $a0, $a0, -0x3A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2194CCu, 0x2194D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194D4u;
label_2194d4:
    // 0x2194d4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2194d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2194d8: 0x240501ec  addiu       $a1, $zero, 0x1EC
    ctx->pc = 0x2194d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x2194dc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2194DCu;
    SET_GPR_U32(ctx, 31, 0x2194E4u);
    ctx->pc = 0x2194E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194DCu;
    // 0x2194e0: 0x2484fc80  addiu       $a0, $a0, -0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2194DCu, 0x2194E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194E4u;
label_2194e4:
    // 0x2194e4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2194e8: 0x240501eb  addiu       $a1, $zero, 0x1EB
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    // 0x2194ec: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2194ECu;
    SET_GPR_U32(ctx, 31, 0x2194F4u);
    ctx->pc = 0x2194F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194ECu;
    // 0x2194f0: 0x2484fcb0  addiu       $a0, $a0, -0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2194ECu, 0x2194F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194F4u;
label_2194f4:
    // 0x2194f4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2194f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2194f8: 0x240501e5  addiu       $a1, $zero, 0x1E5
    ctx->pc = 0x2194f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
    // 0x2194fc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2194FCu;
    SET_GPR_U32(ctx, 31, 0x219504u);
    ctx->pc = 0x219500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194FCu;
    // 0x219500: 0x2484fce0  addiu       $a0, $a0, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2194FCu, 0x219504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219504u;
label_219504:
    // 0x219504: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219508: 0x240501e6  addiu       $a1, $zero, 0x1E6
    ctx->pc = 0x219508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
    // 0x21950c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21950Cu;
    SET_GPR_U32(ctx, 31, 0x219514u);
    ctx->pc = 0x219510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21950Cu;
    // 0x219510: 0x2484fd10  addiu       $a0, $a0, -0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21950Cu, 0x219514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219514u;
label_219514:
    // 0x219514: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219518: 0x240501e1  addiu       $a1, $zero, 0x1E1
    ctx->pc = 0x219518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x21951c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21951Cu;
    SET_GPR_U32(ctx, 31, 0x219524u);
    ctx->pc = 0x219520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21951Cu;
    // 0x219520: 0x2484fd38  addiu       $a0, $a0, -0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21951Cu, 0x219524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219524u;
label_219524:
    // 0x219524: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219528: 0x240501e7  addiu       $a1, $zero, 0x1E7
    ctx->pc = 0x219528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 487));
    // 0x21952c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21952Cu;
    SET_GPR_U32(ctx, 31, 0x219534u);
    ctx->pc = 0x219530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21952Cu;
    // 0x219530: 0x2484fd60  addiu       $a0, $a0, -0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21952Cu, 0x219534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219534u;
label_219534:
    // 0x219534: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219538: 0x240501ed  addiu       $a1, $zero, 0x1ED
    ctx->pc = 0x219538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 493));
    // 0x21953c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21953Cu;
    SET_GPR_U32(ctx, 31, 0x219544u);
    ctx->pc = 0x219540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21953Cu;
    // 0x219540: 0x2484fd88  addiu       $a0, $a0, -0x278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21953Cu, 0x219544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219544u;
label_219544:
    // 0x219544: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219548: 0x240501ee  addiu       $a1, $zero, 0x1EE
    ctx->pc = 0x219548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x21954c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21954Cu;
    SET_GPR_U32(ctx, 31, 0x219554u);
    ctx->pc = 0x219550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21954Cu;
    // 0x219550: 0x2484fdb0  addiu       $a0, $a0, -0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21954Cu, 0x219554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219554u;
label_219554:
    // 0x219554: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219558: 0x240501ef  addiu       $a1, $zero, 0x1EF
    ctx->pc = 0x219558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 495));
    // 0x21955c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21955Cu;
    SET_GPR_U32(ctx, 31, 0x219564u);
    ctx->pc = 0x219560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21955Cu;
    // 0x219560: 0x2484fdd8  addiu       $a0, $a0, -0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21955Cu, 0x219564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219564u;
label_219564:
    // 0x219564: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219568: 0x240501f0  addiu       $a1, $zero, 0x1F0
    ctx->pc = 0x219568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x21956c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21956Cu;
    SET_GPR_U32(ctx, 31, 0x219574u);
    ctx->pc = 0x219570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21956Cu;
    // 0x219570: 0x2484fdf8  addiu       $a0, $a0, -0x208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21956Cu, 0x219574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219574u;
label_219574:
    // 0x219574: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219578: 0x240501e2  addiu       $a1, $zero, 0x1E2
    ctx->pc = 0x219578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
    // 0x21957c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21957Cu;
    SET_GPR_U32(ctx, 31, 0x219584u);
    ctx->pc = 0x219580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21957Cu;
    // 0x219580: 0x2484fe18  addiu       $a0, $a0, -0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21957Cu, 0x219584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219584u;
label_219584:
    // 0x219584: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219588: 0x240501e4  addiu       $a1, $zero, 0x1E4
    ctx->pc = 0x219588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x21958c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21958Cu;
    SET_GPR_U32(ctx, 31, 0x219594u);
    ctx->pc = 0x219590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21958Cu;
    // 0x219590: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21958Cu, 0x219594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219594u;
label_219594:
    // 0x219594: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219598: 0x240501e3  addiu       $a1, $zero, 0x1E3
    ctx->pc = 0x219598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 483));
    // 0x21959c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21959Cu;
    SET_GPR_U32(ctx, 31, 0x2195A4u);
    ctx->pc = 0x2195A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21959Cu;
    // 0x2195a0: 0x2484fe78  addiu       $a0, $a0, -0x188 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21959Cu, 0x2195A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195A4u;
label_2195a4:
    // 0x2195a4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2195a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2195a8: 0x240501f2  addiu       $a1, $zero, 0x1F2
    ctx->pc = 0x2195a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 498));
    // 0x2195ac: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2195ACu;
    SET_GPR_U32(ctx, 31, 0x2195B4u);
    ctx->pc = 0x2195B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195ACu;
    // 0x2195b0: 0x2484fea8  addiu       $a0, $a0, -0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2195ACu, 0x2195B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195B4u;
label_2195b4:
    // 0x2195b4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2195b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2195b8: 0x240501f5  addiu       $a1, $zero, 0x1F5
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
    // 0x2195bc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2195BCu;
    SET_GPR_U32(ctx, 31, 0x2195C4u);
    ctx->pc = 0x2195C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195BCu;
    // 0x2195c0: 0x2484fed8  addiu       $a0, $a0, -0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2195BCu, 0x2195C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195C4u;
label_2195c4:
    // 0x2195c4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2195c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2195c8: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2195c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2195cc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2195CCu;
    SET_GPR_U32(ctx, 31, 0x2195D4u);
    ctx->pc = 0x2195D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195CCu;
    // 0x2195d0: 0x2484ff08  addiu       $a0, $a0, -0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2195CCu, 0x2195D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195D4u;
label_2195d4:
    // 0x2195d4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2195d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2195d8: 0x240501f3  addiu       $a1, $zero, 0x1F3
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 499));
    // 0x2195dc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2195DCu;
    SET_GPR_U32(ctx, 31, 0x2195E4u);
    ctx->pc = 0x2195E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195DCu;
    // 0x2195e0: 0x2484ff38  addiu       $a0, $a0, -0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2195DCu, 0x2195E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195E4u;
label_2195e4:
    // 0x2195e4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2195e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2195e8: 0x240501f6  addiu       $a1, $zero, 0x1F6
    ctx->pc = 0x2195e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x2195ec: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2195ECu;
    SET_GPR_U32(ctx, 31, 0x2195F4u);
    ctx->pc = 0x2195F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195ECu;
    // 0x2195f0: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2195ECu, 0x2195F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195F4u;
label_2195f4:
    // 0x2195f4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2195f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2195f8: 0x240501f7  addiu       $a1, $zero, 0x1F7
    ctx->pc = 0x2195f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
    // 0x2195fc: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2195FCu;
    SET_GPR_U32(ctx, 31, 0x219604u);
    ctx->pc = 0x219600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195FCu;
    // 0x219600: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2195FCu, 0x219604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219604u;
label_219604:
    // 0x219604: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219608: 0x240501f8  addiu       $a1, $zero, 0x1F8
    ctx->pc = 0x219608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x21960c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21960Cu;
    SET_GPR_U32(ctx, 31, 0x219614u);
    ctx->pc = 0x219610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21960Cu;
    // 0x219610: 0x2484ffc8  addiu       $a0, $a0, -0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21960Cu, 0x219614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219614u;
label_219614:
    // 0x219614: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219618: 0x240501f9  addiu       $a1, $zero, 0x1F9
    ctx->pc = 0x219618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
    // 0x21961c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21961Cu;
    SET_GPR_U32(ctx, 31, 0x219624u);
    ctx->pc = 0x219620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21961Cu;
    // 0x219620: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21961Cu, 0x219624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219624u;
label_219624:
    // 0x219624: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219628: 0x240501fa  addiu       $a1, $zero, 0x1FA
    ctx->pc = 0x219628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    // 0x21962c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21962Cu;
    SET_GPR_U32(ctx, 31, 0x219634u);
    ctx->pc = 0x219630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21962Cu;
    // 0x219630: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21962Cu, 0x219634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219634u;
label_219634:
    // 0x219634: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219638: 0x240501fb  addiu       $a1, $zero, 0x1FB
    ctx->pc = 0x219638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
    // 0x21963c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21963Cu;
    SET_GPR_U32(ctx, 31, 0x219644u);
    ctx->pc = 0x219640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21963Cu;
    // 0x219640: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21963Cu, 0x219644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219644u;
label_219644:
    // 0x219644: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219648: 0x240501fc  addiu       $a1, $zero, 0x1FC
    ctx->pc = 0x219648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x21964c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21964Cu;
    SET_GPR_U32(ctx, 31, 0x219654u);
    ctx->pc = 0x219650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21964Cu;
    // 0x219650: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21964Cu, 0x219654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219654u;
label_219654:
    // 0x219654: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219658: 0x240501fd  addiu       $a1, $zero, 0x1FD
    ctx->pc = 0x219658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
    // 0x21965c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21965Cu;
    SET_GPR_U32(ctx, 31, 0x219664u);
    ctx->pc = 0x219660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21965Cu;
    // 0x219660: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21965Cu, 0x219664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219664u;
label_219664:
    // 0x219664: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219668: 0x240501fe  addiu       $a1, $zero, 0x1FE
    ctx->pc = 0x219668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x21966c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21966Cu;
    SET_GPR_U32(ctx, 31, 0x219674u);
    ctx->pc = 0x219670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21966Cu;
    // 0x219670: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21966Cu, 0x219674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219674u;
label_219674:
    // 0x219674: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219678: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x219678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x21967c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21967Cu;
    SET_GPR_U32(ctx, 31, 0x219684u);
    ctx->pc = 0x219680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21967Cu;
    // 0x219680: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21967Cu, 0x219684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219684u;
label_219684:
    // 0x219684: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219688: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x219688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21968c: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x21968Cu;
    SET_GPR_U32(ctx, 31, 0x219694u);
    ctx->pc = 0x219690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21968Cu;
    // 0x219690: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x21968Cu, 0x219694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219694u;
label_219694:
    // 0x219694: 0x24040263  addiu       $a0, $zero, 0x263
    ctx->pc = 0x219694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    // 0x219698: 0xc08525e  jal         func_214978
    ctx->pc = 0x219698u;
    SET_GPR_U32(ctx, 31, 0x2196A0u);
    ctx->pc = 0x21969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219698u;
    // 0x21969c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219698u, 0x2196A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196A0u;
label_2196a0:
    // 0x2196a0: 0x24040264  addiu       $a0, $zero, 0x264
    ctx->pc = 0x2196a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x2196a4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196A4u;
    SET_GPR_U32(ctx, 31, 0x2196ACu);
    ctx->pc = 0x2196A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196A4u;
    // 0x2196a8: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196A4u, 0x2196ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196ACu;
label_2196ac:
    // 0x2196ac: 0x24040265  addiu       $a0, $zero, 0x265
    ctx->pc = 0x2196acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x2196b0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196B0u;
    SET_GPR_U32(ctx, 31, 0x2196B8u);
    ctx->pc = 0x2196B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196B0u;
    // 0x2196b4: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196B0u, 0x2196B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196B8u;
label_2196b8:
    // 0x2196b8: 0x240401e1  addiu       $a0, $zero, 0x1E1
    ctx->pc = 0x2196b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x2196bc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196BCu;
    SET_GPR_U32(ctx, 31, 0x2196C4u);
    ctx->pc = 0x2196C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196BCu;
    // 0x2196c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196BCu, 0x2196C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196C4u;
label_2196c4:
    // 0x2196c4: 0x240401f2  addiu       $a0, $zero, 0x1F2
    ctx->pc = 0x2196c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 498));
    // 0x2196c8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196C8u;
    SET_GPR_U32(ctx, 31, 0x2196D0u);
    ctx->pc = 0x2196CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196C8u;
    // 0x2196cc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196C8u, 0x2196D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196D0u;
label_2196d0:
    // 0x2196d0: 0x240401f6  addiu       $a0, $zero, 0x1F6
    ctx->pc = 0x2196d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x2196d4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196D4u;
    SET_GPR_U32(ctx, 31, 0x2196DCu);
    ctx->pc = 0x2196D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196D4u;
    // 0x2196d8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196D4u, 0x2196DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196DCu;
label_2196dc:
    // 0x2196dc: 0x240401f3  addiu       $a0, $zero, 0x1F3
    ctx->pc = 0x2196dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 499));
    // 0x2196e0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196E0u;
    SET_GPR_U32(ctx, 31, 0x2196E8u);
    ctx->pc = 0x2196E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196E0u;
    // 0x2196e4: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196E0u, 0x2196E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196E8u;
label_2196e8:
    // 0x2196e8: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x2196e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2196ec: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196ECu;
    SET_GPR_U32(ctx, 31, 0x2196F4u);
    ctx->pc = 0x2196F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196ECu;
    // 0x2196f0: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196ECu, 0x2196F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196F4u;
label_2196f4:
    // 0x2196f4: 0x240401f5  addiu       $a0, $zero, 0x1F5
    ctx->pc = 0x2196f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
    // 0x2196f8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2196F8u;
    SET_GPR_U32(ctx, 31, 0x219700u);
    ctx->pc = 0x2196FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196F8u;
    // 0x2196fc: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2196F8u, 0x219700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219700u;
label_219700:
    // 0x219700: 0x240401e2  addiu       $a0, $zero, 0x1E2
    ctx->pc = 0x219700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
    // 0x219704: 0xc08525e  jal         func_214978
    ctx->pc = 0x219704u;
    SET_GPR_U32(ctx, 31, 0x21970Cu);
    ctx->pc = 0x219708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219704u;
    // 0x219708: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219704u, 0x21970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21970Cu;
label_21970c:
    // 0x21970c: 0x240401e3  addiu       $a0, $zero, 0x1E3
    ctx->pc = 0x21970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 483));
    // 0x219710: 0xc08525e  jal         func_214978
    ctx->pc = 0x219710u;
    SET_GPR_U32(ctx, 31, 0x219718u);
    ctx->pc = 0x219714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219710u;
    // 0x219714: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219710u, 0x219718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219718u;
label_219718:
    // 0x219718: 0x240401e4  addiu       $a0, $zero, 0x1E4
    ctx->pc = 0x219718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x21971c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21971Cu;
    SET_GPR_U32(ctx, 31, 0x219724u);
    ctx->pc = 0x219720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21971Cu;
    // 0x219720: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21971Cu, 0x219724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219724u;
label_219724:
    // 0x219724: 0x240401e5  addiu       $a0, $zero, 0x1E5
    ctx->pc = 0x219724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
    // 0x219728: 0xc08525e  jal         func_214978
    ctx->pc = 0x219728u;
    SET_GPR_U32(ctx, 31, 0x219730u);
    ctx->pc = 0x21972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219728u;
    // 0x21972c: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219728u, 0x219730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219730u;
label_219730:
    // 0x219730: 0x240401e6  addiu       $a0, $zero, 0x1E6
    ctx->pc = 0x219730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
    // 0x219734: 0xc08525e  jal         func_214978
    ctx->pc = 0x219734u;
    SET_GPR_U32(ctx, 31, 0x21973Cu);
    ctx->pc = 0x219738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219734u;
    // 0x219738: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219734u, 0x21973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21973Cu;
label_21973c:
    // 0x21973c: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x21973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x219740: 0xc08525e  jal         func_214978
    ctx->pc = 0x219740u;
    SET_GPR_U32(ctx, 31, 0x219748u);
    ctx->pc = 0x219744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219740u;
    // 0x219744: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219740u, 0x219748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219748u;
label_219748:
    // 0x219748: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x219748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21974c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21974Cu;
    SET_GPR_U32(ctx, 31, 0x219754u);
    ctx->pc = 0x219750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21974Cu;
    // 0x219750: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21974Cu, 0x219754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219754u;
label_219754:
    // 0x219754: 0x240401e8  addiu       $a0, $zero, 0x1E8
    ctx->pc = 0x219754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x219758: 0xc08525e  jal         func_214978
    ctx->pc = 0x219758u;
    SET_GPR_U32(ctx, 31, 0x219760u);
    ctx->pc = 0x21975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219758u;
    // 0x21975c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219758u, 0x219760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219760u;
label_219760:
    // 0x219760: 0x240401e9  addiu       $a0, $zero, 0x1E9
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x219764: 0xc08525e  jal         func_214978
    ctx->pc = 0x219764u;
    SET_GPR_U32(ctx, 31, 0x21976Cu);
    ctx->pc = 0x219768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219764u;
    // 0x219768: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219764u, 0x21976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21976Cu;
label_21976c:
    // 0x21976c: 0x240401ea  addiu       $a0, $zero, 0x1EA
    ctx->pc = 0x21976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x219770: 0xc08525e  jal         func_214978
    ctx->pc = 0x219770u;
    SET_GPR_U32(ctx, 31, 0x219778u);
    ctx->pc = 0x219774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219770u;
    // 0x219774: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219770u, 0x219778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219778u;
label_219778:
    // 0x219778: 0x240401eb  addiu       $a0, $zero, 0x1EB
    ctx->pc = 0x219778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    // 0x21977c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21977Cu;
    SET_GPR_U32(ctx, 31, 0x219784u);
    ctx->pc = 0x219780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21977Cu;
    // 0x219780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21977Cu, 0x219784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219784u;
label_219784:
    // 0x219784: 0x240401ec  addiu       $a0, $zero, 0x1EC
    ctx->pc = 0x219784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x219788: 0xc08525e  jal         func_214978
    ctx->pc = 0x219788u;
    SET_GPR_U32(ctx, 31, 0x219790u);
    ctx->pc = 0x21978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219788u;
    // 0x21978c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219788u, 0x219790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219790u;
label_219790:
    // 0x219790: 0x240401e7  addiu       $a0, $zero, 0x1E7
    ctx->pc = 0x219790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 487));
    // 0x219794: 0xc08525e  jal         func_214978
    ctx->pc = 0x219794u;
    SET_GPR_U32(ctx, 31, 0x21979Cu);
    ctx->pc = 0x219798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219794u;
    // 0x219798: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219794u, 0x21979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21979Cu;
label_21979c:
    // 0x21979c: 0x240401ed  addiu       $a0, $zero, 0x1ED
    ctx->pc = 0x21979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 493));
    // 0x2197a0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197A0u;
    SET_GPR_U32(ctx, 31, 0x2197A8u);
    ctx->pc = 0x2197A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197A0u;
    // 0x2197a4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197A0u, 0x2197A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197A8u;
label_2197a8:
    // 0x2197a8: 0x240401ee  addiu       $a0, $zero, 0x1EE
    ctx->pc = 0x2197a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x2197ac: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197ACu;
    SET_GPR_U32(ctx, 31, 0x2197B4u);
    ctx->pc = 0x2197B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197ACu;
    // 0x2197b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197ACu, 0x2197B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197B4u;
label_2197b4:
    // 0x2197b4: 0x240401ef  addiu       $a0, $zero, 0x1EF
    ctx->pc = 0x2197b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 495));
    // 0x2197b8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197B8u;
    SET_GPR_U32(ctx, 31, 0x2197C0u);
    ctx->pc = 0x2197BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197B8u;
    // 0x2197bc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197B8u, 0x2197C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197C0u;
label_2197c0:
    // 0x2197c0: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x2197c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x2197c4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197C4u;
    SET_GPR_U32(ctx, 31, 0x2197CCu);
    ctx->pc = 0x2197C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197C4u;
    // 0x2197c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197C4u, 0x2197CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197CCu;
label_2197cc:
    // 0x2197cc: 0x240401f1  addiu       $a0, $zero, 0x1F1
    ctx->pc = 0x2197ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 497));
    // 0x2197d0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197D0u;
    SET_GPR_U32(ctx, 31, 0x2197D8u);
    ctx->pc = 0x2197D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197D0u;
    // 0x2197d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197D0u, 0x2197D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197D8u;
label_2197d8:
    // 0x2197d8: 0x240401f7  addiu       $a0, $zero, 0x1F7
    ctx->pc = 0x2197d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
    // 0x2197dc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197DCu;
    SET_GPR_U32(ctx, 31, 0x2197E4u);
    ctx->pc = 0x2197E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197DCu;
    // 0x2197e0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197DCu, 0x2197E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197E4u;
label_2197e4:
    // 0x2197e4: 0x240401fb  addiu       $a0, $zero, 0x1FB
    ctx->pc = 0x2197e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
    // 0x2197e8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197E8u;
    SET_GPR_U32(ctx, 31, 0x2197F0u);
    ctx->pc = 0x2197ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197E8u;
    // 0x2197ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197E8u, 0x2197F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197F0u;
label_2197f0:
    // 0x2197f0: 0x240401fc  addiu       $a0, $zero, 0x1FC
    ctx->pc = 0x2197f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x2197f4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2197F4u;
    SET_GPR_U32(ctx, 31, 0x2197FCu);
    ctx->pc = 0x2197F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197F4u;
    // 0x2197f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2197F4u, 0x2197FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197FCu;
label_2197fc:
    // 0x2197fc: 0x240401fd  addiu       $a0, $zero, 0x1FD
    ctx->pc = 0x2197fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
    // 0x219800: 0xc08525e  jal         func_214978
    ctx->pc = 0x219800u;
    SET_GPR_U32(ctx, 31, 0x219808u);
    ctx->pc = 0x219804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219800u;
    // 0x219804: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219800u, 0x219808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219808u;
label_219808:
    // 0x219808: 0x240401fe  addiu       $a0, $zero, 0x1FE
    ctx->pc = 0x219808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x21980c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21980Cu;
    SET_GPR_U32(ctx, 31, 0x219814u);
    ctx->pc = 0x219810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21980Cu;
    // 0x219810: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21980Cu, 0x219814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219814u;
label_219814:
    // 0x219814: 0x240401f8  addiu       $a0, $zero, 0x1F8
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x219818: 0xc08525e  jal         func_214978
    ctx->pc = 0x219818u;
    SET_GPR_U32(ctx, 31, 0x219820u);
    ctx->pc = 0x21981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219818u;
    // 0x21981c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219818u, 0x219820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219820u;
label_219820:
    // 0x219820: 0x240401f9  addiu       $a0, $zero, 0x1F9
    ctx->pc = 0x219820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
    // 0x219824: 0xc08525e  jal         func_214978
    ctx->pc = 0x219824u;
    SET_GPR_U32(ctx, 31, 0x21982Cu);
    ctx->pc = 0x219828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219824u;
    // 0x219828: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219824u, 0x21982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21982Cu;
label_21982c:
    // 0x21982c: 0x240401fa  addiu       $a0, $zero, 0x1FA
    ctx->pc = 0x21982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    // 0x219830: 0xc08525e  jal         func_214978
    ctx->pc = 0x219830u;
    SET_GPR_U32(ctx, 31, 0x219838u);
    ctx->pc = 0x219834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219830u;
    // 0x219834: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219830u, 0x219838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219838u;
label_219838:
    // 0x219838: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21983c: 0x24050212  addiu       $a1, $zero, 0x212
    ctx->pc = 0x21983cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x219840: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219840u;
    SET_GPR_U32(ctx, 31, 0x219848u);
    ctx->pc = 0x219844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219840u;
    // 0x219844: 0x24840148  addiu       $a0, $a0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219840u, 0x219848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219848u;
label_219848:
    // 0x219848: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21984c: 0x24050213  addiu       $a1, $zero, 0x213
    ctx->pc = 0x21984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    // 0x219850: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219850u;
    SET_GPR_U32(ctx, 31, 0x219858u);
    ctx->pc = 0x219854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219850u;
    // 0x219854: 0x24840170  addiu       $a0, $a0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219850u, 0x219858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219858u;
label_219858:
    // 0x219858: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21985c: 0x24050214  addiu       $a1, $zero, 0x214
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x219860: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219860u;
    SET_GPR_U32(ctx, 31, 0x219868u);
    ctx->pc = 0x219864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219860u;
    // 0x219864: 0x24840198  addiu       $a0, $a0, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219860u, 0x219868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219868u;
label_219868:
    // 0x219868: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21986c: 0x24050215  addiu       $a1, $zero, 0x215
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    // 0x219870: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219870u;
    SET_GPR_U32(ctx, 31, 0x219878u);
    ctx->pc = 0x219874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219870u;
    // 0x219874: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219870u, 0x219878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219878u;
label_219878:
    // 0x219878: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21987c: 0x24050216  addiu       $a1, $zero, 0x216
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x219880: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219880u;
    SET_GPR_U32(ctx, 31, 0x219888u);
    ctx->pc = 0x219884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219880u;
    // 0x219884: 0x248401f0  addiu       $a0, $a0, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219880u, 0x219888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219888u;
label_219888:
    // 0x219888: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21988c: 0x24050217  addiu       $a1, $zero, 0x217
    ctx->pc = 0x21988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x219890: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219890u;
    SET_GPR_U32(ctx, 31, 0x219898u);
    ctx->pc = 0x219894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219890u;
    // 0x219894: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219890u, 0x219898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219898u;
label_219898:
    // 0x219898: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21989c: 0x24050218  addiu       $a1, $zero, 0x218
    ctx->pc = 0x21989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    // 0x2198a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2198A0u;
    SET_GPR_U32(ctx, 31, 0x2198A8u);
    ctx->pc = 0x2198A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198A0u;
    // 0x2198a4: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2198A0u, 0x2198A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198A8u;
label_2198a8:
    // 0x2198a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2198a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2198ac: 0x24050219  addiu       $a1, $zero, 0x219
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    // 0x2198b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2198B0u;
    SET_GPR_U32(ctx, 31, 0x2198B8u);
    ctx->pc = 0x2198B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198B0u;
    // 0x2198b4: 0x24840270  addiu       $a0, $a0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2198B0u, 0x2198B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198B8u;
label_2198b8:
    // 0x2198b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2198b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2198bc: 0x2405021a  addiu       $a1, $zero, 0x21A
    ctx->pc = 0x2198bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x2198c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2198C0u;
    SET_GPR_U32(ctx, 31, 0x2198C8u);
    ctx->pc = 0x2198C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198C0u;
    // 0x2198c4: 0x24840298  addiu       $a0, $a0, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2198C0u, 0x2198C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198C8u;
label_2198c8:
    // 0x2198c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2198cc: 0x2405021b  addiu       $a1, $zero, 0x21B
    ctx->pc = 0x2198ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x2198d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2198D0u;
    SET_GPR_U32(ctx, 31, 0x2198D8u);
    ctx->pc = 0x2198D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198D0u;
    // 0x2198d4: 0x248402c0  addiu       $a0, $a0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2198D0u, 0x2198D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198D8u;
label_2198d8:
    // 0x2198d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2198d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2198dc: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2198e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2198E0u;
    SET_GPR_U32(ctx, 31, 0x2198E8u);
    ctx->pc = 0x2198E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198E0u;
    // 0x2198e4: 0x248402e8  addiu       $a0, $a0, 0x2E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2198E0u, 0x2198E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198E8u;
label_2198e8:
    // 0x2198e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2198ec: 0x2405021d  addiu       $a1, $zero, 0x21D
    ctx->pc = 0x2198ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    // 0x2198f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2198F0u;
    SET_GPR_U32(ctx, 31, 0x2198F8u);
    ctx->pc = 0x2198F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198F0u;
    // 0x2198f4: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2198F0u, 0x2198F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198F8u;
label_2198f8:
    // 0x2198f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2198fc: 0x2405021e  addiu       $a1, $zero, 0x21E
    ctx->pc = 0x2198fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x219900: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219900u;
    SET_GPR_U32(ctx, 31, 0x219908u);
    ctx->pc = 0x219904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219900u;
    // 0x219904: 0x24840338  addiu       $a0, $a0, 0x338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219900u, 0x219908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219908u;
label_219908:
    // 0x219908: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21990c: 0x2405021f  addiu       $a1, $zero, 0x21F
    ctx->pc = 0x21990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x219910: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219910u;
    SET_GPR_U32(ctx, 31, 0x219918u);
    ctx->pc = 0x219914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219910u;
    // 0x219914: 0x24840360  addiu       $a0, $a0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219910u, 0x219918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219918u;
label_219918:
    // 0x219918: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21991c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x21991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x219920: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219920u;
    SET_GPR_U32(ctx, 31, 0x219928u);
    ctx->pc = 0x219924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219920u;
    // 0x219924: 0x24840388  addiu       $a0, $a0, 0x388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219920u, 0x219928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219928u;
label_219928:
    // 0x219928: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21992c: 0x24050221  addiu       $a1, $zero, 0x221
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x219930: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219930u;
    SET_GPR_U32(ctx, 31, 0x219938u);
    ctx->pc = 0x219934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219930u;
    // 0x219934: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219930u, 0x219938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219938u;
label_219938:
    // 0x219938: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21993c: 0x24050222  addiu       $a1, $zero, 0x222
    ctx->pc = 0x21993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x219940: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219940u;
    SET_GPR_U32(ctx, 31, 0x219948u);
    ctx->pc = 0x219944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219940u;
    // 0x219944: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219940u, 0x219948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219948u;
label_219948:
    // 0x219948: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21994c: 0x24050223  addiu       $a1, $zero, 0x223
    ctx->pc = 0x21994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x219950: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219950u;
    SET_GPR_U32(ctx, 31, 0x219958u);
    ctx->pc = 0x219954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219950u;
    // 0x219954: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219950u, 0x219958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219958u;
label_219958:
    // 0x219958: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21995c: 0x24050224  addiu       $a1, $zero, 0x224
    ctx->pc = 0x21995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x219960: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219960u;
    SET_GPR_U32(ctx, 31, 0x219968u);
    ctx->pc = 0x219964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219960u;
    // 0x219964: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219960u, 0x219968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219968u;
label_219968:
    // 0x219968: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21996c: 0x24050225  addiu       $a1, $zero, 0x225
    ctx->pc = 0x21996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x219970: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219970u;
    SET_GPR_U32(ctx, 31, 0x219978u);
    ctx->pc = 0x219974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219970u;
    // 0x219974: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219970u, 0x219978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219978u;
label_219978:
    // 0x219978: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21997c: 0x24050226  addiu       $a1, $zero, 0x226
    ctx->pc = 0x21997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x219980: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219980u;
    SET_GPR_U32(ctx, 31, 0x219988u);
    ctx->pc = 0x219984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219980u;
    // 0x219984: 0x24840490  addiu       $a0, $a0, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219980u, 0x219988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219988u;
label_219988:
    // 0x219988: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21998c: 0x24050227  addiu       $a1, $zero, 0x227
    ctx->pc = 0x21998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
    // 0x219990: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219990u;
    SET_GPR_U32(ctx, 31, 0x219998u);
    ctx->pc = 0x219994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219990u;
    // 0x219994: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219990u, 0x219998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219998u;
label_219998:
    // 0x219998: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21999c: 0x24050228  addiu       $a1, $zero, 0x228
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x2199a0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2199A0u;
    SET_GPR_U32(ctx, 31, 0x2199A8u);
    ctx->pc = 0x2199A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199A0u;
    // 0x2199a4: 0x248404e8  addiu       $a0, $a0, 0x4E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2199A0u, 0x2199A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199A8u;
label_2199a8:
    // 0x2199a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2199a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2199ac: 0x24050229  addiu       $a1, $zero, 0x229
    ctx->pc = 0x2199acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    // 0x2199b0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2199B0u;
    SET_GPR_U32(ctx, 31, 0x2199B8u);
    ctx->pc = 0x2199B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199B0u;
    // 0x2199b4: 0x24840510  addiu       $a0, $a0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2199B0u, 0x2199B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199B8u;
label_2199b8:
    // 0x2199b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2199b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2199bc: 0x2405022a  addiu       $a1, $zero, 0x22A
    ctx->pc = 0x2199bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    // 0x2199c0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2199C0u;
    SET_GPR_U32(ctx, 31, 0x2199C8u);
    ctx->pc = 0x2199C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199C0u;
    // 0x2199c4: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2199C0u, 0x2199C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199C8u;
label_2199c8:
    // 0x2199c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2199c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2199cc: 0x2405022b  addiu       $a1, $zero, 0x22B
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    // 0x2199d0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2199D0u;
    SET_GPR_U32(ctx, 31, 0x2199D8u);
    ctx->pc = 0x2199D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199D0u;
    // 0x2199d4: 0x24840570  addiu       $a0, $a0, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2199D0u, 0x2199D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199D8u;
label_2199d8:
    // 0x2199d8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2199dc: 0x2405022c  addiu       $a1, $zero, 0x22C
    ctx->pc = 0x2199dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x2199e0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2199E0u;
    SET_GPR_U32(ctx, 31, 0x2199E8u);
    ctx->pc = 0x2199E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199E0u;
    // 0x2199e4: 0x248405a0  addiu       $a0, $a0, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2199E0u, 0x2199E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199E8u;
label_2199e8:
    // 0x2199e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2199e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2199ec: 0x2405022d  addiu       $a1, $zero, 0x22D
    ctx->pc = 0x2199ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
    // 0x2199f0: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2199F0u;
    SET_GPR_U32(ctx, 31, 0x2199F8u);
    ctx->pc = 0x2199F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199F0u;
    // 0x2199f4: 0x248405c8  addiu       $a0, $a0, 0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2199F0u, 0x2199F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199F8u;
label_2199f8:
    // 0x2199f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2199fc: 0x2405022e  addiu       $a1, $zero, 0x22E
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
    // 0x219a00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219A00u;
    SET_GPR_U32(ctx, 31, 0x219A08u);
    ctx->pc = 0x219A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A00u;
    // 0x219a04: 0x248405f0  addiu       $a0, $a0, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219A00u, 0x219A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A08u;
label_219a08:
    // 0x219a08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219a0c: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x219a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x219a10: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219A10u;
    SET_GPR_U32(ctx, 31, 0x219A18u);
    ctx->pc = 0x219A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A10u;
    // 0x219a14: 0x24840618  addiu       $a0, $a0, 0x618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219A10u, 0x219A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A18u;
label_219a18:
    // 0x219a18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219a1c: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x219a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x219a20: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219A20u;
    SET_GPR_U32(ctx, 31, 0x219A28u);
    ctx->pc = 0x219A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A20u;
    // 0x219a24: 0x24840648  addiu       $a0, $a0, 0x648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219A20u, 0x219A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A28u;
label_219a28:
    // 0x219a28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219a2c: 0x24050231  addiu       $a1, $zero, 0x231
    ctx->pc = 0x219a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    // 0x219a30: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219A30u;
    SET_GPR_U32(ctx, 31, 0x219A38u);
    ctx->pc = 0x219A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A30u;
    // 0x219a34: 0x24840670  addiu       $a0, $a0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219A30u, 0x219A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A38u;
label_219a38:
    // 0x219a38: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x219a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x219a3c: 0x24050234  addiu       $a1, $zero, 0x234
    ctx->pc = 0x219a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
    // 0x219a40: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x219A40u;
    SET_GPR_U32(ctx, 31, 0x219A48u);
    ctx->pc = 0x219A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A40u;
    // 0x219a44: 0x24840698  addiu       $a0, $a0, 0x698 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x219A40u, 0x219A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A48u;
label_219a48:
    // 0x219a48: 0x24040212  addiu       $a0, $zero, 0x212
    ctx->pc = 0x219a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x219a4c: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A4Cu;
    SET_GPR_U32(ctx, 31, 0x219A54u);
    ctx->pc = 0x219A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A4Cu;
    // 0x219a50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A4Cu, 0x219A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A54u;
label_219a54:
    // 0x219a54: 0x24040213  addiu       $a0, $zero, 0x213
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    // 0x219a58: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A58u;
    SET_GPR_U32(ctx, 31, 0x219A60u);
    ctx->pc = 0x219A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A58u;
    // 0x219a5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A58u, 0x219A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A60u;
label_219a60:
    // 0x219a60: 0x24040214  addiu       $a0, $zero, 0x214
    ctx->pc = 0x219a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x219a64: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A64u;
    SET_GPR_U32(ctx, 31, 0x219A6Cu);
    ctx->pc = 0x219A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A64u;
    // 0x219a68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A64u, 0x219A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A6Cu;
label_219a6c:
    // 0x219a6c: 0x24040215  addiu       $a0, $zero, 0x215
    ctx->pc = 0x219a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    // 0x219a70: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A70u;
    SET_GPR_U32(ctx, 31, 0x219A78u);
    ctx->pc = 0x219A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A70u;
    // 0x219a74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A70u, 0x219A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A78u;
label_219a78:
    // 0x219a78: 0x24040216  addiu       $a0, $zero, 0x216
    ctx->pc = 0x219a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x219a7c: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A7Cu;
    SET_GPR_U32(ctx, 31, 0x219A84u);
    ctx->pc = 0x219A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A7Cu;
    // 0x219a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A7Cu, 0x219A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A84u;
label_219a84:
    // 0x219a84: 0x24040217  addiu       $a0, $zero, 0x217
    ctx->pc = 0x219a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x219a88: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A88u;
    SET_GPR_U32(ctx, 31, 0x219A90u);
    ctx->pc = 0x219A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A88u;
    // 0x219a8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A88u, 0x219A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A90u;
label_219a90:
    // 0x219a90: 0x24040218  addiu       $a0, $zero, 0x218
    ctx->pc = 0x219a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    // 0x219a94: 0xc08525e  jal         func_214978
    ctx->pc = 0x219A94u;
    SET_GPR_U32(ctx, 31, 0x219A9Cu);
    ctx->pc = 0x219A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A94u;
    // 0x219a98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219A94u, 0x219A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A9Cu;
label_219a9c:
    // 0x219a9c: 0x24040219  addiu       $a0, $zero, 0x219
    ctx->pc = 0x219a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    // 0x219aa0: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AA0u;
    SET_GPR_U32(ctx, 31, 0x219AA8u);
    ctx->pc = 0x219AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AA0u;
    // 0x219aa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AA0u, 0x219AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AA8u;
label_219aa8:
    // 0x219aa8: 0x2404021a  addiu       $a0, $zero, 0x21A
    ctx->pc = 0x219aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x219aac: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AACu;
    SET_GPR_U32(ctx, 31, 0x219AB4u);
    ctx->pc = 0x219AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AACu;
    // 0x219ab0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AACu, 0x219AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AB4u;
label_219ab4:
    // 0x219ab4: 0x2404021b  addiu       $a0, $zero, 0x21B
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x219ab8: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AB8u;
    SET_GPR_U32(ctx, 31, 0x219AC0u);
    ctx->pc = 0x219ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AB8u;
    // 0x219abc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AB8u, 0x219AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AC0u;
label_219ac0:
    // 0x219ac0: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x219ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x219ac4: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AC4u;
    SET_GPR_U32(ctx, 31, 0x219ACCu);
    ctx->pc = 0x219AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AC4u;
    // 0x219ac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AC4u, 0x219ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219ACCu;
label_219acc:
    // 0x219acc: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x219accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    // 0x219ad0: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AD0u;
    SET_GPR_U32(ctx, 31, 0x219AD8u);
    ctx->pc = 0x219AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AD0u;
    // 0x219ad4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AD0u, 0x219AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AD8u;
label_219ad8:
    // 0x219ad8: 0x2404021e  addiu       $a0, $zero, 0x21E
    ctx->pc = 0x219ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x219adc: 0xc08525e  jal         func_214978
    ctx->pc = 0x219ADCu;
    SET_GPR_U32(ctx, 31, 0x219AE4u);
    ctx->pc = 0x219AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219ADCu;
    // 0x219ae0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219ADCu, 0x219AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AE4u;
label_219ae4:
    // 0x219ae4: 0x2404021f  addiu       $a0, $zero, 0x21F
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x219ae8: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AE8u;
    SET_GPR_U32(ctx, 31, 0x219AF0u);
    ctx->pc = 0x219AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AE8u;
    // 0x219aec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AE8u, 0x219AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AF0u;
label_219af0:
    // 0x219af0: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x219af4: 0xc08525e  jal         func_214978
    ctx->pc = 0x219AF4u;
    SET_GPR_U32(ctx, 31, 0x219AFCu);
    ctx->pc = 0x219AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AF4u;
    // 0x219af8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219AF4u, 0x219AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AFCu;
label_219afc:
    // 0x219afc: 0x24040221  addiu       $a0, $zero, 0x221
    ctx->pc = 0x219afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x219b00: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B00u;
    SET_GPR_U32(ctx, 31, 0x219B08u);
    ctx->pc = 0x219B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B00u;
    // 0x219b04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B00u, 0x219B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B08u;
label_219b08:
    // 0x219b08: 0x24040222  addiu       $a0, $zero, 0x222
    ctx->pc = 0x219b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x219b0c: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B0Cu;
    SET_GPR_U32(ctx, 31, 0x219B14u);
    ctx->pc = 0x219B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B0Cu;
    // 0x219b10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B0Cu, 0x219B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B14u;
label_219b14:
    // 0x219b14: 0x24040223  addiu       $a0, $zero, 0x223
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x219b18: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B18u;
    SET_GPR_U32(ctx, 31, 0x219B20u);
    ctx->pc = 0x219B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B18u;
    // 0x219b1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B18u, 0x219B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B20u;
label_219b20:
    // 0x219b20: 0x24040224  addiu       $a0, $zero, 0x224
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x219b24: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B24u;
    SET_GPR_U32(ctx, 31, 0x219B2Cu);
    ctx->pc = 0x219B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B24u;
    // 0x219b28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B24u, 0x219B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B2Cu;
label_219b2c:
    // 0x219b2c: 0x24040225  addiu       $a0, $zero, 0x225
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x219b30: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B30u;
    SET_GPR_U32(ctx, 31, 0x219B38u);
    ctx->pc = 0x219B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B30u;
    // 0x219b34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B30u, 0x219B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B38u;
label_219b38:
    // 0x219b38: 0x24040226  addiu       $a0, $zero, 0x226
    ctx->pc = 0x219b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x219b3c: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B3Cu;
    SET_GPR_U32(ctx, 31, 0x219B44u);
    ctx->pc = 0x219B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B3Cu;
    // 0x219b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B3Cu, 0x219B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B44u;
label_219b44:
    // 0x219b44: 0x24040227  addiu       $a0, $zero, 0x227
    ctx->pc = 0x219b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
    // 0x219b48: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B48u;
    SET_GPR_U32(ctx, 31, 0x219B50u);
    ctx->pc = 0x219B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B48u;
    // 0x219b4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B48u, 0x219B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B50u;
label_219b50:
    // 0x219b50: 0x24040228  addiu       $a0, $zero, 0x228
    ctx->pc = 0x219b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x219b54: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B54u;
    SET_GPR_U32(ctx, 31, 0x219B5Cu);
    ctx->pc = 0x219B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B54u;
    // 0x219b58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B54u, 0x219B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B5Cu;
label_219b5c:
    // 0x219b5c: 0x24040229  addiu       $a0, $zero, 0x229
    ctx->pc = 0x219b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    // 0x219b60: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B60u;
    SET_GPR_U32(ctx, 31, 0x219B68u);
    ctx->pc = 0x219B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B60u;
    // 0x219b64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B60u, 0x219B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B68u;
label_219b68:
    // 0x219b68: 0x2404022a  addiu       $a0, $zero, 0x22A
    ctx->pc = 0x219b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    // 0x219b6c: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B6Cu;
    SET_GPR_U32(ctx, 31, 0x219B74u);
    ctx->pc = 0x219B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B6Cu;
    // 0x219b70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B6Cu, 0x219B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B74u;
label_219b74:
    // 0x219b74: 0x2404022b  addiu       $a0, $zero, 0x22B
    ctx->pc = 0x219b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    // 0x219b78: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B78u;
    SET_GPR_U32(ctx, 31, 0x219B80u);
    ctx->pc = 0x219B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B78u;
    // 0x219b7c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B78u, 0x219B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B80u;
label_219b80:
    // 0x219b80: 0x2404022c  addiu       $a0, $zero, 0x22C
    ctx->pc = 0x219b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x219b84: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B84u;
    SET_GPR_U32(ctx, 31, 0x219B8Cu);
    ctx->pc = 0x219B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B84u;
    // 0x219b88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B84u, 0x219B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B8Cu;
label_219b8c:
    // 0x219b8c: 0x2404022d  addiu       $a0, $zero, 0x22D
    ctx->pc = 0x219b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
    // 0x219b90: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B90u;
    SET_GPR_U32(ctx, 31, 0x219B98u);
    ctx->pc = 0x219B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B90u;
    // 0x219b94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B90u, 0x219B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B98u;
label_219b98:
    // 0x219b98: 0x2404022e  addiu       $a0, $zero, 0x22E
    ctx->pc = 0x219b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
    // 0x219b9c: 0xc08525e  jal         func_214978
    ctx->pc = 0x219B9Cu;
    SET_GPR_U32(ctx, 31, 0x219BA4u);
    ctx->pc = 0x219BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B9Cu;
    // 0x219ba0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219B9Cu, 0x219BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BA4u;
label_219ba4:
    // 0x219ba4: 0x2404022f  addiu       $a0, $zero, 0x22F
    ctx->pc = 0x219ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x219ba8: 0xc08525e  jal         func_214978
    ctx->pc = 0x219BA8u;
    SET_GPR_U32(ctx, 31, 0x219BB0u);
    ctx->pc = 0x219BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BA8u;
    // 0x219bac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219BA8u, 0x219BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BB0u;
label_219bb0:
    // 0x219bb0: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x219bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x219bb4: 0xc08525e  jal         func_214978
    ctx->pc = 0x219BB4u;
    SET_GPR_U32(ctx, 31, 0x219BBCu);
    ctx->pc = 0x219BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BB4u;
    // 0x219bb8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219BB4u, 0x219BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BBCu;
label_219bbc:
    // 0x219bbc: 0x24040231  addiu       $a0, $zero, 0x231
    ctx->pc = 0x219bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    // 0x219bc0: 0xc08525e  jal         func_214978
    ctx->pc = 0x219BC0u;
    SET_GPR_U32(ctx, 31, 0x219BC8u);
    ctx->pc = 0x219BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BC0u;
    // 0x219bc4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219BC0u, 0x219BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BC8u;
label_219bc8:
    // 0x219bc8: 0x24040234  addiu       $a0, $zero, 0x234
    ctx->pc = 0x219bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
    // 0x219bcc: 0xc08525e  jal         func_214978
    ctx->pc = 0x219BCCu;
    SET_GPR_U32(ctx, 31, 0x219BD4u);
    ctx->pc = 0x219BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BCCu;
    // 0x219bd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x219BCCu, 0x219BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BD4u;
label_219bd4:
    // 0x219bd4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x219bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x219bd8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x219bd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219bdc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x219bdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219be0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x219be0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219be4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x219be4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219be8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x219be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219bec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x219becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219bf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x219bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219bf4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x219bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219bf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219bfc: 0x808574c  j           func_215D30
    ctx->pc = 0x219BFCu;
    ctx->pc = 0x219C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BFCu;
    // 0x219c00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D30u;
    animRestart_0x215d30(rdram, ctx, runtime); return;
    ctx->pc = 0x219C04u;
}
