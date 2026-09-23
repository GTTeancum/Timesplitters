#pragma once
#include "ps2_recompiled_functions.h"
#include "ps2_runtime_macros.h"
#include "runtime/gs/gs_frontend.h"
#include <array>
#include <cstring>

// Component tests execute the game's unmodified AOT image setup and two-DMA wrapper.
// Test packet/pixel storage lies in a fresh isolated runtime, never a live game.
static int nativeImageTest(const char* elf) {
    PS2Runtime rt;
    rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if (!rt.memory().initialize(PS2_RAM_SIZE) || !rt.loadELF(elf) || !rt.syncCoreSubsystems())
        throw std::runtime_error("image ABI test runtime initialization failed");
    auto* ram=rt.memory().getRDRAM();
    constexpr uint32_t desc=0x40010, pixels=0x41000, sp=0x70000, gp=0x3b47f0, ret=0x12345678;
    auto call=[&](uint32_t entry,std::initializer_list<uint32_t> args) {
        R5900Context c{};c.pc=entry;
        SET_GPR_U32(&c,28,gp);SET_GPR_U32(&c,29,sp);SET_GPR_U32(&c,31,ret);
        unsigned reg=4;for(auto value:args){SET_GPR_U32(&c,reg,value);++reg;}
        rt.eeScheduler().bindMainContextForSyscall(c, ram);
        for(unsigned n=0;c.pc!=ret&&n<10000;++n) {
            rt.lookupFunction(c.pc)(ram,&c,&rt);
            if(rt.isStopRequested())throw std::runtime_error("image ABI missing AOT entry");
        }
        if(c.pc!=ret || getRegU32(&c,29)!=sp || getRegU32(&c,28)!=gp)
            throw std::runtime_error("image ABI original function did not preserve return/stack/GP");
        return getRegU32(&c,2);
    };
    int passed=0;
    for (const auto format:std::array<unsigned,5>{0,1,2,0x13,0x14}) {
        rt.gs().reset();
        std::memset(ram+desc-16,0xa5,128);
        const unsigned bytes=format==0?2048:format==1?1536:format==2?1024:format==0x13?512:256;
        constexpr unsigned base=128,bw=2,width=32,height=16,x0=3,y0=5;
        const uint64_t bitblt=(uint64_t(base)<<32)|(uint64_t(bw)<<48)|(uint64_t(format)<<56);
        const std::array<uint64_t,12> expected{
            0x1000000000000004ull,0xEull,bitblt,0x50ull,
            uint64_t(x0)<<32|uint64_t(y0)<<48,0x51ull,
            uint64_t(width)|uint64_t(height)<<32,0x52ull,0,0x53ull,
            0x0800000000008000ull|uint64_t(bytes/16),0};
        const auto result=call(0x2ce688,{desc,base,bw,format,x0,y0,width,height});
        bool guards=true;
        for(unsigned i=0;i<16;++i)guards &= ram[desc-16+i]==0xa5 && ram[desc+96+i]==0xa5;
        if(result!=6 || !guards || std::memcmp(ram+desc,expected.data(),96))
            throw std::runtime_error("original 96-byte descriptor mismatch for PSM "+std::to_string(format));
        ++passed;std::cout<<"[TS:image-test] exact 96-byte descriptor PSM="<<format<<" PASS\n";
        for(unsigned i=0;i<bytes;++i)ram[pixels+i]=uint8_t(31+13*i);
        const auto dmas=rt.memory().dmaStartCount();
        if(call(0x2b7040,{desc,pixels})!=0 || rt.memory().dmaStartCount()!=dmas+2)
            throw std::runtime_error("original image upload did not execute exactly two successful DMAs");
        bool texels=true;
        for(unsigned i=0;i<512;++i){
            uint32_t expectedPixel=0;
            if(format==0)std::memcpy(&expectedPixel,ram+pixels+4*i,4);
            else if(format==1){std::memcpy(&expectedPixel,ram+pixels+3*i,3);}
            else if(format==2){std::memcpy(&expectedPixel,ram+pixels+2*i,2);}
            else if(format==0x13)expectedPixel=ram[pixels+i];
            else expectedPixel=(ram[pixels+i/2]>>((i&1)*4))&15;
            const auto actual=rt.gs().ReadVram(format,base,bw,x0+i%width,y0+i/width);
            if(actual!=expectedPixel){
                std::cerr<<"[TS:image-test] pixel="<<i<<" PSM="<<format<<" expected=0x"<<std::hex<<expectedPixel<<" actual=0x"<<actual<<std::dec<<'\n';
                texels=false;break;
            }
        }
        if(!texels || rt.gs().getDebugSnapshot().transferCopiedPixels!=512)
            throw std::runtime_error("original two-DMA image upload texel mismatch");
        ++passed;std::cout<<"[TS:image-test] original two-DMA upload PSM="<<format<<" 512 exact texels PASS\n";
    }
    std::cout<<"[TS:image-test] "<<passed<<" original-EE descriptor/DMA checks passed\n";
    return 0;
}
