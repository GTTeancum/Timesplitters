// Host harness for TS_NATIVE_LOGIC (test/test_native_logic.py builds it).
//
// Each function under test is linked twice: the ordinary Xbox copy
// (patch_generated.py) and the register-promoted one (--logic --promote,
// renamed prom_<name>). Both run from the same random guest state under a
// small dispatcher like the EE scheduler's: a due checkpoint or a callee
// that leaves elsewhere unwinds to it, and it resumes the function at its
// pc from the table, exactly as the game does. Every call to anything else
// goes to one deterministic mock callee that hashes the whole context it is
// handed (so a register the promoted code failed to store shows), clobbers
// the caller-saved registers, writes guest memory and sometimes yields.
// The leaf natives with inline copies are the real translated originals in
// the table, and published as the natives: the promoted copy runs its inline
// leaf, the original calls the translated leaf; their results must agree.
// After every dispatcher step the context is hashed; at the end the context
// and all of guest memory are compared.
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_direct_call_xbox.h"
#include "xbox_logic.h"

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

// The harness's stand-in for the scheduler (PS2Runtime befriends it).
class EeScheduler
{
public:
    static void attach(PS2Runtime *runtime, EeCheckpointClock *clock)
    {
        runtime->m_eeCheckpointClock = clock;
        runtime->m_stopRequested.store(false);
    }
};

namespace
{
    constexpr uint32_t kWindow = 0x00100000u, kWindowBytes = 0x00100000u;
    constexpr uint32_t kReturn = 0x00ABCDE0u, kYield = 0x00ABCE00u;

    uint8_t *g_ram = nullptr;
    uint8_t *g_pristine = nullptr;
    EeCheckpointClock g_clock;
    alignas(64) unsigned char g_runtimeStorage[sizeof(PS2Runtime)];
    PS2Runtime *g_runtime = reinterpret_cast<PS2Runtime *>(g_runtimeStorage);

    struct Rng
    {
        uint64_t s;
        uint32_t next()
        {
            s ^= s << 13;
            s ^= s >> 7;
            s ^= s << 17;
            return static_cast<uint32_t>(s >> 11);
        }
    };

    // The run's deterministic state (identical in both runs).
    uint64_t g_checkpoints = 0, g_budget = 0, g_calls = 0, g_seed = 0;
    bool g_stop = false;
    bool g_inLeaf = false; // the leaf natives run no checkpoints of their own
    uint32_t g_yieldResume = 0;
    std::vector<uint64_t> g_trace;

    uint64_t mix(uint64_t h, uint64_t v)
    {
        h ^= v + 0x9E3779B97F4A7C15ull + (h << 6) + (h >> 2);
        return h * 0xBF58476D1CE4E5B9ull;
    }

    uint64_t hashContext(const R5900Context *c)
    {
        uint64_t h = 1469598103934665603ull;
        const uint8_t *p = reinterpret_cast<const uint8_t *>(c);
        for (size_t i = 0; i + 8 <= sizeof(R5900Context); i += 8)
        {
            if (i <= offsetof(R5900Context, branch_pc) && offsetof(R5900Context, branch_pc) < i + 8)
                continue; // the promoted code stores branch_pc only where an exception can read it
            if (i <= offsetof(R5900Context, insn_count) && offsetof(R5900Context, insn_count) < i + 8)
                continue;
            uint64_t v;
            std::memcpy(&v, p + i, 8);
            h = mix(h, v);
        }
        return h;
    }

    uint32_t floatBits(Rng &rng)
    {
        const uint32_t pick = rng.next() % 8u;
        float f;
        if (pick == 0)
            f = 0.0f;
        else if (pick == 1)
            f = static_cast<float>(rng.next() % 16u);
        else
            f = (static_cast<float>(rng.next() % 2000001u) - 1000000.0f) / 1000.0f;
        uint32_t bits;
        std::memcpy(&bits, &f, 4);
        return bits;
    }

    uint32_t guestWord(Rng &rng)
    {
        const uint32_t pick = rng.next() % 10u;
        if (pick < 4)
            return kWindow + ((rng.next() % (kWindowBytes - 0x400u)) & ~15u); // a pointer into the window
        if (pick < 7)
            return rng.next() % 64u;
        if (pick < 9)
            return floatBits(rng);
        return rng.next();
    }

