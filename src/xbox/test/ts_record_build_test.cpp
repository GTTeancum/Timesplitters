// Host test of the records engine's descriptor builder (project/game/
// ts_record_build.cpp, ts_record_desc.h; src/xbox/PUSH-BC-PLAN.md 3.1):
// random static chains - a VIF stream of UNPACKs, STCYCL/OFFSET/BASE/ITOP,
// STMASK/STROW/STCOL, MSCALs and NOPs, cut at qword boundaries into CNT
// payloads and REF'd blocks scattered over a 32 MB RAM image, ending in a
// RET - must come back as
//   pieces whose bytes joined are the stream (the walk's, merged where
//     contiguous);
//   ops: every command R1 runs, in order, each with where its data lies,
//     NOPs and FLUSHes left out; finalCode the stream's last VIFcode;
//   replayable unless a command's data was split between two blocks or a
//     command R1 does not run (DIRECT, MPG, MSCNT, MSKPATH3) is in it;
//   refused (size 0) for an IRQ bit, a CALL, an END or REFE, or a payload
//     outside RAM.
//
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I source/PS2Recomp/ps2xRuntime/include \
//       -I source/PS2Recomp/ps2xRuntime/src/lib -I source/PS2Recomp/ps2xIOP/include -I project/game \
//       src/xbox/test/ts_record_build_test.cpp project/game/ts_record_build.cpp -o ts_record_build_test
#include "ts_record_desc.h"
#include "runtime/ps2_memory.h"

#include <cstdio>
#include <cstring>
#include <random>
#include <vector>

namespace
{
    int failures = 0;
    void check(bool ok, const char *what, uint32_t seed, uint32_t a = 0, uint32_t b = 0)
    {
        if (!ok && ++failures <= 30)
            std::printf("FAIL %s (seed %u: %u vs %u)\n", what, seed, a, b);
    }

    struct Command
    {
        uint32_t offset; // the VIFcode's offset in the stream
        uint32_t cmd;
        uint32_t dataBytes;
        bool op;         // R1 runs it
        bool replayable; // R1 can run a stream holding it
    };

