// Xbox sound path (TS_SOUND_NATIVE=1): included at the end of the
// patch_sound_native.py copy of ps2_spu2.cpp, which compiles out the
// original decodeBlock and mix. Output, registers, END flags and IRQs are
// bit-identical to the shared source (src/xbox/test/test_sound_native.py
// compares the two on random voices).
//
// Pre-decoded sound: every ADPCM block a voice plays is decoded to PCM once
// and kept, keyed by its address, its 16 bytes and the filter history it was
// decoded with (the last two samples before it). A block's PCM depends only
// on those, so a hit is the decode's exact result whoever wrote the sound RAM
// (IOP DMA, programmed IO or the HLE libsd copy, none of which have to tell
// the cache), and the loop flags and addresses are still read from the RAM
// block itself. Two ways per set: a looped sound's loop-start block is
// entered with silence the first time and with the loop's end afterwards.
//
// Blocked voices: mix runs one voice at a time over up to 256 output frames
// instead of all voices once per frame. Between steps of the ADSR envelope
// and of the volume sweeps (each counter only adds its rate's increment
// until it reaches 0x8000), the level and volumes are constant: those ticks
// are run in a tight loop that only interpolates, scales and advances the
// pitch counter, and a voice that is silent there (level or both volumes
// 0) only advances its position, block by block. Each step tick, block
// boundary and phase change goes through the original tickVoice. The sums
// are integers, so adding voice by voice gives the frame-by-frame result.
// No SSE: the Pentium III's SSE1 has no packed integers and its floats cannot
// hold the 31-bit products exactly, and MMX would share the x87 registers.

#ifndef TS_SOUND_NATIVE_SETS
#define TS_SOUND_NATIVE_SETS 2048
#endif

#if defined(PLATFORM_XBOX)
// Development counters (cumulative): blocks taken from the cache, and decoded.
unsigned long long g_spu2DecodedHits = 0;
unsigned long long g_spu2DecodedMisses = 0;
#endif

namespace
{
    constexpr uint32_t kDecodedSets = TS_SOUND_NATIVE_SETS;
    static_assert(kDecodedSets && (kDecodedSets & (kDecodedSets - 1u)) == 0u, "TS_SOUND_NATIVE_SETS must be a power of two");

    struct DecodedBlock
    {
        uint32_t tag = 0; // block address | 1; 0 while empty
        int16_t prev1 = 0, prev2 = 0;
        uint8_t adpcm[16]{};
        int16_t pcm[28]{};
    };
    struct DecodedSet
    {
        DecodedBlock way[2];
    };
    // 80 bytes a block: 2,048 sets of two are 320 KB. Shared by every Spu2
    // (the Xbox has one); entries are checked against the instance's RAM.
    DecodedSet g_decoded[kDecodedSets];
    uint8_t g_decodedVictim[kDecodedSets];

    // The Gaussian taps for one phase in the order of the four samples they
    // weigh: one 8-byte load instead of four scattered ones.
    struct GaussTaps
    {
        int16_t t[4];
    };
    struct GaussTable
    {
        GaussTaps phase[256];
    };
    constexpr GaussTable makeGaussTable()
    {
        GaussTable table{};
        for (unsigned i = 0; i < 256; ++i)
            table.phase[i] = {{ps2_spu::kGauss[0x0FF - i], ps2_spu::kGauss[0x1FF - i], ps2_spu::kGauss[0x100 + i],
                               ps2_spu::kGauss[i]}};
        return table;
    }
    constexpr GaussTable kGaussTaps = makeGaussTable();

    // ps2_spu::gaussInterpolate with the reordered table.
    inline int32_t gaussTaps(const int16_t *s, uint32_t i)
    {
        const GaussTaps &g = kGaussTaps.phase[i];
        int32_t out = (g.t[0] * s[0]) >> 15;
        out += (g.t[1] * s[1]) >> 15;
        out += (g.t[2] * s[2]) >> 15;
        out += (g.t[3] * s[3]) >> 15;
        return out;
    }

    constexpr unsigned kForever = ~0u;

    // Ticks an envelope counter can take before the one that steps the level.
    // Between ticks the counter is below 0x8000, and it steps on the tick
    // that reaches it.
    inline unsigned quietTicks(uint32_t counter, uint32_t increment)
    {
        if (increment == 0u)
            return kForever;
        if (counter >= 0x8000u)
            return 0u;
        return (0x8000u - counter + increment - 1u) / increment - 1u;
    }

    inline uint32_t envelopeIncrement(uint32_t rate, bool decreasing, bool exponential, int32_t level)
    {
        const EnvelopeKind kind = decreasing ? kDecrease : (exponential && level >= 0x6000) ? kExponentialHigh : kIncrease;
        return kEnvelopeRates.rates[kind][rate & 0x7Fu].increment;
    }