    void setGpr(R5900Context *c, int reg, uint64_t low, uint64_t high)
    {
        c->r[reg] = _mm_set_epi64x(static_cast<long long>(high), static_cast<long long>(low));
    }

    uint64_t sext(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }

    void randomContext(Rng &rng, R5900Context *c)
    {
        std::memset(c, 0, sizeof(*c));
        for (int reg = 1; reg < 32; ++reg)
            setGpr(c, reg, sext(guestWord(rng)), (rng.next() & 3u) ? 0u : (uint64_t)rng.next() << 32 | rng.next());
        setGpr(c, 29, kWindow + kWindowBytes - 0x8000u, 0);     // sp
        setGpr(c, 28, kWindow + 0x80000u, 0);                   // gp
        setGpr(c, 31, kReturn, 0);                              // ra
        for (int f = 0; f < 32; ++f)
        {
            const uint32_t bits = floatBits(rng);
            std::memcpy(&c->f[f], &bits, 4);
        }
        for (int v = 1; v < 32; ++v)
            c->vu0_vf[v] = _mm_set_ps(1.0f + (rng.next() % 7u), (float)(rng.next() % 9u), -(float)(rng.next() % 5u), 0.5f);
        c->vu0_vf[0] = _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f);
        c->vu0_acc = _mm_set_ps(2.0f, 3.0f, 4.0f, 5.0f);
        c->fcr31 = rng.next() & 0x00800000u;
        c->hi = sext(rng.next());
        c->lo = sext(rng.next());
    }
}

// ---- What the generated code links against

const uint32_t g_ps2RecompiledFunctionTableBase = 0x100000u;
const uint32_t g_ps2RecompiledFunctionTableEnd = 0x400000u;
const uint32_t g_ps2RecompiledFunctionTableSlotCount = TEST_SLOT_COUNT;
const uint32_t g_ps2RecompiledFunctionAddresses[TEST_SLOT_COUNT] = {};
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[TEST_SLOT_COUNT];

bool PS2Runtime::eeCheckpointDueSlow(uint32_t elapsed) noexcept
{
    (void)elapsed;
    if (g_inLeaf)
        return false;
    ++g_checkpoints;
    if (g_checkpoints >= g_budget)
    {
        g_stop = true;
        return true;
    }
    Rng rng{mix(g_seed, g_checkpoints) | 1u};
    return rng.next() % 11u == 0u;
}

// The mock callee: everything the function calls that is not a tested leaf.
void mockCallee(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)runtime;
    const uint32_t target = ctx->pc;
    ++g_calls;
    g_trace.push_back(mix(0x4341'4C4Cull ^ target, hashContext(ctx)));
    Rng rng{mix(mix(g_seed, g_calls), target) | 1u};
    for (int reg : {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25})
        if (rng.next() & 1u)
            setGpr(ctx, reg, sext(guestWord(rng)), (rng.next() & 7u) ? ctx->r[reg][1] : (uint64_t)rng.next());
    for (int f = 0; f < 20; ++f)
        if (rng.next() & 1u)
        {
            const uint32_t bits = floatBits(rng);
            std::memcpy(&ctx->f[f], &bits, 4);
        }
    if (rng.next() & 1u)
        ctx->fcr31 ^= 0x00800000u;
    ctx->hi = sext(rng.next());
    ctx->lo = sext(rng.next());
    for (int i = 0; i < 2; ++i)
    {
        const uint32_t at = kWindow + ((rng.next() % kWindowBytes) & ~3u);
        const uint32_t value = guestWord(rng);
        std::memcpy(rdram + at, &value, 4);
    }
    const uint32_t ra = static_cast<uint32_t>(ctx->r[31][0]);
    if (rng.next() % 9u == 0u)
    {
        g_yieldResume = ra; // a thread switch: the dispatcher resumes at ra later
        ctx->pc = kYield;
    }
    else
    {
        ctx->pc = ra;
    }
}

bool PS2Runtime::dispatchGuestBranch(uint8_t *rdram, R5900Context *ctx, uint32_t targetPc, uint32_t sourcePc,
                                     uint32_t fallthroughPc, GuestBranchKind kind, const char *debugName)
{
    (void)sourcePc;
    (void)debugName;
    ctx->pc = targetPc;
    if (eeCheckpointDue(8u))
        return false;
    if (kind != GuestBranchKind::DirectCall && kind != GuestBranchKind::IndirectCall)
        return false;
    mockCallee(rdram, ctx, this);
    if (ctx->pc == 0u)
        return false;
    return ctx->pc == fallthroughPc;
}

// Traps (addi overflow, break): the whole context they are handed is traced.
void PS2Runtime::SignalException(R5900Context *ctx, PS2Exception exception)
{
    g_trace.push_back(mix(0x54524150ull ^ static_cast<uint32_t>(exception), hashContext(ctx)));
}

void PS2Runtime::handleBreak(uint8_t *, R5900Context *ctx)
{
    g_trace.push_back(mix(0x42524B00ull, hashContext(ctx)));
}

bool __attribute__((fastcall)) ps2xDirectCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                                              const PS2Runtime::RecompiledFunction *entry, uint32_t target,
                                              uint32_t resume)
{
    PS2X_CALL_ENTRY(*entry, target, resume, return false);
    return true;
}

