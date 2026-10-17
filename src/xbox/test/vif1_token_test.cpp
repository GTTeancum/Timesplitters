// Host test of the token pieces in the VIF1 piece reader (source/PS2Recomp/
// ps2xRuntime/include/runtime/ps2_vif1_reader.h, ps2_vif1_tokens.h;
// src/xbox/PUSH-BC-PLAN.md D1): a chain token among a list's pieces must
// read exactly as the chain's own pieces in its place would -
//   at a command boundary: tokenAhead() hands the token over (consumed),
//     expandToken() puts the chain's pieces in its place, and the words
//     that follow are the chain's, then the list's;
//   inside a command's data (tokmid): a read that runs into the token
//     expands it by itself and goes on through the chain, then the list;
//     leftExpanded() and has() count the token at its expanded size before;
//   a list token (no pieces) read as its four NOPs.
// The list and the chain are cut into pieces at random places (the token
// sits at a qword boundary of the list, where the walk puts one), and the
// reads are checked against a span reader over the joined stream.
//
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I source/PS2Recomp/ps2xRuntime/include \
//       -I source/PS2Recomp/ps2xRuntime/src/lib -I source/PS2Recomp/ps2xIOP/include \
//       src/xbox/test/vif1_token_test.cpp -o vif1_token_test && ./vif1_token_test
#include "runtime/ps2_vif1_reader.h"

#include <cstdio>
#include <cstring>
#include <random>
#include <vector>

Vif1StreamStats g_vif1StreamStats;
RenderCounters g_renderCounters;
Vif1TokenRing g_vif1Tokens;
bool g_vif1DryDecode = false;

namespace
{
    std::vector<PS2Memory::Vif1Piece> s_chainPieces;
    const Vif1Piece *expandChain(void *, const Vif1Token &token, size_t &count)
    {
        if (token.kind != Vif1TokenKind::Chain)
        {
            count = 0;
            return nullptr;
        }
        count = s_chainPieces.size();
        return s_chainPieces.data();
    }
    Vif1RecordHooks makeHooks()
    {
        Vif1RecordHooks hooks;
        hooks.expand = &expandChain;
        return hooks;
    }
    const Vif1RecordHooks s_hooks = makeHooks();
}

const Vif1RecordHooks &PS2Memory::vif1RecordHooks() { return s_hooks; }

namespace
{
    int failures = 0;
    void check(bool ok, const char *what, uint32_t seed, uint32_t step, uint32_t a = 0, uint32_t b = 0)
    {
        if (!ok && ++failures <= 20)
            std::printf("FAIL %s (seed %u, step %u: %u vs %u)\n", what, seed, step, a, b);
    }

    void cut(std::mt19937 &rng, const uint8_t *data, uint32_t bytes, std::vector<PS2Memory::Vif1Piece> &out)
    {
        for (uint32_t at = 0; at < bytes;)
        {
            // Whole words: the walk's pieces are qwords and tag halves.
            uint32_t len = 4u * (1u + rng() % 16u);
            if (len > bytes - at)
                len = bytes - at;
            out.emplace_back(data + at, len);
            at += len;
        }
    }

