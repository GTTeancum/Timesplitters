#pragma once
#include "ps2_recompiled_functions.h"
#include "ps2_runtime_macros.h"
#include <bit>
#include <cmath>
#include <array>
// Executes original soft-double helpers, not host replacements.
static int nativeMathTest(const char* elf) {
    PS2Runtime rt;rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if(!rt.memory().initialize(PS2_RAM_SIZE)||!rt.loadELF(elf))throw std::runtime_error("math ELF load");
    auto* ram=rt.memory().getRDRAM();unsigned passed=0;
    auto call=[&](uint32_t entry,uint64_t a,uint64_t b,float f){
        R5900Context c{};c.pc=entry;c.f[12]=f;
        SET_GPR_U64((&c),4,a);SET_GPR_U64((&c),5,b);SET_GPR_U32((&c),28,0x3b47f0);SET_GPR_U32((&c),29,0x70000);SET_GPR_U32((&c),31,0x12345678);
        for(unsigned n=0;c.pc!=0x12345678 && n<10000;++n){
            if(!rt.hasFunction(c.pc))throw std::runtime_error("math missing EE entry");
            rt.lookupFunction(c.pc)(ram,&c,&rt);
        }
        if(c.pc!=0x12345678 || GPR_U32((&c),29)!=0x70000 || GPR_U32((&c),28)!=0x3b47f0)throw std::runtime_error("math original call budget/ABI");
        return c;
    };
    for(float f:std::array<float,8>{0.0f,-0.0f,1.0f,-1.0f,.0001f,1.05f,2.9333334f,12345.5f}){
        auto c=call(0x2e4608,0,0,f);uint64_t expected=std::bit_cast<uint64_t>(double(f));
        if(GPR_U64((&c),2)!=expected){std::cerr<<"[TS:math] fptodp input="<<f<<" actual=0x"<<std::hex<<GPR_U64((&c),2)<<" expected=0x"<<expected<<std::dec<<'\n';throw std::runtime_error("original fptodp mismatch");}
        ++passed;
        c=call(0x2e3a10,expected,0,0);
        if(std::bit_cast<uint32_t>(c.f[0])!=std::bit_cast<uint32_t>(f))throw std::runtime_error("original dptofp mismatch");
        ++passed;
    }
    for(auto ab:std::array<std::array<double,2>,4>{{{1.5,.25},{0.,-1.25},{-2.,-3.},{.0001,0.}}}){
        auto c=call(0x2e31d8,std::bit_cast<uint64_t>(ab[0]),std::bit_cast<uint64_t>(ab[1]),0);
        if(GPR_U64((&c),2)!=std::bit_cast<uint64_t>(ab[0]-ab[1]))throw std::runtime_error("original dpsub mismatch");++passed;
        c=call(0x2e3768,std::bit_cast<uint64_t>(ab[0]),std::bit_cast<uint64_t>(ab[1]),0);
        int cmp=GPR_S32((&c),2),wanted=(ab[0]>ab[1])-(ab[0]<ab[1]);
        if((cmp>0)-(cmp<0)!=wanted)throw std::runtime_error("original dpcmp mismatch");++passed;
    }
    std::cout<<"[TS:math] "<<passed<<" original soft-double checks passed\n";
    unsigned vectors=0;
    for(uint32_t entry:std::array<uint32_t,2>{0x25a5b8,0x25a668})
      for(const auto& v:std::array<std::array<float,3>,6>{{{3,4,0},{1,0,0},{0,0,-2},{-2,3,6},{.01f,-.02f,.02f},{0,4,0}}}) {
        constexpr uint32_t src=0x10000,dst=0x10100;
        std::array<unsigned char,32> guard;guard.fill(0xa5);std::memcpy(ram+dst-8,guard.data(),guard.size());
        std::memcpy(ram+src,v.data(),12);call(entry,dst,src,0);
        std::array<float,3> got;std::memcpy(got.data(),ram+dst,12);
        const float length=std::sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
        for(unsigned i=0;i<3;++i)if(!std::isfinite(got[i])||std::fabs(got[i]-v[i]/length)>0.000002f){
          std::cerr<<"[TS:vector] entry=0x"<<std::hex<<entry<<std::dec<<" input="<<v[0]<<","<<v[1]<<","<<v[2]
                   <<" actual="<<got[0]<<","<<got[1]<<","<<got[2]<<" expected="<<v[0]/length<<","<<v[1]/length<<","<<v[2]/length<<'\n';
          throw std::runtime_error("original vector normalization mismatch");}
        for(unsigned i=0;i<8;++i)if(ram[dst-8+i]!=0xa5||ram[dst+12+i]!=0xa5)throw std::runtime_error("vector guard overwritten");
        ++vectors;
      }
    std::cout<<"[TS:math] "<<vectors<<" original vector normalization checks passed\n";return 0;
}