// Guest accesses outside the first 32 MB: masked into RAM, as the real slow
// path does for every non-I/O address; the pc each one sees is traced.
// Not inside a leaf: there the native (and its inline copy) leaves pc at the
// leaf's entry where the translated leaf stores its own instruction pcs, a
// difference only diagnostics could see.
bool inLeafCode(uint32_t pc);
#define SLOW_TRACE(addr)                                                         do                                                                           {                                                                                if (!g_inLeaf && !inLeafCode(ctx->pc))                                           g_trace.push_back(mix(0x534C4F57ull ^ (addr), ctx->pc));             } while (0)
template <typename T>
static T slowLoad(const uint8_t *rdram, uint32_t addr)
{
    T value;
    uint8_t *d = reinterpret_cast<uint8_t *>(&value);
    for (uint32_t i = 0; i < sizeof(T); ++i)
        d[i] = rdram[(addr + i) & PS2_RAM_MASK];
    return value;
}
template <typename T>
static void slowStore(uint8_t *rdram, uint32_t addr, T value)
{
    const uint8_t *s = reinterpret_cast<const uint8_t *>(&value);
    for (uint32_t i = 0; i < sizeof(T); ++i)
        rdram[(addr + i) & PS2_RAM_MASK] = s[i];
}
PS2_XBOX_GUEST_SLOW uint16_t Ps2XboxFastRead16Slow(uint32_t addr, const uint8_t *rdram) { return slowLoad<uint16_t>(rdram, addr); }
PS2_XBOX_GUEST_SLOW uint32_t Ps2XboxFastRead32Slow(uint32_t addr, const uint8_t *rdram) { return slowLoad<uint32_t>(rdram, addr); }
PS2_XBOX_GUEST_SLOW uint64_t Ps2XboxFastRead64Slow(uint32_t addr, const uint8_t *rdram) { return slowLoad<uint64_t>(rdram, addr); }
PS2_XBOX_GUEST_SLOW void Ps2XboxFastRead128Slow(uint32_t addr, const uint8_t *rdram, void *out)
{
    const __m128i v = slowLoad<__m128i>(rdram, addr);
    std::memcpy(out, &v, 16);
}
PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite16Slow(uint32_t addr, uint8_t *rdram, uint16_t value) { slowStore(rdram, addr, value); }
PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite32Slow(uint32_t addr, uint8_t *rdram, uint32_t value) { slowStore(rdram, addr, value); }
PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite64Slow(uint32_t addr, uint8_t *rdram, uint64_t value) { slowStore(rdram, addr, value); }
PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite128Slow(uint32_t addr, uint8_t *rdram, const void *value)
{
    __m128i v;
    std::memcpy(&v, value, 16);
    slowStore(rdram, addr, v);
}
PS2_XBOX_GUEST_SLOW uint8_t Ps2XboxRead8Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
{
    SLOW_TRACE(addr);
    return rdram[addr & PS2_RAM_MASK];
}
PS2_XBOX_GUEST_SLOW uint16_t Ps2XboxRead16Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
{
    SLOW_TRACE(addr);
    return slowLoad<uint16_t>(rdram, addr);
}
PS2_XBOX_GUEST_SLOW uint32_t Ps2XboxRead32Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
{
    SLOW_TRACE(addr);
    return slowLoad<uint32_t>(rdram, addr);
}
PS2_XBOX_GUEST_SLOW uint64_t Ps2XboxRead64Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
{
    SLOW_TRACE(addr);
    return slowLoad<uint64_t>(rdram, addr);
}
PS2_XBOX_GUEST_SLOW void Ps2XboxRead128Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *, void *out)
{
    SLOW_TRACE(addr);
    const __m128i v = slowLoad<__m128i>(rdram, addr);
    std::memcpy(out, &v, 16);
}
PS2_XBOX_GUEST_SLOW void Ps2XboxWrite8Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *, uint8_t value)
{
    SLOW_TRACE(addr);
    rdram[addr & PS2_RAM_MASK] = value;
}
PS2_XBOX_GUEST_SLOW void Ps2XboxWrite16Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *, uint16_t value)
{
    SLOW_TRACE(addr);
    slowStore(rdram, addr, value);
}
PS2_XBOX_GUEST_SLOW void Ps2XboxWrite32Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *, uint32_t value)
{
    SLOW_TRACE(addr);
    slowStore(rdram, addr, value);
}
PS2_XBOX_GUEST_SLOW void Ps2XboxWrite64Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *, uint64_t value)
{
    SLOW_TRACE(addr);
    slowStore(rdram, addr, value);
}
PS2_XBOX_GUEST_SLOW void Ps2XboxWrite128Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *, const void *value)
{
    SLOW_TRACE(addr);
    __m128i v;
    std::memcpy(&v, value, 16);
    slowStore(rdram, addr, v);
}

