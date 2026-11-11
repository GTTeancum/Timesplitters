#!/usr/bin/env python3
"""Compile the production menu/text helpers in isolation and test their boundaries.
No game assets, generated-code execution or gameplay assertions are involved.
"""
from pathlib import Path
import os
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]
SOURCE = (ROOT / 'project/game/ts_overrides.cpp').read_text()

def function(name):
    # The selected functions contain balanced C++ blocks (including their literals).
    at = SOURCE.index(name + '(')
    start = SOURCE.rfind('\n', 0, at) + 1
    brace = SOURCE.index('{', at)
    depth = 1
    end = brace + 1
    while depth:
        depth += (SOURCE[end] == '{') - (SOURCE[end] == '}')
        end += 1
    return SOURCE[start:end] + '\n'

preamble = '''
#include <algorithm>
#include <cassert>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <string>
#include <vector>
struct PS2Runtime {
 static constexpr uint32_t kHostReservedBase=0x80000, kHostReservedSize=0x4000;
 bool active=true; bool hostReservedActive() const {return active;}
};
struct HostSettings {int renderScale=1, windowWidth=1280, windowHeight=720;};
HostSettings settings;
HostSettings &hostSettings() {return settings;}
'''
helpers = SOURCE[SOURCE.index('    constexpr uint32_t kReserve ='):SOURCE.index('\n#if !defined(PLATFORM_XBOX)\n    // Mouse speed')]
wording = SOURCE[SOURCE.index('    struct Rewording'):SOURCE.index('\n#else\n    // The Xbox', SOURCE.index('    struct Rewording'))]
layout_constants = SOURCE[SOURCE.index('    constexpr uint32_t kGameModeMenu'):SOURCE.index('    // The copy\'s layout')]
body = r'''
int main() {
 PS2Runtime runtime; g_reserveOwner=&runtime;
 std::vector<uint8_t> ram(0x2000000, 0xA5); auto *r=ram.data();
 assert(guestRange(0x1000,4,4));
 assert(guestRange(0x20001000,4,4));
 assert(guestRange(0x80001000,4,4));
 assert(guestRange(0xA0001000,4,4));
 assert(!guestRange(0x40001000,4,4));
 assert(!guestRange(0,4,4)); assert(!guestRange(0x1001,4,4));
 assert(!guestRange(0x1FFFFFC,8,4));
 const uint32_t table=0x313750; guestWord(r,0x2F2C18)=table;
 std::memset(r+table,0,0x4DE*4);
 const auto &w=kGenericWording[0];
 std::strcpy(reinterpret_cast<char*>(r+w.address),w.original);
 guestWord(r,table)=w.address; guestWord(r,table+4)=w.address;
 guestWord(r,table+8)=w.address+1; // interior alias must stay original
 auto original=ram;
 applyGenericWording(r);
 assert(std::strcmp(reinterpret_cast<char*>(r+w.address),w.original)==0);
 const uint32_t text=guestWord(r,table);
 assert(text>=kTextBlock && text<kTextBlockEnd);
 assert(guestWord(r,table+4)==text && guestWord(r,table+8)==w.address+1);
 assert(std::strcmp(reinterpret_cast<char*>(r+text),w.text)==0);
 for(size_t i=0;i<ram.size();++i)
   if(!(i>=kTextBlock && i<kTextBlockEnd) && !(i>=table && i<table+8)) assert(ram[i]==original[i]);
 uint32_t cursor=g_textCursor; applyGenericWording(r); assert(cursor==g_textCursor);
 runtime.active=false; assert(copyReplacementText(r,"not written")==0); runtime.active=true;
 g_textCursor=kTextBlockEnd-4; assert(copyReplacementText(r,"abc")==kTextBlockEnd-4);
 auto full=ram; assert(copyReplacementText(r,"x")==0); assert(ram==full);
 g_textCursor=kTextBlock; std::memset(r+0x1FFFFF0,'x',16);
 std::string out; assert(!readGuestText(r,0x1FFFFF0,out));
 // Verify every current display layout fits without touching adjacent blocks.
 for (auto size : {std::pair<int,int>{1280,720},{1234,567},{-2147483647-1,2147483647}}) {
   settings.windowWidth=size.first;settings.windowHeight=size.second;g_displayMenu={};
   std::fill(r+kDisplayMenuBlock,r+kDisplayMenuBlock+kDisplayMenuBlockSize,0);
   auto before=ram;assert(buildDisplayMenu(r)!=0);
   assert(std::equal(r+kDisplayMenuBlock+kDisplayMenuBlockSize,r+kReserve+0x4000,
                     before.data()+kDisplayMenuBlock+kDisplayMenuBlockSize));
 }
 // Exhaustion injection: compile a second variant with a deliberately tiny block.
 std::puts("override bounds and wording tests passed");
}
'''
# Xbox wording compiled and exercised in its own harness; text originals may be aliased.
xbox_body = r'''
int main() {
 PS2Runtime runtime;g_reserveOwner=&runtime;
 std::vector<uint8_t> ram(0x2000000,0);auto*r=ram.data();const uint32_t table=0x313750;
 guestWord(r,0x2F2C18)=table;
 std::strcpy(reinterpret_cast<char*>(r+0x384000),"L1 button");
 std::strcpy(reinterpret_cast<char*>(r+0x384100),"R1 button");
 std::strcpy(reinterpret_cast<char*>(r+0x384200),"Memory Card (PS2)");
 guestWord(r,table+1240*4)=0x384000;guestWord(r,table+1242*4)=0x384100;
 guestWord(r,table)=0x384200;guestWord(r,table+4)=0x384200;
 auto before=ram;applyXboxWording(r);
 assert(std::strcmp(reinterpret_cast<char*>(r+guestWord(r,table+1240*4)),"White")==0);
 assert(std::strcmp(reinterpret_cast<char*>(r+guestWord(r,table+1242*4)),"Black")==0);
 assert(std::strcmp(reinterpret_cast<char*>(r+guestWord(r,table)),"Memory Card")==0);
 for(size_t i=0;i<ram.size();++i)
   if(!(i>=kTextBlock && i<kTextBlockEnd) && !(i>=table && i<table+0x4DE*4)) assert(ram[i]==before[i]);
 auto cursor=g_textCursor;applyXboxWording(r);assert(g_textCursor==cursor);
}
'''
footer_helpers = r"""
struct R5900Context {uint32_t regs[32]{};};
#define GPR_U32(c,i) ((c)->regs[i])
#define SET_GPR_U32(c,i,v) ((c)->regs[i]=(v))
bool exitArmed(){return false;}
""" + layout_constants + function('gameModeBlockFree') + function('layoutGameModeMenu') + function('useGameModeMenu')
footer_body = r"""
int main(){PS2Runtime runtime;g_reserveOwner=&runtime;std::vector<uint8_t> ram(0x2000000,0);
auto*r=ram.data();R5900Context ctx;ctx.regs[4]=0x300000;ctx.regs[5]=kGameModeMenu;ctx.regs[28]=0x400000;
guestHalf(r,ctx.regs[4]+4)=kExitGameId;guestWord(r,ctx.regs[28]-0x6CAC)=0;
const uint32_t table=0x313750;guestWord(r,0x2F2C18)=table;guestWord(r,table+0x200)=0xABCD;
for(unsigned i=0;i<8;++i) guestWord(r,kGameModeMenu+16+i*kItemSize)=0x11110000+i;
auto before=ram;assert(useGameModeMenu(r,&ctx));const auto copy=ctx.regs[5];
assert(guestWord(r,copy+16+7*kItemSize)==0x11110006);
assert(guestWord(r,copy+16+8*kItemSize)==0xABCD);
assert(std::memcmp(r+kGameModeMenu,before.data()+kGameModeMenu,16+8*kItemSize)==0);
runtime.active=false;ctx.regs[5]=kGameModeMenu;before=ram;assert(!useGameModeMenu(r,&ctx));assert(ram==before);
}
"""
bounds_helpers = r"""
struct R5900Context {uint32_t regs[32]{};uint32_t pc=0;};
#define GPR_U32(c,i) ((c)->regs[i])
#define SET_GPR_S32(c,i,v) ((c)->regs[i]=(v))
#define READ32(a) guestWord(rdram,a)
#define WRITE32(a,v) (guestWord(rdram,a)=(v))
#define WRITE16(a,v) (guestHalf(rdram,a)=(v))
constexpr uint32_t kFrameSlots=0x2F2C00, kFrameSlotBytes=12, kGpDrawSlot=0x6CE4;
struct {unsigned gameFrames=0;} g_nv2aTextureStats;
void xboxPerfGameFrame(){}
""" + function('xboxZbtestCopyZB') + function('xboxZbtestDoTest')
bounds_body = r"""
int main(){PS2Runtime runtime;std::vector<uint8_t> ram(0x2000000,0);auto*r=ram.data();
R5900Context ctx;ctx.regs[28]=0x400000;ctx.regs[31]=0x123456;const auto gp=ctx.regs[28];
for(auto invalid : {2u,0xffffffffu}) {
 guestWord(r,gp-kGpDrawSlot)=invalid;auto before=ram;xboxZbtestCopyZB(r,&ctx,&runtime);assert(ram==before);assert(ctx.pc==ctx.regs[31]);
}
guestWord(r,gp-kGpDrawSlot)=1;guestWord(r,gp-0x4CDC)=0;xboxZbtestCopyZB(r,&ctx,&runtime);
assert(guestWord(r,kFrameSlots+12+8)==2);assert(guestWord(r,gp-0x4CDC)==1);
for(auto invalid : {3u,0xffffffffu}) {
 guestWord(r,gp-0x467C)=invalid;auto before=ram;xboxZbtestDoTest(r,&ctx,&runtime);assert(ram==before);
}
guestWord(r,gp-0x467C)=2;const uint32_t table=0x500000;guestWord(r,0x36A590+8)=table;
for(auto invalid : {73u,0xffffffffu}) {
 guestWord(r,0x1FEA0A0+8)=invalid;auto before=ram;xboxZbtestDoTest(r,&ctx,&runtime);assert(ram==before);
}
guestWord(r,0x1FEA0A0+8)=72;guestWord(r,0x36A590+8)=0x1FFFFF0;
auto before=ram;xboxZbtestDoTest(r,&ctx,&runtime);assert(ram==before);
guestWord(r,0x36A590+8)=table;std::memset(r+table,0,0x3CC0);
for(unsigned i=0;i<648;++i)guestHalf(r,table+i*24+0x12)=0xAAAA;
before=ram;xboxZbtestDoTest(r,&ctx,&runtime);
for(unsigned i=0;i<648;++i)assert(guestHalf(r,table+i*24+0x12)==0);
assert(r[table-1]==before[table-1] && r[table+0x3CC0]==before[table+0x3CC0]);
}
"""
assert 'TS_TEST_EXTRA_GLYPHS' not in SOURCE
assert 'preloadExtraGlyphs' not in SOURCE
assert '(kGameModeLinks + 2u) * kItemSize' in function('useGameModeMenu')
assert 'reserveKernelMemory(stackBytes)' in function('libmSelfTest')
assert 'stack + stackBytes - 16u' in function('libmSelfTest')
assert 'buffer >= 3u' in function('xboxZbtestDoTest')
assert 'glows > 72u' in function('xboxZbtestDoTest')
assert 'drawSlot >= 2u' in function('xboxZbtestCopyZB')
with tempfile.TemporaryDirectory() as directory:
    directory=Path(directory)
    tests=[('pc',preamble+helpers+wording+body),
           ('footer',preamble+helpers+footer_helpers+footer_body),
           ('xbox_bounds',preamble+helpers+bounds_helpers+bounds_body),
           ('xbox', '#define PLATFORM_XBOX\n'+preamble+helpers+function('applyXboxWording')+xbox_body),
           ('overflow',preamble+helpers.replace('kDisplayMenuBlockSize = 0x800u','kDisplayMenuBlockSize = 0x10u')+r'''
int main(){PS2Runtime runtime;g_reserveOwner=&runtime;std::vector<uint8_t> ram(0x2000000,0xA5);
auto before=ram;assert(buildDisplayMenu(ram.data())==0);
assert(std::strcmp(reinterpret_cast<char*>(ram.data()+kDisplayMenuBlock),"1280x720")==0);
for(size_t i=0;i<ram.size();++i) if(i<kDisplayMenuBlock || i>=kDisplayMenuBlock+16) assert(ram[i]==before[i]);}
''')]
    for name,code in tests:
        src=directory/(name+'.cpp');src.write_text(code);binary=directory/name
        flags=os.environ.get('TEST_CXXFLAGS','-fsanitize=address,undefined -fno-omit-frame-pointer').split()
        subprocess.run([os.environ.get('CXX','g++'),'-std=c++20','-O1','-g',*flags,str(src),'-o',str(binary)],check=True)
        env=dict(os.environ);env.setdefault('ASAN_OPTIONS','detect_leaks=0')
        subprocess.run([str(binary)],check=True,env=env)
print('5 extracted-production override tests passed')
