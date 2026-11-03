// Deferred: compile this standalone probe only after the source-only hold.
// Tests the actual production header, not the Python algorithm model.
#include "xbox_vif_write_plan.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <vector>

#define CHECK(x) do { if (!(x)) { std::cerr << "line " << __LINE__ << ": " #x "\n"; return false; } } while (0)
namespace
{
struct Op
{
    uint32_t code = 0;
    uint16_t vectors = 0;
    uint8_t opcode = 0, format = 0, cl = 0, wl = 0;
};
Op control(uint32_t opcode, uint32_t imm = 0)
{
    Op op; op.code = (opcode << 24u) | imm; op.opcode = uint8_t(opcode); return op;
}
Op upload(uint32_t format, uint32_t row, uint32_t count, uint32_t cycle = 0x101u, bool relative = false)
{
    Op op = control(0x60u | format, row | (relative ? 0x8000u : 0u));
    op.code |= (count & 255u) << 16u;
    op.format = uint8_t(format); op.vectors = uint16_t(count);
    op.cl = uint8_t(cycle & 255u); if (!op.cl) op.cl = 1u;
    op.wl = uint8_t((cycle >> 8u) & 255u); if (!op.wl) op.wl = 1u;
    return op;
}
using Image = std::array<uint32_t, 4096>;
Image execute(const std::vector<Op> &ops, uint32_t base, uint32_t tops, uint64_t mask,
              uint64_t *lastWriters = nullptr)
{
    Image image{};
    std::array<int, 4096> owner; owner.fill(-1);
    for (uint32_t cell = 0; cell < image.size(); ++cell) image[cell] = cell;
    base &= 1023u; tops &= 1023u;
    for (uint32_t i = 0; i < ops.size(); ++i)
    {
        const Op &op = ops[i];
        const uint32_t imm = op.code & 65535u;
        if (!op.vectors)
        {
            if (op.opcode == 3u) base = imm & 1023u;
            if (op.opcode == 2u) tops = base;
            continue;
        }
        if (!(mask & (uint64_t(1) << i))) continue;
        const uint32_t start = ((imm & 1023u) + ((imm & 0x8000u) ? tops : 0u)) & 1023u;
        const uint32_t lanes = op.format < 4u ? 4u : (op.format >> 2u) + 1u;
        for (uint32_t v = 0; v < op.vectors; ++v)
        {
            // Independent, closed-form address computation rather than
            // the production proof's incremental cycle/row walk.
            const uint32_t row = (start + (v / op.wl) * op.cl + v % op.wl) % 1024u;
            for (uint32_t lane = 0; lane < lanes; ++lane)
            {
                image[row * 4u + lane] = 100000u + i * 1024u + v * 4u + lane;
                owner[row * 4u + lane] = int(i);
            }
        }
    }
    if (lastWriters)
    {
        *lastWriters = 0;
        for (const int op : owner) if (op >= 0) *lastWriters |= uint64_t(1) << op;
    }
    return image;
}
bool verify(const std::vector<Op> &ops, uint32_t base = 0u, uint32_t tops = 0u)
{
    const auto result = xbox_vif_write_plan::analyze(ops.data(), uint32_t(ops.size()), base, tops, 0x101u, 0u);
    uint64_t expected;
    const auto full = execute(ops, base, tops, ~uint64_t(0), &expected);
    CHECK(result.keep == expected);
    CHECK(execute(ops, base, tops, result.keep) == full);
    uint32_t omitted = 0, vectors = 0, bytes = 0;
    for (uint32_t i = 0; i < ops.size(); ++i)
        if (ops[i].vectors && !(expected & (uint64_t(1) << i)))
        {
            ++omitted; vectors += ops[i].vectors;
            bytes += ops[i].vectors * (ops[i].format < 4u ? 4u : (ops[i].format >> 2u) + 1u) * 4u;
        }
    CHECK(result.omittedUploads == omitted && result.omittedVectors == vectors && result.omittedStoreBytes == bytes);
    return true;
}
bool cases()
{
    constexpr uint32_t formats[]{0u,1u,2u,4u,5u,6u,8u,9u,10u,12u,13u,14u,15u};
    for (uint32_t a : formats) for (uint32_t b : formats)
        CHECK(verify({upload(a, 99u, 7u), upload(b, 99u, 7u)}));
    CHECK(verify({upload(12u, 99u, 4u), upload(12u, 99u, 2u), upload(12u, 101u, 2u)}));
    for (uint32_t cycle : {0u,0x101u,0x0204u,0x0180u,0x01ffu,0xffffu})
        for (uint32_t row : {0u,900u,1023u})
            CHECK(verify({control(1u,cycle),upload(12u,row,256u,cycle),upload(15u,row,256u,cycle)}));
    for (uint32_t top : {0u,996u,1000u,1023u})
        CHECK(verify({upload(12u,4u,3u,0x101u,true),control(3u,1000u),control(2u,1u),
                      upload(12u,4u,3u,0x101u,true)},33u,top));
    std::vector<Op> upper(63u, control(0u)); upper.push_back(upload(12u,99u,1u));
    CHECK(verify(upper));
    uint32_t random = 0x58424f58u;
    auto next = [&]() { random = random * 1664525u + 1013904223u; return random; };
    for (uint32_t sample = 0; sample < 4096u; ++sample)
    {
        std::vector<Op> ops;
        const uint32_t band = next() & 1023u;
        uint32_t cycle = 0x101u;
        const uint32_t total = 8u + next() % 48u;
        while (ops.size() < total)
        {
            switch (next() % 8u)
            {
            case 0: cycle = (next() & 1u) ? 0x0204u : 0x101u; ops.push_back(control(1u,cycle)); break;
            case 1: ops.push_back(control(3u,next() & 1023u)); break;
            case 2: ops.push_back(control(2u,next() & 1023u)); break;
            default:
            {
                const uint32_t fmt = formats[next() % 13u];
                const uint32_t row = (band + (next() & 7u)) & 1023u;
                const uint32_t count = 1u + next() % 64u;
                const bool relative = (next() & 1u) != 0u;
                const Op op = upload(fmt,row,count,cycle,relative);
                ops.push_back(op);
                if (ops.size() < total && (next() & 3u) == 0u) ops.push_back(op);
                break;
            }
            }
        }
        const uint32_t base = next() & 1023u, top = next() & 1023u;
        CHECK(verify(ops,base,top));
    }
    return true;
}
bool invalid()
{
    const Op good = upload(12u,99u,7u);
    std::vector<Op> bads{control(0x14u),control(0x50u),upload(3u,99u,7u)};
    Op bad = good; bad.vectors = 6u; bads.push_back(bad);
    bad = good; bad.opcode = 0; bads.push_back(bad);
    bad = good; bad.wl = 0; bads.push_back(bad);
    for (const Op &wrong : bads)
    {
        const Op ops[]{good,wrong,good};
        const auto result = xbox_vif_write_plan::analyze(ops,3u,0u,0u,0x101u,0u);
        CHECK(result.keep == ~uint64_t(0) && result.omittedUploads == 0u);
    }
    for (uint32_t mode : {1u,2u,3u})
        CHECK(xbox_vif_write_plan::analyze(&good,1u,0u,0u,0x101u,mode).keep == ~uint64_t(0));
    CHECK(xbox_vif_write_plan::analyze(&good,65u,0u,0u,0x101u,0u).keep == ~uint64_t(0));
    std::array<uint8_t,64> memory{};
    CHECK(xbox_vif_write_plan::disjoint(memory.data(),16u,memory.data()+16u,16u));
    CHECK(!xbox_vif_write_plan::disjoint(memory.data(),17u,memory.data()+16u,16u));
    CHECK(!xbox_vif_write_plan::disjoint(memory.data()+16u,16u,memory.data(),17u));
    return true;
}
}
int main()
{
    if (!cases() || !invalid()) return 1;
    std::cout << "VIF final-write native probe passed\n";
    return 0;
}
