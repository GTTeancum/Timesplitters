// Host test of the VIF1 decoder helpers' readers (source/PS2Recomp/
// ps2xRuntime/include/runtime/ps2_vif1_reader.h): the piece reader over a
// chain cut into pieces at random places and the span reader over the same
// bytes joined must answer every sequence of reads alike - the VIFcodes
// (word), the data taken in place or gathered (take), read, skip, advance
// within avail(), and what is left after each - so that a records engine
// replaying a chain's commands from guest memory (PS2Memory::vif1Unpack with
// a Vif1SpanReader) sees what the decoder saw (a Vif1PieceReader). Also the
// piece reader's own promises: avail() never past the piece, here() inside
// it, and a take() that gathers counts a split.
//
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I source/PS2Recomp/ps2xRuntime/include \
//       -I source/PS2Recomp/ps2xRuntime/src/lib -I source/PS2Recomp/ps2xIOP/include \
//       src/xbox/test/vif1_reader_test.cpp -o vif1_reader_test && ./vif1_reader_test
#include "runtime/ps2_vif1_reader.h"

#include <cstdio>
#include <cstring>
#include <random>
#include <vector>

Vif1StreamStats g_vif1StreamStats; // (the runtime's is in ps2_vif1_interpreter.cpp)
#if TS_NATIVE_RECORDS
// The token ring and the hooks the piece reader consults (the runtime's are
// in ps2_memory.cpp); no token here: the reader must read as before.
RenderCounters g_renderCounters;
Vif1TokenRing g_vif1Tokens;
bool g_vif1DryDecode = false;
const Vif1RecordHooks &PS2Memory::vif1RecordHooks()
{
    static const Vif1RecordHooks hooks{};
    return hooks;
}
#endif

namespace
{
    int failures = 0;
    void check(bool ok, const char *what, uint32_t seed, uint32_t step, uint32_t a = 0, uint32_t b = 0)
    {
        if (!ok && ++failures <= 20)
            std::printf("FAIL %s (seed %u, step %u: %u vs %u)\n", what, seed, step, a, b);
    }

    void run(uint32_t seed)
    {
        std::mt19937 rng(seed);
        // The chain's bytes, and the pieces they are cut into (a few of them
        // empty, as a walk may record).
        const uint32_t total = 1u + rng() % 4096u;
        std::vector<uint8_t> bytes(total);
        for (uint8_t &b : bytes)
            b = static_cast<uint8_t>(rng());
        std::vector<PS2Memory::Vif1Piece> pieces;
        for (uint32_t at = 0; at < total;)
        {
            uint32_t len = rng() % 8u == 0u ? 0u : 1u + rng() % std::min<uint32_t>(64u, total - at);
            if (rng() % 16u == 0u)
                len = total - at; // the rest in one piece
            pieces.emplace_back(bytes.data() + at, len);
            at += len;
        }
        if (rng() % 4u == 0u)
            pieces.emplace_back(bytes.data() + total, 0u); // an empty piece at the end

        Vif1PieceReader piece(pieces.data(), pieces.size(), total);
        Vif1SpanReader span(bytes.data(), total);
        check(piece.left() == total, "left at start", seed, 0, piece.left(), total);
        uint8_t bufA[64], bufB[64];
        for (uint32_t step = 0; step < 100000u && piece.left() != 0u; ++step)
        {
            check(piece.left() == span.left(), "left", seed, step, piece.left(), span.left());
            const uint32_t op = rng() % 6u;
            if (op == 0u)
            {
                uint32_t a = 0xDEADBEEFu, b = 0xDEADBEEFu;
                const bool okA = piece.word(a), okB = span.word(b);
                check(okA == okB, "word availability", seed, step, okA, okB);
                check(!okA || a == b, "word", seed, step, a, b);
                if (!okA)
                {
                    // Fewer than four bytes left: the stream ends here for both.
                    check(piece.left() < 4u && span.left() < 4u, "word short", seed, step, piece.left(), span.left());
                    break;
                }
            }
            else if (op == 1u)
            {
                const uint32_t n = std::min<uint32_t>(piece.left(), 1u + rng() % 64u);
                const uint8_t *a = piece.take(n, bufA), *b = span.take(n, bufB);
                check(std::memcmp(a, b, n) == 0, "take", seed, step, n);
                check(b >= bytes.data() && b + n <= bytes.data() + total, "span take in place", seed, step);
            }
            else if (op == 2u)
            {
                const uint32_t n = std::min<uint32_t>(piece.left(), 1u + rng() % 64u);
                piece.read(bufA, n);
                span.read(bufB, n);
                check(std::memcmp(bufA, bufB, n) == 0, "read", seed, step, n);
            }
            else if (op == 3u)
            {
                const uint32_t n = std::min<uint32_t>(piece.left(), rng() % 96u);
                piece.skip(n);
                span.skip(n);
            }
            else
            {
                // In place: avail() bytes at here(), fewer than left() across a piece boundary.
                const uint32_t availA = piece.avail(), availB = span.avail();
                check(availA <= piece.left(), "avail within left", seed, step, availA, piece.left());
                check(availB == span.left(), "span avail", seed, step, availB, span.left());
                if (availA == 0u)
                {
                    check(piece.left() == 0u, "avail 0 only at the end", seed, step, piece.left());
                    break;
                }
                const uint32_t n = 1u + rng() % availA;
                check(std::memcmp(piece.here(), span.here(), n) == 0, "here", seed, step, n);
                piece.advance(n);
                span.advance(n);
            }
        }
        check(piece.left() == span.left(), "left at the end", seed, 0, piece.left(), span.left());
    }
}

int main()
{
    g_vif1StreamStats.splits = 0;
    for (uint32_t seed = 1; seed <= 400u; ++seed)
        run(seed);
    // Pieces cut at random places: some take() must have gathered.
    check(g_vif1StreamStats.splits != 0u, "splits counted", 0, 0, g_vif1StreamStats.splits);
    // One piece, nothing gathered.
    {
        uint8_t bytes[256];
        for (uint32_t i = 0; i < 256u; ++i)
            bytes[i] = static_cast<uint8_t>(i);
        const PS2Memory::Vif1Piece one(bytes, 256u);
        const unsigned before = g_vif1StreamStats.splits;
        Vif1PieceReader piece(&one, 1, 256u);
        uint8_t buf[16];
        uint32_t w = 0;
        check(piece.word(w) && w == 0x03020100u, "one piece word", 0, 1, w);
        check(piece.take(16u, buf) == bytes + 4 && piece.avail() == 236u, "one piece take in place", 0, 2, piece.avail());
        check(g_vif1StreamStats.splits == before, "one piece: no split", 0, 3, g_vif1StreamStats.splits, before);
    }
    if (failures == 0)
        std::printf("vif1_reader_test: ok\n");
    else
        std::printf("vif1_reader_test: %d failures\n", failures);
    return failures == 0 ? 0 : 1;
}
