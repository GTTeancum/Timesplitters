// Host driver for test_sound_native.py: builds against the shared
// ps2_spu2.cpp or the patch_sound_native.py copy (SPU2_SOURCE) and plays the
// same seeded script on both: random ADPCM sounds (one-shot, looped, custom
// loop points, every shift and filter), random pitch, ADSR, fixed and swept
// voice and master volumes, key on/off, envelope writes, voice mix masks,
// sound RAM rewritten by DMA, programmed IO and directly (as the HLE libsd
// copy does), IRQ addresses, and mix calls of random length. After every
// mix it prints a hash of the output and every register the model reads
// back; the two builds' outputs must be identical.
//
//   sound_native_test <steps> [seed]
//   sound_native_test <voices> <seed> bench   (a steady load, for timing)
//
// TS_SOUND_TEST_PCM=<file> (test_sound_hw.py): the output goes to that file
// (raw stereo s16) instead of into the printed hashes, which then cover the
// read-back registers only, so a build whose samples may differ can be held
// to exact registers and compared on its sound separately.
//
// stderr: the time spent in mix (and the cache counters in the Xbox copy).

#include SPU2_SOURCE

#include <chrono>
#include <cinttypes>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>
#include <vector>

namespace
{
    constexpr uint32_t kRam = 2u * 1024u * 1024u;

    // TS_SOUND_TEST_PCM: where the output goes instead of the hashes.
    FILE *pcmFile()
    {
        static FILE *file = [] {
            const char *path = std::getenv("TS_SOUND_TEST_PCM");
            return path && *path ? std::fopen(path, "wb") : nullptr;
        }();
        return file;
    }

    uint32_t entry(unsigned id, unsigned voice, unsigned core)
    {
        return (id << 8) | (voice << 1) | core;
    }

    struct Fnv
    {
        uint64_t h = 1469598103934665603ull;
        void add(const void *data, size_t bytes)
        {
            const uint8_t *p = static_cast<const uint8_t *>(data);
            for (size_t i = 0; i < bytes; ++i)
                h = (h ^ p[i]) * 1099511628211ull;
        }
        void add32(uint32_t v) { add(&v, 4); }
    };

    void addOutput(Fnv &state, const int16_t *samples, size_t count)
    {
        if (FILE *file = pcmFile())
            std::fwrite(samples, 2u, count, file);
        else
            state.add(samples, count * 2u);
    }

    struct Script
    {
        std::mt19937 rng;
        std::vector<uint8_t> ram = std::vector<uint8_t>(kRam, 0u);
        Spu2 spu{ram.data()};
        std::vector<uint32_t> starts; // sound start addresses
        std::vector<uint32_t> loops;  // a block inside each sound

        explicit Script(uint32_t seed) : rng(seed) {}

        uint32_t next(uint32_t n) { return std::uniform_int_distribution<uint32_t>(0, n - 1u)(rng); }

        void randomBlock(uint8_t *b, uint8_t flags)
        {
            // Mostly the shifts and filters real sounds use, sometimes any.
            const unsigned shift = next(8) ? next(13) : next(16);
            const unsigned filter = next(8) ? next(5) : next(8);
            b[0] = static_cast<uint8_t>(filter << 4 | shift);
            b[1] = flags;
            const unsigned style = next(4);
            for (unsigned i = 2; i < 16; ++i)
                b[i] = style == 0 ? 0u : style == 1 ? static_cast<uint8_t>(next(3) * 0x11u) : static_cast<uint8_t>(next(256));
        }

        // A sound of `blocks` blocks at `address`: a one-shot ends with flag
        // 1, a looped one with 3 and a loop start (4) somewhere.
        void writeSound(uint8_t *at, uint32_t blocks, bool looped)
        {
            const uint32_t loopStart = next(blocks);
            for (uint32_t i = 0; i < blocks; ++i)
            {
                uint8_t flags = 0;
                if (looped && i == loopStart)
                    flags |= 4u;
                if (i + 1u == blocks)
                    flags |= looped ? 3u : 1u;
                if (!next(64))
                    flags = static_cast<uint8_t>(next(8));
                randomBlock(at + i * 16u, flags);
            }
        }