    void run(uint32_t seed, bool boundary)
    {
        std::mt19937 rng(seed);
        const uint32_t listBytes = 16u * (1u + rng() % 64u), chainBytes = 16u * (1u + rng() % 32u);
        const uint32_t split = 16u * (rng() % (listBytes / 16u + 1u)); // where the token sits
        std::vector<uint8_t> list(listBytes), chain(chainBytes);
        for (uint8_t &b : list)
            b = static_cast<uint8_t>(rng());
        for (uint8_t &b : chain)
            b = static_cast<uint8_t>(rng());
        std::vector<uint8_t> joined(list.begin(), list.begin() + split);
        joined.insert(joined.end(), chain.begin(), chain.end());
        joined.insert(joined.end(), list.begin() + split, list.end());

        g_vif1Tokens.reset();
        Vif1TokenEntry *entry = g_vif1Tokens.takeChain();
        entry->token = Vif1Token{};
        entry->token.kind = Vif1TokenKind::Chain;
        s_chainPieces.clear();
        cut(rng, chain.data(), chainBytes, s_chainPieces);
        std::vector<PS2Memory::Vif1Piece> pieces;
        cut(rng, list.data(), split, pieces);
        pieces.emplace_back(entry->piece, 16u);
        cut(rng, list.data() + split, listBytes - split, pieces);

        Vif1PieceReader piece(pieces.data(), pieces.size(), listBytes + 16u);
        Vif1SpanReader span(joined.data(), static_cast<uint32_t>(joined.size()));
        check(piece.leftExpanded() == span.left(), "leftExpanded at start", seed, 0, piece.leftExpanded(), span.left());
        check(piece.has(span.left()) && !piece.has(span.left() + 1u), "has at start", seed, 0);
        check(g_vif1Tokens.entryOf(entry->piece + 4) == nullptr, "inside a token piece: no token", seed, 0);
        const uint32_t midBefore = g_renderCounters.tokMid;
        bool handed = false;
        uint8_t bufA[64], bufB[64];
        for (uint32_t step = 0; step < 100000u && span.left() != 0u; ++step)
        {
            if (boundary)
            {
                // Words only, the token handed over at its boundary.
                if (const Vif1TokenEntry *got = piece.tokenAhead())
                {
                    check(got == entry && !handed, "tokenAhead", seed, step);
                    handed = true;
                    check(piece.expandToken(got), "expandToken", seed, step);
                    check(piece.expanding() || chainBytes == 0u, "expanding", seed, step);
                    continue;
                }
                uint32_t a = 0, b = 0;
                const bool okA = piece.word(a), okB = span.word(b);
                check(okA && okB && a == b, "word", seed, step, a, b);
                if (!okA || !okB)
                    break;
            }
            else
            {
                const uint32_t n = std::min<uint32_t>(span.left(), 1u + rng() % 64u);
                check(piece.has(n), "has", seed, step, n);
                if (rng() % 2u)
                {
                    const uint8_t *a = piece.take(n, bufA), *b = span.take(n, bufB);
                    check(std::memcmp(a, b, n) == 0, "take", seed, step, n);
                }
                else
                {
                    piece.read(bufA, n);
                    span.read(bufB, n);
                    check(std::memcmp(bufA, bufB, n) == 0, "read", seed, step, n);
                }
            }
        }
        check(span.left() == 0u && piece.left() == 0u, "both at the end", seed, 0, piece.left(), span.left());
        if (boundary)
            check(handed, "token handed over", seed, 0);
        else
            check(g_renderCounters.tokMid == midBefore + 1u, "tokmid counted", seed, 0);
        check(g_renderCounters.tokMidBad == 0u, "tokmid bad", seed, 0, g_renderCounters.tokMidBad);
    }
}

int main()
{
    for (uint32_t seed = 1; seed <= 300u; ++seed)
    {
        run(seed, true);
        run(seed, false);
    }
    // A list token: nothing to expand; read as four NOPs.
    {
        g_vif1Tokens.reset();
        Vif1TokenEntry *entry = g_vif1Tokens.take();
        entry->token = Vif1Token{};
        entry->token.kind = Vif1TokenKind::List;
        const PS2Memory::Vif1Piece one(entry->piece, 16u);
        Vif1PieceReader piece(&one, 1, 16u);
        const Vif1TokenEntry *got = piece.tokenAhead();
        check(got == entry, "list token handed over", 0, 1);
        check(got && !piece.expandToken(got), "list token: no expansion", 0, 2);
        piece.readTokenAsNops(got);
        uint32_t w = 1, nops = 0;
        while (piece.word(w))
            nops += w == 0u ? 1u : 0u;
        check(nops == 4u, "four NOPs", 0, 3, nops);
    }
    if (failures == 0)
        std::printf("vif1_token_test: ok\n");
    else
        std::printf("vif1_token_test: %d failures\n", failures);
    return failures == 0 ? 0 : 1;
}
