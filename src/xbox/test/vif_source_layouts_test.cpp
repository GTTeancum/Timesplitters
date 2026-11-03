// Deferred native tests of the actual expanded bridge. This is not run
// during source-only development and is not an Xbox GPU/game test.
#define main xboxVifSourceLegacySuiteMain
#include "vif_source_test.cpp"
#undef main

namespace
{
constexpr uint32_t kSourceFormats[]{0u,1u,2u,4u,5u,6u,8u,9u,10u,12u,13u,14u,15u};

uint32_t testStride(uint32_t format)
{
    return format == 15u ? 2u : ((format >> 2u) + 1u) * (4u >> (format & 3u));
}

// Independent materialization oracle: signed narrow integer conversions,
// rather than the production helper's unsigned masks. Untouched lanes stay.
void referenceExpand(uint32_t format, bool zero, const uint8_t *input, uint8_t *row)
{
    uint32_t values[4];
    std::memcpy(values, row, sizeof(values));
    if (format == 15u)
    {
        uint16_t value;
        std::memcpy(&value, input, 2u);
        values[0] = value % 32u;
        values[1] = (value / 32u) % 32u;
        values[2] = (value / 1024u) % 32u;
        values[3] = value / 32768u;
    }
    else
    {
        const uint32_t lanes = (format >> 2u) + 1u, width = 4u >> (format & 3u);
        for (uint32_t lane = 0; lane < lanes; ++lane)
        {
            const uint8_t *p = input + lane * width;
            if (width == 4u) std::memcpy(&values[lane], p, 4u);
            else if (width == 2u)
            {
                uint16_t value;
                std::memcpy(&value, p, 2u);
                values[lane] = zero ? value : uint32_t(int32_t(int16_t(value)));
            }
            else values[lane] = zero ? p[0] : uint32_t(int32_t(int8_t(p[0])));
        }
        if (lanes == 1u) values[1] = values[2] = values[3] = values[0];
    }
    std::memcpy(row, values, sizeof(values));
}

void replaceBoneFormat(Fixture &f, uint32_t format)
{
    Upload &bone = f.uploads.back();
    bone.format = format;
    const uint32_t values[]{0u,1u,2u,3u,0x80u,0xffffu,0x12340001u};
    for (uint32_t v = 0; v < bone.count; ++v)
    {
        uint8_t *p = ram.data() + bone.offset + v * testStride(format);
        std::memset(p, 0xa7u, testStride(format));
        const uint32_t width = format == 15u ? 2u : 4u >> (format & 3u);
        for (uint32_t byte = 0; byte < width; ++byte)
            p[byte] = uint8_t(values[v % 7u] >> (8u * byte));
    }
}

void expandFixture(const Fixture &f, bool zero)
{
    vu.fill(0x95u);
    for (const auto &entry : f.uploads)
        for (uint32_t v = 0; v < entry.count; ++v)
            referenceExpand(entry.format, zero,
                            ram.data() + entry.offset + v * testStride(entry.format),
                            vu.data() + (entry.row + v) * 16u);
}

bool allEntriesAndExactKinds()
{
    for (uint32_t pc : {0u,0x0d20u,0x1ae0u,0x3520u,0x2800u})
    {
        const uint32_t kind = pc == 0u ? 0u : pc == 0x0d20u ? 1u : pc == 0x2800u ? 3u : 2u;
        Fixture f = fixture(kind,7u,14u); f.pc = pc;
        store32(ram.data()+kTerminal,code(pc));
        XboxVifSourceScope scope(ram.data(),vu.data(),true);
        collect(scope,f); arm(scope,f);
        CHECK(inNative(scope,f,[&]() {
            CHECK(scope.active(vu.data(),kind));
            std::array<GSXfVertex,7> out;
            CHECK(xboxVifSourceTryDecodeStrip(kind,vu.data(),f.vi,7u,out.data()));
            CHECK(std::memcmp(out.data(),f.reference.data(),sizeof(out)) == 0);
            const auto before = out;
            for (uint32_t wrong = 0; wrong < 5u; ++wrong)
            {
                if (wrong == kind) continue;
                CHECK(!scope.active(vu.data(),wrong));
                CHECK(!xboxVifSourceTryDecodeStrip(wrong,vu.data(),f.vi,7u,out.data()));
                CHECK(std::memcmp(out.data(),before.data(),sizeof(out)) == 0);
            }
            return true;
        }));
    }
    // Sharing a layout must NOT make the two Lit entry addresses aliases
    // for a permit that recorded one exact MSCAL instruction.
    for (uint32_t pc : {0x1ae0u,0x3520u})
    {
        Fixture f = fixture(2u); f.pc = pc;
        store32(ram.data()+kTerminal,code(pc));
        XboxVifSourceScope scope(ram.data(),vu.data(),true);
        collect(scope,f); arm(scope,f);
        XboxVifSourceCallScope call(scope,pc,kTop);
        XboxVifSourceNativeScope wrong(pc == 0x1ae0u ? 0x3520u : 0x1ae0u,
                                      ram.data(),vu.data(),16384u,kTop,false);
        CHECK(!scope.active(vu.data()));
    }
    return true;
}

bool compactReadsAtEndOfRam()
{
    for (uint32_t format : kSourceFormats) for (bool zero : {false,true})
        for (uint32_t seed : {0u,0x80u,0xffu,0x7fu,0x95u})
        {
            const Fixture f = fixture(0u);
            const uint32_t bytes = testStride(format), start = kRamBytes - bytes, row = 900u;
            for (uint32_t i = 0; i < bytes; ++i) ram[start+i] = uint8_t(seed + i * 37u);
            referenceExpand(format,zero,ram.data()+start,vu.data()+row*16u);
            uint8_t expected[16]; std::memcpy(expected,vu.data()+row*16u,16u);
            XboxVifSourceScope scope(ram.data(),vu.data(),true);
            collect(scope,f);
            scope.noteUnpack(row,ram.data()+start,1u,format,1u,1u,zero);
            arm(scope,f);
            CHECK(inNative(scope,f,[&]() {
                std::array<uint8_t,18> out; out.fill(0x6bu);
                CHECK(xboxVifSourceTryReadRow(vu.data(),row,out.data()+1u));
                CHECK(std::memcmp(out.data()+1u,expected,16u) == 0);
                CHECK(out.front() == 0x6bu && out.back() == 0x6bu);
                return true;
            }));
        }
    return true;
}

bool compactBonesAndMissingFields()
{
    for (uint32_t format : kSourceFormats) for (bool zero : {false,true})
    {
        Fixture f = fixture(3u,7u,14u);
        replaceBoneFormat(f,format); expandFixture(f,zero);
        std::array<GSXfVertex,7> expected;
        for (uint32_t v = 0; v < 7u; ++v)
            ts_native_xf::decodeXfVertexReference(ts_native_xf::kLayouts[3],vu.data(),f.vi,v,expected[v]);
        const auto initialVu = vu;
        XboxVifSourceScope scope(ram.data(),vu.data(),true);
        scope.beginPrefix(ram.data(),vu.data());
        for (const auto &entry : f.uploads)
            scope.noteUnpack(entry.row,ram.data()+entry.offset,entry.count,entry.format,1u,1u,zero);
        arm(scope,f);
        CHECK(inNative(scope,f,[&]() {
            std::array<GSXfVertex,7> out;
            CHECK(xboxVifSourceTryDecodeStrip(3u,vu.data(),f.vi,7u,out.data()));
            CHECK(std::memcmp(out.data(),expected.data(),sizeof(out)) == 0);
            CHECK(vu == initialVu);
            return true;
        }));
    }
    for (uint32_t kind : {2u,3u})
        for (uint32_t missing = 0; missing < (kind == 2u ? 4u : 5u); ++missing)
        {
            const Fixture f = fixture(kind);
            XboxVifSourceScope scope(ram.data(),vu.data(),true);
            scope.beginPrefix(ram.data(),vu.data());
            for (uint32_t i = 0; i < f.uploads.size(); ++i)
            {
                if (i == missing) continue;
                const auto &entry = f.uploads[i];
                scope.noteUnpack(entry.row,ram.data()+entry.offset,entry.count,entry.format,1u,1u);
            }
            arm(scope,f);
            CHECK(inNative(scope,f,[&]() {
                std::array<GSXfVertex,20> out; std::memset(out.data(),0xa7u,sizeof(out));
                const auto before = out;
                GSXfCursor cursor; cursor.direct = true;
                cursor.next = out.data(); cursor.end = out.data()+out.size();
                const XboxVifSourceStripSpan strips[]{{f.vi,3u},{f.vi+3u,4u}};
                CHECK(!xboxVifSourceTryWriteGroup(kind,cursor,vu.data(),strips,2u));
                CHECK(cursor.next == out.data() && cursor.strips == 0u && cursor.vertices == 0u);
                CHECK(std::memcmp(out.data(),before.data(),sizeof(out)) == 0);
                return true;
            }));
        }
    return true;
}

bool prefixCarriesExtensionFlag()
{
    for (uint32_t pc : {0u,0x0d20u,0x1ae0u,0x3520u,0x2800u})
      for (bool zero : {false,true})
      for (bool finalState : {false,true})
    {
        const uint32_t kind = pc == 0u ? 0u : pc == 0x0d20u ? 1u : pc == 0x2800u ? 3u : 2u;
        Fixture f = fixture(kind,7u,14u); f.pc = pc;
        store32(ram.data()+kTerminal,code(pc));
        if (kind == 3u) replaceBoneFormat(f,2u); // signed/unsigned S-8 bone indices
        expandFixture(f,zero);
        const auto expectedVu = vu;
        constexpr uint32_t first = 0x30000u;
        uint32_t at = first;
        for (const auto &entry : f.uploads)
        {
            const uint32_t command = ((0x60u|entry.format)<<24u) | (entry.count<<16u) |
                                     0x8000u | (zero ? 0x4000u : 0u) | (entry.row-kTop);
            store32(ram.data()+at,command); at += 4u;
            const uint32_t payload = entry.count * testStride(entry.format);
            const uint32_t padded = (payload+3u) & ~3u;
            std::memset(ram.data()+at,0xeau,padded);
            std::memcpy(ram.data()+at,ram.data()+entry.offset,payload);
            at += padded;
        }
        const uint32_t terminal = at;
        store32(ram.data()+at,code(pc)); at += 4u;
        XboxDrawRecordChain chain{};
        chain.chainAddress = first; chain.callAddress = first; chain.generation = 1u;
        chain.pieceCount = chain.tagCount = 1u; chain.totalBytes = at-first;
        chain.pieces[0] = {first,at-first};
        struct Probe { const uint8_t *next, *end; } probe{ram.data()+first,ram.data()+at};
        const auto match = [](void *opaque,const uint8_t *source,uint32_t bytes) {
            auto &p = *static_cast<Probe *>(opaque);
            if (source != p.next || bytes > uint32_t(p.end-p.next)) return false;
            p.next += bytes; return true;
        };
        VIFRegisters regs{}; regs.cycle = 0x101u; regs.tops = kTop;
        vu.fill(0x95u);
        XboxVifSourceScope scope(ram.data(),vu.data(),true);
        uint32_t consumed, vectors, commands;
        CHECK(xboxVifRecordTryPrefix(chain,ram.data(),ram.data()+first,regs,vu.data(),
                                    match,nullptr,&probe,consumed,vectors,commands,&scope,
                                    finalState ? XboxVifRecordWritePolicy::FinalState : XboxVifRecordWritePolicy::Preserve));
        CHECK(consumed == terminal-first && commands == f.uploads.size() && vectors == 7u*f.uploads.size());
        CHECK(vu == expectedVu && probe.next == probe.end);
        scope.command(ram.data()+terminal,code(pc),kTop);
        CHECK(inNative(scope,f,[&]() {
            CHECK(scope.active(vu.data(),kind));
            for (const auto &entry : f.uploads) for (uint32_t v = 0; v < entry.count; ++v)
            {
                uint32_t output[4];
                CHECK(xboxVifSourceTryReadRow(vu.data(),entry.row+v,output));
                CHECK(std::memcmp(output,vu.data()+(entry.row+v)*16u,16u) == 0);
            }
            std::array<GSXfVertex,7> output, expected;
            for (uint32_t v = 0; v < 7u; ++v)
                ts_native_xf::decodeXfVertexReference(ts_native_xf::kLayouts[kind],vu.data(),f.vi,v,expected[v]);
            CHECK(xboxVifSourceTryDecodeStrip(kind,vu.data(),f.vi,7u,output.data()));
            CHECK(std::memcmp(output.data(),expected.data(),sizeof(output)) == 0);
            return true;
        }));
    }
    return true;
}
}

int main()
{
    if (xboxVifSourceLegacySuiteMain() != 0 || !allEntriesAndExactKinds() ||
        !compactReadsAtEndOfRam() || !compactBonesAndMissingFields() || !prefixCarriesExtensionFlag()) return 1;
    std::cout << "VIF source layout native probe passed\n";
    return 0;
}