        void setup()
        {
            for (uint32_t i = 0; i < kRam; i += 16u)
                randomBlock(&ram[i], static_cast<uint8_t>(next(16) ? 0u : next(8)));
            uint32_t address = 0x5000u;
            while (address < kRam - 0x4000u)
            {
                const uint32_t blocks = 1u + next(next(4) ? 40u : 400u);
                writeSound(&ram[address], blocks, next(3) != 0u);
                starts.push_back(address);
                loops.push_back(address + next(blocks) * 16u);
                address += blocks * 16u + (next(4) ? 0u : 16u * next(64));
            }
            for (unsigned c = 0; c < 2; ++c)
            {
                spu.setParam(entry(0x09, 0, c), 0x3FFFu);
                spu.setParam(entry(0x0A, 0, c), 0x3FFFu);
            }
        }

        uint16_t volume()
        {
            switch (next(6))
            {
            case 0: return 0;
            case 1: return static_cast<uint16_t>(0x8000u | next(0x8000u)); // sweep: any mode and rate
            case 2: return static_cast<uint16_t>(0x8000u | (next(8) << 12) | (0x40u + next(0x40u)));
            default: return static_cast<uint16_t>(next(0x8000u));
            }
        }

        uint16_t pitch()
        {
            switch (next(8))
            {
            case 0: return 0;
            case 1: return 0x1000u;
            case 2: return static_cast<uint16_t>(0x3000u + next(0x5000u)); // at and past the 0x3FFF cap
            case 3: return static_cast<uint16_t>(next(0x10000u));
            default: return static_cast<uint16_t>(0x400u + next(0x1800u));
            }
        }

        uint16_t adsr()
        {
            // Mostly rates a game picks (slow sustain, moderate release),
            // sometimes any value (fast attack, instant, never).
            if (!next(3))
                return static_cast<uint16_t>(next(0x10000u));
            return static_cast<uint16_t>(next(0x10000u) | (next(2) ? 0x1FC0u : 0u));
        }

        void voiceSetup(unsigned c, unsigned v)
        {
            spu.setParam(entry(0, v, c), volume());
            spu.setParam(entry(1, v, c), volume());
            spu.setParam(entry(2, v, c), pitch());
            spu.setParam(entry(3, v, c), adsr());
            spu.setParam(entry(4, v, c), adsr());
            const unsigned sound = next(static_cast<uint32_t>(starts.size()));
            spu.setAddr(entry(0x20, v, c), next(16) ? starts[sound] : next(kRam) & ~15u);
            if (!next(4))
                spu.setAddr(entry(0x21, v, c), next(8) ? loops[sound] : next(kRam) & ~15u);
        }

        // A sound effect as a game plays it: a pitch near the sound's rate,
        // quick attack, slow sustain, moderate release, fixed volumes.
        void voiceSetupTypical(unsigned c, unsigned v)
        {
            spu.setParam(entry(0, v, c), static_cast<uint16_t>(0x800u + next(0x3000u)));
            spu.setParam(entry(1, v, c), static_cast<uint16_t>(0x800u + next(0x3000u)));
            spu.setParam(entry(2, v, c), static_cast<uint16_t>(0x600u + next(0xC00u)));
            spu.setParam(entry(3, v, c), static_cast<uint16_t>(0x000Fu | (next(8) << 8)));
            spu.setParam(entry(4, v, c), static_cast<uint16_t>(0x1FC0u | (4u + next(8))));
            spu.setAddr(entry(0x20, v, c), starts[next(static_cast<uint32_t>(starts.size()))]);
        }