    // Ticks until the pitch counter moves the position past the block's last
    // sample (the tick that does it included); index is below 28.
    inline unsigned ticksToBlockEnd(unsigned index, uint32_t counter, uint32_t step)
    {
        if (step == 0u)
            return kForever;
        const uint32_t need = (28u - index) * 0x1000u - counter;
        return (need + step - 1u) / step;
    }
}

// Decodes the block at NAX after the last three samples of the previous one,
// or copies it from the cache when it was decoded before from the same bytes
// with the same history.
void Spu2::decodeBlock(Voice &v)
{
    std::copy(v.samples.end() - 3, v.samples.end(), v.samples.begin());
    const uint32_t address = v.nax & kRamMask & ~15u;
    const uint8_t *block = m_ram + address;
    v.blockFlags = block[1];
    v.blockAddr = address;
    checkIrq(address, 16u);
    if ((v.blockFlags & 4u) && !v.customLoop)
        v.lsa = address;

    // The history is always a decoded (16-bit) sample or 0.
    const int16_t prev1 = static_cast<int16_t>(v.prev1), prev2 = static_cast<int16_t>(v.prev2);
    const uint32_t set = (address >> 4) & (kDecodedSets - 1u);
    const uint32_t tag = address | 1u;
    DecodedBlock *ways = g_decoded[set].way;
    for (unsigned w = 0; w < 2; ++w)
    {
        const DecodedBlock &e = ways[w];
        if (e.tag == tag && e.prev1 == prev1 && e.prev2 == prev2 && std::memcmp(e.adpcm, block, 16) == 0)
        {
            std::memcpy(&v.samples[3], e.pcm, sizeof(e.pcm));
            v.prev1 = e.pcm[27];
            v.prev2 = e.pcm[26];
            g_decodedVictim[set] = static_cast<uint8_t>(w ^ 1u);
#if defined(PLATFORM_XBOX)
            ++g_spu2DecodedHits;
#endif
            return;
        }
    }

    DecodedBlock &e = ways[g_decodedVictim[set] & 1u];
    g_decodedVictim[set] ^= 1u;
    e.tag = tag;
    e.prev1 = prev1;
    e.prev2 = prev2;
    std::memcpy(e.adpcm, block, 16);
    const uint8_t header = block[0];
    int shift = header & 0x0F;
    if (shift > 12)
        shift = 9;
    const unsigned filter = std::min<unsigned>((header >> 4) & 7u, 4u);
    for (unsigned i = 0; i < 28; ++i)
    {
        const uint8_t byte = block[2 + i / 2];
        const int32_t nibble = (i & 1u) ? (byte >> 4) : (byte & 0x0F);
        int32_t sample = static_cast<int16_t>(static_cast<uint16_t>(nibble << 12)) >> shift;
        sample += (v.prev1 * kFilter0[filter] + v.prev2 * kFilter1[filter] + 32) >> 6;
        const int16_t s = clamp16(sample);
        v.prev2 = v.prev1;
        v.prev1 = s;
        v.samples[3 + i] = s;
        e.pcm[i] = s;
    }
#if defined(PLATFORM_XBOX)
    ++g_spu2DecodedMisses;
#endif
}

