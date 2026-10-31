// Deferred native probe for the Xbox VIF source bridge.
// Source-authored only during the no-build integration stage. Compile and
// execute later with xbox_vif_source.cpp and TS_VIF_SOURCE=1. This synthetic
// probe does not exercise Xbox GPU memory, command submission or game scenes.
#include "xbox_vif_source.h"
#include "xbox_vif_record.h"
#include "runtime/ps2_memory.h"
#include "vu1_native_xf.h"

#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <thread>
#include <vector>

#if !TS_VIF_SOURCE
#error "This deferred source-bridge probe requires TS_VIF_SOURCE=1"
#endif

#define CHECK(condition) do { if (!(condition)) { \
    std::cerr << "check failed at " << __LINE__ << ": " #condition "\n"; \
    return false; } } while (0)

namespace
{
constexpr uint32_t kRamBytes = 32u * 1024u * 1024u;
constexpr uint32_t kTop = 256u, kTerminal = 0x1000u;
constexpr uint32_t kPCs[4] = {0u, 0x0d20u, 0x1ae0u, 0x2800u};
std::vector<uint8_t> ram(kRamBytes);
std::array<uint8_t, 16384> vu{};

struct Upload
{
    uint32_t row, count, format, offset;
};
struct Fixture
{
    uint32_t kind, pc, vi, count;
    std::vector<Upload> uploads;
    std::vector<GSXfVertex> reference;
};

uint32_t code(uint32_t pc) { return 0x14000000u | (pc / 8u); }
void store32(uint8_t *where, uint32_t value) { std::memcpy(where, &value, 4u); }

// Independent scalar UNPACK fixture construction. The bridge never writes
// the VU image: it must agree with the image the production decoder kept.
void upload(Fixture &fixture, uint32_t row, uint32_t format, uint32_t role)
{
    const uint32_t offset = 0x4001u + uint32_t(fixture.uploads.size()) * 0x1000u;
    fixture.uploads.push_back({row, fixture.count, format, offset});
    const uint32_t components = (format >> 2u) + 1u;
    const uint32_t width = 4u >> (format & 3u);
    for (uint32_t v = 0; v < fixture.count; ++v)
        for (uint32_t lane = 0; lane < components; ++lane)
        {
            uint32_t value = 0x3f000000u + (v * 0x10000u) + lane * 0x1000u + role;
            if (role == 0u && lane == 0u)
                value = v == 0u ? 0x80000000u : 0x7fc01234u + v;
            if (role == 1u)
                value = 0xa5900080u + v * 13u + lane * 29u;
            if (role == 2u && lane == 2u)
                value = v & 1u ? 0x7fc0abcd : 0x80000000u;
            if (role == 4u)
                value = lane == 0u ? v % 4u : 0xdead0000u + lane;
            uint8_t *source = ram.data() + offset + (v * components + lane) * width;
            for (uint32_t byte = 0; byte < width; ++byte)
                source[byte] = uint8_t(value >> (byte * 8u));
            // Signed compact expansion deliberately gives nonzero high
            // bytes. Packed RGBA consumes only the low byte of each lane.
            if (width == 1u)
                value = uint32_t(int32_t(int8_t(value & 0xffu)));
            else if (width == 2u)
                value = uint32_t(int32_t(int16_t(value & 0xffffu)));
            store32(vu.data() + (row + v) * 16u + lane * 4u, value);
        }
}

Fixture fixture(uint32_t kind, uint32_t count = 7u, uint32_t colorFormat = 0xcu)
{
    vu.fill(0x95u);
    const auto &layout = ts_native_xf::kLayouts[kind];
    Fixture result{kind, kPCs[kind], kTop + layout.vertexBase, count, {}, {}};
    upload(result, result.vi + layout.pos, 0x8u, 0u); // V3-32
    upload(result, result.vi + layout.rgba, colorFormat, 1u);
    if (!layout.envMap)
        upload(result, result.vi + layout.st, 0x8u, 2u); // V3-32, Q retained exactly
    if (layout.lit || layout.envMap)
        upload(result, result.vi + layout.normal, 0xcu, 3u); // V4-32
    if (layout.skinned)
        upload(result, result.vi + layout.boneIndex, 0xcu, 4u);
    result.reference.resize(count);
    for (uint32_t v = 0; v < count; ++v)
        ts_native_xf::decodeXfVertexReference(layout, vu.data(), result.vi, v, result.reference[v]);
    store32(ram.data() + kTerminal, code(result.pc));
    return result;
}

void collect(XboxVifSourceScope &scope, const Fixture &f)
{
    scope.beginPrefix(ram.data(), vu.data());
    for (const auto &entry : f.uploads)
        scope.noteUnpack(entry.row, ram.data() + entry.offset, entry.count,
                         entry.format, 1u, 1u);
}

void arm(XboxVifSourceScope &scope, const Fixture &f)
{
    scope.finishPrefix(ram.data() + kTerminal, code(f.pc), kTop);
    scope.command(ram.data() + kTerminal, code(f.pc), kTop);
}

template <typename Action>
bool inNative(XboxVifSourceScope &scope, const Fixture &f, Action action)
{
    XboxVifSourceCallScope call(scope, f.pc, kTop);
    XboxVifSourceNativeScope native(f.pc, ram.data(), vu.data(), uint32_t(vu.size()), kTop, false);
    return action();
}

bool same(const GSXfVertex &a, const GSXfVertex &b)
{
    return std::memcmp(&a, &b, sizeof(a)) == 0;
}

bool referenceAndLifetime()
{
    for (uint32_t kind = 0; kind < 2u; ++kind)
        for (uint32_t colorFormat : {0xcu, 0xdu, 0xeu})
        {
            const Fixture f = fixture(kind, 7u, colorFormat);
            XboxVifSourceScope scope(ram.data(), vu.data(), true);
            collect(scope, f);
            arm(scope, f);
            std::array<GSXfVertex, 9> out;
            std::memset(out.data(), 0x6bu, sizeof(out));
            const auto initial = out;
            CHECK(!xboxVifSourceTryDecodeStrip(kind, vu.data(), f.vi, f.count, out.data() + 1));
            CHECK(std::memcmp(out.data(), initial.data(), sizeof(out)) == 0);
            const auto originalVu = vu;
            CHECK(inNative(scope, f, [&]() {
                CHECK(scope.active(vu.data()));
                CHECK(xboxVifSourceTryDecodeStrip(kind, vu.data(), f.vi, f.count, out.data() + 1));
                CHECK(std::memcmp(out.data() + 1, f.reference.data(), f.count * sizeof(GSXfVertex)) == 0);
                CHECK(same(out.front(), initial.front()) && same(out.back(), initial.back()));
                return true;
            }));
            CHECK(vu == originalVu);
            CHECK(!scope.active(vu.data()));
            // Re-entering native without a fresh prefix cannot reuse sources.
            CHECK(inNative(scope, f, [&]() {
                CHECK(!scope.active(vu.data()));
                return true;
            }));
        }
    return true;
}

bool directAndFlatGroups()
{
    for (bool direct : {false, true})
        for (bool previousJoin : {false, true})
        {
            if (!direct && previousJoin) continue;
            const Fixture f = fixture(0u);
            XboxVifSourceScope scope(ram.data(), vu.data(), true);
            collect(scope, f);
            arm(scope, f);
            std::array<GSXfVertex, 20> ring;
            std::memset(ring.data(), 0xb6u, sizeof(ring));
            const auto pristine = ring;
            GSXfCursor cursor;
            cursor.direct = direct;
            cursor.join = previousJoin;
            cursor.next = ring.data() + 1;
            cursor.end = ring.data() + ring.size() - 1;
            cursor.strips = 5u; cursor.vertices = 12u;
            cursor.last = direct ? f.reference.back() : pristine.front();
            const GSXfVertex initialLast = cursor.last;
            const XboxVifSourceStripSpan spans[2]{{f.vi, 3u}, {f.vi + 3u, 4u}};
            std::vector<GSXfVertex> wanted;
            if (direct)
            {
                if (previousJoin) { wanted.push_back(cursor.last); wanted.push_back(f.reference[0]); }
                wanted.insert(wanted.end(), f.reference.begin(), f.reference.begin() + 3);
                wanted.push_back(f.reference[2]); wanted.push_back(f.reference[3]);
                wanted.insert(wanted.end(), f.reference.begin() + 3, f.reference.end());
            }
            else
                for (const auto &span : spans)
                    for (uint32_t v = 2u; v < span.count; ++v)
                    {
                        const uint32_t first = span.vi - f.vi;
                        wanted.push_back(f.reference[first + v]);
                        wanted.push_back(f.reference[first + v - 2u]);
                        wanted.push_back(f.reference[first + v - 1u]);
                    }
            CHECK(inNative(scope, f, [&]() {
                // Full-group admission must precede the first store. One
                // missing slot rejects without changing counters or bytes.
                cursor.end = cursor.next + wanted.size() - 1u;
                CHECK(!xboxVifSourceTryWriteGroup(0u, cursor, vu.data(), spans, 2u));
                CHECK(std::memcmp(ring.data(), pristine.data(), sizeof(ring)) == 0);
                CHECK(cursor.next == ring.data() + 1 && cursor.strips == 5u && cursor.vertices == 12u);
                CHECK(cursor.join == previousJoin && same(cursor.last, initialLast));
                cursor.end = cursor.next + wanted.size();
                CHECK(xboxVifSourceTryWriteGroup(0u, cursor, vu.data(), spans, 2u));
                CHECK(cursor.next == ring.data() + 1u + wanted.size());
                CHECK(cursor.strips == 7u && cursor.vertices == 19u);
                CHECK(cursor.direct == direct && cursor.join == (direct || previousJoin));
                CHECK(same(cursor.last, direct ? f.reference.back() : initialLast));
                CHECK(std::memcmp(ring.data() + 1, wanted.data(), wanted.size() * sizeof(GSXfVertex)) == 0);
                CHECK(same(ring[0], pristine[0]) && same(ring[1u + wanted.size()], pristine[1u + wanted.size()]));
                return true;
            }));
        }
    return true;
}

bool overlapRevokesWholeGroup()
{
    for (uint32_t format : {0x4u, 0x8u, 0xfu})
    {
        const Fixture f = fixture(0u);
        XboxVifSourceScope scope(ram.data(), vu.data(), true);
        collect(scope, f);
        // Last writer wins even when it writes only part of a row. The
        // second strip's colour no longer has a complete source proof.
        scope.noteUnpack(f.vi + 64u + 3u, ram.data() + 0xa001u, 1u, format, 1u, 1u);
        arm(scope, f);
        std::array<GSXfVertex, 20> ring;
        std::memset(ring.data(), 0xb6u, sizeof(ring));
        const auto pristine = ring;
        GSXfCursor cursor;
        cursor.direct = true; cursor.next = ring.data(); cursor.end = ring.data() + ring.size();
        const XboxVifSourceStripSpan spans[2]{{f.vi, 3u}, {f.vi + 3u, 4u}};
        CHECK(inNative(scope, f, [&]() {
            CHECK(!xboxVifSourceTryWriteGroup(0u, cursor, vu.data(), spans, 2u));
            CHECK(cursor.next == ring.data() && cursor.strips == 0u && cursor.vertices == 0u);
            CHECK(std::memcmp(ring.data(), pristine.data(), sizeof(ring)) == 0);
            return true;
        }));
    }
    return true;
}

bool exactClaimAndForeignDecode()
{
    const Fixture f = fixture(0u);
    for (uint32_t mismatch = 0u; mismatch < 8u; ++mismatch)
    {
        XboxVifSourceScope scope(ram.data(), vu.data(), true);
        collect(scope, f);
        scope.finishPrefix(ram.data() + kTerminal, code(f.pc), kTop);
        scope.command(ram.data() + kTerminal + (mismatch == 0u ? 4u : 0u),
                       mismatch == 1u ? 0x17000000u : code(f.pc), kTop);
        XboxVifSourceCallScope call(scope, f.pc, kTop);
        XboxVifSourceNativeScope native(mismatch == 2u ? 0x3ce8u : f.pc,
                                        ram.data() + (mismatch == 3u ? 1u : 0u),
                                        vu.data() + (mismatch == 4u ? 16u : 0u),
                                        uint32_t(vu.size()) - (mismatch == 5u ? 16u : 0u),
                                        kTop + (mismatch == 6u ? 1u : 0u), mismatch == 7u);
        CHECK(!scope.active(vu.data()));
    }
    {
        XboxVifSourceScope scope(ram.data(), vu.data(), true);
        collect(scope, f); arm(scope, f);
        CHECK(inNative(scope, f, [&]() {
            CHECK(scope.active(vu.data()));
            {
                // A nested/foreign decoder revokes the outer claim even
                // when its own optimization is disabled, and cannot revive
                // that claim when the nested decoder returns.
                XboxVifSourceScope nested(ram.data(), vu.data(), false);
                CHECK(!scope.active(vu.data()));
            }
            CHECK(!scope.active(vu.data()));
            return true;
        }));
    }
    return true;
}

bool recordedPrefixIntegration()
{
    const Fixture f = fixture(0u, 4u);
    const auto expectedVu = vu;
    constexpr uint32_t first = 0x20000u;
    uint32_t at = first, lastCode = 0;
    for (uint32_t index = 0; index < f.uploads.size(); ++index)
    {
        const Upload &entry = f.uploads[index];
        lastCode = ((0x60u | entry.format) << 24u) | (entry.count << 16u) |
                   0x8000u | (entry.row - kTop);
        if (index + 1u == f.uploads.size()) lastCode |= 0x80000000u;
        store32(ram.data() + at, lastCode);
        at += 4u;
        const uint32_t payloadBytes = entry.count * ((entry.format >> 2u) + 1u) * 4u;
        std::memcpy(ram.data() + at, ram.data() + entry.offset, payloadBytes);
        at += payloadBytes;
    }
    const uint32_t terminal = at, terminalCode = code(f.pc);
    store32(ram.data() + at, terminalCode);
    at += 4u;
    const std::vector<uint8_t> originalInput(ram.begin() + first, ram.begin() + at);
    vu.fill(0x95u);

    XboxDrawRecordChain chain{};
    chain.generation = 1u;
    chain.callAddress = 0x1200u;
    chain.chainAddress = first - 8u;
    chain.totalBytes = at - first;
    chain.pieceCount = chain.tagCount = 1u;
    chain.pieces[0] = {first, at - first};
    VIFRegisters registers{};
    registers.cycle = 0x101u;
    registers.tops = kTop;
    registers.top = 700u;
    registers.itops = 37u;
    registers.itop = 89u;
    registers.base = 32u;
    registers.ofst = 64u;
    registers.stat = 1u << 7u;
    VIFRegisters expected = registers;
    expected.code = lastCode;
    expected.num = f.count;
    expected.stat |= 1u << 11u;

    struct Reader
    {
        const uint8_t *next, *end;
        uint32_t observed = 0;
        bool beforeWrite = true;
    } original{ram.data() + first, ram.data() + at};
    Reader probe = original; // Admission must advance only this copy.
    const auto match = [](void *opaque, const uint8_t *source, uint32_t bytes) {
        Reader &reader = *static_cast<Reader *>(opaque);
        if (source != reader.next || bytes > uint32_t(reader.end - reader.next)) return false;
        reader.next += bytes;
        return true;
    };
    const auto observe = [](void *opaque, uint32_t dest, const uint8_t *,
                            uint32_t count, uint32_t, uint32_t, uint32_t, uint32_t) {
        Reader &reader = *static_cast<Reader *>(opaque);
        ++reader.observed;
        for (uint32_t byte = 0; byte < count * 16u; ++byte)
            if (vu[dest * 16u + byte] != 0x95u) reader.beforeWrite = false;
    };
    XboxVifSourceScope scope(ram.data(), vu.data(), true);
    uint32_t consumed = 0, vectors = 0, commands = 0;
    CHECK(xboxVifRecordTryPrefix(chain, ram.data(), ram.data() + first,
                                 registers, vu.data(), match, observe, &probe,
                                 consumed, vectors, commands, &scope));
    CHECK(consumed == terminal - first && vectors == 3u * f.count && commands == 3u);
    CHECK(probe.next == probe.end && probe.observed == 3u && probe.beforeWrite);
    CHECK(original.next == ram.data() + first && original.observed == 0u);
    CHECK(std::memcmp(&registers, &expected, sizeof(expected)) == 0);
    CHECK(vu == expectedVu);
    CHECK(std::memcmp(ram.data() + first, originalInput.data(), originalInput.size()) == 0);

    // The original decoder consumes MSCAL and toggles TOPS before the
    // native call. The source claim must still match the captured runTop.
    scope.command(ram.data() + terminal, terminalCode, registers.tops);
    const uint32_t runTop = registers.tops, runItop = registers.itops;
    registers.code = terminalCode; registers.num = 0u;
    registers.top = runTop; registers.itop = runItop;
    registers.tops = registers.base;
    registers.stat ^= 1u << 7u;
    CHECK(registers.tops != runTop);
    XboxVifSourceCallScope call(scope, f.pc, runTop);
    XboxVifSourceNativeScope native(f.pc, ram.data(), vu.data(), uint32_t(vu.size()), runTop, false);
    CHECK(scope.active(vu.data()));
    std::array<GSXfVertex, 4> sourceOutput, vuOutput;
    for (uint32_t v = 0; v < f.count; ++v)
        ts_native_xf::decodeXfVertexReference(ts_native_xf::kLayouts[0], vu.data(), f.vi, v, vuOutput[v]);
    CHECK(xboxVifSourceTryDecodeStrip(0u, vu.data(), f.vi, f.count, sourceOutput.data()));
    CHECK(std::memcmp(sourceOutput.data(), vuOutput.data(), sizeof(sourceOutput)) == 0);
    CHECK(vu == expectedVu);
    return true;
}

bool unsupportedEntriesAndForeignThread()
{
    for (uint32_t kind : {2u, 3u})
    {
        const Fixture f = fixture(kind);
        XboxVifSourceScope scope(ram.data(), vu.data(), true);
        collect(scope, f); arm(scope, f);
        CHECK(inNative(scope, f, [&]() {
            CHECK(!scope.active(vu.data()));
            return true;
        }));
    }
    const Fixture f = fixture(0u);
    XboxVifSourceScope scope(ram.data(), vu.data(), true);
    collect(scope, f); arm(scope, f);
    CHECK(inNative(scope, f, [&]() {
        CHECK(scope.active(vu.data()));
        bool foreignDenied = false;
        // No concurrent guest-memory mutation is modelled here. This
        // verifies the TLS ownership boundary: another thread may not
        // dereference the owner's decoder-stack object or borrow its arrays.
        std::thread attemptedBorrow([&]() {
            std::array<GSXfVertex, 7> output;
            std::memset(output.data(), 0x39u, sizeof(output));
            const auto original = output;
            XboxVifSourceNativeScope native(f.pc, ram.data(), vu.data(),
                                            uint32_t(vu.size()), kTop, false);
            foreignDenied = !xboxVifSourceTryDecodeStrip(0u, vu.data(), f.vi, f.count, output.data()) &&
                            std::memcmp(output.data(), original.data(), sizeof(output)) == 0;
        });
        attemptedBorrow.join();
        CHECK(foreignDenied && scope.active(vu.data()));
        // A foreign decoder can atomically revoke the owner, but cannot
        // become the owner while its stack scope is still live.
        std::thread foreignDecoder([&]() {
            XboxVifSourceScope other(ram.data(), vu.data(), true);
        });
        foreignDecoder.join();
        CHECK(!scope.active(vu.data()));
        std::array<GSXfVertex, 7> output;
        std::memset(output.data(), 0x39u, sizeof(output));
        const auto original = output;
        CHECK(!xboxVifSourceTryDecodeStrip(0u, vu.data(), f.vi, f.count, output.data()));
        CHECK(std::memcmp(output.data(), original.data(), sizeof(output)) == 0);
        return true;
    }));
    return true;
}
}

int main()
{
    if (!referenceAndLifetime() || !directAndFlatGroups() ||
        !overlapRevokesWholeGroup() || !exactClaimAndForeignDecode() ||
        !recordedPrefixIntegration() || !unsupportedEntriesAndForeignThread())
        return 1;
    std::cout << "VIF source bridge synthetic probe passed\n";
    return 0;
}