// test_native_logic.py: the generated stubs, the functions and the leaves.
#include "native_logic_cases.inc"

bool inLeafCode(uint32_t pc)
{
    for (const LeafEntry &l : kLeaves)
        if (pc >= l.address && pc < l.address + 0x100u)
            return true;
    return false;
}

namespace
{
    // A translated leaf original as its native behaves: no checkpoint of its
    // own (the natives, and so the inline copies, charge none inside).
    template <size_t I>
    void leafAsNative(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        g_inLeaf = true;
        kLeaves[I].original(rdram, ctx, runtime);
        g_inLeaf = false;
    }

    PS2Runtime::RecompiledFunction leafEntry(size_t index)
    {
        static const PS2Runtime::RecompiledFunction entries[] = {&leafAsNative<0>, &leafAsNative<1>, &leafAsNative<2>,
                                                                 &leafAsNative<3>, &leafAsNative<4>, &leafAsNative<5>};
        static_assert(sizeof(entries) / sizeof(entries[0]) == sizeof(kLeaves) / sizeof(kLeaves[0]), "leaf count");
        return entries[index];
    }

    struct Outcome
    {
        R5900Context ctx;
        std::vector<uint64_t> trace;
        uint64_t checkpoints, calls;
    };

    Outcome runOnce(PS2Runtime::RecompiledFunction fn, uint32_t entry, uint32_t end, uint64_t seed, uint8_t *ram)
    {
        Rng rng{seed | 1u};
        Outcome out;
        randomContext(rng, &out.ctx);
        R5900Context *ctx = &out.ctx;
        g_ram = ram;
        g_checkpoints = 0;
        g_calls = 0;
        g_seed = seed;
        g_budget = 50u + seed % 400u;
        g_stop = false;
        g_trace.clear();
        g_clock.m_eeCycle = 0;
        g_clock.m_fastUntil = 0; // every checkpoint takes the slow path (the harness decides)
        g_clock.m_checkpointPending.store(false);
        ctx->pc = entry;
        for (int step = 0; step < 20000 && !g_stop; ++step)
        {
            const uint32_t pc = ctx->pc;
            if (pc == kReturn)
                break;
            if (pc == kYield)
                ctx->pc = g_yieldResume;
            else if (pc >= entry && pc < end)
                fn(ram, ctx, g_runtime);
            else
            {
                // A callee the checkpoint unwound before: the dispatcher runs it.
                bool leaf = false;
                for (const LeafEntry &l : kLeaves)
                    if (l.address == pc)
                    {
                        leafEntry(static_cast<size_t>(&l - kLeaves))(ram, ctx, g_runtime);
                        leaf = true;
                    }
                if (!leaf)
                    mockCallee(ram, ctx, g_runtime);
            }
            g_trace.push_back(mix(0x53544550ull ^ ctx->pc, hashContext(ctx)));
        }
        out.trace = g_trace;
        out.checkpoints = g_checkpoints;
        out.calls = g_calls;
        return out;
    }