    // A random VIF stream (whole qwords, NOPs at the end).
    void makeStream(std::mt19937 &rng, std::vector<uint8_t> &stream, std::vector<Command> &commands, bool &cycleFirst)
    {
        auto word = [&](uint32_t w)
        {
            const size_t at = stream.size();
            stream.resize(at + 4u);
            std::memcpy(&stream[at], &w, 4u);
        };
        const uint32_t count = 1u + rng() % 24u;
        bool cycleSeen = false;
        cycleFirst = false;
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t at = static_cast<uint32_t>(stream.size());
            const uint32_t kind = rng() % 10u;
            if (kind <= 3u)
            {
                // UNPACK V4-32 / V3-32 / V4-8 / S-32, CL = WL.
                static const uint8_t formats[4] = {0x6C, 0x68, 0x6E, 0x60};
                const uint8_t opcode = formats[rng() % 4u];
                const uint32_t num = 1u + rng() % 16u;
                const uint32_t vn = (opcode >> 2) & 3u, vl = opcode & 3u;
                const uint32_t bits = (vn + 1u) * (vl == 0u ? 32u : vl == 1u ? 16u : 8u);
                const uint32_t bytes = (num * (bits / 8u) + 3u) & ~3u;
                const uint32_t cmd = uint32_t(opcode) << 24 | num << 16 | (rng() % 2u ? 0x8000u : 0u) | (rng() % 200u);
                if (!cycleSeen)
                    cycleFirst = true;
                word(cmd);
                for (uint32_t b = 0; b < bytes; b += 4u)
                    word(rng());
                commands.push_back(Command{at, cmd, bytes, true, true});
            }
            else if (kind == 4u)
            {
                const uint32_t cmd = 0x01000000u | 0x0404u; // STCYCL CL=WL=4
                cycleSeen = true;
                word(cmd);
                commands.push_back(Command{at, cmd, 0u, true, true});
            }
            else if (kind == 5u)
            {
                static const uint8_t immediates[3] = {0x02, 0x03, 0x04};
                const uint32_t cmd = uint32_t(immediates[rng() % 3u]) << 24 | (rng() & 0x3FFu);
                word(cmd);
                commands.push_back(Command{at, cmd, 0u, true, true});
            }
            else if (kind == 6u)
            {
                static const uint8_t st[3] = {0x20, 0x30, 0x31};
                const uint8_t opcode = st[rng() % 3u];
                const uint32_t bytes = opcode == 0x20 ? 4u : 16u;
                const uint32_t cmd = uint32_t(opcode) << 24;
                word(cmd);
                for (uint32_t b = 0; b < bytes; b += 4u)
                    word(rng());
                commands.push_back(Command{at, cmd, bytes, true, true});
            }
            else if (kind == 7u)
            {
                const uint32_t cmd = 0x14000000u | (rng() & 0x7FFu); // MSCAL
                word(cmd);
                commands.push_back(Command{at, cmd, 0u, true, true});
            }
            else if (kind == 8u)
            {
                const uint32_t cmd = (rng() % 2u ? 0x11000000u : 0u) | (rng() % 2u ? 0x80000000u : 0u); // FLUSH / NOP
                word(cmd);
                commands.push_back(Command{at, cmd, 0u, false, true});
            }
            else
            {
                // Rarely, one R1 does not run: MSCNT.
                if (rng() % 4u == 0u)
                {
                    const uint32_t cmd = 0x17000000u;
                    word(cmd);
                    commands.push_back(Command{at, cmd, 0u, false, false});
                }
            }
        }
        while (stream.size() % 16u != 0u || stream.empty())
        {
            commands.push_back(Command{static_cast<uint32_t>(stream.size()), 0u, 0u, false, true});
            word(0u);
        }
    }

    void run(uint32_t seed, std::vector<uint8_t> &ram)
    {
        std::mt19937 rng(seed);
        std::vector<uint8_t> stream;
        std::vector<Command> commands;
        bool cycleFirst = false;
        makeStream(rng, stream, commands, cycleFirst);

        // Cut into qword blocks; each a CNT payload or a REF'd block far away.
        const uint32_t chain = 0x100000u + 16u * (rng() % 4096u);
        uint32_t tagAt = chain;
        uint32_t refAt = 0x800000u + 16u * (rng() % 4096u);
        std::vector<std::pair<uint32_t, uint32_t>> blocks; // stream offset, its address
        const uint32_t refuse = rng() % 12u;               // 0: an IRQ bit, 1: an END, 2: a REF outside RAM
        bool refused = false;
        for (uint32_t at = 0; at < stream.size();)
        {
            uint32_t qwc = 1u + rng() % 6u;
            if (qwc * 16u > stream.size() - at)
                qwc = static_cast<uint32_t>((stream.size() - at) / 16u);
            uint32_t lower[2];
            if (rng() % 2u)
            {
                lower[0] = 0x10000000u | qwc; // CNT
                lower[1] = 0u;
                std::memcpy(&ram[tagAt + 16u], &stream[at], qwc * 16u);
                blocks.emplace_back(at, tagAt + 16u);
                std::memcpy(&ram[tagAt], lower, sizeof(lower));
                tagAt += 16u + qwc * 16u;
            }
            else
            {
                lower[0] = 0x30000000u | qwc; // REF
                lower[1] = refAt;
                std::memcpy(&ram[refAt], &stream[at], qwc * 16u);
                blocks.emplace_back(at, refAt);
                refAt += qwc * 16u + 16u * (1u + rng() % 4u); // never contiguous
                if (refuse == 2u && at == 0u)
                {
                    lower[1] = PS2_RAM_SIZE + 0x100u;
                    refused = true;
                }
                std::memcpy(&ram[tagAt], lower, sizeof(lower));
                tagAt += 16u;
            }
            if (refuse == 0u && at == 0u)
            {
                ram[tagAt - 16u - (lower[0] >> 28 == 1u ? qwc * 16u : 0u) + 3u] |= 0x80u; // the first tag's IRQ bit
                refused = true;
            }
            at += qwc * 16u;
        }
        const uint32_t end[2] = {refuse == 1u ? 0x70000000u : 0x60000000u, 0u}; // END or RET
        refused = refused || refuse == 1u;
        std::memcpy(&ram[tagAt], end, sizeof(end));

        alignas(8) static uint8_t out[ts_record::kMaxBuildBytes];
        const uint32_t bytes = ts_record::buildDescriptor(ram.data(), chain, 1u, out);
        if (refused)
        {
            check(bytes == 0u, "refused", seed, bytes);
            return;
        }
        check(bytes != 0u, "built", seed);
        if (bytes == 0u)
            return;
        const ts_record::RecDesc &desc = *reinterpret_cast<const ts_record::RecDesc *>(out);
        check(desc.bytes == bytes && desc.chain == chain, "header", seed, desc.bytes, bytes);
        // The pieces: the stream, joined.
        std::vector<uint8_t> joined;
        for (uint32_t i = 0; i < desc.pieceCount; ++i)
            joined.insert(joined.end(), desc.pieces()[i].first, desc.pieces()[i].first + desc.pieces()[i].second);
        check(joined == stream && desc.pieceBytes == stream.size(), "pieces", seed, desc.pieceBytes,
              static_cast<uint32_t>(stream.size()));
        // Where a stream offset lies, and whether [offset, offset+n) is in one block.
        auto addressOf = [&](uint32_t offset, uint32_t n, bool &oneBlock) -> const uint8_t *
        {
            for (size_t b = 0; b < blocks.size(); ++b)
            {
                const uint32_t start = blocks[b].first;
                const uint32_t stop = b + 1u < blocks.size() ? blocks[b + 1u].first : static_cast<uint32_t>(stream.size());
                if (offset >= start && offset < stop)
                {
                    oneBlock = offset + n <= stop;
                    return ram.data() + blocks[b].second + (offset - start);
                }
            }
            oneBlock = false;
            return nullptr;
        };
        bool replayable = true;
        std::vector<ts_record::RecOp> ops;
        for (const Command &c : commands)
        {
            replayable = replayable && c.replayable;
            if (!c.op)
                continue;
            bool oneBlock = true;
            const uint8_t *data = c.dataBytes ? addressOf(c.offset + 4u, c.dataBytes, oneBlock) : nullptr;
            replayable = replayable && oneBlock;
            ops.push_back(ts_record::RecOp{c.cmd, data});
        }
        const bool gotReplayable = (desc.flags & ts_record::kReplayable) != 0u;
        check(gotReplayable == replayable, "replayable", seed, gotReplayable, replayable);
        if (!replayable || !gotReplayable)
        {
            check(desc.opCount == 0u, "no ops kept", seed, desc.opCount);
            return;
        }
        check(desc.opCount == ops.size(), "op count", seed, desc.opCount, static_cast<uint32_t>(ops.size()));
        for (uint32_t i = 0; i < desc.opCount && i < ops.size(); ++i)
        {
            check(desc.ops()[i].cmd == ops[i].cmd, "op cmd", seed, desc.ops()[i].cmd, ops[i].cmd);
            check(desc.ops()[i].data == ops[i].data, "op data", seed, i);
        }
        check(desc.finalCode == commands.back().cmd, "finalCode", seed, desc.finalCode, commands.back().cmd);
        check(((desc.flags & ts_record::kAssumesCycleGe) != 0u) == cycleFirst, "cycle assumption", seed);
        bool intSeen = false;
        for (const Command &c : commands)
            intSeen = intSeen || (c.cmd & 0x80000000u) != 0u;
        check(((desc.flags & ts_record::kIntSeen) != 0u) == intSeen, "INT", seed);
    }
}

int main()
{
    std::vector<uint8_t> ram(PS2_RAM_SIZE);
    for (uint32_t seed = 1; seed <= 2000u; ++seed)
        run(seed, ram);
    if (failures == 0)
        std::printf("ts_record_build_test: ok\n");
    else
        std::printf("ts_record_build_test: %d failures\n", failures);
    return failures == 0 ? 0 : 1;
}
