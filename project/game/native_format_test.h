#pragma once
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <bit>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

// Original vafmt (SLUS_200.90 0x002b4868) saves r5..r11 with SD at
// 8-byte intervals, immediately below the incoming SP. Its eighth variadic
// argument is therefore at incoming SP+0. These calls execute that original
// AOT function, rather than reproducing its marshalling in a host wrapper.
static int nativeFormatTest(const char* elf) {
    PS2Runtime rt; rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if (!rt.memory().initialize(PS2_RAM_SIZE) || !rt.loadELF(elf))
        throw std::runtime_error("format ELF load");
    auto* ram=rt.memory().getRDRAM();
    constexpr uint32_t fmt=0x11000, dest=0x12000, ap=0x13000, sp=0x70000;
    constexpr uint32_t a=0x10000,b=0x10100,c=0x10200;
    std::strcpy(reinterpret_cast<char*>(ram+a),"minute");
    std::strcpy(reinterpret_cast<char*>(ram+b),"player");
    std::strcpy(reinterpret_cast<char*>(ram+c),"Tomb");
    struct Case {const char* name; const char* format; std::vector<uint64_t> args; const char* want;};
    const std::vector<Case> cases={
        {"integer/string", "%d %s", {1,a}, "1 minute"},
        {"string/integer/string", "%s %d %s", {b,7,c}, "player 7 Tomb"},
        {"three strings", "%s|%s|%s", {a,b,c}, "minute|player|Tomb"},
        {"eight arguments", "%d,%d,%d,%d,%d,%d,%d,%d", {1,2,3,4,5,6,7,8}, "1,2,3,4,5,6,7,8"},
        {"ten arguments", "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", {1,2,3,4,5,6,7,8,9,10}, "1,2,3,4,5,6,7,8,9,10"},
        {"double in odd slot", "%.2f %s", {std::bit_cast<uint64_t>(1.25),a}, "1.25 minute"},
        {"double after int", "%d/%.3f/%s", {9,std::bit_cast<uint64_t>(-2.5),b}, "9/-2.500/player"},
        {"two doubles", "%.1f %.2f %d", {std::bit_cast<uint64_t>(0.5),std::bit_cast<uint64_t>(12.75),3}, "0.5 12.75 3"},
        {"negative long long", "%lld %s", {static_cast<uint64_t>(-4294967297LL),c}, "-4294967297 Tomb"},
        {"unsigned long long", "%llu %d", {0xfedcba9876543210ULL,5}, "18364758544493064720 5"},
        {"hex64 after int", "%d %016llX %s", {2,0x123456789abcdef0ULL,a}, "2 123456789ABCDEF0 minute"},
        {"width/precision args", "%*.*s|%d", {8,3,c,4}, "     Tom|4"},
        {"negative width", "%*s|%s", {static_cast<uint64_t>(-8LL),c,b}, "Tomb    |player"},
        {"zero width integer", "%02d:%02d %s", {1,5,a}, "01:05 minute"},
        {"signed values", "%d %d %u", {0xffffffffffffffffULL,0xffffffff80000000ULL,0xffffffffULL}, "-1 -2147483648 4294967295"},
        {"percent no argument", "100%% %s %d", {c,7}, "100% Tomb 7"},
        {"null pointer remains null", "%s %s", {0,b}, "(null) player"},
        {"character/int/string", "%c %d %s", {'A',1,c}, "A 1 Tomb"},
        {"wide value crosses register bank", "%d %d %d %d %d %d %lld %s", {1,2,3,4,5,6,0x123456789LL,c}, "1 2 3 4 5 6 4886718345 Tomb"},
        {"stack double", "%d %d %d %d %d %d %d %.2f %s", {1,2,3,4,5,6,7,std::bit_cast<uint64_t>(3.5),a}, "1 2 3 4 5 6 7 3.50 minute"}
    };
    unsigned passed=0,failed=0;
    // Three routes: original vafmt -> registered vsprintf; direct registered
    // vsprintf with an SD-width list; direct registered sprintf (r4..r11 + SP).
    for(unsigned route=0;route<3;++route)for(const auto& tc:cases) {
        std::memset(ram+sp-256,0,512); std::memset(ram+dest-16,0xa5,544);
        std::memset(ram+ap,0,256); std::strcpy(reinterpret_cast<char*>(ram+fmt),tc.format);
        R5900Context x{};x.pc=route==0?0x2b4868:route==1?0x2e9a08:0x2e5838;
        SET_GPR_U32((&x),28,0x3b47f0);SET_GPR_U32((&x),29,sp);SET_GPR_U32((&x),31,0x12345678);
        SET_GPR_U64((&x),16,0xdeadbeef12345678ULL);
        if(route==1){
            SET_GPR_U32((&x),4,dest);SET_GPR_U32((&x),5,fmt);SET_GPR_U32((&x),6,ap);
            for(size_t i=0;i<tc.args.size();++i)std::memcpy(ram+ap+i*8,&tc.args[i],8);
        }else{
            const unsigned fixed=route==0?1:2;
            SET_GPR_U32((&x),4,route==0?fmt:dest);if(route==2)SET_GPR_U32((&x),5,fmt);
            for(size_t i=0;i<tc.args.size();++i){unsigned slot=fixed+i;
                if(slot<8)SET_GPR_U64((&x),4+slot,tc.args[i]);
                else std::memcpy(ram+sp+(slot-8)*8,&tc.args[i],8);
            }
        }
        for(unsigned n=0;n<1000 && x.pc!=0x12345678;++n){
            if(!rt.hasFunction(x.pc))throw std::runtime_error("format missing original EE entry");
            rt.lookupFunction(x.pc)(ram,&x,&rt);
        }
        if(x.pc!=0x12345678||GPR_U32((&x),29)!=sp||GPR_U32((&x),28)!=0x3b47f0||GPR_U64((&x),16)!=0xdeadbeef12345678ULL)
            throw std::runtime_error("format original return/ABI failure");
        const uint32_t out=route==0?GPR_U32((&x),2):dest;
        if(out!=(route==0?0x01feafe0u:dest))throw std::runtime_error("format return buffer");
        const std::string got(reinterpret_cast<char*>(ram+out),strnlen(reinterpret_cast<char*>(ram+out),512));
        bool okay=got==tc.want;
        if(route!=0){
            okay=okay && GPR_S32((&x),2)==static_cast<int32_t>(std::strlen(tc.want));
            for(unsigned i=0;i<16;++i)if(ram[dest-16+i]!=0xa5||ram[dest+512+i]!=0xa5)throw std::runtime_error("format output guard");
        }
        if(okay)++passed;else {++failed;std::cerr<<"[TS:format-mismatch] route="<<route<<" case="<<tc.name<<" got='"<<got<<"' wanted='"<<tc.want<<"'\n";}
    }
    std::cout<<"[TS:format] "<<passed<<" passed, "<<failed<<" failed; "<<cases.size()<<" cases across original vafmt/va_list/register routes\n";
    return failed?1:0;
}