        void step(Fnv &state, double &mixSeconds)
        {
            const unsigned ops = 1u + next(6);
            for (unsigned o = 0; o < ops; ++o)
            {
                const unsigned c = next(2), v = next(24);
                switch (next(20))
                {
                case 0: case 1: case 2: case 3:
                {
                    // Key on a few voices.
                    uint32_t mask = 0;
                    for (unsigned k = 1u + next(4); k; --k)
                    {
                        const unsigned voice = next(24);
                        voiceSetup(c, voice);
                        mask |= 1u << voice;
                    }
                    if (next(2))
                        spu.setSwitch(entry(0x15, 0, c), mask);
                    else
                    {
                        spu.writeRegister(c * 0x400u + 0x1A0u, static_cast<uint16_t>(mask));
                        spu.writeRegister(c * 0x400u + 0x1A2u, static_cast<uint16_t>(mask >> 16));
                    }
                    break;
                }
                case 4: case 5:
                    spu.setSwitch(entry(0x16, 0, c), (1u << v) | (next(2) ? next(1u << 24) : 0u));
                    break;
                case 6: spu.setParam(entry(0, v, c), volume()); break;
                case 7: spu.setParam(entry(1, v, c), volume()); break;
                case 8: spu.setParam(entry(2, v, c), pitch()); break;
                case 9: spu.setParam(entry(next(2) ? 3 : 4, v, c), adsr()); break;
                case 10: spu.setParam(entry(5, v, c), next(2) ? 0x7FFFu : next(0x8000u)); break;
                case 11:
                    spu.setSwitch(entry(next(2) ? 0x18 : 0x1A, 0, c), next(4) ? 0xFFFFFFu : next(1u << 24));
                    break;
                case 12: spu.setParam(entry(next(2) ? 0x09 : 0x0A, 0, c), next(3) ? 0x3FFFu : volume()); break;
                case 13:
                {
                    // DMA over a sound (new bytes for blocks a voice may be playing).
                    const uint32_t at = starts[next(static_cast<uint32_t>(starts.size()))];
                    std::vector<uint8_t> data(16u * (1u + next(64)));
                    for (size_t b = 0; b < data.size(); b += 16)
                        randomBlock(&data[b], static_cast<uint8_t>(next(4) ? 0u : next(8)));
                    spu.writeRegister(c * 0x400u + 0x1A8u, static_cast<uint16_t>((at / 2u) >> 16));
                    spu.writeRegister(c * 0x400u + 0x1AAu, static_cast<uint16_t>(at / 2u));
                    spu.dmaWrite(c, data.data(), static_cast<uint32_t>(data.size()));
                    break;
                }
                case 14:
                {
                    // Direct writes, as the HLE libsd transfer does: one byte or a whole block.
                    const uint32_t at = next(2) ? starts[next(static_cast<uint32_t>(starts.size()))] + 16u * next(8)
                                                : next(kRam) & ~15u;
                    if (next(2))
                        ram[(at + next(16)) & (kRam - 1u)] ^= static_cast<uint8_t>(1u + next(255));
                    else
                        randomBlock(&ram[at], static_cast<uint8_t>(next(4) ? 0u : next(8)));
                    break;
                }
                case 15:
                {
                    // Programmed IO: a few halfwords.
                    const uint32_t at = next(kRam) & ~1u;
                    spu.writeRegister(c * 0x400u + 0x1A8u, static_cast<uint16_t>((at / 2u) >> 16));
                    spu.writeRegister(c * 0x400u + 0x1AAu, static_cast<uint16_t>(at / 2u));
                    for (unsigned k = 1u + next(8); k; --k)
                        spu.writeRegister(c * 0x400u + 0x1ACu, static_cast<uint16_t>(next(0x10000u)));
                    break;
                }
                case 16:
                {
                    // IRQ on a sound's block, enabled or not.
                    const uint32_t at = starts[next(static_cast<uint32_t>(starts.size()))] + 16u * next(4);
                    spu.writeRegister(c * 0x400u + 0x19Cu, static_cast<uint16_t>((at / 2u) >> 16));
                    spu.writeRegister(c * 0x400u + 0x19Eu, static_cast<uint16_t>(at / 2u));
                    spu.writeRegister(c * 0x400u + 0x19Au, next(2) ? 0x40u : 0u);
                    break;
                }
                case 17: spu.setAddr(entry(0x21, v, c), loops[next(static_cast<uint32_t>(loops.size()))]); break;
                case 18: spu.writeRegister(c * 0x400u + 0x340u + 2u * next(2), 0); break; // clear END flags
                default: break;
                }
            }

            const unsigned frames = next(4) ? 1u + next(1100) : 1u + next(8);
            std::vector<int16_t> out(frames * 2u);
            const auto start = std::chrono::steady_clock::now();
            spu.mix(out.data(), frames);
            mixSeconds += std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count();
            addOutput(state, out.data(), out.size());

            for (unsigned c = 0; c < 2; ++c)
            {
                for (unsigned v = 0; v < 24; ++v)
                {
                    state.add32(spu.getParam(entry(5, v, c)));
                    state.add32(spu.getParam(entry(6, v, c)));
                    state.add32(spu.getParam(entry(7, v, c)));
                    state.add32(spu.getAddr(entry(0x21, v, c)));
                    state.add32(spu.getAddr(entry(0x22, v, c)));
                }
                state.add32(spu.getSwitch(entry(0x17, 0, c)));
                state.add32(spu.getParam(entry(0x11, 0, c)));
                state.add32(spu.getParam(entry(0x12, 0, c)));
            }
            uint16_t irqInfo = 0;
            spu.readRegister(0x7C2u, irqInfo);
            state.add32(irqInfo);
            state.add32(spu.takeIrq() ? 1u : 0u);
        }
    };
}