void Spu2::mix(int16_t *out, unsigned frames)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    constexpr unsigned kChunk = 256;
    int32_t dry[2][2][kChunk];
    unsigned long long voiceSamples = 0;

    // Plays voice `index` for frames [0, n) or until it stops, adding its
    // output to dryL/dryR; returns the frames it played.
    auto runVoice = [this](Core &core, unsigned index, Voice &v, int32_t *dryL, int32_t *dryR, unsigned n) -> unsigned
    {
        const uint32_t bit = 1u << index;
        const bool mixL = (core.vmixL & bit) != 0u, mixR = (core.vmixR & bit) != 0u;
        unsigned f = 0;
        while (f < n)
        {
            // One tick exactly as the original mix runs it.
            const Phase before = v.phase;
            v.volL.tick();
            v.volR.tick();
            const int32_t s = tickVoice(core, index, v);
            if (mixL)
                dryL[f] += (s * v.volL.current) >> 15;
            if (mixR)
                dryR[f] += (s * v.volR.current) >> 15;
            ++f;
            if (v.phase == Phase::Off)
            {
                core.playing &= ~bit;
                break;
            }
            // A new phase checks its own end condition on its first tick.
            if (v.phase != before)
                continue;

            // The ticks before the next envelope or sweep step: the phase's
            // end condition was just checked against this level and fails
            // until the level moves.
            uint32_t envRate = 0;
            bool envDecreasing = false, envExponential = false;
            switch (v.phase)
            {
            case Phase::Attack:
                envRate = (v.adsr1 >> 8) & 0x7Fu;
                envExponential = (v.adsr1 & 0x8000u) != 0u;
                break;
            case Phase::Decay:
                envRate = ((v.adsr1 >> 4) & 0x0Fu) << 2;
                envDecreasing = envExponential = true;
                break;
            case Phase::Sustain:
                envRate = (v.adsr2 >> 6) & 0x7Fu;
                envDecreasing = (v.adsr2 & 0x4000u) != 0u;
                envExponential = (v.adsr2 & 0x8000u) != 0u;
                break;
            default: // Release
                envRate = (v.adsr2 & 0x1Fu) << 2;
                envDecreasing = true;
                envExponential = (v.adsr2 & 0x20u) != 0u;
                break;
            }
            const uint32_t envInc = envelopeIncrement(envRate, envDecreasing, envExponential, v.env.level);
            unsigned quiet = std::min(n - f, quietTicks(v.env.counter, envInc));
            uint32_t volLInc = 0, volRInc = 0;
            if (v.volL.reg & 0x8000u)
            {
                volLInc = envelopeIncrement(v.volL.reg & 0x7Fu, (v.volL.reg & 0x2000u) != 0u, (v.volL.reg & 0x4000u) != 0u,
                                            v.volL.sweep.level);
                quiet = std::min(quiet, quietTicks(v.volL.sweep.counter, volLInc));
            }
            if (v.volR.reg & 0x8000u)
            {
                volRInc = envelopeIncrement(v.volR.reg & 0x7Fu, (v.volR.reg & 0x2000u) != 0u, (v.volR.reg & 0x4000u) != 0u,
                                            v.volR.sweep.level);
                quiet = std::min(quiet, quietTicks(v.volR.sweep.counter, volRInc));
            }
            if (quiet == 0u)
                continue;

            const int32_t level = v.env.level;
            const int32_t volL = mixL ? v.volL.current : 0, volR = mixR ? v.volR.current : 0;
            const bool audible = level != 0 && (volL != 0 || volR != 0);
            const uint32_t step = std::min<uint32_t>(v.pitch, 0x3FFFu);
            const int16_t *samples = v.samples.data();
            unsigned done = 0;
            while (done < quiet)
            {
                const unsigned toEnd = ticksToBlockEnd(v.index, v.counter, step);
                const unsigned run = std::min(quiet - done, toEnd);
                if (audible)
                {
                    unsigned position = v.index;
                    uint32_t counter = v.counter;
                    int32_t *l = dryL + f + done, *r = dryR + f + done;
                    for (unsigned t = 0; t < run; ++t)
                    {
                        const int32_t sample = gaussTaps(samples + position, (counter >> 4) & 0xFFu);
                        const int32_t o = static_cast<int16_t>((sample * level) >> 15);
                        l[t] += (o * volL) >> 15;
                        r[t] += (o * volR) >> 15;
                        counter += step;
                        position += counter >> 12;
                        counter &= 0xFFFu;
                    }
                    v.index = position;
                    v.counter = counter;
                }
                else
                {
                    // The position after `run` ticks is the counter's total.
                    const uint32_t total = v.counter + run * step;
                    v.index += total >> 12;
                    v.counter = total & 0xFFFu;
                }
                done += run;
                if (run == toEnd)
                {
                    nextBlock(core, index, v);
                    if (v.phase == Phase::Off)
                        break;
                }
            }
            v.env.counter += done * envInc;
            v.volL.sweep.counter += done * volLInc;
            v.volR.sweep.counter += done * volRInc;
            f += done;
            if (v.phase == Phase::Off)
            {
                core.playing &= ~bit;
                break;
            }
        }
        return f;
    };

    for (unsigned base = 0; base < frames; base += kChunk)
    {
        const unsigned n = std::min(frames - base, kChunk);
        for (unsigned c = 0; c < 2; ++c)
        {
            Core &core = m_cores[c];
            int32_t *dryL = dry[c][0], *dryR = dry[c][1];
            std::fill(dryL, dryL + n, 0);
            std::fill(dryR, dryR + n, 0);
            for (uint32_t playing = core.playing; playing != 0u; playing &= playing - 1u)
            {
                const unsigned i = static_cast<unsigned>(std::countr_zero(playing));
                voiceSamples += runVoice(core, i, core.voices[i], dryL, dryR, n);
            }
        }
        for (unsigned f = 0; f < n; ++f)
        {
            int32_t coreOutL = 0, coreOutR = 0;
            for (unsigned c = 0; c < 2; ++c)
            {
                Core &core = m_cores[c];
                core.mvolL.tick();
                core.mvolR.tick();
                // Core 0's output feeds core 1's input.
                const int32_t inL = clamp16(dry[c][0][f] + coreOutL), inR = clamp16(dry[c][1][f] + coreOutR);
                coreOutL = (inL * core.mvolL.current) >> 15;
                coreOutR = (inR * core.mvolR.current) >> 15;
            }
            out[(base + f) * 2] = clamp16(coreOutL);
            out[(base + f) * 2 + 1] = clamp16(coreOutR);
        }
    }
#if defined(PLATFORM_XBOX)
    g_spu2VoiceSamples += voiceSamples;
#else
    (void)voiceSamples;
#endif
}
