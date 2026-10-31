// Deferred extension of the existing source bridge probe. Reuse its original
// fixtures and run its whole suite before these read/cursor/final-state cases.
#define main xboxVifSourcePreviousProbeMain
#include "vif_source_test.cpp"
#undef main
#include <limits>

namespace
{
bool exactRowsAndRevocation()
{
    for (uint32_t kind : {0u,1u}) for (uint32_t colors : {12u,13u,14u})
    {
        const Fixture f = fixture(kind,7u,colors);
        XboxVifSourceScope scope(ram.data(),vu.data(),true);
        collect(scope,f); arm(scope,f);
        std::array<uint8_t,18> out; out.fill(0x6bu);
        const auto unchanged = out;
        CHECK(!xboxVifSourceTryReadRow(vu.data(),f.vi,out.data()+1u) && out == unchanged);
        CHECK(inNative(scope,f,[&]() {
            for (const auto &u : f.uploads) for (uint32_t i=0;i<u.count;++i)
            {
                out = unchanged;
                const bool expected = u.format == 8u || u.format == 12u;
                CHECK(xboxVifSourceTryReadRow(vu.data(),u.row+i,out.data()+1u) == expected);
                if (expected)
                {
                    CHECK(std::memcmp(out.data()+1u,vu.data()+(u.row+i)*16u,16u)==0);
                    CHECK(out.front()==0x6bu && out.back()==0x6bu);
                }
                else CHECK(out == unchanged); // Compact color signs must not be guessed.
            }
            out = unchanged;
            CHECK(!xboxVifSourceTryReadRow(vu.data(),1024u,out.data()+1u) && out == unchanged);
            CHECK(!xboxVifSourceTryReadRow(nullptr,f.vi,out.data()+1u) && out == unchanged);
            CHECK(!xboxVifSourceTryReadRow(vu.data(),f.vi,nullptr));
            xboxVifSourceInvalidate();
            CHECK(!xboxVifSourceTryReadRow(vu.data(),f.vi,out.data()+1u) && out == unchanged);
            return true;
        }));
    }
    // A V3 payload ends at the last byte of RAM: W must not overread it.
    const Fixture f = fixture(0u);
    XboxVifSourceScope scope(ram.data(),vu.data(),true);
    collect(scope,f);
    constexpr uint32_t row = 500u, source = kRamBytes-12u;
    for (uint32_t lane=0;lane<3u;++lane)
    {
        store32(ram.data()+source+lane*4u,0x7fc01234u+lane);
        store32(vu.data()+row*16u+lane*4u,0x7fc01234u+lane);
    }
    store32(vu.data()+row*16u+12u,0x80000000u);
    scope.noteUnpack(row,ram.data()+source,1u,8u,1u,1u); arm(scope,f);
    CHECK(inNative(scope,f,[&]() {
        uint32_t value[4];
        CHECK(xboxVifSourceTryReadRow(vu.data(),row,value));
        CHECK(std::memcmp(value,vu.data()+row*16u,16u)==0);
        return true;
    }));
    return true;
}
bool overwrittenAndSkippedRows()
{
    for (uint32_t format : {4u,13u,14u,15u})
    {
        const Fixture f = fixture(0u);
        XboxVifSourceScope scope(ram.data(),vu.data(),true);
        collect(scope,f);
        scope.noteUnpack(f.vi,ram.data()+0xb000u,1u,format,1u,1u); arm(scope,f);
        CHECK(inNative(scope,f,[&]() {
            std::array<uint8_t,16> value; value.fill(0x6bu); const auto before=value;
            CHECK(!xboxVifSourceTryReadRow(vu.data(),f.vi,value.data()) && value==before);
            return true;
        }));
    }
    return true;
}
bool cursorLimits()
{
    const Fixture f = fixture(0u);
    XboxVifSourceScope scope(ram.data(),vu.data(),true);
    collect(scope,f); arm(scope,f);
    CHECK(inNative(scope,f,[&]() {
        std::array<GSXfVertex,20> ring; std::memset(ring.data(),0x6bu,sizeof(ring));
        const auto untouched = ring;
        const XboxVifSourceStripSpan spans[2]{{f.vi,3u},{f.vi+3u,4u}};
        constexpr uint32_t maximum=std::numeric_limits<uint32_t>::max();
        for (bool direct : {false,true}) for (bool stripsOverflow : {false,true})
        {
            GSXfCursor cursor; cursor.direct=direct;
            cursor.next=ring.data(); cursor.end=ring.data()+ring.size();
            cursor.strips=stripsOverflow ? maximum-1u : 0u;
            cursor.vertices=stripsOverflow ? 0u : maximum-6u;
            const auto before=cursor;
            CHECK(!xboxVifSourceTryWriteGroup(0u,cursor,vu.data(),spans,2u));
            CHECK(cursor.next==before.next && cursor.strips==before.strips && cursor.vertices==before.vertices);
            CHECK(std::memcmp(ring.data(),untouched.data(),sizeof(ring))==0);
        }
        GSXfCursor cursor; cursor.direct=true;
        cursor.next=ring.data(); cursor.end=ring.data()+ring.size();
        cursor.strips=maximum;
        CHECK(!xboxVifSourceTryWriteJoinedStrip(0u,cursor,vu.data(),f.vi,3u));
        cursor.strips=0u; cursor.vertices=maximum-2u;
        CHECK(!xboxVifSourceTryWriteJoinedStrip(0u,cursor,vu.data(),f.vi,3u));
        CHECK(std::memcmp(ring.data(),untouched.data(),sizeof(ring))==0);
        cursor.vertices=0u;
        for (uint32_t slots : {3u,4u})
        {
            cursor.end=cursor.next+slots;
            CHECK(!xboxVifSourceTryWriteGroup(0u,cursor,vu.data(),spans,1u));
            CHECK(cursor.next==ring.data() && cursor.strips==0u && cursor.vertices==0u);
        }
        cursor.end=cursor.next+5u;
        CHECK(xboxVifSourceTryWriteGroup(0u,cursor,vu.data(),spans,1u));
        CHECK(cursor.next==ring.data()+3u && cursor.strips==1u && cursor.vertices==3u);
        return true;
    }));
    return true;
}
bool finalStateRecordRoundTrip()
{
    constexpr uint32_t start=0x18000u;
    const uint32_t words[]{0x6c01012cu,1u,2u,3u,4u,
                           0x6801012cu,5u,6u,7u,
                           0x6c01012cu,8u,9u,10u,11u,0x14000000u};
    std::memcpy(ram.data()+start,words,sizeof(words));
    XboxDrawRecordChain chain{};
    chain.chainAddress=start; chain.callAddress=start; chain.generation=1u;
    chain.pieceCount=chain.tagCount=1u; chain.totalBytes=sizeof(words);
    chain.pieces[0]={start,uint32_t(sizeof(words))};
    struct Probe { uint32_t at=start, events=0; };
    const auto match=[](void *opaque,const uint8_t *where,uint32_t bytes) {
        auto &p=*static_cast<Probe *>(opaque);
        if (where!=ram.data()+p.at || p.at>start+sizeof(words) || bytes>start+sizeof(words)-p.at) return false;
        p.at+=bytes; return true;
    };
    const auto observe=[](void *opaque,uint32_t,const uint8_t *,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t) {
        ++static_cast<Probe *>(opaque)->events; // Metadata only.
    };
    std::array<uint8_t,16384> original{};
    VIFRegisters expected{};
    for (bool finalState : {false,true})
    {
        vu.fill(0x95u);
        VIFRegisters regs{}; regs.cycle=0x101u;
        Probe p;
        uint32_t bytes,vectors,commands;
        XboxVifRecordStats before,after;
        CHECK(xboxVifRecordGetStats(before));
        CHECK(xboxVifRecordTryPrefix(chain,ram.data(),ram.data()+start,regs,vu.data(),
                                     match,observe,&p,bytes,vectors,commands,nullptr,
                                     finalState ? XboxVifRecordWritePolicy::FinalState : XboxVifRecordWritePolicy::Preserve));
        CHECK(xboxVifRecordGetStats(after));
        CHECK(bytes==sizeof(words)-4u && vectors==3u && commands==3u && p.events==3u);
        if (!finalState) { original=vu; expected=regs; CHECK(after.omittedUploads==before.omittedUploads); }
        else
        {
            CHECK(vu==original && std::memcmp(&regs,&expected,sizeof(regs))==0);
            CHECK(after.omittedUploads-before.omittedUploads==2u);
            CHECK(after.omittedVectors-before.omittedVectors==2u);
            CHECK(after.omittedStoreBytes-before.omittedStoreBytes==28u);
        }
    }
    return true;
}
}
int main()
{
    if (xboxVifSourcePreviousProbeMain()!=0 || !exactRowsAndRevocation() ||
        !overwrittenAndSkippedRows() || !cursorLimits() || !finalStateRecordRoundTrip()) return 1;
    std::cout << "VIF source-read and final-state integration probe passed\n";
    return 0;
}