int main(int argc, char **argv)
{
    const unsigned steps = argc > 1 ? static_cast<unsigned>(std::strtoul(argv[1], nullptr, 10)) : 2000u;
    const uint32_t seed = argc > 2 ? static_cast<uint32_t>(std::strtoul(argv[2], nullptr, 10)) : 1u;
    Script script(seed);
    script.setup();
    double mixSeconds = 0.0;
    if (argc > 3 && std::strcmp(argv[3], "bench") == 0)
    {
        // A steady load like a 4-player match: `steps` voices held on
        // typical sounds and rates, mixed in the Xbox's 1,024-frame buffers
        // for ten seconds, one voice keyed on or off again every buffer.
        const unsigned perCore[2] = {std::min((steps + 1u) / 2u, 24u), std::min(steps / 2u, 24u)};
        for (unsigned c = 0; c < 2; ++c)
        {
            for (unsigned v = 0; v < perCore[c]; ++v)
                script.voiceSetupTypical(c, v);
            script.spu.setSwitch(entry(0x15, 0, c), (1u << perCore[c]) - 1u);
        }
        // Timed as a whole (one buffer takes less than the clock's step on
        // some hosts) and hashed afterwards.
        constexpr unsigned kBuffers = 480u;
        std::vector<int16_t> out(size_t(kBuffers) * 1024u * 2u);
        const auto start = std::chrono::steady_clock::now();
        for (unsigned b = 0; b < kBuffers; ++b)
        {
            const unsigned c = perCore[1] ? script.next(2) : 0u;
            const unsigned v = script.next(perCore[c] ? perCore[c] : 1u);
            if (b % 2u == 0u)
            {
                script.voiceSetupTypical(c, v);
                script.spu.setSwitch(entry(0x15, 0, c), 1u << v);
            }
            else
                script.spu.setSwitch(entry(0x16, 0, c), 1u << v);
            script.spu.mix(out.data() + size_t(b) * 1024u * 2u, 1024u);
        }
        mixSeconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count();
        for (unsigned b = 0; b < kBuffers; ++b)
        {
            Fnv state;
            addOutput(state, out.data() + size_t(b) * 1024u * 2u, 1024u * 2u);
            std::printf("%u %016" PRIx64 "\n", b, state.h);
        }
    }
    else
    {
        for (unsigned s = 0; s < steps; ++s)
        {
            Fnv state;
            script.step(state, mixSeconds);
            std::printf("%u %016" PRIx64 "\n", s, state.h);
        }
    }
#if defined(PLATFORM_XBOX)
    std::fprintf(stderr, "mix %.3f s, voice samples %llu\n", mixSeconds, g_spu2VoiceSamples);
#endif
#if defined(TS_SOUND_NATIVE) && TS_SOUND_NATIVE
    std::fprintf(stderr, "decoded blocks: %llu from the cache, %llu decoded\n", g_spu2DecodedHits, g_spu2DecodedMisses);
#endif
    return 0;
}