    bool isNan(uint32_t bits) { return (bits & 0x7FFFFFFFu) > 0x7F800000u; }

    // Differing 32-bit words; ones where both sides hold a NaN are counted
    // apart (the leaf natives may differ from the originals there only, as
    // their boot self-test allows).
    void diffWords(const uint8_t *a, const uint8_t *b, size_t bytes, size_t &words, size_t &nans, size_t &first)
    {
        for (size_t i = 0; i + 4 <= bytes; i += 4)
        {
            uint32_t x, y;
            std::memcpy(&x, a + i, 4);
            std::memcpy(&y, b + i, 4);
            if (x == y)
                continue;
            if (isNan(x) && isNan(y))
            {
                ++nans;
                continue;
            }
            if (words++ == 0)
                first = i;
        }
    }
}

int main(int argc, char **argv)
{
    const int cases = argc > 1 ? std::atoi(argv[1]) : 100;
    g_pristine = static_cast<uint8_t *>(std::calloc(PS2_RAM_SIZE + 64, 1));
    uint8_t *ramA = static_cast<uint8_t *>(std::calloc(PS2_RAM_SIZE + 64, 1));
    uint8_t *ramB = static_cast<uint8_t *>(std::calloc(PS2_RAM_SIZE + 64, 1));
    EeScheduler::attach(g_runtime, &g_clock);
    for (uint32_t slot = 0; slot < TEST_SLOT_COUNT; ++slot)
        g_ps2RecompiledFunctionTable[slot] = &mockCallee;
    for (const LeafEntry &l : kLeaves)
    {
        const PS2Runtime::RecompiledFunction entry = leafEntry(static_cast<size_t>(&l - kLeaves));
        g_ps2RecompiledFunctionTable[l.slot] = entry;
        xlNoteLeafNative(l.address, entry);
    }
    int failures = 0;
    // Each inline leaf copy on the context (the natives' xlNativeLeafCall)
    // against its translated original, on random operands in the window.
    for (const LeafEntry &l : kLeaves)
    {
        int bad = 0;
        size_t nanOnly = 0;
        for (int c = 0; c < cases * 4; ++c)
        {
            Rng rng{0x1EAF0000ull + static_cast<uint64_t>(c) * 104729u + l.address};
            for (uint32_t i = 0; i < kWindowBytes; i += 4)
            {
                const uint32_t w = guestWord(rng);
                std::memcpy(ramA + kWindow + i, &w, 4);
            }
            std::memcpy(ramB + kWindow, ramA + kWindow, kWindowBytes);
            R5900Context a, b;
            randomContext(rng, &a);
            for (int reg : {4, 5, 6})
                setGpr(&a, reg, kWindow + ((rng.next() % (kWindowBytes - 0x200u)) & ~((rng.next() & 1u) ? 15u : 3u)),
                       a.r[reg][1]);
            a.pc = l.address;
            b = a;
            g_ram = ramA;
            leafEntry(static_cast<size_t>(&l - kLeaves))(ramA, &a, g_runtime);
            bool ran = false;
            switch (l.address)
            {
            case 0x2D5E98u: ran = xlLeafOnContext<XL_LEAF_MUL_MATRIX>(ramB, &b, g_runtime); break;
            case 0x2D6188u: ran = xlLeafOnContext<XL_LEAF_UNIT_MATRIX>(ramB, &b, g_runtime); break;
            case 0x2D6120u: ran = xlLeafOnContext<XL_LEAF_COPY_MATRIX>(ramB, &b, g_runtime); break;
            case 0x2DC5A0u: ran = xlLeafOnContext<XL_LEAF_FABSF>(ramB, &b, g_runtime); break;
            case 0x2B5638u: ran = xlLeafOnContext<XL_LEAF_VEC_ROT_ALIGNED>(ramB, &b, g_runtime); break;
            case 0x2B5570u: ran = xlLeafOnContext<XL_LEAF_VEC3_MUL4_ALIGNED>(ramB, &b, g_runtime); break;
            }
            a.branch_pc = b.branch_pc = 0;
            size_t ctxWords = 0, ctxNans = 0, ctxFirst = 0, memWords = 0, memNans = 0, memFirst = 0;
            diffWords(reinterpret_cast<const uint8_t *>(&a), reinterpret_cast<const uint8_t *>(&b), sizeof(a), ctxWords,
                      ctxNans, ctxFirst);
            diffWords(ramA + kWindow, ramB + kWindow, kWindowBytes, memWords, memNans, memFirst);
            if (!ran || ctxWords || memWords)
            {
                if (bad++ < 3)
                    std::printf("  leaf 0x%x case %d: ran %d, ctx words %zu (first +0x%zx), memory words %zu\n",
                                l.address, c, ran ? 1 : 0, ctxWords, ctxFirst, memWords);
            }
            else if (ctxNans || memNans)
            {
                ++nanOnly;
            }
        }
        std::printf("leaf 0x%-21x %s: %d cases, %d differ, %zu NaN-only\n", l.address, bad ? "FAIL" : "same", cases * 4,
                    bad, nanOnly);
        failures += bad;
    }
    for (const TestFunction &t : kFunctions)
    {
        size_t nanOnly = 0, steps = 0, calls = 0, checkpoints = 0;
        int bad = 0;
        for (int c = 0; c < cases; ++c)
        {
            const uint64_t seed = 0x5EED0000ull + static_cast<uint64_t>(c) * 7919u + t.entry;
            Rng rng{seed ^ 0xABCDEFull};
            for (uint32_t i = 0; i < kWindowBytes; i += 4)
            {
                const uint32_t w = guestWord(rng);
                std::memcpy(g_pristine + kWindow + i, &w, 4);
            }
            std::memcpy(ramA, g_pristine, PS2_RAM_SIZE);
            std::memcpy(ramB, g_pristine, PS2_RAM_SIZE);
            const Outcome a = runOnce(t.original, t.entry, t.end, seed, ramA);
            const Outcome b = runOnce(t.promoted, t.entry, t.end, seed, ramB);
            steps += a.trace.size();
            calls += a.calls;
            checkpoints += a.checkpoints;
            size_t ctxWords = 0, ctxNans = 0, ctxFirst = 0, memWords = 0, memNans = 0, memFirst = 0;
            R5900Context ca = a.ctx, cb = b.ctx;
            ca.branch_pc = cb.branch_pc = 0;
            diffWords(reinterpret_cast<const uint8_t *>(&ca), reinterpret_cast<const uint8_t *>(&cb), sizeof(ca), ctxWords,
                      ctxNans, ctxFirst);
            diffWords(ramA, ramB, PS2_RAM_SIZE, memWords, memNans, memFirst);
            const bool traceSame = a.trace == b.trace;
            if (ctxWords || memWords || (!traceSame && !(ctxNans || memNans)))
            {
                if (bad++ < 3)
                {
                    size_t at = 0;
                    while (at < a.trace.size() && at < b.trace.size() && a.trace[at] == b.trace[at])
                        ++at;
                    std::printf("  %s case %d: ctx words %zu (first +0x%zx), memory words %zu (first 0x%zx), "
                                "trace %s at %zu of %zu/%zu\n",
                                t.name, c, ctxWords, ctxFirst, memWords, memFirst, traceSame ? "same" : "differs", at,
                                a.trace.size(), b.trace.size());
                }
            }
            else if (ctxNans || memNans)
            {
                ++nanOnly;
            }
        }
        std::printf("%-28s %s: %d cases, %d differ, %zu NaN-only; %zu steps, %zu calls, %zu checkpoints\n", t.name,
                    bad ? "FAIL" : "same", cases, bad, nanOnly, steps, calls, checkpoints);
        failures += bad;
    }
    return failures ? 1 : 0;
}
