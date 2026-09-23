#pragma once
#include "ps2_recompiled_functions.h"
#include "ps2_runtime_macros.h"
#include "ps2_stubs.h"
#include <array>
#include <filesystem>
#include <cstring>
#include <chrono>

// Isolated calls to original EE card-state code. This is a component test, not gameplay.
static int nativeMcTest(const char *elf) {
    PS2Runtime rt;
    rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if (!rt.memory().initialize(PS2_RAM_SIZE) || !rt.loadELF(elf))
        throw std::runtime_error("MC test ELF load failed");
    auto oldPaths = PS2Runtime::getIoPaths();
    auto paths = oldPaths;
    const auto temp = std::filesystem::temp_directory_path() /
        ("TS03-mctest-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    paths.mcRoot = temp / "mc0"; PS2Runtime::setIoPaths(paths);
    struct Cleanup {std::filesystem::path p; PS2Runtime::IoPaths paths;
        ~Cleanup(){PS2Runtime::setIoPaths(paths);std::error_code ec;std::filesystem::remove_all(p,ec);}} cleanup{temp,oldPaths};
    auto *ram = rt.memory().getRDRAM();
    constexpr uint32_t sp=0x70000, ret=0x12345678, gp=0x3b47f0;
    auto read32=[&](uint32_t a){uint32_t v; std::memcpy(&v,ram+a,4); return v;};
    auto write32=[&](uint32_t a,uint32_t v){std::memcpy(ram+a,&v,4);};
    auto call=[&](uint32_t entry,std::initializer_list<uint32_t> args){
        R5900Context c{};c.pc=entry;
        SET_GPR_U32(&c,28,gp);SET_GPR_U32(&c,29,sp);SET_GPR_U32(&c,31,ret);
        unsigned reg=4;for(auto arg:args){SET_GPR_U32(&c,reg,arg);++reg;}
        for(unsigned i=0;c.pc!=ret && i<10000;++i){
            rt.lookupFunction(c.pc)(ram,&c,&rt);
            if(rt.isStopRequested())throw std::runtime_error("MC test missing EE entry");
        }
        if(c.pc!=ret || getRegU32(&c,29)!=sp || getRegU32(&c,28)!=gp)
            throw std::runtime_error("MC original EE call budget/stack/GP failure");
        return getRegU32(&c,2);
    };
    call(0x2dc7e8,{}); // sceMcInit HLE entry
    constexpr uint32_t cards=0x10000,free=0x10100,states=0x10200;
    for(unsigned i=0;i<8;++i){write32(cards+i*4,(i==0||i==4)?1:0);write32(free+i*4,0);write32(states+i*4,0);}
    call(0x208c18,{cards,free,states}); // original mcardCheckCards
    unsigned ticks=0;
    for(;read32(0x3ae3dc)!=0 && ticks<64;++ticks) {
        call(0x207ad0,{}); // original mcardTick, no patch or state override
        std::cout<<"[TS:MC-unit] tick="<<ticks<<" state="<<read32(0x3ae3dc)
            <<" result="<<read32(0x3ae3d8)<<" port="<<read32(0x3ae3e8)<<" slot="<<read32(0x3ae3ec)
            <<" type="<<read32(0x3ae3f0)<<" format="<<read32(0x3ae3f8)<<" cards=";
        for(unsigned i=0;i<8;++i)std::cout<<read32(cards+4*i)<<',';
        std::cout<<'\n';
    }
    if(read32(0x3ae3dc)!=0 || read32(0x3ae3d8)!=1 || read32(cards)!=4 || read32(cards+16)!=4)
        throw std::runtime_error("original mcardCheckCards/mcardTick did not finish both formatted cards");
    std::cout<<"[TS:MC-unit] original card scan PASS in "<<ticks<<" ticks\n";
    return 0;
}
